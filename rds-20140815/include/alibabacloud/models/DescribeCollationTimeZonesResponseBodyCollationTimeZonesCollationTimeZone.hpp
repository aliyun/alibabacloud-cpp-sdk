// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOLLATIONTIMEZONESRESPONSEBODYCOLLATIONTIMEZONESCOLLATIONTIMEZONE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOLLATIONTIMEZONESRESPONSEBODYCOLLATIONTIMEZONESCOLLATIONTIMEZONE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeCollationTimeZonesResponseBodyCollationTimeZonesCollationTimeZone : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCollationTimeZonesResponseBodyCollationTimeZonesCollationTimeZone& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(StandardTimeOffset, standardTimeOffset_);
      DARABONBA_PTR_TO_JSON(TimeZone, timeZone_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCollationTimeZonesResponseBodyCollationTimeZonesCollationTimeZone& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(StandardTimeOffset, standardTimeOffset_);
      DARABONBA_PTR_FROM_JSON(TimeZone, timeZone_);
    };
    DescribeCollationTimeZonesResponseBodyCollationTimeZonesCollationTimeZone() = default ;
    DescribeCollationTimeZonesResponseBodyCollationTimeZonesCollationTimeZone(const DescribeCollationTimeZonesResponseBodyCollationTimeZonesCollationTimeZone &) = default ;
    DescribeCollationTimeZonesResponseBodyCollationTimeZonesCollationTimeZone(DescribeCollationTimeZonesResponseBodyCollationTimeZonesCollationTimeZone &&) = default ;
    DescribeCollationTimeZonesResponseBodyCollationTimeZonesCollationTimeZone(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCollationTimeZonesResponseBodyCollationTimeZonesCollationTimeZone() = default ;
    DescribeCollationTimeZonesResponseBodyCollationTimeZonesCollationTimeZone& operator=(const DescribeCollationTimeZonesResponseBodyCollationTimeZonesCollationTimeZone &) = default ;
    DescribeCollationTimeZonesResponseBodyCollationTimeZonesCollationTimeZone& operator=(DescribeCollationTimeZonesResponseBodyCollationTimeZonesCollationTimeZone &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->standardTimeOffset_ == nullptr && return this->timeZone_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeCollationTimeZonesResponseBodyCollationTimeZonesCollationTimeZone& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // standardTimeOffset Field Functions 
    bool hasStandardTimeOffset() const { return this->standardTimeOffset_ != nullptr;};
    void deleteStandardTimeOffset() { this->standardTimeOffset_ = nullptr;};
    inline string standardTimeOffset() const { DARABONBA_PTR_GET_DEFAULT(standardTimeOffset_, "") };
    inline DescribeCollationTimeZonesResponseBodyCollationTimeZonesCollationTimeZone& setStandardTimeOffset(string standardTimeOffset) { DARABONBA_PTR_SET_VALUE(standardTimeOffset_, standardTimeOffset) };


    // timeZone Field Functions 
    bool hasTimeZone() const { return this->timeZone_ != nullptr;};
    void deleteTimeZone() { this->timeZone_ = nullptr;};
    inline string timeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
    inline DescribeCollationTimeZonesResponseBodyCollationTimeZonesCollationTimeZone& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


  protected:
    // The description.
    std::shared_ptr<string> description_ = nullptr;
    // The offset of the UTC time. The offset is in the following format: (UTC+*HH:mm*).
    std::shared_ptr<string> standardTimeOffset_ = nullptr;
    // The time zone.
    std::shared_ptr<string> timeZone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
