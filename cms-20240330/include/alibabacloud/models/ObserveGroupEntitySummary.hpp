// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OBSERVEGROUPENTITYSUMMARY_HPP_
#define ALIBABACLOUD_MODELS_OBSERVEGROUPENTITYSUMMARY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ObserveGroupEntitySummary : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ObserveGroupEntitySummary& obj) { 
      DARABONBA_PTR_TO_JSON(entityCategory, entityCategory_);
      DARABONBA_PTR_TO_JSON(entityCount, entityCount_);
      DARABONBA_PTR_TO_JSON(entityDomain, entityDomain_);
      DARABONBA_PTR_TO_JSON(entityType, entityType_);
      DARABONBA_PTR_TO_JSON(mainCount, mainCount_);
      DARABONBA_PTR_TO_JSON(relatedCount, relatedCount_);
    };
    friend void from_json(const Darabonba::Json& j, ObserveGroupEntitySummary& obj) { 
      DARABONBA_PTR_FROM_JSON(entityCategory, entityCategory_);
      DARABONBA_PTR_FROM_JSON(entityCount, entityCount_);
      DARABONBA_PTR_FROM_JSON(entityDomain, entityDomain_);
      DARABONBA_PTR_FROM_JSON(entityType, entityType_);
      DARABONBA_PTR_FROM_JSON(mainCount, mainCount_);
      DARABONBA_PTR_FROM_JSON(relatedCount, relatedCount_);
    };
    ObserveGroupEntitySummary() = default ;
    ObserveGroupEntitySummary(const ObserveGroupEntitySummary &) = default ;
    ObserveGroupEntitySummary(ObserveGroupEntitySummary &&) = default ;
    ObserveGroupEntitySummary(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ObserveGroupEntitySummary() = default ;
    ObserveGroupEntitySummary& operator=(const ObserveGroupEntitySummary &) = default ;
    ObserveGroupEntitySummary& operator=(ObserveGroupEntitySummary &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->entityCategory_ == nullptr
        && this->entityCount_ == nullptr && this->entityDomain_ == nullptr && this->entityType_ == nullptr && this->mainCount_ == nullptr && this->relatedCount_ == nullptr; };
    // entityCategory Field Functions 
    bool hasEntityCategory() const { return this->entityCategory_ != nullptr;};
    void deleteEntityCategory() { this->entityCategory_ = nullptr;};
    inline string getEntityCategory() const { DARABONBA_PTR_GET_DEFAULT(entityCategory_, "") };
    inline ObserveGroupEntitySummary& setEntityCategory(string entityCategory) { DARABONBA_PTR_SET_VALUE(entityCategory_, entityCategory) };


    // entityCount Field Functions 
    bool hasEntityCount() const { return this->entityCount_ != nullptr;};
    void deleteEntityCount() { this->entityCount_ = nullptr;};
    inline int32_t getEntityCount() const { DARABONBA_PTR_GET_DEFAULT(entityCount_, 0) };
    inline ObserveGroupEntitySummary& setEntityCount(int32_t entityCount) { DARABONBA_PTR_SET_VALUE(entityCount_, entityCount) };


    // entityDomain Field Functions 
    bool hasEntityDomain() const { return this->entityDomain_ != nullptr;};
    void deleteEntityDomain() { this->entityDomain_ = nullptr;};
    inline string getEntityDomain() const { DARABONBA_PTR_GET_DEFAULT(entityDomain_, "") };
    inline ObserveGroupEntitySummary& setEntityDomain(string entityDomain) { DARABONBA_PTR_SET_VALUE(entityDomain_, entityDomain) };


    // entityType Field Functions 
    bool hasEntityType() const { return this->entityType_ != nullptr;};
    void deleteEntityType() { this->entityType_ = nullptr;};
    inline string getEntityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
    inline ObserveGroupEntitySummary& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


    // mainCount Field Functions 
    bool hasMainCount() const { return this->mainCount_ != nullptr;};
    void deleteMainCount() { this->mainCount_ = nullptr;};
    inline int64_t getMainCount() const { DARABONBA_PTR_GET_DEFAULT(mainCount_, 0L) };
    inline ObserveGroupEntitySummary& setMainCount(int64_t mainCount) { DARABONBA_PTR_SET_VALUE(mainCount_, mainCount) };


    // relatedCount Field Functions 
    bool hasRelatedCount() const { return this->relatedCount_ != nullptr;};
    void deleteRelatedCount() { this->relatedCount_ = nullptr;};
    inline int64_t getRelatedCount() const { DARABONBA_PTR_GET_DEFAULT(relatedCount_, 0L) };
    inline ObserveGroupEntitySummary& setRelatedCount(int64_t relatedCount) { DARABONBA_PTR_SET_VALUE(relatedCount_, relatedCount) };


  protected:
    // The entity category.
    shared_ptr<string> entityCategory_ {};
    // The total count of entities of this type.
    shared_ptr<int32_t> entityCount_ {};
    // The entity domain.
    shared_ptr<string> entityDomain_ {};
    // The entity type.
    shared_ptr<string> entityType_ {};
    // The count of primary entities of this type.
    shared_ptr<int64_t> mainCount_ {};
    // The count of associated child entities of this type.
    shared_ptr<int64_t> relatedCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
