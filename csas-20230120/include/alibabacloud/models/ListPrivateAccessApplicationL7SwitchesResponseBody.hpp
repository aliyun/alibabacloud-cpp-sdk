// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRIVATEACCESSAPPLICATIONL7SWITCHESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPRIVATEACCESSAPPLICATIONL7SWITCHESRESPONSEBODY_HPP_
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
  class ListPrivateAccessApplicationL7SwitchesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrivateAccessApplicationL7SwitchesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(L7Switches, l7Switches_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrivateAccessApplicationL7SwitchesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(L7Switches, l7Switches_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListPrivateAccessApplicationL7SwitchesResponseBody() = default ;
    ListPrivateAccessApplicationL7SwitchesResponseBody(const ListPrivateAccessApplicationL7SwitchesResponseBody &) = default ;
    ListPrivateAccessApplicationL7SwitchesResponseBody(ListPrivateAccessApplicationL7SwitchesResponseBody &&) = default ;
    ListPrivateAccessApplicationL7SwitchesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrivateAccessApplicationL7SwitchesResponseBody() = default ;
    ListPrivateAccessApplicationL7SwitchesResponseBody& operator=(const ListPrivateAccessApplicationL7SwitchesResponseBody &) = default ;
    ListPrivateAccessApplicationL7SwitchesResponseBody& operator=(ListPrivateAccessApplicationL7SwitchesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class L7Switches : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const L7Switches& obj) { 
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
      friend void from_json(const Darabonba::Json& j, L7Switches& obj) { 
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
      L7Switches() = default ;
      L7Switches(const L7Switches &) = default ;
      L7Switches(L7Switches &&) = default ;
      L7Switches(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~L7Switches() = default ;
      L7Switches& operator=(const L7Switches &) = default ;
      L7Switches& operator=(L7Switches &&) = default ;
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
        // The start port.
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
      inline L7Switches& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


      // devTagMarkStatus Field Functions 
      bool hasDevTagMarkStatus() const { return this->devTagMarkStatus_ != nullptr;};
      void deleteDevTagMarkStatus() { this->devTagMarkStatus_ = nullptr;};
      inline string getDevTagMarkStatus() const { DARABONBA_PTR_GET_DEFAULT(devTagMarkStatus_, "") };
      inline L7Switches& setDevTagMarkStatus(string devTagMarkStatus) { DARABONBA_PTR_SET_VALUE(devTagMarkStatus_, devTagMarkStatus) };


      // downloadAuditStatus Field Functions 
      bool hasDownloadAuditStatus() const { return this->downloadAuditStatus_ != nullptr;};
      void deleteDownloadAuditStatus() { this->downloadAuditStatus_ = nullptr;};
      inline string getDownloadAuditStatus() const { DARABONBA_PTR_GET_DEFAULT(downloadAuditStatus_, "") };
      inline L7Switches& setDownloadAuditStatus(string downloadAuditStatus) { DARABONBA_PTR_SET_VALUE(downloadAuditStatus_, downloadAuditStatus) };


      // portRanges Field Functions 
      bool hasPortRanges() const { return this->portRanges_ != nullptr;};
      void deletePortRanges() { this->portRanges_ = nullptr;};
      inline const vector<L7Switches::PortRanges> & getPortRanges() const { DARABONBA_PTR_GET_CONST(portRanges_, vector<L7Switches::PortRanges>) };
      inline vector<L7Switches::PortRanges> getPortRanges() { DARABONBA_PTR_GET(portRanges_, vector<L7Switches::PortRanges>) };
      inline L7Switches& setPortRanges(const vector<L7Switches::PortRanges> & portRanges) { DARABONBA_PTR_SET_VALUE(portRanges_, portRanges) };
      inline L7Switches& setPortRanges(vector<L7Switches::PortRanges> && portRanges) { DARABONBA_PTR_SET_RVALUE(portRanges_, portRanges) };


      // srcIpMarkStatus Field Functions 
      bool hasSrcIpMarkStatus() const { return this->srcIpMarkStatus_ != nullptr;};
      void deleteSrcIpMarkStatus() { this->srcIpMarkStatus_ = nullptr;};
      inline string getSrcIpMarkStatus() const { DARABONBA_PTR_GET_DEFAULT(srcIpMarkStatus_, "") };
      inline L7Switches& setSrcIpMarkStatus(string srcIpMarkStatus) { DARABONBA_PTR_SET_VALUE(srcIpMarkStatus_, srcIpMarkStatus) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline L7Switches& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // timeoutSec Field Functions 
      bool hasTimeoutSec() const { return this->timeoutSec_ != nullptr;};
      void deleteTimeoutSec() { this->timeoutSec_ = nullptr;};
      inline int32_t getTimeoutSec() const { DARABONBA_PTR_GET_DEFAULT(timeoutSec_, 0) };
      inline L7Switches& setTimeoutSec(int32_t timeoutSec) { DARABONBA_PTR_SET_VALUE(timeoutSec_, timeoutSec) };


      // userMarkStatus Field Functions 
      bool hasUserMarkStatus() const { return this->userMarkStatus_ != nullptr;};
      void deleteUserMarkStatus() { this->userMarkStatus_ = nullptr;};
      inline string getUserMarkStatus() const { DARABONBA_PTR_GET_DEFAULT(userMarkStatus_, "") };
      inline L7Switches& setUserMarkStatus(string userMarkStatus) { DARABONBA_PTR_SET_VALUE(userMarkStatus_, userMarkStatus) };


      // zeroTrustStatus Field Functions 
      bool hasZeroTrustStatus() const { return this->zeroTrustStatus_ != nullptr;};
      void deleteZeroTrustStatus() { this->zeroTrustStatus_ = nullptr;};
      inline string getZeroTrustStatus() const { DARABONBA_PTR_GET_DEFAULT(zeroTrustStatus_, "") };
      inline L7Switches& setZeroTrustStatus(string zeroTrustStatus) { DARABONBA_PTR_SET_VALUE(zeroTrustStatus_, zeroTrustStatus) };


    protected:
      // The ID of the internal-facing application.
      shared_ptr<string> applicationId_ {};
      // The device tag mark switch. Valid values:
      // - **Enabled**: Enabled.
      // - **Disabled**: Disabled.
      shared_ptr<string> devTagMarkStatus_ {};
      // The download audit switch for sensitive applications. Valid values:
      // - **Enabled**: Enabled.
      // - **Disabled**: Disabled.
      shared_ptr<string> downloadAuditStatus_ {};
      // The port ranges.
      shared_ptr<vector<L7Switches::PortRanges>> portRanges_ {};
      // The source IP mark switch. Valid values:
      // - **Enabled**: Enabled.
      // - **Disabled**: Disabled.
      shared_ptr<string> srcIpMarkStatus_ {};
      // The status of the internal-facing access policy. Valid values:
      // - **Enabled**: Enabled.
      // - **Disabled**: Disabled.
      shared_ptr<string> status_ {};
      // The request timeout period.
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

    virtual bool empty() const override { return this->l7Switches_ == nullptr
        && this->requestId_ == nullptr; };
    // l7Switches Field Functions 
    bool hasL7Switches() const { return this->l7Switches_ != nullptr;};
    void deleteL7Switches() { this->l7Switches_ = nullptr;};
    inline const vector<ListPrivateAccessApplicationL7SwitchesResponseBody::L7Switches> & getL7Switches() const { DARABONBA_PTR_GET_CONST(l7Switches_, vector<ListPrivateAccessApplicationL7SwitchesResponseBody::L7Switches>) };
    inline vector<ListPrivateAccessApplicationL7SwitchesResponseBody::L7Switches> getL7Switches() { DARABONBA_PTR_GET(l7Switches_, vector<ListPrivateAccessApplicationL7SwitchesResponseBody::L7Switches>) };
    inline ListPrivateAccessApplicationL7SwitchesResponseBody& setL7Switches(const vector<ListPrivateAccessApplicationL7SwitchesResponseBody::L7Switches> & l7Switches) { DARABONBA_PTR_SET_VALUE(l7Switches_, l7Switches) };
    inline ListPrivateAccessApplicationL7SwitchesResponseBody& setL7Switches(vector<ListPrivateAccessApplicationL7SwitchesResponseBody::L7Switches> && l7Switches) { DARABONBA_PTR_SET_RVALUE(l7Switches_, l7Switches) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPrivateAccessApplicationL7SwitchesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The Layer 7 application configurations.
    shared_ptr<vector<ListPrivateAccessApplicationL7SwitchesResponseBody::L7Switches>> l7Switches_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
