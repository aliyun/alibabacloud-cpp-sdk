// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPRIVATEACCESSAPPLICATIONL7SWITCHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPRIVATEACCESSAPPLICATIONL7SWITCHRESPONSEBODY_HPP_
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
  class UpdatePrivateAccessApplicationL7SwitchResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePrivateAccessApplicationL7SwitchResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(L7Switch, l7Switch_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePrivateAccessApplicationL7SwitchResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(L7Switch, l7Switch_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdatePrivateAccessApplicationL7SwitchResponseBody() = default ;
    UpdatePrivateAccessApplicationL7SwitchResponseBody(const UpdatePrivateAccessApplicationL7SwitchResponseBody &) = default ;
    UpdatePrivateAccessApplicationL7SwitchResponseBody(UpdatePrivateAccessApplicationL7SwitchResponseBody &&) = default ;
    UpdatePrivateAccessApplicationL7SwitchResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePrivateAccessApplicationL7SwitchResponseBody() = default ;
    UpdatePrivateAccessApplicationL7SwitchResponseBody& operator=(const UpdatePrivateAccessApplicationL7SwitchResponseBody &) = default ;
    UpdatePrivateAccessApplicationL7SwitchResponseBody& operator=(UpdatePrivateAccessApplicationL7SwitchResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class L7Switch : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const L7Switch& obj) { 
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
      friend void from_json(const Darabonba::Json& j, L7Switch& obj) { 
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
      L7Switch() = default ;
      L7Switch(const L7Switch &) = default ;
      L7Switch(L7Switch &&) = default ;
      L7Switch(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~L7Switch() = default ;
      L7Switch& operator=(const L7Switch &) = default ;
      L7Switch& operator=(L7Switch &&) = default ;
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
      inline L7Switch& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


      // devTagMarkStatus Field Functions 
      bool hasDevTagMarkStatus() const { return this->devTagMarkStatus_ != nullptr;};
      void deleteDevTagMarkStatus() { this->devTagMarkStatus_ = nullptr;};
      inline string getDevTagMarkStatus() const { DARABONBA_PTR_GET_DEFAULT(devTagMarkStatus_, "") };
      inline L7Switch& setDevTagMarkStatus(string devTagMarkStatus) { DARABONBA_PTR_SET_VALUE(devTagMarkStatus_, devTagMarkStatus) };


      // downloadAuditStatus Field Functions 
      bool hasDownloadAuditStatus() const { return this->downloadAuditStatus_ != nullptr;};
      void deleteDownloadAuditStatus() { this->downloadAuditStatus_ = nullptr;};
      inline string getDownloadAuditStatus() const { DARABONBA_PTR_GET_DEFAULT(downloadAuditStatus_, "") };
      inline L7Switch& setDownloadAuditStatus(string downloadAuditStatus) { DARABONBA_PTR_SET_VALUE(downloadAuditStatus_, downloadAuditStatus) };


      // portRanges Field Functions 
      bool hasPortRanges() const { return this->portRanges_ != nullptr;};
      void deletePortRanges() { this->portRanges_ = nullptr;};
      inline const vector<L7Switch::PortRanges> & getPortRanges() const { DARABONBA_PTR_GET_CONST(portRanges_, vector<L7Switch::PortRanges>) };
      inline vector<L7Switch::PortRanges> getPortRanges() { DARABONBA_PTR_GET(portRanges_, vector<L7Switch::PortRanges>) };
      inline L7Switch& setPortRanges(const vector<L7Switch::PortRanges> & portRanges) { DARABONBA_PTR_SET_VALUE(portRanges_, portRanges) };
      inline L7Switch& setPortRanges(vector<L7Switch::PortRanges> && portRanges) { DARABONBA_PTR_SET_RVALUE(portRanges_, portRanges) };


      // srcIpMarkStatus Field Functions 
      bool hasSrcIpMarkStatus() const { return this->srcIpMarkStatus_ != nullptr;};
      void deleteSrcIpMarkStatus() { this->srcIpMarkStatus_ = nullptr;};
      inline string getSrcIpMarkStatus() const { DARABONBA_PTR_GET_DEFAULT(srcIpMarkStatus_, "") };
      inline L7Switch& setSrcIpMarkStatus(string srcIpMarkStatus) { DARABONBA_PTR_SET_VALUE(srcIpMarkStatus_, srcIpMarkStatus) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline L7Switch& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // timeoutSec Field Functions 
      bool hasTimeoutSec() const { return this->timeoutSec_ != nullptr;};
      void deleteTimeoutSec() { this->timeoutSec_ = nullptr;};
      inline int32_t getTimeoutSec() const { DARABONBA_PTR_GET_DEFAULT(timeoutSec_, 0) };
      inline L7Switch& setTimeoutSec(int32_t timeoutSec) { DARABONBA_PTR_SET_VALUE(timeoutSec_, timeoutSec) };


      // userMarkStatus Field Functions 
      bool hasUserMarkStatus() const { return this->userMarkStatus_ != nullptr;};
      void deleteUserMarkStatus() { this->userMarkStatus_ = nullptr;};
      inline string getUserMarkStatus() const { DARABONBA_PTR_GET_DEFAULT(userMarkStatus_, "") };
      inline L7Switch& setUserMarkStatus(string userMarkStatus) { DARABONBA_PTR_SET_VALUE(userMarkStatus_, userMarkStatus) };


      // zeroTrustStatus Field Functions 
      bool hasZeroTrustStatus() const { return this->zeroTrustStatus_ != nullptr;};
      void deleteZeroTrustStatus() { this->zeroTrustStatus_ = nullptr;};
      inline string getZeroTrustStatus() const { DARABONBA_PTR_GET_DEFAULT(zeroTrustStatus_, "") };
      inline L7Switch& setZeroTrustStatus(string zeroTrustStatus) { DARABONBA_PTR_SET_VALUE(zeroTrustStatus_, zeroTrustStatus) };


    protected:
      // The ID of the internal-facing application.
      shared_ptr<string> applicationId_ {};
      // The device tag mark switch. Valid values:
      // - **Enabled**: Enabled.
      // - **Disabled**: Disabled.
      shared_ptr<string> devTagMarkStatus_ {};
      // The sensitive application download audit switch. Valid values:
      // - **Enabled**: Enabled.
      // - **Disabled**: Disabled.
      shared_ptr<string> downloadAuditStatus_ {};
      // The collection of port ranges that are effective for Layer 7 access. This is the intersection of the ports specified in this request and the port ranges already configured for the internal-facing application. An empty collection is returned when Status is set to **Disabled**.
      shared_ptr<vector<L7Switch::PortRanges>> portRanges_ {};
      // The source IP mark switch. Valid values:
      // - **Enabled**: Enabled.
      // - **Disabled**: Disabled.
      shared_ptr<string> srcIpMarkStatus_ {};
      // The master switch for Layer 7 access of the internal-facing application. Valid values:
      // - **Enabled**: Enabled.
      // - **Disabled**: Disabled.
      shared_ptr<string> status_ {};
      // The request timeout period, in seconds.
      shared_ptr<int32_t> timeoutSec_ {};
      // The user mark switch. Valid values:
      // - **Enabled**: Enabled.
      // - **Disabled**: Disabled.
      shared_ptr<string> userMarkStatus_ {};
      // The host bypass prevention switch. Valid values:
      // - **Enabled**: Enabled.
      // - **Disabled**: Disabled.
      shared_ptr<string> zeroTrustStatus_ {};
    };

    virtual bool empty() const override { return this->l7Switch_ == nullptr
        && this->requestId_ == nullptr; };
    // l7Switch Field Functions 
    bool hasL7Switch() const { return this->l7Switch_ != nullptr;};
    void deleteL7Switch() { this->l7Switch_ = nullptr;};
    inline const UpdatePrivateAccessApplicationL7SwitchResponseBody::L7Switch & getL7Switch() const { DARABONBA_PTR_GET_CONST(l7Switch_, UpdatePrivateAccessApplicationL7SwitchResponseBody::L7Switch) };
    inline UpdatePrivateAccessApplicationL7SwitchResponseBody::L7Switch getL7Switch() { DARABONBA_PTR_GET(l7Switch_, UpdatePrivateAccessApplicationL7SwitchResponseBody::L7Switch) };
    inline UpdatePrivateAccessApplicationL7SwitchResponseBody& setL7Switch(const UpdatePrivateAccessApplicationL7SwitchResponseBody::L7Switch & l7Switch) { DARABONBA_PTR_SET_VALUE(l7Switch_, l7Switch) };
    inline UpdatePrivateAccessApplicationL7SwitchResponseBody& setL7Switch(UpdatePrivateAccessApplicationL7SwitchResponseBody::L7Switch && l7Switch) { DARABONBA_PTR_SET_RVALUE(l7Switch_, l7Switch) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdatePrivateAccessApplicationL7SwitchResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The Layer 7 access switch configuration of the internal-facing application after this update.
    shared_ptr<UpdatePrivateAccessApplicationL7SwitchResponseBody::L7Switch> l7Switch_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
