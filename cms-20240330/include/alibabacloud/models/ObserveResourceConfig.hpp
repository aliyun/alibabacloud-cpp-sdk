// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OBSERVERESOURCECONFIG_HPP_
#define ALIBABACLOUD_MODELS_OBSERVERESOURCECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ObserveResourceConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ObserveResourceConfig& obj) { 
      DARABONBA_PTR_TO_JSON(entityDomain, entityDomain_);
      DARABONBA_PTR_TO_JSON(entityType, entityType_);
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(productCategory, productCategory_);
      DARABONBA_PTR_TO_JSON(relationType, relationType_);
      DARABONBA_PTR_TO_JSON(resources, resources_);
    };
    friend void from_json(const Darabonba::Json& j, ObserveResourceConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(entityDomain, entityDomain_);
      DARABONBA_PTR_FROM_JSON(entityType, entityType_);
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(productCategory, productCategory_);
      DARABONBA_PTR_FROM_JSON(relationType, relationType_);
      DARABONBA_PTR_FROM_JSON(resources, resources_);
    };
    ObserveResourceConfig() = default ;
    ObserveResourceConfig(const ObserveResourceConfig &) = default ;
    ObserveResourceConfig(ObserveResourceConfig &&) = default ;
    ObserveResourceConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ObserveResourceConfig() = default ;
    ObserveResourceConfig& operator=(const ObserveResourceConfig &) = default ;
    ObserveResourceConfig& operator=(ObserveResourceConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->entityDomain_ == nullptr
        && this->entityType_ == nullptr && this->namespace_ == nullptr && this->productCategory_ == nullptr && this->relationType_ == nullptr && this->resources_ == nullptr; };
    // entityDomain Field Functions 
    bool hasEntityDomain() const { return this->entityDomain_ != nullptr;};
    void deleteEntityDomain() { this->entityDomain_ = nullptr;};
    inline string getEntityDomain() const { DARABONBA_PTR_GET_DEFAULT(entityDomain_, "") };
    inline ObserveResourceConfig& setEntityDomain(string entityDomain) { DARABONBA_PTR_SET_VALUE(entityDomain_, entityDomain) };


    // entityType Field Functions 
    bool hasEntityType() const { return this->entityType_ != nullptr;};
    void deleteEntityType() { this->entityType_ = nullptr;};
    inline string getEntityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
    inline ObserveResourceConfig& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ObserveResourceConfig& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // productCategory Field Functions 
    bool hasProductCategory() const { return this->productCategory_ != nullptr;};
    void deleteProductCategory() { this->productCategory_ = nullptr;};
    inline string getProductCategory() const { DARABONBA_PTR_GET_DEFAULT(productCategory_, "") };
    inline ObserveResourceConfig& setProductCategory(string productCategory) { DARABONBA_PTR_SET_VALUE(productCategory_, productCategory) };


    // relationType Field Functions 
    bool hasRelationType() const { return this->relationType_ != nullptr;};
    void deleteRelationType() { this->relationType_ = nullptr;};
    inline string getRelationType() const { DARABONBA_PTR_GET_DEFAULT(relationType_, "") };
    inline ObserveResourceConfig& setRelationType(string relationType) { DARABONBA_PTR_SET_VALUE(relationType_, relationType) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const vector<string> & getResources() const { DARABONBA_PTR_GET_CONST(resources_, vector<string>) };
    inline vector<string> getResources() { DARABONBA_PTR_GET(resources_, vector<string>) };
    inline ObserveResourceConfig& setResources(const vector<string> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline ObserveResourceConfig& setResources(vector<string> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


  protected:
    shared_ptr<string> entityDomain_ {};
    shared_ptr<string> entityType_ {};
    shared_ptr<string> namespace_ {};
    shared_ptr<string> productCategory_ {};
    shared_ptr<string> relationType_ {};
    shared_ptr<vector<string>> resources_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
