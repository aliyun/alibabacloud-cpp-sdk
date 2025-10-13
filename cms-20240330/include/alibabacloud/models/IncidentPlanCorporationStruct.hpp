// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INCIDENTPLANCORPORATIONSTRUCT_HPP_
#define ALIBABACLOUD_MODELS_INCIDENTPLANCORPORATIONSTRUCT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class IncidentPlanCorporationStruct : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IncidentPlanCorporationStruct& obj) { 
      DARABONBA_PTR_TO_JSON(channel, channel_);
      DARABONBA_PTR_TO_JSON(robotId, robotId_);
    };
    friend void from_json(const Darabonba::Json& j, IncidentPlanCorporationStruct& obj) { 
      DARABONBA_PTR_FROM_JSON(channel, channel_);
      DARABONBA_PTR_FROM_JSON(robotId, robotId_);
    };
    IncidentPlanCorporationStruct() = default ;
    IncidentPlanCorporationStruct(const IncidentPlanCorporationStruct &) = default ;
    IncidentPlanCorporationStruct(IncidentPlanCorporationStruct &&) = default ;
    IncidentPlanCorporationStruct(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IncidentPlanCorporationStruct() = default ;
    IncidentPlanCorporationStruct& operator=(const IncidentPlanCorporationStruct &) = default ;
    IncidentPlanCorporationStruct& operator=(IncidentPlanCorporationStruct &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channel_ == nullptr
        && return this->robotId_ == nullptr; };
    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline string channel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
    inline IncidentPlanCorporationStruct& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


    // robotId Field Functions 
    bool hasRobotId() const { return this->robotId_ != nullptr;};
    void deleteRobotId() { this->robotId_ = nullptr;};
    inline string robotId() const { DARABONBA_PTR_GET_DEFAULT(robotId_, "") };
    inline IncidentPlanCorporationStruct& setRobotId(string robotId) { DARABONBA_PTR_SET_VALUE(robotId_, robotId) };


  protected:
    std::shared_ptr<string> channel_ = nullptr;
    std::shared_ptr<string> robotId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
