// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERESOURCEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERESOURCEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateResourceGroupRequestTag.hpp>
#include <alibabacloud/models/UserVpc.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class CreateResourceGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateResourceGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ComputingResourceProvider, computingResourceProvider_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(UserVpc, userVpc_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, CreateResourceGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ComputingResourceProvider, computingResourceProvider_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(UserVpc, userVpc_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    CreateResourceGroupRequest() = default ;
    CreateResourceGroupRequest(const CreateResourceGroupRequest &) = default ;
    CreateResourceGroupRequest(CreateResourceGroupRequest &&) = default ;
    CreateResourceGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateResourceGroupRequest() = default ;
    CreateResourceGroupRequest& operator=(const CreateResourceGroupRequest &) = default ;
    CreateResourceGroupRequest& operator=(CreateResourceGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->computingResourceProvider_ == nullptr
        && return this->description_ == nullptr && return this->name_ == nullptr && return this->resourceType_ == nullptr && return this->tag_ == nullptr && return this->userVpc_ == nullptr
        && return this->version_ == nullptr; };
    // computingResourceProvider Field Functions 
    bool hasComputingResourceProvider() const { return this->computingResourceProvider_ != nullptr;};
    void deleteComputingResourceProvider() { this->computingResourceProvider_ = nullptr;};
    inline string computingResourceProvider() const { DARABONBA_PTR_GET_DEFAULT(computingResourceProvider_, "") };
    inline CreateResourceGroupRequest& setComputingResourceProvider(string computingResourceProvider) { DARABONBA_PTR_SET_VALUE(computingResourceProvider_, computingResourceProvider) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateResourceGroupRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateResourceGroupRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline CreateResourceGroupRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateResourceGroupRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateResourceGroupRequestTag>) };
    inline vector<CreateResourceGroupRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateResourceGroupRequestTag>) };
    inline CreateResourceGroupRequest& setTag(const vector<CreateResourceGroupRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateResourceGroupRequest& setTag(vector<CreateResourceGroupRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // userVpc Field Functions 
    bool hasUserVpc() const { return this->userVpc_ != nullptr;};
    void deleteUserVpc() { this->userVpc_ = nullptr;};
    inline const UserVpc & userVpc() const { DARABONBA_PTR_GET_CONST(userVpc_, UserVpc) };
    inline UserVpc userVpc() { DARABONBA_PTR_GET(userVpc_, UserVpc) };
    inline CreateResourceGroupRequest& setUserVpc(const UserVpc & userVpc) { DARABONBA_PTR_SET_VALUE(userVpc_, userVpc) };
    inline CreateResourceGroupRequest& setUserVpc(UserVpc && userVpc) { DARABONBA_PTR_SET_RVALUE(userVpc_, userVpc) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline CreateResourceGroupRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<string> computingResourceProvider_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> resourceType_ = nullptr;
    std::shared_ptr<vector<CreateResourceGroupRequestTag>> tag_ = nullptr;
    std::shared_ptr<UserVpc> userVpc_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
