// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EVENTRESOURCEFOREVENTVIEW_HPP_
#define ALIBABACLOUD_MODELS_EVENTRESOURCEFOREVENTVIEW_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/EventResourceForEventViewEntity.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class EventResourceForEventView : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EventResourceForEventView& obj) { 
      DARABONBA_PTR_TO_JSON(entity, entity_);
      DARABONBA_ANY_TO_JSON(tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, EventResourceForEventView& obj) { 
      DARABONBA_PTR_FROM_JSON(entity, entity_);
      DARABONBA_ANY_FROM_JSON(tags, tags_);
    };
    EventResourceForEventView() = default ;
    EventResourceForEventView(const EventResourceForEventView &) = default ;
    EventResourceForEventView(EventResourceForEventView &&) = default ;
    EventResourceForEventView(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EventResourceForEventView() = default ;
    EventResourceForEventView& operator=(const EventResourceForEventView &) = default ;
    EventResourceForEventView& operator=(EventResourceForEventView &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->entity_ == nullptr
        && return this->tags_ == nullptr; };
    // entity Field Functions 
    bool hasEntity() const { return this->entity_ != nullptr;};
    void deleteEntity() { this->entity_ = nullptr;};
    inline const EventResourceForEventViewEntity & entity() const { DARABONBA_PTR_GET_CONST(entity_, EventResourceForEventViewEntity) };
    inline EventResourceForEventViewEntity entity() { DARABONBA_PTR_GET(entity_, EventResourceForEventViewEntity) };
    inline EventResourceForEventView& setEntity(const EventResourceForEventViewEntity & entity) { DARABONBA_PTR_SET_VALUE(entity_, entity) };
    inline EventResourceForEventView& setEntity(EventResourceForEventViewEntity && entity) { DARABONBA_PTR_SET_RVALUE(entity_, entity) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline     const Darabonba::Json & tags() const { DARABONBA_GET(tags_) };
    Darabonba::Json & tags() { DARABONBA_GET(tags_) };
    inline EventResourceForEventView& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
    inline EventResourceForEventView& setTags(Darabonba::Json & tags) { DARABONBA_SET_RVALUE(tags_, tags) };


  protected:
    std::shared_ptr<EventResourceForEventViewEntity> entity_ = nullptr;
    Darabonba::Json tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
