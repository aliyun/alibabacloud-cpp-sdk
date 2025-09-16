// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateInstanceRequestComponents.hpp>
#include <alibabacloud/models/CreateInstanceRequestOrder.hpp>
#include <alibabacloud/models/CreateInstanceRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class CreateInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(chargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(components, components_);
      DARABONBA_PTR_TO_JSON(order, order_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(chargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(components, components_);
      DARABONBA_PTR_FROM_JSON(order, order_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
    };
    CreateInstanceRequest() = default ;
    CreateInstanceRequest(const CreateInstanceRequest &) = default ;
    CreateInstanceRequest(CreateInstanceRequest &&) = default ;
    CreateInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceRequest() = default ;
    CreateInstanceRequest& operator=(const CreateInstanceRequest &) = default ;
    CreateInstanceRequest& operator=(CreateInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->chargeType_ != nullptr
        && this->components_ != nullptr && this->order_ != nullptr && this->resourceGroupId_ != nullptr && this->tags_ != nullptr; };
    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline CreateInstanceRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // components Field Functions 
    bool hasComponents() const { return this->components_ != nullptr;};
    void deleteComponents() { this->components_ = nullptr;};
    inline const vector<CreateInstanceRequestComponents> & components() const { DARABONBA_PTR_GET_CONST(components_, vector<CreateInstanceRequestComponents>) };
    inline vector<CreateInstanceRequestComponents> components() { DARABONBA_PTR_GET(components_, vector<CreateInstanceRequestComponents>) };
    inline CreateInstanceRequest& setComponents(const vector<CreateInstanceRequestComponents> & components) { DARABONBA_PTR_SET_VALUE(components_, components) };
    inline CreateInstanceRequest& setComponents(vector<CreateInstanceRequestComponents> && components) { DARABONBA_PTR_SET_RVALUE(components_, components) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline const CreateInstanceRequestOrder & order() const { DARABONBA_PTR_GET_CONST(order_, CreateInstanceRequestOrder) };
    inline CreateInstanceRequestOrder order() { DARABONBA_PTR_GET(order_, CreateInstanceRequestOrder) };
    inline CreateInstanceRequest& setOrder(const CreateInstanceRequestOrder & order) { DARABONBA_PTR_SET_VALUE(order_, order) };
    inline CreateInstanceRequest& setOrder(CreateInstanceRequestOrder && order) { DARABONBA_PTR_SET_RVALUE(order_, order) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateInstanceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateInstanceRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateInstanceRequestTags>) };
    inline vector<CreateInstanceRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<CreateInstanceRequestTags>) };
    inline CreateInstanceRequest& setTags(const vector<CreateInstanceRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateInstanceRequest& setTags(vector<CreateInstanceRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The billing method of the instance. Valid values: PREPAY: subscription. If you set this parameter to PREPAY, make sure that your Alibaba Cloud account supports balance payment or credit card payment. Otherwise, the system returns the InvalidPayMethod error message. If you set this parameter to PREPAY, you must also specify paymentInfo. POSTPAY: pay-as-you-go. This billing method is not supported.
    std::shared_ptr<string> chargeType_ = nullptr;
    // The information about the instance specification.
    std::shared_ptr<vector<CreateInstanceRequestComponents>> components_ = nullptr;
    // The billing information.
    std::shared_ptr<CreateInstanceRequestOrder> order_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<vector<CreateInstanceRequestTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
