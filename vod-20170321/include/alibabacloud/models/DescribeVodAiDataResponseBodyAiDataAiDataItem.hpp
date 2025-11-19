// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODAIDATARESPONSEBODYAIDATAAIDATAITEM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODAIDATARESPONSEBODYAIDATAAIDATAITEM_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVodAIDataResponseBodyAIDataAIDataItemData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodAIDataResponseBodyAIDataAIDataItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodAIDataResponseBodyAIDataAIDataItem& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodAIDataResponseBodyAIDataAIDataItem& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    DescribeVodAIDataResponseBodyAIDataAIDataItem() = default ;
    DescribeVodAIDataResponseBodyAIDataAIDataItem(const DescribeVodAIDataResponseBodyAIDataAIDataItem &) = default ;
    DescribeVodAIDataResponseBodyAIDataAIDataItem(DescribeVodAIDataResponseBodyAIDataAIDataItem &&) = default ;
    DescribeVodAIDataResponseBodyAIDataAIDataItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodAIDataResponseBodyAIDataAIDataItem() = default ;
    DescribeVodAIDataResponseBodyAIDataAIDataItem& operator=(const DescribeVodAIDataResponseBodyAIDataAIDataItem &) = default ;
    DescribeVodAIDataResponseBodyAIDataAIDataItem& operator=(DescribeVodAIDataResponseBodyAIDataAIDataItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->timeStamp_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const Models::DescribeVodAIDataResponseBodyAIDataAIDataItemData & data() const { DARABONBA_PTR_GET_CONST(data_, Models::DescribeVodAIDataResponseBodyAIDataAIDataItemData) };
    inline Models::DescribeVodAIDataResponseBodyAIDataAIDataItemData data() { DARABONBA_PTR_GET(data_, Models::DescribeVodAIDataResponseBodyAIDataAIDataItemData) };
    inline DescribeVodAIDataResponseBodyAIDataAIDataItem& setData(const Models::DescribeVodAIDataResponseBodyAIDataAIDataItemData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeVodAIDataResponseBodyAIDataAIDataItem& setData(Models::DescribeVodAIDataResponseBodyAIDataAIDataItemData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeVodAIDataResponseBodyAIDataAIDataItem& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    // The statistics on video AI of each type.
    std::shared_ptr<Models::DescribeVodAIDataResponseBodyAIDataAIDataItemData> data_ = nullptr;
    // The timestamp of the returned data. The time follows the ISO 8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format. The time is displayed in UTC.
    std::shared_ptr<string> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
