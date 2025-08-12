// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTEVENTRULETARGETSREQUESTOPENAPIPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_PUTEVENTRULETARGETSREQUESTOPENAPIPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutEventRuleTargetsRequestOpenApiParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutEventRuleTargetsRequestOpenApiParameters& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(Arn, arn_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(JsonParams, jsonParams_);
      DARABONBA_PTR_TO_JSON(Product, product_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, PutEventRuleTargetsRequestOpenApiParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(Arn, arn_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(JsonParams, jsonParams_);
      DARABONBA_PTR_FROM_JSON(Product, product_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    PutEventRuleTargetsRequestOpenApiParameters() = default ;
    PutEventRuleTargetsRequestOpenApiParameters(const PutEventRuleTargetsRequestOpenApiParameters &) = default ;
    PutEventRuleTargetsRequestOpenApiParameters(PutEventRuleTargetsRequestOpenApiParameters &&) = default ;
    PutEventRuleTargetsRequestOpenApiParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutEventRuleTargetsRequestOpenApiParameters() = default ;
    PutEventRuleTargetsRequestOpenApiParameters& operator=(const PutEventRuleTargetsRequestOpenApiParameters &) = default ;
    PutEventRuleTargetsRequestOpenApiParameters& operator=(PutEventRuleTargetsRequestOpenApiParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->action_ != nullptr
        && this->arn_ != nullptr && this->id_ != nullptr && this->jsonParams_ != nullptr && this->product_ != nullptr && this->region_ != nullptr
        && this->role_ != nullptr && this->version_ != nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline PutEventRuleTargetsRequestOpenApiParameters& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // arn Field Functions 
    bool hasArn() const { return this->arn_ != nullptr;};
    void deleteArn() { this->arn_ = nullptr;};
    inline string arn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
    inline PutEventRuleTargetsRequestOpenApiParameters& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline PutEventRuleTargetsRequestOpenApiParameters& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // jsonParams Field Functions 
    bool hasJsonParams() const { return this->jsonParams_ != nullptr;};
    void deleteJsonParams() { this->jsonParams_ = nullptr;};
    inline string jsonParams() const { DARABONBA_PTR_GET_DEFAULT(jsonParams_, "") };
    inline PutEventRuleTargetsRequestOpenApiParameters& setJsonParams(string jsonParams) { DARABONBA_PTR_SET_VALUE(jsonParams_, jsonParams) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string product() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline PutEventRuleTargetsRequestOpenApiParameters& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline PutEventRuleTargetsRequestOpenApiParameters& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline PutEventRuleTargetsRequestOpenApiParameters& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline PutEventRuleTargetsRequestOpenApiParameters& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The API name.
    std::shared_ptr<string> action_ = nullptr;
    // The Alibaba Cloud Resource Name (ARN) of the resource. Valid values of N: 1 to 5. Format: `arn:acs:${Service}:${Region}:${Account}:${ResourceType}/${ResourceId}`. Fields:
    // 
    // *   Service: the code of a cloud service
    // *   Region: the region ID
    // *   Account: the ID of an Alibaba Cloud account
    // *   ResourceType: the resource type
    // *   ResourceId: the resource ID
    std::shared_ptr<string> arn_ = nullptr;
    // The ID of the recipient that receives alert notifications sent by an API callback.
    std::shared_ptr<string> id_ = nullptr;
    // The parameters of the alert callback. Specify the parameters in the JSON format.
    std::shared_ptr<string> jsonParams_ = nullptr;
    // The ID of the cloud service to which the API operation belongs.
    std::shared_ptr<string> product_ = nullptr;
    // The region where the resource resides.
    std::shared_ptr<string> region_ = nullptr;
    // The name of the role.
    std::shared_ptr<string> role_ = nullptr;
    // The version of the API.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
