// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINCIDENTINVESTIGATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETINCIDENTINVESTIGATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class GetIncidentInvestigationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIncidentInvestigationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IncidentInvestigationDisplayId, incidentInvestigationDisplayId_);
      DARABONBA_PTR_TO_JSON(IncidentInvestigationId, incidentInvestigationId_);
      DARABONBA_PTR_TO_JSON(IncidentUuid, incidentUuid_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
    };
    friend void from_json(const Darabonba::Json& j, GetIncidentInvestigationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IncidentInvestigationDisplayId, incidentInvestigationDisplayId_);
      DARABONBA_PTR_FROM_JSON(IncidentInvestigationId, incidentInvestigationId_);
      DARABONBA_PTR_FROM_JSON(IncidentUuid, incidentUuid_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
    };
    GetIncidentInvestigationRequest() = default ;
    GetIncidentInvestigationRequest(const GetIncidentInvestigationRequest &) = default ;
    GetIncidentInvestigationRequest(GetIncidentInvestigationRequest &&) = default ;
    GetIncidentInvestigationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIncidentInvestigationRequest() = default ;
    GetIncidentInvestigationRequest& operator=(const GetIncidentInvestigationRequest &) = default ;
    GetIncidentInvestigationRequest& operator=(GetIncidentInvestigationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->incidentInvestigationDisplayId_ == nullptr
        && this->incidentInvestigationId_ == nullptr && this->incidentUuid_ == nullptr && this->lang_ == nullptr && this->regionId_ == nullptr && this->roleFor_ == nullptr; };
    // incidentInvestigationDisplayId Field Functions 
    bool hasIncidentInvestigationDisplayId() const { return this->incidentInvestigationDisplayId_ != nullptr;};
    void deleteIncidentInvestigationDisplayId() { this->incidentInvestigationDisplayId_ = nullptr;};
    inline string getIncidentInvestigationDisplayId() const { DARABONBA_PTR_GET_DEFAULT(incidentInvestigationDisplayId_, "") };
    inline GetIncidentInvestigationRequest& setIncidentInvestigationDisplayId(string incidentInvestigationDisplayId) { DARABONBA_PTR_SET_VALUE(incidentInvestigationDisplayId_, incidentInvestigationDisplayId) };


    // incidentInvestigationId Field Functions 
    bool hasIncidentInvestigationId() const { return this->incidentInvestigationId_ != nullptr;};
    void deleteIncidentInvestigationId() { this->incidentInvestigationId_ = nullptr;};
    inline string getIncidentInvestigationId() const { DARABONBA_PTR_GET_DEFAULT(incidentInvestigationId_, "") };
    inline GetIncidentInvestigationRequest& setIncidentInvestigationId(string incidentInvestigationId) { DARABONBA_PTR_SET_VALUE(incidentInvestigationId_, incidentInvestigationId) };


    // incidentUuid Field Functions 
    bool hasIncidentUuid() const { return this->incidentUuid_ != nullptr;};
    void deleteIncidentUuid() { this->incidentUuid_ = nullptr;};
    inline string getIncidentUuid() const { DARABONBA_PTR_GET_DEFAULT(incidentUuid_, "") };
    inline GetIncidentInvestigationRequest& setIncidentUuid(string incidentUuid) { DARABONBA_PTR_SET_VALUE(incidentUuid_, incidentUuid) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline GetIncidentInvestigationRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetIncidentInvestigationRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline GetIncidentInvestigationRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


  protected:
    // The display ID of the AI investigation report. You can obtain this value from the IncidentInvestigationDisplayId field returned by ListIncidentInvestigations. This parameter takes effect only when IncidentInvestigationId is not specified. If neither identifier is specified, the most recent successfully completed investigation result for the specified incident is returned.
    shared_ptr<string> incidentInvestigationDisplayId_ {};
    // The AI investigation report ID. You can obtain this value from the IncidentInvestigationId field returned by ListIncidentInvestigations. If both this parameter and IncidentInvestigationDisplayId are specified, this parameter takes precedence.
    shared_ptr<string> incidentInvestigationId_ {};
    // The globally unique identity of the event. If neither the report ID nor the display ID is specified, the most recent successfully completed investigation result for this event is returned via event query.
    // 
    // This parameter is required.
    shared_ptr<string> incidentUuid_ {};
    // The language of the response. Valid values:
    // - **zh** (default): Chinese.
    // - **en**: English.
    shared_ptr<string> lang_ {};
    // The region where the threat analysis data management center resides. Specify the management center based on the region of your assets. Valid values:
    // - cn-hangzhou: Chinese mainland.
    // - ap-southeast-1: Outside the Chinese mainland.
    shared_ptr<string> regionId_ {};
    // The user ID that the administrator uses to switch to the view of another member.
    shared_ptr<int64_t> roleFor_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
