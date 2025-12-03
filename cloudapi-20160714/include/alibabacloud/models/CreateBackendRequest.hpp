// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBACKENDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEBACKENDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateBackendRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class CreateBackendRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBackendRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackendName, backendName_);
      DARABONBA_PTR_TO_JSON(BackendType, backendType_);
      DARABONBA_PTR_TO_JSON(CreateEventBridgeServiceLinkedRole, createEventBridgeServiceLinkedRole_);
      DARABONBA_PTR_TO_JSON(CreateSlr, createSlr_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBackendRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackendName, backendName_);
      DARABONBA_PTR_FROM_JSON(BackendType, backendType_);
      DARABONBA_PTR_FROM_JSON(CreateEventBridgeServiceLinkedRole, createEventBridgeServiceLinkedRole_);
      DARABONBA_PTR_FROM_JSON(CreateSlr, createSlr_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CreateBackendRequest() = default ;
    CreateBackendRequest(const CreateBackendRequest &) = default ;
    CreateBackendRequest(CreateBackendRequest &&) = default ;
    CreateBackendRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBackendRequest() = default ;
    CreateBackendRequest& operator=(const CreateBackendRequest &) = default ;
    CreateBackendRequest& operator=(CreateBackendRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backendName_ == nullptr
        && return this->backendType_ == nullptr && return this->createEventBridgeServiceLinkedRole_ == nullptr && return this->createSlr_ == nullptr && return this->description_ == nullptr && return this->securityToken_ == nullptr
        && return this->tag_ == nullptr; };
    // backendName Field Functions 
    bool hasBackendName() const { return this->backendName_ != nullptr;};
    void deleteBackendName() { this->backendName_ = nullptr;};
    inline string backendName() const { DARABONBA_PTR_GET_DEFAULT(backendName_, "") };
    inline CreateBackendRequest& setBackendName(string backendName) { DARABONBA_PTR_SET_VALUE(backendName_, backendName) };


    // backendType Field Functions 
    bool hasBackendType() const { return this->backendType_ != nullptr;};
    void deleteBackendType() { this->backendType_ = nullptr;};
    inline string backendType() const { DARABONBA_PTR_GET_DEFAULT(backendType_, "") };
    inline CreateBackendRequest& setBackendType(string backendType) { DARABONBA_PTR_SET_VALUE(backendType_, backendType) };


    // createEventBridgeServiceLinkedRole Field Functions 
    bool hasCreateEventBridgeServiceLinkedRole() const { return this->createEventBridgeServiceLinkedRole_ != nullptr;};
    void deleteCreateEventBridgeServiceLinkedRole() { this->createEventBridgeServiceLinkedRole_ = nullptr;};
    inline bool createEventBridgeServiceLinkedRole() const { DARABONBA_PTR_GET_DEFAULT(createEventBridgeServiceLinkedRole_, false) };
    inline CreateBackendRequest& setCreateEventBridgeServiceLinkedRole(bool createEventBridgeServiceLinkedRole) { DARABONBA_PTR_SET_VALUE(createEventBridgeServiceLinkedRole_, createEventBridgeServiceLinkedRole) };


    // createSlr Field Functions 
    bool hasCreateSlr() const { return this->createSlr_ != nullptr;};
    void deleteCreateSlr() { this->createSlr_ = nullptr;};
    inline bool createSlr() const { DARABONBA_PTR_GET_DEFAULT(createSlr_, false) };
    inline CreateBackendRequest& setCreateSlr(bool createSlr) { DARABONBA_PTR_SET_VALUE(createSlr_, createSlr) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateBackendRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline CreateBackendRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateBackendRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateBackendRequestTag>) };
    inline vector<CreateBackendRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateBackendRequestTag>) };
    inline CreateBackendRequest& setTag(const vector<CreateBackendRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateBackendRequest& setTag(vector<CreateBackendRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The name of the backend service.
    // 
    // This parameter is required.
    std::shared_ptr<string> backendName_ = nullptr;
    // The type of the backend service.
    // 
    // This parameter is required.
    std::shared_ptr<string> backendType_ = nullptr;
    // Specifies to create a EventBridge service-linked role.
    std::shared_ptr<bool> createEventBridgeServiceLinkedRole_ = nullptr;
    // Specifies to create a service-linked role.
    std::shared_ptr<bool> createSlr_ = nullptr;
    // The description.
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
    // The tag of objects that match the rule. You can specify multiple tags.
    std::shared_ptr<vector<CreateBackendRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
