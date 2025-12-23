// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPGROUP_HPP_
#define ALIBABACLOUD_MODELS_APPGROUP_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AppGroupOrder.hpp>
#include <alibabacloud/models/Quota.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class AppGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AppGroup& obj) { 
      DARABONBA_PTR_TO_JSON(chargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(domain, domain_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(order, order_);
      DARABONBA_PTR_TO_JSON(quota, quota_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, AppGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(chargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(domain, domain_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(order, order_);
      DARABONBA_PTR_FROM_JSON(quota, quota_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    AppGroup() = default ;
    AppGroup(const AppGroup &) = default ;
    AppGroup(AppGroup &&) = default ;
    AppGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AppGroup() = default ;
    AppGroup& operator=(const AppGroup &) = default ;
    AppGroup& operator=(AppGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chargeType_ == nullptr
        && return this->description_ == nullptr && return this->domain_ == nullptr && return this->name_ == nullptr && return this->order_ == nullptr && return this->quota_ == nullptr
        && return this->resourceGroupId_ == nullptr && return this->type_ == nullptr; };
    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline AppGroup& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AppGroup& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline AppGroup& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AppGroup& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline const AppGroupOrder & order() const { DARABONBA_PTR_GET_CONST(order_, AppGroupOrder) };
    inline AppGroupOrder order() { DARABONBA_PTR_GET(order_, AppGroupOrder) };
    inline AppGroup& setOrder(const AppGroupOrder & order) { DARABONBA_PTR_SET_VALUE(order_, order) };
    inline AppGroup& setOrder(AppGroupOrder && order) { DARABONBA_PTR_SET_RVALUE(order_, order) };


    // quota Field Functions 
    bool hasQuota() const { return this->quota_ != nullptr;};
    void deleteQuota() { this->quota_ = nullptr;};
    inline const Quota & quota() const { DARABONBA_PTR_GET_CONST(quota_, Quota) };
    inline Quota quota() { DARABONBA_PTR_GET(quota_, Quota) };
    inline AppGroup& setQuota(const Quota & quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };
    inline AppGroup& setQuota(Quota && quota) { DARABONBA_PTR_SET_RVALUE(quota_, quota) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline AppGroup& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AppGroup& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> chargeType_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> domain_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<AppGroupOrder> order_ = nullptr;
    std::shared_ptr<Quota> quota_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
