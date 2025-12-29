// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EVENTRESOURCEFORINCIDENTVIEW_HPP_
#define ALIBABACLOUD_MODELS_EVENTRESOURCEFORINCIDENTVIEW_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class EventResourceForIncidentView : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EventResourceForIncidentView& obj) { 
      DARABONBA_PTR_TO_JSON(domain, domain_);
      DARABONBA_PTR_TO_JSON(entityId, entityId_);
      DARABONBA_PTR_TO_JSON(entityType, entityType_);
      DARABONBA_PTR_TO_JSON(probs, probs_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, EventResourceForIncidentView& obj) { 
      DARABONBA_PTR_FROM_JSON(domain, domain_);
      DARABONBA_PTR_FROM_JSON(entityId, entityId_);
      DARABONBA_PTR_FROM_JSON(entityType, entityType_);
      DARABONBA_PTR_FROM_JSON(probs, probs_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
    };
    EventResourceForIncidentView() = default ;
    EventResourceForIncidentView(const EventResourceForIncidentView &) = default ;
    EventResourceForIncidentView(EventResourceForIncidentView &&) = default ;
    EventResourceForIncidentView(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EventResourceForIncidentView() = default ;
    EventResourceForIncidentView& operator=(const EventResourceForIncidentView &) = default ;
    EventResourceForIncidentView& operator=(EventResourceForIncidentView &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domain_ == nullptr
        && this->entityId_ == nullptr && this->entityType_ == nullptr && this->probs_ == nullptr && this->tags_ == nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline EventResourceForIncidentView& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // entityId Field Functions 
    bool hasEntityId() const { return this->entityId_ != nullptr;};
    void deleteEntityId() { this->entityId_ = nullptr;};
    inline string getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
    inline EventResourceForIncidentView& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


    // entityType Field Functions 
    bool hasEntityType() const { return this->entityType_ != nullptr;};
    void deleteEntityType() { this->entityType_ = nullptr;};
    inline string getEntityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
    inline EventResourceForIncidentView& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


    // probs Field Functions 
    bool hasProbs() const { return this->probs_ != nullptr;};
    void deleteProbs() { this->probs_ = nullptr;};
    inline string getProbs() const { DARABONBA_PTR_GET_DEFAULT(probs_, "") };
    inline EventResourceForIncidentView& setProbs(string probs) { DARABONBA_PTR_SET_VALUE(probs_, probs) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline EventResourceForIncidentView& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


  protected:
    shared_ptr<string> domain_ {};
    shared_ptr<string> entityId_ {};
    shared_ptr<string> entityType_ {};
    shared_ptr<string> probs_ {};
    shared_ptr<string> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
