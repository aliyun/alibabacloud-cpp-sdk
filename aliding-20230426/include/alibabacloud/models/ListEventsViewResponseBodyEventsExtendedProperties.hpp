// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTSVIEWRESPONSEBODYEVENTSEXTENDEDPROPERTIES_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTSVIEWRESPONSEBODYEVENTSEXTENDEDPROPERTIES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListEventsViewResponseBodyEventsExtendedPropertiesSharedProperties.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListEventsViewResponseBodyEventsExtendedProperties : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventsViewResponseBodyEventsExtendedProperties& obj) { 
      DARABONBA_PTR_TO_JSON(SharedProperties, sharedProperties_);
    };
    friend void from_json(const Darabonba::Json& j, ListEventsViewResponseBodyEventsExtendedProperties& obj) { 
      DARABONBA_PTR_FROM_JSON(SharedProperties, sharedProperties_);
    };
    ListEventsViewResponseBodyEventsExtendedProperties() = default ;
    ListEventsViewResponseBodyEventsExtendedProperties(const ListEventsViewResponseBodyEventsExtendedProperties &) = default ;
    ListEventsViewResponseBodyEventsExtendedProperties(ListEventsViewResponseBodyEventsExtendedProperties &&) = default ;
    ListEventsViewResponseBodyEventsExtendedProperties(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventsViewResponseBodyEventsExtendedProperties() = default ;
    ListEventsViewResponseBodyEventsExtendedProperties& operator=(const ListEventsViewResponseBodyEventsExtendedProperties &) = default ;
    ListEventsViewResponseBodyEventsExtendedProperties& operator=(ListEventsViewResponseBodyEventsExtendedProperties &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sharedProperties_ == nullptr; };
    // sharedProperties Field Functions 
    bool hasSharedProperties() const { return this->sharedProperties_ != nullptr;};
    void deleteSharedProperties() { this->sharedProperties_ = nullptr;};
    inline const Models::ListEventsViewResponseBodyEventsExtendedPropertiesSharedProperties & sharedProperties() const { DARABONBA_PTR_GET_CONST(sharedProperties_, Models::ListEventsViewResponseBodyEventsExtendedPropertiesSharedProperties) };
    inline Models::ListEventsViewResponseBodyEventsExtendedPropertiesSharedProperties sharedProperties() { DARABONBA_PTR_GET(sharedProperties_, Models::ListEventsViewResponseBodyEventsExtendedPropertiesSharedProperties) };
    inline ListEventsViewResponseBodyEventsExtendedProperties& setSharedProperties(const Models::ListEventsViewResponseBodyEventsExtendedPropertiesSharedProperties & sharedProperties) { DARABONBA_PTR_SET_VALUE(sharedProperties_, sharedProperties) };
    inline ListEventsViewResponseBodyEventsExtendedProperties& setSharedProperties(Models::ListEventsViewResponseBodyEventsExtendedPropertiesSharedProperties && sharedProperties) { DARABONBA_PTR_SET_RVALUE(sharedProperties_, sharedProperties) };


  protected:
    std::shared_ptr<Models::ListEventsViewResponseBodyEventsExtendedPropertiesSharedProperties> sharedProperties_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
