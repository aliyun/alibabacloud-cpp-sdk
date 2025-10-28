// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEXPRESSCONNECTROUTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEEXPRESSCONNECTROUTERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateExpressConnectRouterRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ExpressConnectRouter20230901
{
namespace Models
{
  class CreateExpressConnectRouterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateExpressConnectRouterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlibabaSideAsn, alibabaSideAsn_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, CreateExpressConnectRouterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlibabaSideAsn, alibabaSideAsn_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    CreateExpressConnectRouterRequest() = default ;
    CreateExpressConnectRouterRequest(const CreateExpressConnectRouterRequest &) = default ;
    CreateExpressConnectRouterRequest(CreateExpressConnectRouterRequest &&) = default ;
    CreateExpressConnectRouterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateExpressConnectRouterRequest() = default ;
    CreateExpressConnectRouterRequest& operator=(const CreateExpressConnectRouterRequest &) = default ;
    CreateExpressConnectRouterRequest& operator=(CreateExpressConnectRouterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alibabaSideAsn_ == nullptr
        && return this->clientToken_ == nullptr && return this->description_ == nullptr && return this->dryRun_ == nullptr && return this->name_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->tag_ == nullptr && return this->version_ == nullptr; };
    // alibabaSideAsn Field Functions 
    bool hasAlibabaSideAsn() const { return this->alibabaSideAsn_ != nullptr;};
    void deleteAlibabaSideAsn() { this->alibabaSideAsn_ = nullptr;};
    inline int64_t alibabaSideAsn() const { DARABONBA_PTR_GET_DEFAULT(alibabaSideAsn_, 0L) };
    inline CreateExpressConnectRouterRequest& setAlibabaSideAsn(int64_t alibabaSideAsn) { DARABONBA_PTR_SET_VALUE(alibabaSideAsn_, alibabaSideAsn) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateExpressConnectRouterRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateExpressConnectRouterRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateExpressConnectRouterRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateExpressConnectRouterRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateExpressConnectRouterRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateExpressConnectRouterRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateExpressConnectRouterRequestTag>) };
    inline vector<CreateExpressConnectRouterRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateExpressConnectRouterRequestTag>) };
    inline CreateExpressConnectRouterRequest& setTag(const vector<CreateExpressConnectRouterRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateExpressConnectRouterRequest& setTag(vector<CreateExpressConnectRouterRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline CreateExpressConnectRouterRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The autonomous system number (ASN) of the ECR. Valid values: 45104, 64512 to 65534, and 4200000000 to 4294967294. Default value: 45104. The value 65025 is reserved by Alibaba Cloud.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> alibabaSideAsn_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The description of the ECR.
    // 
    // >  The description can be empty or 0 to 256 characters in length and cannot start with http:// or https://.
    std::shared_ptr<string> description_ = nullptr;
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run.
    // *   **false** (default): performs a dry run and performs the actual request.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The name of the ECR.
    // 
    // >  The name must be 0 to 128 characters in length, and cannot start with http:// or https://.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the resource group to which the ECR belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The information about the tags.
    // 
    // You can specify at most 20 tags in each call.
    std::shared_ptr<vector<CreateExpressConnectRouterRequestTag>> tag_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ExpressConnectRouter20230901
#endif
