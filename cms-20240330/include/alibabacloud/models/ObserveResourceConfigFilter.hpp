// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OBSERVERESOURCECONFIGFILTER_HPP_
#define ALIBABACLOUD_MODELS_OBSERVERESOURCECONFIGFILTER_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryAlertRulesEntityDomainFilter.hpp>
#include <alibabacloud/models/QueryAlertRulesEntityTypeFilter.hpp>
#include <alibabacloud/models/QueryAlertRulesNamespaceFilter.hpp>
#include <alibabacloud/models/QueryAlertRulesProductCategoryFilter.hpp>
#include <alibabacloud/models/QueryAlertRulesRelationTypeFilter.hpp>
#include <alibabacloud/models/QueryAlertRulesResourcesFilter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ObserveResourceConfigFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ObserveResourceConfigFilter& obj) { 
      DARABONBA_PTR_TO_JSON(entityDomain, entityDomain_);
      DARABONBA_PTR_TO_JSON(entityType, entityType_);
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(productCategory, productCategory_);
      DARABONBA_PTR_TO_JSON(relationType, relationType_);
      DARABONBA_PTR_TO_JSON(resources, resources_);
    };
    friend void from_json(const Darabonba::Json& j, ObserveResourceConfigFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(entityDomain, entityDomain_);
      DARABONBA_PTR_FROM_JSON(entityType, entityType_);
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(productCategory, productCategory_);
      DARABONBA_PTR_FROM_JSON(relationType, relationType_);
      DARABONBA_PTR_FROM_JSON(resources, resources_);
    };
    ObserveResourceConfigFilter() = default ;
    ObserveResourceConfigFilter(const ObserveResourceConfigFilter &) = default ;
    ObserveResourceConfigFilter(ObserveResourceConfigFilter &&) = default ;
    ObserveResourceConfigFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ObserveResourceConfigFilter() = default ;
    ObserveResourceConfigFilter& operator=(const ObserveResourceConfigFilter &) = default ;
    ObserveResourceConfigFilter& operator=(ObserveResourceConfigFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->entityDomain_ == nullptr
        && this->entityType_ == nullptr && this->namespace_ == nullptr && this->productCategory_ == nullptr && this->relationType_ == nullptr && this->resources_ == nullptr; };
    // entityDomain Field Functions 
    bool hasEntityDomain() const { return this->entityDomain_ != nullptr;};
    void deleteEntityDomain() { this->entityDomain_ = nullptr;};
    inline const QueryAlertRulesEntityDomainFilter & getEntityDomain() const { DARABONBA_PTR_GET_CONST(entityDomain_, QueryAlertRulesEntityDomainFilter) };
    inline QueryAlertRulesEntityDomainFilter getEntityDomain() { DARABONBA_PTR_GET(entityDomain_, QueryAlertRulesEntityDomainFilter) };
    inline ObserveResourceConfigFilter& setEntityDomain(const QueryAlertRulesEntityDomainFilter & entityDomain) { DARABONBA_PTR_SET_VALUE(entityDomain_, entityDomain) };
    inline ObserveResourceConfigFilter& setEntityDomain(QueryAlertRulesEntityDomainFilter && entityDomain) { DARABONBA_PTR_SET_RVALUE(entityDomain_, entityDomain) };


    // entityType Field Functions 
    bool hasEntityType() const { return this->entityType_ != nullptr;};
    void deleteEntityType() { this->entityType_ = nullptr;};
    inline const QueryAlertRulesEntityTypeFilter & getEntityType() const { DARABONBA_PTR_GET_CONST(entityType_, QueryAlertRulesEntityTypeFilter) };
    inline QueryAlertRulesEntityTypeFilter getEntityType() { DARABONBA_PTR_GET(entityType_, QueryAlertRulesEntityTypeFilter) };
    inline ObserveResourceConfigFilter& setEntityType(const QueryAlertRulesEntityTypeFilter & entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };
    inline ObserveResourceConfigFilter& setEntityType(QueryAlertRulesEntityTypeFilter && entityType) { DARABONBA_PTR_SET_RVALUE(entityType_, entityType) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline const QueryAlertRulesNamespaceFilter & getNamespace() const { DARABONBA_PTR_GET_CONST(namespace_, QueryAlertRulesNamespaceFilter) };
    inline QueryAlertRulesNamespaceFilter getNamespace() { DARABONBA_PTR_GET(namespace_, QueryAlertRulesNamespaceFilter) };
    inline ObserveResourceConfigFilter& setNamespace(const QueryAlertRulesNamespaceFilter & _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };
    inline ObserveResourceConfigFilter& setNamespace(QueryAlertRulesNamespaceFilter && _namespace) { DARABONBA_PTR_SET_RVALUE(namespace_, _namespace) };


    // productCategory Field Functions 
    bool hasProductCategory() const { return this->productCategory_ != nullptr;};
    void deleteProductCategory() { this->productCategory_ = nullptr;};
    inline const QueryAlertRulesProductCategoryFilter & getProductCategory() const { DARABONBA_PTR_GET_CONST(productCategory_, QueryAlertRulesProductCategoryFilter) };
    inline QueryAlertRulesProductCategoryFilter getProductCategory() { DARABONBA_PTR_GET(productCategory_, QueryAlertRulesProductCategoryFilter) };
    inline ObserveResourceConfigFilter& setProductCategory(const QueryAlertRulesProductCategoryFilter & productCategory) { DARABONBA_PTR_SET_VALUE(productCategory_, productCategory) };
    inline ObserveResourceConfigFilter& setProductCategory(QueryAlertRulesProductCategoryFilter && productCategory) { DARABONBA_PTR_SET_RVALUE(productCategory_, productCategory) };


    // relationType Field Functions 
    bool hasRelationType() const { return this->relationType_ != nullptr;};
    void deleteRelationType() { this->relationType_ = nullptr;};
    inline const QueryAlertRulesRelationTypeFilter & getRelationType() const { DARABONBA_PTR_GET_CONST(relationType_, QueryAlertRulesRelationTypeFilter) };
    inline QueryAlertRulesRelationTypeFilter getRelationType() { DARABONBA_PTR_GET(relationType_, QueryAlertRulesRelationTypeFilter) };
    inline ObserveResourceConfigFilter& setRelationType(const QueryAlertRulesRelationTypeFilter & relationType) { DARABONBA_PTR_SET_VALUE(relationType_, relationType) };
    inline ObserveResourceConfigFilter& setRelationType(QueryAlertRulesRelationTypeFilter && relationType) { DARABONBA_PTR_SET_RVALUE(relationType_, relationType) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const QueryAlertRulesResourcesFilter & getResources() const { DARABONBA_PTR_GET_CONST(resources_, QueryAlertRulesResourcesFilter) };
    inline QueryAlertRulesResourcesFilter getResources() { DARABONBA_PTR_GET(resources_, QueryAlertRulesResourcesFilter) };
    inline ObserveResourceConfigFilter& setResources(const QueryAlertRulesResourcesFilter & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline ObserveResourceConfigFilter& setResources(QueryAlertRulesResourcesFilter && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


  protected:
    shared_ptr<QueryAlertRulesEntityDomainFilter> entityDomain_ {};
    shared_ptr<QueryAlertRulesEntityTypeFilter> entityType_ {};
    shared_ptr<QueryAlertRulesNamespaceFilter> namespace_ {};
    shared_ptr<QueryAlertRulesProductCategoryFilter> productCategory_ {};
    shared_ptr<QueryAlertRulesRelationTypeFilter> relationType_ {};
    shared_ptr<QueryAlertRulesResourcesFilter> resources_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
