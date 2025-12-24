// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMPONENTASSETSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMPONENTASSETSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeComponentAssetsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeComponentAssetsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ComponentName, componentName_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeComponentAssetsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ComponentName, componentName_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    DescribeComponentAssetsRequest() = default ;
    DescribeComponentAssetsRequest(const DescribeComponentAssetsRequest &) = default ;
    DescribeComponentAssetsRequest(DescribeComponentAssetsRequest &&) = default ;
    DescribeComponentAssetsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeComponentAssetsRequest() = default ;
    DescribeComponentAssetsRequest& operator=(const DescribeComponentAssetsRequest &) = default ;
    DescribeComponentAssetsRequest& operator=(DescribeComponentAssetsRequest &&) = default ;
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
    inline DescribeComponentAssetsRequest& setComponentName(string componentName) { DARABONBA_PTR_SET_VALUE(componentName_, componentName) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeComponentAssetsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // The name of the component.
    // 
    // This parameter is required.
    std::shared_ptr<string> componentName_ = nullptr;
    // The language of the content within the request and response. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
