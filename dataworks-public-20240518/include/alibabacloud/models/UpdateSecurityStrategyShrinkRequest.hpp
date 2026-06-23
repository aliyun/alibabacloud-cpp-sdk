// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESECURITYSTRATEGYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESECURITYSTRATEGYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateSecurityStrategyShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSecurityStrategyShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Content, contentShrink_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Workspaces, workspacesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSecurityStrategyShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Content, contentShrink_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Workspaces, workspacesShrink_);
    };
    UpdateSecurityStrategyShrinkRequest() = default ;
    UpdateSecurityStrategyShrinkRequest(const UpdateSecurityStrategyShrinkRequest &) = default ;
    UpdateSecurityStrategyShrinkRequest(UpdateSecurityStrategyShrinkRequest &&) = default ;
    UpdateSecurityStrategyShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSecurityStrategyShrinkRequest() = default ;
    UpdateSecurityStrategyShrinkRequest& operator=(const UpdateSecurityStrategyShrinkRequest &) = default ;
    UpdateSecurityStrategyShrinkRequest& operator=(UpdateSecurityStrategyShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->contentShrink_ == nullptr && this->description_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->workspacesShrink_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateSecurityStrategyShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // contentShrink Field Functions 
    bool hasContentShrink() const { return this->contentShrink_ != nullptr;};
    void deleteContentShrink() { this->contentShrink_ = nullptr;};
    inline string getContentShrink() const { DARABONBA_PTR_GET_DEFAULT(contentShrink_, "") };
    inline UpdateSecurityStrategyShrinkRequest& setContentShrink(string contentShrink) { DARABONBA_PTR_SET_VALUE(contentShrink_, contentShrink) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateSecurityStrategyShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateSecurityStrategyShrinkRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateSecurityStrategyShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // workspacesShrink Field Functions 
    bool hasWorkspacesShrink() const { return this->workspacesShrink_ != nullptr;};
    void deleteWorkspacesShrink() { this->workspacesShrink_ = nullptr;};
    inline string getWorkspacesShrink() const { DARABONBA_PTR_GET_DEFAULT(workspacesShrink_, "") };
    inline UpdateSecurityStrategyShrinkRequest& setWorkspacesShrink(string workspacesShrink) { DARABONBA_PTR_SET_VALUE(workspacesShrink_, workspacesShrink) };


  protected:
    // A client token to ensure request idempotence.
    shared_ptr<string> clientToken_ {};
    // The policy content, which is constrained by the `SecurityStrategySchema`.
    // 
    // This parameter is required.
    shared_ptr<string> contentShrink_ {};
    // **The policy description.**
    shared_ptr<string> description_ {};
    // **The policy ID.**
    // 
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
    // **The policy name.**
    shared_ptr<string> name_ {};
    // **A list of associated workspace IDs.**
    shared_ptr<string> workspacesShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
