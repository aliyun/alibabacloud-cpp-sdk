// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODAIDATARESPONSEBODYAIDATAAIDATAITEMDATADATAITEM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODAIDATARESPONSEBODYAIDATAAIDATAITEMDATADATAITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodAIDataResponseBodyAIDataAIDataItemDataDataItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodAIDataResponseBodyAIDataAIDataItemDataDataItem& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodAIDataResponseBodyAIDataAIDataItemDataDataItem& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeVodAIDataResponseBodyAIDataAIDataItemDataDataItem() = default ;
    DescribeVodAIDataResponseBodyAIDataAIDataItemDataDataItem(const DescribeVodAIDataResponseBodyAIDataAIDataItemDataDataItem &) = default ;
    DescribeVodAIDataResponseBodyAIDataAIDataItemDataDataItem(DescribeVodAIDataResponseBodyAIDataAIDataItemDataDataItem &&) = default ;
    DescribeVodAIDataResponseBodyAIDataAIDataItemDataDataItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodAIDataResponseBodyAIDataAIDataItemDataDataItem() = default ;
    DescribeVodAIDataResponseBodyAIDataAIDataItemDataDataItem& operator=(const DescribeVodAIDataResponseBodyAIDataAIDataItemDataDataItem &) = default ;
    DescribeVodAIDataResponseBodyAIDataAIDataItemDataDataItem& operator=(DescribeVodAIDataResponseBodyAIDataAIDataItemDataDataItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->value_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeVodAIDataResponseBodyAIDataAIDataItemDataDataItem& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeVodAIDataResponseBodyAIDataAIDataItemDataDataItem& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The type of video AI. Valid values:
    // 
    // *   **AIVideoCensor**: automated review
    // *   **AIVideoFPShot**: media fingerprinting
    // *   **AIVideoTag**: smart tagging
    std::shared_ptr<string> name_ = nullptr;
    // The processing duration. Unit: seconds.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
