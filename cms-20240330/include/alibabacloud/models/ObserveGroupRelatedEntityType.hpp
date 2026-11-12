// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OBSERVEGROUPRELATEDENTITYTYPE_HPP_
#define ALIBABACLOUD_MODELS_OBSERVEGROUPRELATEDENTITYTYPE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ObserveGroupRelatedEntityType : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ObserveGroupRelatedEntityType& obj) { 
      DARABONBA_PTR_TO_JSON(cnName, cnName_);
      DARABONBA_PTR_TO_JSON(direction, direction_);
      DARABONBA_PTR_TO_JSON(domain, domain_);
      DARABONBA_PTR_TO_JSON(enName, enName_);
      DARABONBA_PTR_TO_JSON(entityGroup, entityGroup_);
      DARABONBA_PTR_TO_JSON(relation, relation_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ObserveGroupRelatedEntityType& obj) { 
      DARABONBA_PTR_FROM_JSON(cnName, cnName_);
      DARABONBA_PTR_FROM_JSON(direction, direction_);
      DARABONBA_PTR_FROM_JSON(domain, domain_);
      DARABONBA_PTR_FROM_JSON(enName, enName_);
      DARABONBA_PTR_FROM_JSON(entityGroup, entityGroup_);
      DARABONBA_PTR_FROM_JSON(relation, relation_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    ObserveGroupRelatedEntityType() = default ;
    ObserveGroupRelatedEntityType(const ObserveGroupRelatedEntityType &) = default ;
    ObserveGroupRelatedEntityType(ObserveGroupRelatedEntityType &&) = default ;
    ObserveGroupRelatedEntityType(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ObserveGroupRelatedEntityType() = default ;
    ObserveGroupRelatedEntityType& operator=(const ObserveGroupRelatedEntityType &) = default ;
    ObserveGroupRelatedEntityType& operator=(ObserveGroupRelatedEntityType &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cnName_ == nullptr
        && this->direction_ == nullptr && this->domain_ == nullptr && this->enName_ == nullptr && this->entityGroup_ == nullptr && this->relation_ == nullptr
        && this->type_ == nullptr && this->version_ == nullptr; };
    // cnName Field Functions 
    bool hasCnName() const { return this->cnName_ != nullptr;};
    void deleteCnName() { this->cnName_ = nullptr;};
    inline string getCnName() const { DARABONBA_PTR_GET_DEFAULT(cnName_, "") };
    inline ObserveGroupRelatedEntityType& setCnName(string cnName) { DARABONBA_PTR_SET_VALUE(cnName_, cnName) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline ObserveGroupRelatedEntityType& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline ObserveGroupRelatedEntityType& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // enName Field Functions 
    bool hasEnName() const { return this->enName_ != nullptr;};
    void deleteEnName() { this->enName_ = nullptr;};
    inline string getEnName() const { DARABONBA_PTR_GET_DEFAULT(enName_, "") };
    inline ObserveGroupRelatedEntityType& setEnName(string enName) { DARABONBA_PTR_SET_VALUE(enName_, enName) };


    // entityGroup Field Functions 
    bool hasEntityGroup() const { return this->entityGroup_ != nullptr;};
    void deleteEntityGroup() { this->entityGroup_ = nullptr;};
    inline string getEntityGroup() const { DARABONBA_PTR_GET_DEFAULT(entityGroup_, "") };
    inline ObserveGroupRelatedEntityType& setEntityGroup(string entityGroup) { DARABONBA_PTR_SET_VALUE(entityGroup_, entityGroup) };


    // relation Field Functions 
    bool hasRelation() const { return this->relation_ != nullptr;};
    void deleteRelation() { this->relation_ = nullptr;};
    inline string getRelation() const { DARABONBA_PTR_GET_DEFAULT(relation_, "") };
    inline ObserveGroupRelatedEntityType& setRelation(string relation) { DARABONBA_PTR_SET_VALUE(relation_, relation) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ObserveGroupRelatedEntityType& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ObserveGroupRelatedEntityType& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The Chinese name of the entity.
    shared_ptr<string> cnName_ {};
    // The association direction, which is currently fixed as outgoing, indicating that associated entities are searched along the direct outgoing edges of the primary entity.
    shared_ptr<string> direction_ {};
    // The entity domain.
    shared_ptr<string> domain_ {};
    // The English name of the entity.
    shared_ptr<string> enName_ {};
    // The CommonSchema group to which the entity belongs.
    shared_ptr<string> entityGroup_ {};
    // The direct outgoing edge relationship, such as use, run_on, calls, or contains.
    shared_ptr<string> relation_ {};
    // The associated entity type.
    shared_ptr<string> type_ {};
    // The effective CommonSchema version.
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
