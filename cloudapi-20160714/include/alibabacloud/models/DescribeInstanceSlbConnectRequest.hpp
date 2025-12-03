// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESLBCONNECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESLBCONNECTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeInstanceSlbConnectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceSlbConnectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(SbcName, sbcName_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceSlbConnectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(SbcName, sbcName_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeInstanceSlbConnectRequest() = default ;
    DescribeInstanceSlbConnectRequest(const DescribeInstanceSlbConnectRequest &) = default ;
    DescribeInstanceSlbConnectRequest(DescribeInstanceSlbConnectRequest &&) = default ;
    DescribeInstanceSlbConnectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceSlbConnectRequest() = default ;
    DescribeInstanceSlbConnectRequest& operator=(const DescribeInstanceSlbConnectRequest &) = default ;
    DescribeInstanceSlbConnectRequest& operator=(DescribeInstanceSlbConnectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && return this->instanceId_ == nullptr && return this->sbcName_ == nullptr && return this->securityToken_ == nullptr && return this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeInstanceSlbConnectRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeInstanceSlbConnectRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // sbcName Field Functions 
    bool hasSbcName() const { return this->sbcName_ != nullptr;};
    void deleteSbcName() { this->sbcName_ = nullptr;};
    inline string sbcName() const { DARABONBA_PTR_GET_DEFAULT(sbcName_, "") };
    inline DescribeInstanceSlbConnectRequest& setSbcName(string sbcName) { DARABONBA_PTR_SET_VALUE(sbcName_, sbcName) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DescribeInstanceSlbConnectRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeInstanceSlbConnectRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The end time. The time follows the ISO 8601 standard and UTC time is used. Format: YYYY-MM-DDThh:mm:ssZ
    // 
    // This parameter is required.
    std::shared_ptr<string> endTime_ = nullptr;
    // The ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The statistical metric. Valid values:
    // 
    // *   Maximum
    // *   Minimum
    // *   Average
    // 
    // This parameter is required.
    std::shared_ptr<string> sbcName_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
    // The start time. The time follows the ISO 8601 standard and UTC time is used. Format: YYYY-MM-DDThh:mm:ssZ
    // 
    // This parameter is required.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
