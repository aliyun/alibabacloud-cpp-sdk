// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROFILESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROFILESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SfmMultiModalApp20250909
{
namespace Models
{
  class UpdateProfileShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateProfileShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AttributesOperations, attributesOperationsShrink_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(UserDefinedId, userDefinedId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateProfileShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AttributesOperations, attributesOperationsShrink_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(UserDefinedId, userDefinedId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    UpdateProfileShrinkRequest() = default ;
    UpdateProfileShrinkRequest(const UpdateProfileShrinkRequest &) = default ;
    UpdateProfileShrinkRequest(UpdateProfileShrinkRequest &&) = default ;
    UpdateProfileShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateProfileShrinkRequest() = default ;
    UpdateProfileShrinkRequest& operator=(const UpdateProfileShrinkRequest &) = default ;
    UpdateProfileShrinkRequest& operator=(UpdateProfileShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->attributesOperationsShrink_ == nullptr && this->description_ == nullptr && this->name_ == nullptr && this->userDefinedId_ == nullptr && this->workspaceId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UpdateProfileShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // attributesOperationsShrink Field Functions 
    bool hasAttributesOperationsShrink() const { return this->attributesOperationsShrink_ != nullptr;};
    void deleteAttributesOperationsShrink() { this->attributesOperationsShrink_ = nullptr;};
    inline string getAttributesOperationsShrink() const { DARABONBA_PTR_GET_DEFAULT(attributesOperationsShrink_, "") };
    inline UpdateProfileShrinkRequest& setAttributesOperationsShrink(string attributesOperationsShrink) { DARABONBA_PTR_SET_VALUE(attributesOperationsShrink_, attributesOperationsShrink) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateProfileShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateProfileShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // userDefinedId Field Functions 
    bool hasUserDefinedId() const { return this->userDefinedId_ != nullptr;};
    void deleteUserDefinedId() { this->userDefinedId_ = nullptr;};
    inline string getUserDefinedId() const { DARABONBA_PTR_GET_DEFAULT(userDefinedId_, "") };
    inline UpdateProfileShrinkRequest& setUserDefinedId(string userDefinedId) { DARABONBA_PTR_SET_VALUE(userDefinedId_, userDefinedId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline UpdateProfileShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> appId_ {};
    shared_ptr<string> attributesOperationsShrink_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> userDefinedId_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SfmMultiModalApp20250909
#endif
