// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGESRESPONSEBODYIMAGESIMAGEDETECTIONOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGESRESPONSEBODYIMAGESIMAGEDETECTIONOPTIONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeImagesResponseBodyImagesImageDetectionOptionsItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeImagesResponseBodyImagesImageDetectionOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImagesResponseBodyImagesImageDetectionOptions& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImagesResponseBodyImagesImageDetectionOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeImagesResponseBodyImagesImageDetectionOptions() = default ;
    DescribeImagesResponseBodyImagesImageDetectionOptions(const DescribeImagesResponseBodyImagesImageDetectionOptions &) = default ;
    DescribeImagesResponseBodyImagesImageDetectionOptions(DescribeImagesResponseBodyImagesImageDetectionOptions &&) = default ;
    DescribeImagesResponseBodyImagesImageDetectionOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImagesResponseBodyImagesImageDetectionOptions() = default ;
    DescribeImagesResponseBodyImagesImageDetectionOptions& operator=(const DescribeImagesResponseBodyImagesImageDetectionOptions &) = default ;
    DescribeImagesResponseBodyImagesImageDetectionOptions& operator=(DescribeImagesResponseBodyImagesImageDetectionOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->items_ != nullptr
        && this->status_ != nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const Models::DescribeImagesResponseBodyImagesImageDetectionOptionsItems & items() const { DARABONBA_PTR_GET_CONST(items_, Models::DescribeImagesResponseBodyImagesImageDetectionOptionsItems) };
    inline Models::DescribeImagesResponseBodyImagesImageDetectionOptionsItems items() { DARABONBA_PTR_GET(items_, Models::DescribeImagesResponseBodyImagesImageDetectionOptionsItems) };
    inline DescribeImagesResponseBodyImagesImageDetectionOptions& setItems(const Models::DescribeImagesResponseBodyImagesImageDetectionOptionsItems & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeImagesResponseBodyImagesImageDetectionOptions& setItems(Models::DescribeImagesResponseBodyImagesImageDetectionOptionsItems && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeImagesResponseBodyImagesImageDetectionOptions& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The check items.
    std::shared_ptr<Models::DescribeImagesResponseBodyImagesImageDetectionOptionsItems> items_ = nullptr;
    // The state of the image check task. Valid values:
    // 
    // *   Processing
    // *   Finished
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
