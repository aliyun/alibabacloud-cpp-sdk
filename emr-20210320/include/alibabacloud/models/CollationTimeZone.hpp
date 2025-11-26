// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COLLATIONTIMEZONE_HPP_
#define ALIBABACLOUD_MODELS_COLLATIONTIMEZONE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class CollationTimeZone : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CollationTimeZone& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentTimeOffset, currentTimeOffset_);
      DARABONBA_PTR_TO_JSON(TimeZone, timeZone_);
    };
    friend void from_json(const Darabonba::Json& j, CollationTimeZone& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentTimeOffset, currentTimeOffset_);
      DARABONBA_PTR_FROM_JSON(TimeZone, timeZone_);
    };
    CollationTimeZone() = default ;
    CollationTimeZone(const CollationTimeZone &) = default ;
    CollationTimeZone(CollationTimeZone &&) = default ;
    CollationTimeZone(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CollationTimeZone() = default ;
    CollationTimeZone& operator=(const CollationTimeZone &) = default ;
    CollationTimeZone& operator=(CollationTimeZone &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentTimeOffset_ == nullptr
        && return this->timeZone_ == nullptr; };
    // currentTimeOffset Field Functions 
    bool hasCurrentTimeOffset() const { return this->currentTimeOffset_ != nullptr;};
    void deleteCurrentTimeOffset() { this->currentTimeOffset_ = nullptr;};
    inline string currentTimeOffset() const { DARABONBA_PTR_GET_DEFAULT(currentTimeOffset_, "") };
    inline CollationTimeZone& setCurrentTimeOffset(string currentTimeOffset) { DARABONBA_PTR_SET_VALUE(currentTimeOffset_, currentTimeOffset) };


    // timeZone Field Functions 
    bool hasTimeZone() const { return this->timeZone_ != nullptr;};
    void deleteTimeZone() { this->timeZone_ = nullptr;};
    inline string timeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
    inline CollationTimeZone& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


  protected:
    std::shared_ptr<string> currentTimeOffset_ = nullptr;
    std::shared_ptr<string> timeZone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
