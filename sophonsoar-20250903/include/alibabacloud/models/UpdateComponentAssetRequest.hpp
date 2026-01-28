// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECOMPONENTASSETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECOMPONENTASSETREQUEST_HPP_
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
  class UpdateComponentAssetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateComponentAssetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ComponentAssetName, componentAssetName_);
      DARABONBA_PTR_TO_JSON(ComponentAssetUuid, componentAssetUuid_);
      DARABONBA_PTR_TO_JSON(ComponentAssetValues, componentAssetValues_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateComponentAssetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ComponentAssetName, componentAssetName_);
      DARABONBA_PTR_FROM_JSON(ComponentAssetUuid, componentAssetUuid_);
      DARABONBA_PTR_FROM_JSON(ComponentAssetValues, componentAssetValues_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
    };
    UpdateComponentAssetRequest() = default ;
    UpdateComponentAssetRequest(const UpdateComponentAssetRequest &) = default ;
    UpdateComponentAssetRequest(UpdateComponentAssetRequest &&) = default ;
    UpdateComponentAssetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateComponentAssetRequest() = default ;
    UpdateComponentAssetRequest& operator=(const UpdateComponentAssetRequest &) = default ;
    UpdateComponentAssetRequest& operator=(UpdateComponentAssetRequest &&) = default ;
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
      shared_ptr<string> fieldName_ {};
      // Field value.
      shared_ptr<string> fieldValue_ {};
    };

    virtual bool empty() const override { return this->componentAssetName_ == nullptr
        && this->componentAssetUuid_ == nullptr && this->componentAssetValues_ == nullptr && this->lang_ == nullptr && this->roleFor_ == nullptr; };
    // componentAssetName Field Functions 
    bool hasComponentAssetName() const { return this->componentAssetName_ != nullptr;};
    void deleteComponentAssetName() { this->componentAssetName_ = nullptr;};
    inline string getComponentAssetName() const { DARABONBA_PTR_GET_DEFAULT(componentAssetName_, "") };
    inline UpdateComponentAssetRequest& setComponentAssetName(string componentAssetName) { DARABONBA_PTR_SET_VALUE(componentAssetName_, componentAssetName) };


    // componentAssetUuid Field Functions 
    bool hasComponentAssetUuid() const { return this->componentAssetUuid_ != nullptr;};
    void deleteComponentAssetUuid() { this->componentAssetUuid_ = nullptr;};
    inline string getComponentAssetUuid() const { DARABONBA_PTR_GET_DEFAULT(componentAssetUuid_, "") };
    inline UpdateComponentAssetRequest& setComponentAssetUuid(string componentAssetUuid) { DARABONBA_PTR_SET_VALUE(componentAssetUuid_, componentAssetUuid) };


    // componentAssetValues Field Functions 
    bool hasComponentAssetValues() const { return this->componentAssetValues_ != nullptr;};
    void deleteComponentAssetValues() { this->componentAssetValues_ = nullptr;};
    inline const vector<UpdateComponentAssetRequest::ComponentAssetValues> & getComponentAssetValues() const { DARABONBA_PTR_GET_CONST(componentAssetValues_, vector<UpdateComponentAssetRequest::ComponentAssetValues>) };
    inline vector<UpdateComponentAssetRequest::ComponentAssetValues> getComponentAssetValues() { DARABONBA_PTR_GET(componentAssetValues_, vector<UpdateComponentAssetRequest::ComponentAssetValues>) };
    inline UpdateComponentAssetRequest& setComponentAssetValues(const vector<UpdateComponentAssetRequest::ComponentAssetValues> & componentAssetValues) { DARABONBA_PTR_SET_VALUE(componentAssetValues_, componentAssetValues) };
    inline UpdateComponentAssetRequest& setComponentAssetValues(vector<UpdateComponentAssetRequest::ComponentAssetValues> && componentAssetValues) { DARABONBA_PTR_SET_RVALUE(componentAssetValues_, componentAssetValues) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateComponentAssetRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline UpdateComponentAssetRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


  protected:
    // Asset name.
    shared_ptr<string> componentAssetName_ {};
    // Asset UUID.
    // 
    // This parameter is required.
    shared_ptr<string> componentAssetUuid_ {};
    // Configuration information of the asset.
    shared_ptr<vector<UpdateComponentAssetRequest::ComponentAssetValues>> componentAssetValues_ {};
    // The language type for the request and response. Values:
    // 
    // - **zh** (default): Chinese.
    // 
    // - **en**: English.
    shared_ptr<string> lang_ {};
    // Resource directory member account ID.
    shared_ptr<int64_t> roleFor_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20250903
#endif
