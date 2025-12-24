// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMPONENTASSETFORMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMPONENTASSETFORMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeComponentAssetFormRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeComponentAssetFormRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ComponentName, componentName_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeComponentAssetFormRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ComponentName, componentName_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    DescribeComponentAssetFormRequest() = default ;
    DescribeComponentAssetFormRequest(const DescribeComponentAssetFormRequest &) = default ;
    DescribeComponentAssetFormRequest(DescribeComponentAssetFormRequest &&) = default ;
    DescribeComponentAssetFormRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeComponentAssetFormRequest() = default ;
    DescribeComponentAssetFormRequest& operator=(const DescribeComponentAssetFormRequest &) = default ;
    DescribeComponentAssetFormRequest& operator=(DescribeComponentAssetFormRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->componentName_ == nullptr
        && return this->lang_ == nullptr; };
    // componentName Field Functions 
    bool hasComponentName() const { return this->componentName_ != nullptr;};
    void deleteComponentName() { this->componentName_ = nullptr;};
    inline string componentName() const { DARABONBA_PTR_GET_DEFAULT(componentName_, "") };
    inline DescribeComponentAssetFormRequest& setComponentName(string componentName) { DARABONBA_PTR_SET_VALUE(componentName_, componentName) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeComponentAssetFormRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // The component name.
    // 
    // This parameter is required.
    std::shared_ptr<string> componentName_ = nullptr;
    // The language of the content within the response. Valid values:
    // 
    // *   **zh**: Chinese (default)
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
