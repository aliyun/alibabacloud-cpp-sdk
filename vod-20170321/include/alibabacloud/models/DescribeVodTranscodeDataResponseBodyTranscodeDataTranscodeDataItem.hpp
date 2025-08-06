// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODTRANSCODEDATARESPONSEBODYTRANSCODEDATATRANSCODEDATAITEM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODTRANSCODEDATARESPONSEBODYTRANSCODEDATATRANSCODEDATAITEM_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItemData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItem& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItem& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItem() = default ;
    DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItem(const DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItem &) = default ;
    DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItem(DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItem &&) = default ;
    DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItem() = default ;
    DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItem& operator=(const DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItem &) = default ;
    DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItem& operator=(DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->timeStamp_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const Models::DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItemData & data() const { DARABONBA_PTR_GET_CONST(data_, Models::DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItemData) };
    inline Models::DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItemData data() { DARABONBA_PTR_GET(data_, Models::DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItemData) };
    inline DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItem& setData(const Models::DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItemData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItem& setData(Models::DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItemData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItem& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    // The statistics on transcoding of different specifications.
    std::shared_ptr<Models::DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItemData> data_ = nullptr;
    // The timestamp of the returned data. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
