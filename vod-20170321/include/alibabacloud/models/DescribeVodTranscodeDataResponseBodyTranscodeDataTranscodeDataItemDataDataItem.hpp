// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODTRANSCODEDATARESPONSEBODYTRANSCODEDATATRANSCODEDATAITEMDATADATAITEM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODTRANSCODEDATARESPONSEBODYTRANSCODEDATATRANSCODEDATAITEMDATADATAITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItemDataDataItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItemDataDataItem& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItemDataDataItem& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItemDataDataItem() = default ;
    DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItemDataDataItem(const DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItemDataDataItem &) = default ;
    DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItemDataDataItem(DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItemDataDataItem &&) = default ;
    DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItemDataDataItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItemDataDataItem() = default ;
    DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItemDataDataItem& operator=(const DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItemDataDataItem &) = default ;
    DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItemDataDataItem& operator=(DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItemDataDataItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->value_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItemDataDataItem& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItemDataDataItem& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The transcoding specification. Valid values:
    // 
    // *   **Audio**: audio transcoding
    // *   **Segmentation**: container format conversion
    // *   **H264.LD, H264.SD, H264.HD, H264.2K, H264.4K, and more**
    std::shared_ptr<string> name_ = nullptr;
    // The transcoding duration. Unit: seconds.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
