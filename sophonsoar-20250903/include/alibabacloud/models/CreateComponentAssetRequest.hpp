// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOMPONENTASSETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECOMPONENTASSETREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateComponentAssetRequestComponentAssetValues.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20250903
{
namespace Models
{
  class CreateComponentAssetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateComponentAssetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ComponentAssetName, componentAssetName_);
      DARABONBA_PTR_TO_JSON(ComponentAssetValues, componentAssetValues_);
      DARABONBA_PTR_TO_JSON(ComponentName, componentName_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
    };
    friend void from_json(const Darabonba::Json& j, CreateComponentAssetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ComponentAssetName, componentAssetName_);
      DARABONBA_PTR_FROM_JSON(ComponentAssetValues, componentAssetValues_);
      DARABONBA_PTR_FROM_JSON(ComponentName, componentName_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
    };
    CreateComponentAssetRequest() = default ;
    CreateComponentAssetRequest(const CreateComponentAssetRequest &) = default ;
    CreateComponentAssetRequest(CreateComponentAssetRequest &&) = default ;
    CreateComponentAssetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateComponentAssetRequest() = default ;
    CreateComponentAssetRequest& operator=(const CreateComponentAssetRequest &) = default ;
    CreateComponentAssetRequest& operator=(CreateComponentAssetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->componentAssetName_ == nullptr
        && return this->componentAssetValues_ == nullptr && return this->componentName_ == nullptr && return this->lang_ == nullptr && return this->roleFor_ == nullptr; };
    // componentAssetName Field Functions 
    bool hasComponentAssetName() const { return this->componentAssetName_ != nullptr;};
    void deleteComponentAssetName() { this->componentAssetName_ = nullptr;};
    inline string componentAssetName() const { DARABONBA_PTR_GET_DEFAULT(componentAssetName_, "") };
    inline CreateComponentAssetRequest& setComponentAssetName(string componentAssetName) { DARABONBA_PTR_SET_VALUE(componentAssetName_, componentAssetName) };


    // componentAssetValues Field Functions 
    bool hasComponentAssetValues() const { return this->componentAssetValues_ != nullptr;};
    void deleteComponentAssetValues() { this->componentAssetValues_ = nullptr;};
    inline const vector<CreateComponentAssetRequestComponentAssetValues> & componentAssetValues() const { DARABONBA_PTR_GET_CONST(componentAssetValues_, vector<CreateComponentAssetRequestComponentAssetValues>) };
    inline vector<CreateComponentAssetRequestComponentAssetValues> componentAssetValues() { DARABONBA_PTR_GET(componentAssetValues_, vector<CreateComponentAssetRequestComponentAssetValues>) };
    inline CreateComponentAssetRequest& setComponentAssetValues(const vector<CreateComponentAssetRequestComponentAssetValues> & componentAssetValues) { DARABONBA_PTR_SET_VALUE(componentAssetValues_, componentAssetValues) };
    inline CreateComponentAssetRequest& setComponentAssetValues(vector<CreateComponentAssetRequestComponentAssetValues> && componentAssetValues) { DARABONBA_PTR_SET_RVALUE(componentAssetValues_, componentAssetValues) };


    // componentName Field Functions 
    bool hasComponentName() const { return this->componentName_ != nullptr;};
    void deleteComponentName() { this->componentName_ = nullptr;};
    inline string componentName() const { DARABONBA_PTR_GET_DEFAULT(componentName_, "") };
    inline CreateComponentAssetRequest& setComponentName(string componentName) { DARABONBA_PTR_SET_VALUE(componentName_, componentName) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreateComponentAssetRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t roleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline CreateComponentAssetRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


  protected:
    // The name of the asset.
    // 
    // This parameter is required.
    std::shared_ptr<string> componentAssetName_ = nullptr;
    // Configuration information of the asset.
    // 
    // This parameter is required.
    std::shared_ptr<vector<CreateComponentAssetRequestComponentAssetValues>> componentAssetValues_ = nullptr;
    // The name of the component.
    // 
    // This parameter is required.
    std::shared_ptr<string> componentName_ = nullptr;
    // The language type for receiving messages. Values:
    // 
    // - **zh** (default): Chinese.
    // - **en**: English.
    std::shared_ptr<string> lang_ = nullptr;
    // Resource directory member account ID.
    std::shared_ptr<int64_t> roleFor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20250903
#endif
