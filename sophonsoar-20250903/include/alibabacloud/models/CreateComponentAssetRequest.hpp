// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOMPONENTASSETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECOMPONENTASSETREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class ComponentAssetValues : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ComponentAssetValues& obj) { 
        DARABONBA_PTR_TO_JSON(FieldName, fieldName_);
        DARABONBA_PTR_TO_JSON(FieldValue, fieldValue_);
      };
      friend void from_json(const Darabonba::Json& j, ComponentAssetValues& obj) { 
        DARABONBA_PTR_FROM_JSON(FieldName, fieldName_);
        DARABONBA_PTR_FROM_JSON(FieldValue, fieldValue_);
      };
      ComponentAssetValues() = default ;
      ComponentAssetValues(const ComponentAssetValues &) = default ;
      ComponentAssetValues(ComponentAssetValues &&) = default ;
      ComponentAssetValues(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ComponentAssetValues() = default ;
      ComponentAssetValues& operator=(const ComponentAssetValues &) = default ;
      ComponentAssetValues& operator=(ComponentAssetValues &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fieldName_ == nullptr
        && this->fieldValue_ == nullptr; };
      // fieldName Field Functions 
      bool hasFieldName() const { return this->fieldName_ != nullptr;};
      void deleteFieldName() { this->fieldName_ = nullptr;};
      inline string getFieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
      inline ComponentAssetValues& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


      // fieldValue Field Functions 
      bool hasFieldValue() const { return this->fieldValue_ != nullptr;};
      void deleteFieldValue() { this->fieldValue_ = nullptr;};
      inline string getFieldValue() const { DARABONBA_PTR_GET_DEFAULT(fieldValue_, "") };
      inline ComponentAssetValues& setFieldValue(string fieldValue) { DARABONBA_PTR_SET_VALUE(fieldValue_, fieldValue) };


    protected:
      // Field name.
      // 
      // This parameter is required.
      shared_ptr<string> fieldName_ {};
      // Field value.
      // 
      // This parameter is required.
      shared_ptr<string> fieldValue_ {};
    };

    virtual bool empty() const override { return this->componentAssetName_ == nullptr
        && this->componentAssetValues_ == nullptr && this->componentName_ == nullptr && this->lang_ == nullptr && this->roleFor_ == nullptr; };
    // componentAssetName Field Functions 
    bool hasComponentAssetName() const { return this->componentAssetName_ != nullptr;};
    void deleteComponentAssetName() { this->componentAssetName_ = nullptr;};
    inline string getComponentAssetName() const { DARABONBA_PTR_GET_DEFAULT(componentAssetName_, "") };
    inline CreateComponentAssetRequest& setComponentAssetName(string componentAssetName) { DARABONBA_PTR_SET_VALUE(componentAssetName_, componentAssetName) };


    // componentAssetValues Field Functions 
    bool hasComponentAssetValues() const { return this->componentAssetValues_ != nullptr;};
    void deleteComponentAssetValues() { this->componentAssetValues_ = nullptr;};
    inline const vector<CreateComponentAssetRequest::ComponentAssetValues> & getComponentAssetValues() const { DARABONBA_PTR_GET_CONST(componentAssetValues_, vector<CreateComponentAssetRequest::ComponentAssetValues>) };
    inline vector<CreateComponentAssetRequest::ComponentAssetValues> getComponentAssetValues() { DARABONBA_PTR_GET(componentAssetValues_, vector<CreateComponentAssetRequest::ComponentAssetValues>) };
    inline CreateComponentAssetRequest& setComponentAssetValues(const vector<CreateComponentAssetRequest::ComponentAssetValues> & componentAssetValues) { DARABONBA_PTR_SET_VALUE(componentAssetValues_, componentAssetValues) };
    inline CreateComponentAssetRequest& setComponentAssetValues(vector<CreateComponentAssetRequest::ComponentAssetValues> && componentAssetValues) { DARABONBA_PTR_SET_RVALUE(componentAssetValues_, componentAssetValues) };


    // componentName Field Functions 
    bool hasComponentName() const { return this->componentName_ != nullptr;};
    void deleteComponentName() { this->componentName_ = nullptr;};
    inline string getComponentName() const { DARABONBA_PTR_GET_DEFAULT(componentName_, "") };
    inline CreateComponentAssetRequest& setComponentName(string componentName) { DARABONBA_PTR_SET_VALUE(componentName_, componentName) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreateComponentAssetRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline CreateComponentAssetRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


  protected:
    // The name of the asset.
    // 
    // This parameter is required.
    shared_ptr<string> componentAssetName_ {};
    // Configuration information of the asset.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateComponentAssetRequest::ComponentAssetValues>> componentAssetValues_ {};
    // The name of the component.
    // 
    // This parameter is required.
    shared_ptr<string> componentName_ {};
    // The language type for receiving messages. Values:
    // 
    // - **zh** (default): Chinese.
    // - **en**: English.
    shared_ptr<string> lang_ {};
    // Resource directory member account ID.
    shared_ptr<int64_t> roleFor_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20250903
#endif
