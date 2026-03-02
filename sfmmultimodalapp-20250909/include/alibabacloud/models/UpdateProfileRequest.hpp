// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SfmMultiModalApp20250909
{
namespace Models
{
  class UpdateProfileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateProfileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AttributesOperations, attributesOperations_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(UserDefinedId, userDefinedId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateProfileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AttributesOperations, attributesOperations_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(UserDefinedId, userDefinedId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    UpdateProfileRequest() = default ;
    UpdateProfileRequest(const UpdateProfileRequest &) = default ;
    UpdateProfileRequest(UpdateProfileRequest &&) = default ;
    UpdateProfileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateProfileRequest() = default ;
    UpdateProfileRequest& operator=(const UpdateProfileRequest &) = default ;
    UpdateProfileRequest& operator=(UpdateProfileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AttributesOperations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AttributesOperations& obj) { 
        DARABONBA_PTR_TO_JSON(AttributeId, attributeId_);
        DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Op, op_);
      };
      friend void from_json(const Darabonba::Json& j, AttributesOperations& obj) { 
        DARABONBA_PTR_FROM_JSON(AttributeId, attributeId_);
        DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Op, op_);
      };
      AttributesOperations() = default ;
      AttributesOperations(const AttributesOperations &) = default ;
      AttributesOperations(AttributesOperations &&) = default ;
      AttributesOperations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AttributesOperations() = default ;
      AttributesOperations& operator=(const AttributesOperations &) = default ;
      AttributesOperations& operator=(AttributesOperations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->attributeId_ == nullptr
        && this->defaultValue_ == nullptr && this->description_ == nullptr && this->name_ == nullptr && this->op_ == nullptr; };
      // attributeId Field Functions 
      bool hasAttributeId() const { return this->attributeId_ != nullptr;};
      void deleteAttributeId() { this->attributeId_ = nullptr;};
      inline string getAttributeId() const { DARABONBA_PTR_GET_DEFAULT(attributeId_, "") };
      inline AttributesOperations& setAttributeId(string attributeId) { DARABONBA_PTR_SET_VALUE(attributeId_, attributeId) };


      // defaultValue Field Functions 
      bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
      void deleteDefaultValue() { this->defaultValue_ = nullptr;};
      inline string getDefaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
      inline AttributesOperations& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline AttributesOperations& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline AttributesOperations& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // op Field Functions 
      bool hasOp() const { return this->op_ != nullptr;};
      void deleteOp() { this->op_ = nullptr;};
      inline string getOp() const { DARABONBA_PTR_GET_DEFAULT(op_, "") };
      inline AttributesOperations& setOp(string op) { DARABONBA_PTR_SET_VALUE(op_, op) };


    protected:
      shared_ptr<string> attributeId_ {};
      shared_ptr<string> defaultValue_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> op_ {};
    };

    virtual bool empty() const override { return this->appId_ == nullptr
        && this->attributesOperations_ == nullptr && this->description_ == nullptr && this->name_ == nullptr && this->userDefinedId_ == nullptr && this->workspaceId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UpdateProfileRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // attributesOperations Field Functions 
    bool hasAttributesOperations() const { return this->attributesOperations_ != nullptr;};
    void deleteAttributesOperations() { this->attributesOperations_ = nullptr;};
    inline const vector<UpdateProfileRequest::AttributesOperations> & getAttributesOperations() const { DARABONBA_PTR_GET_CONST(attributesOperations_, vector<UpdateProfileRequest::AttributesOperations>) };
    inline vector<UpdateProfileRequest::AttributesOperations> getAttributesOperations() { DARABONBA_PTR_GET(attributesOperations_, vector<UpdateProfileRequest::AttributesOperations>) };
    inline UpdateProfileRequest& setAttributesOperations(const vector<UpdateProfileRequest::AttributesOperations> & attributesOperations) { DARABONBA_PTR_SET_VALUE(attributesOperations_, attributesOperations) };
    inline UpdateProfileRequest& setAttributesOperations(vector<UpdateProfileRequest::AttributesOperations> && attributesOperations) { DARABONBA_PTR_SET_RVALUE(attributesOperations_, attributesOperations) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateProfileRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateProfileRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // userDefinedId Field Functions 
    bool hasUserDefinedId() const { return this->userDefinedId_ != nullptr;};
    void deleteUserDefinedId() { this->userDefinedId_ = nullptr;};
    inline string getUserDefinedId() const { DARABONBA_PTR_GET_DEFAULT(userDefinedId_, "") };
    inline UpdateProfileRequest& setUserDefinedId(string userDefinedId) { DARABONBA_PTR_SET_VALUE(userDefinedId_, userDefinedId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline UpdateProfileRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> appId_ {};
    shared_ptr<vector<UpdateProfileRequest::AttributesOperations>> attributesOperations_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> name_ {};
    // This parameter is required.
    shared_ptr<string> userDefinedId_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SfmMultiModalApp20250909
#endif
