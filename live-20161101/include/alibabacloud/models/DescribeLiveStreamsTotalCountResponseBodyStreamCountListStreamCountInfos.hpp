// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMSTOTALCOUNTRESPONSEBODYSTREAMCOUNTLISTSTREAMCOUNTINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMSTOTALCOUNTRESPONSEBODYSTREAMCOUNTLISTSTREAMCOUNTINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamsTotalCountResponseBodyStreamCountListStreamCountInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamsTotalCountResponseBodyStreamCountListStreamCountInfos& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamsTotalCountResponseBodyStreamCountListStreamCountInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
    };
    DescribeLiveStreamsTotalCountResponseBodyStreamCountListStreamCountInfos() = default ;
    DescribeLiveStreamsTotalCountResponseBodyStreamCountListStreamCountInfos(const DescribeLiveStreamsTotalCountResponseBodyStreamCountListStreamCountInfos &) = default ;
    DescribeLiveStreamsTotalCountResponseBodyStreamCountListStreamCountInfos(DescribeLiveStreamsTotalCountResponseBodyStreamCountListStreamCountInfos &&) = default ;
    DescribeLiveStreamsTotalCountResponseBodyStreamCountListStreamCountInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamsTotalCountResponseBodyStreamCountListStreamCountInfos() = default ;
    DescribeLiveStreamsTotalCountResponseBodyStreamCountListStreamCountInfos& operator=(const DescribeLiveStreamsTotalCountResponseBodyStreamCountListStreamCountInfos &) = default ;
    DescribeLiveStreamsTotalCountResponseBodyStreamCountListStreamCountInfos& operator=(DescribeLiveStreamsTotalCountResponseBodyStreamCountListStreamCountInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->timestamp_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeLiveStreamsTotalCountResponseBodyStreamCountListStreamCountInfos& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline string timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
    inline DescribeLiveStreamsTotalCountResponseBodyStreamCountListStreamCountInfos& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    // The total number of live streams.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The timestamp.
    std::shared_ptr<string> timestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
