// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEDROPCONNECTIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEDROPCONNECTIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeInstanceDropConnectionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceDropConnectionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(SbcName, sbcName_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceDropConnectionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(SbcName, sbcName_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeInstanceDropConnectionsRequest() = default ;
    DescribeInstanceDropConnectionsRequest(const DescribeInstanceDropConnectionsRequest &) = default ;
    DescribeInstanceDropConnectionsRequest(DescribeInstanceDropConnectionsRequest &&) = default ;
    DescribeInstanceDropConnectionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceDropConnectionsRequest() = default ;
    DescribeInstanceDropConnectionsRequest& operator=(const DescribeInstanceDropConnectionsRequest &) = default ;
    DescribeInstanceDropConnectionsRequest& operator=(DescribeInstanceDropConnectionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->instanceId_ == nullptr && this->sbcName_ == nullptr && this->securityToken_ == nullptr && this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeInstanceDropConnectionsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeInstanceDropConnectionsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // sbcName Field Functions 
    bool hasSbcName() const { return this->sbcName_ != nullptr;};
    void deleteSbcName() { this->sbcName_ = nullptr;};
    inline string getSbcName() const { DARABONBA_PTR_GET_DEFAULT(sbcName_, "") };
    inline DescribeInstanceDropConnectionsRequest& setSbcName(string sbcName) { DARABONBA_PTR_SET_VALUE(sbcName_, sbcName) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DescribeInstanceDropConnectionsRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeInstanceDropConnectionsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The end time. The time follows the ISO 8601 standard and UTC time is used. Format: YYYY-MM-DDThh:mm:ssZ
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // The ID of the dedicated instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The statistical metric. Valid values:
    // 
    // *   Maximum
    // *   Minimum
    // *   Average
    // 
    // This parameter is required.
    shared_ptr<string> sbcName_ {};
    shared_ptr<string> securityToken_ {};
    // The start time. The time follows the ISO 8601 standard and UTC time is used. Format: YYYY-MM-DDThh:mm:ssZ
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
