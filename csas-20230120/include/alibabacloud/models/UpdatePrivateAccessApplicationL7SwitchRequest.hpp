// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPRIVATEACCESSAPPLICATIONL7SWITCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPRIVATEACCESSAPPLICATIONL7SWITCHREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class UpdatePrivateAccessApplicationL7SwitchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePrivateAccessApplicationL7SwitchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(DevTagMarkStatus, devTagMarkStatus_);
      DARABONBA_PTR_TO_JSON(DownloadAuditStatus, downloadAuditStatus_);
      DARABONBA_PTR_TO_JSON(PortRanges, portRanges_);
      DARABONBA_PTR_TO_JSON(SrcIpMarkStatus, srcIpMarkStatus_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TimeoutSec, timeoutSec_);
      DARABONBA_PTR_TO_JSON(UserMarkStatus, userMarkStatus_);
      DARABONBA_PTR_TO_JSON(ZeroTrustStatus, zeroTrustStatus_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePrivateAccessApplicationL7SwitchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(DevTagMarkStatus, devTagMarkStatus_);
      DARABONBA_PTR_FROM_JSON(DownloadAuditStatus, downloadAuditStatus_);
      DARABONBA_PTR_FROM_JSON(PortRanges, portRanges_);
      DARABONBA_PTR_FROM_JSON(SrcIpMarkStatus, srcIpMarkStatus_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TimeoutSec, timeoutSec_);
      DARABONBA_PTR_FROM_JSON(UserMarkStatus, userMarkStatus_);
      DARABONBA_PTR_FROM_JSON(ZeroTrustStatus, zeroTrustStatus_);
    };
    UpdatePrivateAccessApplicationL7SwitchRequest() = default ;
    UpdatePrivateAccessApplicationL7SwitchRequest(const UpdatePrivateAccessApplicationL7SwitchRequest &) = default ;
    UpdatePrivateAccessApplicationL7SwitchRequest(UpdatePrivateAccessApplicationL7SwitchRequest &&) = default ;
    UpdatePrivateAccessApplicationL7SwitchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePrivateAccessApplicationL7SwitchRequest() = default ;
    UpdatePrivateAccessApplicationL7SwitchRequest& operator=(const UpdatePrivateAccessApplicationL7SwitchRequest &) = default ;
    UpdatePrivateAccessApplicationL7SwitchRequest& operator=(UpdatePrivateAccessApplicationL7SwitchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PortRanges : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PortRanges& obj) { 
        DARABONBA_PTR_TO_JSON(Begin, begin_);
        DARABONBA_PTR_TO_JSON(End, end_);
      };
      friend void from_json(const Darabonba::Json& j, PortRanges& obj) { 
        DARABONBA_PTR_FROM_JSON(Begin, begin_);
        DARABONBA_PTR_FROM_JSON(End, end_);
      };
      PortRanges() = default ;
      PortRanges(const PortRanges &) = default ;
      PortRanges(PortRanges &&) = default ;
      PortRanges(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PortRanges() = default ;
      PortRanges& operator=(const PortRanges &) = default ;
      PortRanges& operator=(PortRanges &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->begin_ == nullptr
        && this->end_ == nullptr; };
      // begin Field Functions 
      bool hasBegin() const { return this->begin_ != nullptr;};
      void deleteBegin() { this->begin_ = nullptr;};
      inline int32_t getBegin() const { DARABONBA_PTR_GET_DEFAULT(begin_, 0) };
      inline PortRanges& setBegin(int32_t begin) { DARABONBA_PTR_SET_VALUE(begin_, begin) };


      // end Field Functions 
      bool hasEnd() const { return this->end_ != nullptr;};
      void deleteEnd() { this->end_ = nullptr;};
      inline int32_t getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, 0) };
      inline PortRanges& setEnd(int32_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


    protected:
      // The start port. The value must be less than or equal to the end port.
      shared_ptr<int32_t> begin_ {};
      // The end port. The value must be greater than or equal to the start port.
      shared_ptr<int32_t> end_ {};
    };

    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->devTagMarkStatus_ == nullptr && this->downloadAuditStatus_ == nullptr && this->portRanges_ == nullptr && this->srcIpMarkStatus_ == nullptr && this->status_ == nullptr
        && this->timeoutSec_ == nullptr && this->userMarkStatus_ == nullptr && this->zeroTrustStatus_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline UpdatePrivateAccessApplicationL7SwitchRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // devTagMarkStatus Field Functions 
    bool hasDevTagMarkStatus() const { return this->devTagMarkStatus_ != nullptr;};
    void deleteDevTagMarkStatus() { this->devTagMarkStatus_ = nullptr;};
    inline string getDevTagMarkStatus() const { DARABONBA_PTR_GET_DEFAULT(devTagMarkStatus_, "") };
    inline UpdatePrivateAccessApplicationL7SwitchRequest& setDevTagMarkStatus(string devTagMarkStatus) { DARABONBA_PTR_SET_VALUE(devTagMarkStatus_, devTagMarkStatus) };


    // downloadAuditStatus Field Functions 
    bool hasDownloadAuditStatus() const { return this->downloadAuditStatus_ != nullptr;};
    void deleteDownloadAuditStatus() { this->downloadAuditStatus_ = nullptr;};
    inline string getDownloadAuditStatus() const { DARABONBA_PTR_GET_DEFAULT(downloadAuditStatus_, "") };
    inline UpdatePrivateAccessApplicationL7SwitchRequest& setDownloadAuditStatus(string downloadAuditStatus) { DARABONBA_PTR_SET_VALUE(downloadAuditStatus_, downloadAuditStatus) };


    // portRanges Field Functions 
    bool hasPortRanges() const { return this->portRanges_ != nullptr;};
    void deletePortRanges() { this->portRanges_ = nullptr;};
    inline const vector<UpdatePrivateAccessApplicationL7SwitchRequest::PortRanges> & getPortRanges() const { DARABONBA_PTR_GET_CONST(portRanges_, vector<UpdatePrivateAccessApplicationL7SwitchRequest::PortRanges>) };
    inline vector<UpdatePrivateAccessApplicationL7SwitchRequest::PortRanges> getPortRanges() { DARABONBA_PTR_GET(portRanges_, vector<UpdatePrivateAccessApplicationL7SwitchRequest::PortRanges>) };
    inline UpdatePrivateAccessApplicationL7SwitchRequest& setPortRanges(const vector<UpdatePrivateAccessApplicationL7SwitchRequest::PortRanges> & portRanges) { DARABONBA_PTR_SET_VALUE(portRanges_, portRanges) };
    inline UpdatePrivateAccessApplicationL7SwitchRequest& setPortRanges(vector<UpdatePrivateAccessApplicationL7SwitchRequest::PortRanges> && portRanges) { DARABONBA_PTR_SET_RVALUE(portRanges_, portRanges) };


    // srcIpMarkStatus Field Functions 
    bool hasSrcIpMarkStatus() const { return this->srcIpMarkStatus_ != nullptr;};
    void deleteSrcIpMarkStatus() { this->srcIpMarkStatus_ = nullptr;};
    inline string getSrcIpMarkStatus() const { DARABONBA_PTR_GET_DEFAULT(srcIpMarkStatus_, "") };
    inline UpdatePrivateAccessApplicationL7SwitchRequest& setSrcIpMarkStatus(string srcIpMarkStatus) { DARABONBA_PTR_SET_VALUE(srcIpMarkStatus_, srcIpMarkStatus) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdatePrivateAccessApplicationL7SwitchRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // timeoutSec Field Functions 
    bool hasTimeoutSec() const { return this->timeoutSec_ != nullptr;};
    void deleteTimeoutSec() { this->timeoutSec_ = nullptr;};
    inline int32_t getTimeoutSec() const { DARABONBA_PTR_GET_DEFAULT(timeoutSec_, 0) };
    inline UpdatePrivateAccessApplicationL7SwitchRequest& setTimeoutSec(int32_t timeoutSec) { DARABONBA_PTR_SET_VALUE(timeoutSec_, timeoutSec) };


    // userMarkStatus Field Functions 
    bool hasUserMarkStatus() const { return this->userMarkStatus_ != nullptr;};
    void deleteUserMarkStatus() { this->userMarkStatus_ = nullptr;};
    inline string getUserMarkStatus() const { DARABONBA_PTR_GET_DEFAULT(userMarkStatus_, "") };
    inline UpdatePrivateAccessApplicationL7SwitchRequest& setUserMarkStatus(string userMarkStatus) { DARABONBA_PTR_SET_VALUE(userMarkStatus_, userMarkStatus) };


    // zeroTrustStatus Field Functions 
    bool hasZeroTrustStatus() const { return this->zeroTrustStatus_ != nullptr;};
    void deleteZeroTrustStatus() { this->zeroTrustStatus_ = nullptr;};
    inline string getZeroTrustStatus() const { DARABONBA_PTR_GET_DEFAULT(zeroTrustStatus_, "") };
    inline UpdatePrivateAccessApplicationL7SwitchRequest& setZeroTrustStatus(string zeroTrustStatus) { DARABONBA_PTR_SET_VALUE(zeroTrustStatus_, zeroTrustStatus) };


  protected:
    // The ID of the internal-facing application. Required.
    shared_ptr<string> applicationId_ {};
    // The device tag mark switch. Required. Valid values:
    // - **Enabled**: Enabled.
    // - **Disabled**: Disabled.
    shared_ptr<string> devTagMarkStatus_ {};
    // The sensitive application download audit switch. Optional. Valid values:
    // - **Enabled**: Enabled.
    // - **Disabled**: Disabled.
    shared_ptr<string> downloadAuditStatus_ {};
    // The collection of port ranges for the internal-facing application. Multiple port ranges cannot be duplicated or overlap. You can specify up to 50 port ranges. This parameter takes effect and is validated only when Status is set to **Enabled**. If this parameter is not specified or an empty collection is passed in, the default ports 80, 443, 8080, and 465 are used. The effective ports are the intersection of the ports specified in this request and the port ranges already configured for the internal-facing application.
    shared_ptr<vector<UpdatePrivateAccessApplicationL7SwitchRequest::PortRanges>> portRanges_ {};
    // The source IP mark switch. Required. Valid values:
    // - **Enabled**: Enabled.
    // - **Disabled**: Disabled.
    shared_ptr<string> srcIpMarkStatus_ {};
    // The master switch for Layer 7 access of the internal-facing application. Required. Valid values:
    // - **Enabled**: Enabled.
    // - **Disabled**: Disabled.
    // 
    // When the value is **Disabled**, PortRanges is neither validated nor saved.
    shared_ptr<string> status_ {};
    // The request timeout period, in seconds. Valid values: 1 to 3600. Default value: 60. If this parameter is not specified or an invalid value is specified, the value 60 is used.
    shared_ptr<int32_t> timeoutSec_ {};
    // The user mark switch. Required. Valid values:
    // - **Enabled**: Enabled.
    // - **Disabled**: Disabled.
    shared_ptr<string> userMarkStatus_ {};
    // The host bypass prevention switch. Required. Valid values:
    // - **Enabled**: Enabled.
    // - **Disabled**: Disabled.
    shared_ptr<string> zeroTrustStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
