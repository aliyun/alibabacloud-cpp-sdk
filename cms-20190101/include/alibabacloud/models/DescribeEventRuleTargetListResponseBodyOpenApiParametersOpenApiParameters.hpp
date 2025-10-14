// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTRULETARGETLISTRESPONSEBODYOPENAPIPARAMETERSOPENAPIPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTRULETARGETLISTRESPONSEBODYOPENAPIPARAMETERSOPENAPIPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeEventRuleTargetListResponseBodyOpenApiParametersOpenApiParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventRuleTargetListResponseBodyOpenApiParametersOpenApiParameters& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(Arn, arn_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Product, product_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventRuleTargetListResponseBodyOpenApiParametersOpenApiParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(Arn, arn_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Product, product_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    DescribeEventRuleTargetListResponseBodyOpenApiParametersOpenApiParameters() = default ;
    DescribeEventRuleTargetListResponseBodyOpenApiParametersOpenApiParameters(const DescribeEventRuleTargetListResponseBodyOpenApiParametersOpenApiParameters &) = default ;
    DescribeEventRuleTargetListResponseBodyOpenApiParametersOpenApiParameters(DescribeEventRuleTargetListResponseBodyOpenApiParametersOpenApiParameters &&) = default ;
    DescribeEventRuleTargetListResponseBodyOpenApiParametersOpenApiParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventRuleTargetListResponseBodyOpenApiParametersOpenApiParameters() = default ;
    DescribeEventRuleTargetListResponseBodyOpenApiParametersOpenApiParameters& operator=(const DescribeEventRuleTargetListResponseBodyOpenApiParametersOpenApiParameters &) = default ;
    DescribeEventRuleTargetListResponseBodyOpenApiParametersOpenApiParameters& operator=(DescribeEventRuleTargetListResponseBodyOpenApiParametersOpenApiParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && return this->arn_ == nullptr && return this->id_ == nullptr && return this->product_ == nullptr && return this->region_ == nullptr && return this->role_ == nullptr
        && return this->version_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline DescribeEventRuleTargetListResponseBodyOpenApiParametersOpenApiParameters& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // arn Field Functions 
    bool hasArn() const { return this->arn_ != nullptr;};
    void deleteArn() { this->arn_ = nullptr;};
    inline string arn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
    inline DescribeEventRuleTargetListResponseBodyOpenApiParametersOpenApiParameters& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeEventRuleTargetListResponseBodyOpenApiParametersOpenApiParameters& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string product() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline DescribeEventRuleTargetListResponseBodyOpenApiParametersOpenApiParameters& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeEventRuleTargetListResponseBodyOpenApiParametersOpenApiParameters& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline DescribeEventRuleTargetListResponseBodyOpenApiParametersOpenApiParameters& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DescribeEventRuleTargetListResponseBodyOpenApiParametersOpenApiParameters& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The name of the API operation.
    std::shared_ptr<string> action_ = nullptr;
    // The ARN of the API operation. 
    // 
    // Format: `arn:acs:${Service}:${Region}:${Account}:${ResourceType}/${ResourceId}`. Fields: 
    // 
    // - Service: the code of an Alibaba Cloud service
    // - Region: the region ID
    // - Account: the ID of an Alibaba Cloud account
    // - ResourceType: the resource type
    // - ResourceId: the resource ID The ARN of the Log Service Logstore. 
    // 
    // Format: `arn:acs:${Service}:${Region}:${Account}:${ResourceType}/${ResourceId}`. Fields:
    // - Service: the code of an Alibaba Cloud service
    // - Region: the region ID
    // - Account: the ID of an Alibaba Cloud account
    // - ResourceType: the resource type
    // - ResourceId: the resource ID
    std::shared_ptr<string> arn_ = nullptr;
    // The ID of the recipient.
    std::shared_ptr<string> id_ = nullptr;
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
