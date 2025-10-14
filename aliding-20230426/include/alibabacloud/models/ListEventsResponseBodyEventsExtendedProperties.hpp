// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTSRESPONSEBODYEVENTSEXTENDEDPROPERTIES_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTSRESPONSEBODYEVENTSEXTENDEDPROPERTIES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListEventsResponseBodyEventsExtendedPropertiesSharedProperties.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListEventsResponseBodyEventsExtendedProperties : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventsResponseBodyEventsExtendedProperties& obj) { 
      DARABONBA_PTR_TO_JSON(SharedProperties, sharedProperties_);
    };
    friend void from_json(const Darabonba::Json& j, ListEventsResponseBodyEventsExtendedProperties& obj) { 
      DARABONBA_PTR_FROM_JSON(SharedProperties, sharedProperties_);
    };
    ListEventsResponseBodyEventsExtendedProperties() = default ;
    ListEventsResponseBodyEventsExtendedProperties(const ListEventsResponseBodyEventsExtendedProperties &) = default ;
    ListEventsResponseBodyEventsExtendedProperties(ListEventsResponseBodyEventsExtendedProperties &&) = default ;
    ListEventsResponseBodyEventsExtendedProperties(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventsResponseBodyEventsExtendedProperties() = default ;
    ListEventsResponseBodyEventsExtendedProperties& operator=(const ListEventsResponseBodyEventsExtendedProperties &) = default ;
    ListEventsResponseBodyEventsExtendedProperties& operator=(ListEventsResponseBodyEventsExtendedProperties &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sharedProperties_ == nullptr; };
    // sharedProperties Field Functions 
    bool hasSharedProperties() const { return this->sharedProperties_ != nullptr;};
    void deleteSharedProperties() { this->sharedProperties_ = nullptr;};
    inline const Models::ListEventsResponseBodyEventsExtendedPropertiesSharedProperties & sharedProperties() const { DARABONBA_PTR_GET_CONST(sharedProperties_, Models::ListEventsResponseBodyEventsExtendedPropertiesSharedProperties) };
    inline Models::ListEventsResponseBodyEventsExtendedPropertiesSharedProperties sharedProperties() { DARABONBA_PTR_GET(sharedProperties_, Models::ListEventsResponseBodyEventsExtendedPropertiesSharedProperties) };
    inline ListEventsResponseBodyEventsExtendedProperties& setSharedProperties(const Models::ListEventsResponseBodyEventsExtendedPropertiesSharedProperties & sharedProperties) { DARABONBA_PTR_SET_VALUE(sharedProperties_, sharedProperties) };
    inline ListEventsResponseBodyEventsExtendedProperties& setSharedProperties(Models::ListEventsResponseBodyEventsExtendedPropertiesSharedProperties && sharedProperties) { DARABONBA_PTR_SET_RVALUE(sharedProperties_, sharedProperties) };


  protected:
    std::shared_ptr<Models::ListEventsResponseBodyEventsExtendedPropertiesSharedProperties> sharedProperties_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
