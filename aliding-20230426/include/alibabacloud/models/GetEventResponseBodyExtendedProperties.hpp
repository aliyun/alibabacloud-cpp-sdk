// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEVENTRESPONSEBODYEXTENDEDPROPERTIES_HPP_
#define ALIBABACLOUD_MODELS_GETEVENTRESPONSEBODYEXTENDEDPROPERTIES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetEventResponseBodyExtendedPropertiesSharedProperties.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetEventResponseBodyExtendedProperties : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEventResponseBodyExtendedProperties& obj) { 
      DARABONBA_PTR_TO_JSON(SharedProperties, sharedProperties_);
    };
    friend void from_json(const Darabonba::Json& j, GetEventResponseBodyExtendedProperties& obj) { 
      DARABONBA_PTR_FROM_JSON(SharedProperties, sharedProperties_);
    };
    GetEventResponseBodyExtendedProperties() = default ;
    GetEventResponseBodyExtendedProperties(const GetEventResponseBodyExtendedProperties &) = default ;
    GetEventResponseBodyExtendedProperties(GetEventResponseBodyExtendedProperties &&) = default ;
    GetEventResponseBodyExtendedProperties(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEventResponseBodyExtendedProperties() = default ;
    GetEventResponseBodyExtendedProperties& operator=(const GetEventResponseBodyExtendedProperties &) = default ;
    GetEventResponseBodyExtendedProperties& operator=(GetEventResponseBodyExtendedProperties &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sharedProperties_ == nullptr; };
    // sharedProperties Field Functions 
    bool hasSharedProperties() const { return this->sharedProperties_ != nullptr;};
    void deleteSharedProperties() { this->sharedProperties_ = nullptr;};
    inline const Models::GetEventResponseBodyExtendedPropertiesSharedProperties & sharedProperties() const { DARABONBA_PTR_GET_CONST(sharedProperties_, Models::GetEventResponseBodyExtendedPropertiesSharedProperties) };
    inline Models::GetEventResponseBodyExtendedPropertiesSharedProperties sharedProperties() { DARABONBA_PTR_GET(sharedProperties_, Models::GetEventResponseBodyExtendedPropertiesSharedProperties) };
    inline GetEventResponseBodyExtendedProperties& setSharedProperties(const Models::GetEventResponseBodyExtendedPropertiesSharedProperties & sharedProperties) { DARABONBA_PTR_SET_VALUE(sharedProperties_, sharedProperties) };
    inline GetEventResponseBodyExtendedProperties& setSharedProperties(Models::GetEventResponseBodyExtendedPropertiesSharedProperties && sharedProperties) { DARABONBA_PTR_SET_RVALUE(sharedProperties_, sharedProperties) };


  protected:
    std::shared_ptr<Models::GetEventResponseBodyExtendedPropertiesSharedProperties> sharedProperties_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
