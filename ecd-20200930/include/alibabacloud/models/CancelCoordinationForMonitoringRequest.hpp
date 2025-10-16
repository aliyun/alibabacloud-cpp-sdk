// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELCOORDINATIONFORMONITORINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELCOORDINATIONFORMONITORINGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class CancelCoordinationForMonitoringRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelCoordinationForMonitoringRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CoIds, coIds_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(UserType, userType_);
    };
    friend void from_json(const Darabonba::Json& j, CancelCoordinationForMonitoringRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CoIds, coIds_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(UserType, userType_);
    };
    CancelCoordinationForMonitoringRequest() = default ;
    CancelCoordinationForMonitoringRequest(const CancelCoordinationForMonitoringRequest &) = default ;
    CancelCoordinationForMonitoringRequest(CancelCoordinationForMonitoringRequest &&) = default ;
    CancelCoordinationForMonitoringRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelCoordinationForMonitoringRequest() = default ;
    CancelCoordinationForMonitoringRequest& operator=(const CancelCoordinationForMonitoringRequest &) = default ;
    CancelCoordinationForMonitoringRequest& operator=(CancelCoordinationForMonitoringRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->coIds_ == nullptr
        && return this->endUserId_ == nullptr && return this->regionId_ == nullptr && return this->userType_ == nullptr; };
    // coIds Field Functions 
    bool hasCoIds() const { return this->coIds_ != nullptr;};
    void deleteCoIds() { this->coIds_ = nullptr;};
    inline const vector<string> & coIds() const { DARABONBA_PTR_GET_CONST(coIds_, vector<string>) };
    inline vector<string> coIds() { DARABONBA_PTR_GET(coIds_, vector<string>) };
    inline CancelCoordinationForMonitoringRequest& setCoIds(const vector<string> & coIds) { DARABONBA_PTR_SET_VALUE(coIds_, coIds) };
    inline CancelCoordinationForMonitoringRequest& setCoIds(vector<string> && coIds) { DARABONBA_PTR_SET_RVALUE(coIds_, coIds) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string endUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline CancelCoordinationForMonitoringRequest& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CancelCoordinationForMonitoringRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // userType Field Functions 
    bool hasUserType() const { return this->userType_ != nullptr;};
    void deleteUserType() { this->userType_ = nullptr;};
    inline string userType() const { DARABONBA_PTR_GET_DEFAULT(userType_, "") };
    inline CancelCoordinationForMonitoringRequest& setUserType(string userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


  protected:
    // The IDs of stream collaboration tasks.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> coIds_ = nullptr;
    // The ID of the end user that initiates stream collaboration. If the initiator is the administrator, skip this parameter.
    std::shared_ptr<string> endUserId_ = nullptr;
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/436773.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The type of the user.
    // 
    // Valid value:
    // 
    // * TENANT_ADMIN: administrator.
    std::shared_ptr<string> userType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
