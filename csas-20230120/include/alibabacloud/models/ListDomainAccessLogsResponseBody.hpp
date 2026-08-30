// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOMAINACCESSLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDOMAINACCESSLOGSRESPONSEBODY_HPP_
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
  class ListDomainAccessLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDomainAccessLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessLogs, accessLogs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
    };
    friend void from_json(const Darabonba::Json& j, ListDomainAccessLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessLogs, accessLogs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
    };
    ListDomainAccessLogsResponseBody() = default ;
    ListDomainAccessLogsResponseBody(const ListDomainAccessLogsResponseBody &) = default ;
    ListDomainAccessLogsResponseBody(ListDomainAccessLogsResponseBody &&) = default ;
    ListDomainAccessLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDomainAccessLogsResponseBody() = default ;
    ListDomainAccessLogsResponseBody& operator=(const ListDomainAccessLogsResponseBody &) = default ;
    ListDomainAccessLogsResponseBody& operator=(ListDomainAccessLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AccessLogs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccessLogs& obj) { 
        DARABONBA_PTR_TO_JSON(BlockAction, blockAction_);
        DARABONBA_PTR_TO_JSON(Department, department_);
        DARABONBA_PTR_TO_JSON(DestAddress, destAddress_);
        DARABONBA_PTR_TO_JSON(EventTime, eventTime_);
        DARABONBA_PTR_TO_JSON(L4ProtocolType, l4ProtocolType_);
        DARABONBA_PTR_TO_JSON(ProcessName, processName_);
        DARABONBA_PTR_TO_JSON(RemoteAddress, remoteAddress_);
        DARABONBA_PTR_TO_JSON(RemoteHost, remoteHost_);
        DARABONBA_PTR_TO_JSON(RemotePort, remotePort_);
        DARABONBA_PTR_TO_JSON(SrcAddress, srcAddress_);
        DARABONBA_PTR_TO_JSON(Username, username_);
      };
      friend void from_json(const Darabonba::Json& j, AccessLogs& obj) { 
        DARABONBA_PTR_FROM_JSON(BlockAction, blockAction_);
        DARABONBA_PTR_FROM_JSON(Department, department_);
        DARABONBA_PTR_FROM_JSON(DestAddress, destAddress_);
        DARABONBA_PTR_FROM_JSON(EventTime, eventTime_);
        DARABONBA_PTR_FROM_JSON(L4ProtocolType, l4ProtocolType_);
        DARABONBA_PTR_FROM_JSON(ProcessName, processName_);
        DARABONBA_PTR_FROM_JSON(RemoteAddress, remoteAddress_);
        DARABONBA_PTR_FROM_JSON(RemoteHost, remoteHost_);
        DARABONBA_PTR_FROM_JSON(RemotePort, remotePort_);
        DARABONBA_PTR_FROM_JSON(SrcAddress, srcAddress_);
        DARABONBA_PTR_FROM_JSON(Username, username_);
      };
      AccessLogs() = default ;
      AccessLogs(const AccessLogs &) = default ;
      AccessLogs(AccessLogs &&) = default ;
      AccessLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccessLogs() = default ;
      AccessLogs& operator=(const AccessLogs &) = default ;
      AccessLogs& operator=(AccessLogs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->blockAction_ == nullptr
        && this->department_ == nullptr && this->destAddress_ == nullptr && this->eventTime_ == nullptr && this->l4ProtocolType_ == nullptr && this->processName_ == nullptr
        && this->remoteAddress_ == nullptr && this->remoteHost_ == nullptr && this->remotePort_ == nullptr && this->srcAddress_ == nullptr && this->username_ == nullptr; };
      // blockAction Field Functions 
      bool hasBlockAction() const { return this->blockAction_ != nullptr;};
      void deleteBlockAction() { this->blockAction_ = nullptr;};
      inline string getBlockAction() const { DARABONBA_PTR_GET_DEFAULT(blockAction_, "") };
      inline AccessLogs& setBlockAction(string blockAction) { DARABONBA_PTR_SET_VALUE(blockAction_, blockAction) };


      // department Field Functions 
      bool hasDepartment() const { return this->department_ != nullptr;};
      void deleteDepartment() { this->department_ = nullptr;};
      inline string getDepartment() const { DARABONBA_PTR_GET_DEFAULT(department_, "") };
      inline AccessLogs& setDepartment(string department) { DARABONBA_PTR_SET_VALUE(department_, department) };


      // destAddress Field Functions 
      bool hasDestAddress() const { return this->destAddress_ != nullptr;};
      void deleteDestAddress() { this->destAddress_ = nullptr;};
      inline string getDestAddress() const { DARABONBA_PTR_GET_DEFAULT(destAddress_, "") };
      inline AccessLogs& setDestAddress(string destAddress) { DARABONBA_PTR_SET_VALUE(destAddress_, destAddress) };


      // eventTime Field Functions 
      bool hasEventTime() const { return this->eventTime_ != nullptr;};
      void deleteEventTime() { this->eventTime_ = nullptr;};
      inline string getEventTime() const { DARABONBA_PTR_GET_DEFAULT(eventTime_, "") };
      inline AccessLogs& setEventTime(string eventTime) { DARABONBA_PTR_SET_VALUE(eventTime_, eventTime) };


      // l4ProtocolType Field Functions 
      bool hasL4ProtocolType() const { return this->l4ProtocolType_ != nullptr;};
      void deleteL4ProtocolType() { this->l4ProtocolType_ = nullptr;};
      inline string getL4ProtocolType() const { DARABONBA_PTR_GET_DEFAULT(l4ProtocolType_, "") };
      inline AccessLogs& setL4ProtocolType(string l4ProtocolType) { DARABONBA_PTR_SET_VALUE(l4ProtocolType_, l4ProtocolType) };


      // processName Field Functions 
      bool hasProcessName() const { return this->processName_ != nullptr;};
      void deleteProcessName() { this->processName_ = nullptr;};
      inline string getProcessName() const { DARABONBA_PTR_GET_DEFAULT(processName_, "") };
      inline AccessLogs& setProcessName(string processName) { DARABONBA_PTR_SET_VALUE(processName_, processName) };


      // remoteAddress Field Functions 
      bool hasRemoteAddress() const { return this->remoteAddress_ != nullptr;};
      void deleteRemoteAddress() { this->remoteAddress_ = nullptr;};
      inline string getRemoteAddress() const { DARABONBA_PTR_GET_DEFAULT(remoteAddress_, "") };
      inline AccessLogs& setRemoteAddress(string remoteAddress) { DARABONBA_PTR_SET_VALUE(remoteAddress_, remoteAddress) };


      // remoteHost Field Functions 
      bool hasRemoteHost() const { return this->remoteHost_ != nullptr;};
      void deleteRemoteHost() { this->remoteHost_ = nullptr;};
      inline string getRemoteHost() const { DARABONBA_PTR_GET_DEFAULT(remoteHost_, "") };
      inline AccessLogs& setRemoteHost(string remoteHost) { DARABONBA_PTR_SET_VALUE(remoteHost_, remoteHost) };


      // remotePort Field Functions 
      bool hasRemotePort() const { return this->remotePort_ != nullptr;};
      void deleteRemotePort() { this->remotePort_ = nullptr;};
      inline string getRemotePort() const { DARABONBA_PTR_GET_DEFAULT(remotePort_, "") };
      inline AccessLogs& setRemotePort(string remotePort) { DARABONBA_PTR_SET_VALUE(remotePort_, remotePort) };


      // srcAddress Field Functions 
      bool hasSrcAddress() const { return this->srcAddress_ != nullptr;};
      void deleteSrcAddress() { this->srcAddress_ = nullptr;};
      inline string getSrcAddress() const { DARABONBA_PTR_GET_DEFAULT(srcAddress_, "") };
      inline AccessLogs& setSrcAddress(string srcAddress) { DARABONBA_PTR_SET_VALUE(srcAddress_, srcAddress) };


      // username Field Functions 
      bool hasUsername() const { return this->username_ != nullptr;};
      void deleteUsername() { this->username_ = nullptr;};
      inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
      inline AccessLogs& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    protected:
      // The action taken upon a rule hit.
      shared_ptr<string> blockAction_ {};
      // The department.
      shared_ptr<string> department_ {};
      // The destination URL accessed.
      shared_ptr<string> destAddress_ {};
      // The event time.
      shared_ptr<string> eventTime_ {};
      // The Layer 4 protocol type.
      shared_ptr<string> l4ProtocolType_ {};
      // The name of the client process that initiated the access.
      shared_ptr<string> processName_ {};
      // The destination IP address.
      shared_ptr<string> remoteAddress_ {};
      // The destination domain name.
      shared_ptr<string> remoteHost_ {};
      // The destination port.
      shared_ptr<string> remotePort_ {};
      // The source address of the client.
      shared_ptr<string> srcAddress_ {};
      // The username.
      shared_ptr<string> username_ {};
    };

    virtual bool empty() const override { return this->accessLogs_ == nullptr
        && this->requestId_ == nullptr && this->totalNum_ == nullptr; };
    // accessLogs Field Functions 
    bool hasAccessLogs() const { return this->accessLogs_ != nullptr;};
    void deleteAccessLogs() { this->accessLogs_ = nullptr;};
    inline const vector<ListDomainAccessLogsResponseBody::AccessLogs> & getAccessLogs() const { DARABONBA_PTR_GET_CONST(accessLogs_, vector<ListDomainAccessLogsResponseBody::AccessLogs>) };
    inline vector<ListDomainAccessLogsResponseBody::AccessLogs> getAccessLogs() { DARABONBA_PTR_GET(accessLogs_, vector<ListDomainAccessLogsResponseBody::AccessLogs>) };
    inline ListDomainAccessLogsResponseBody& setAccessLogs(const vector<ListDomainAccessLogsResponseBody::AccessLogs> & accessLogs) { DARABONBA_PTR_SET_VALUE(accessLogs_, accessLogs) };
    inline ListDomainAccessLogsResponseBody& setAccessLogs(vector<ListDomainAccessLogsResponseBody::AccessLogs> && accessLogs) { DARABONBA_PTR_SET_RVALUE(accessLogs_, accessLogs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDomainAccessLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int32_t getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0) };
    inline ListDomainAccessLogsResponseBody& setTotalNum(int32_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


  protected:
    // The list of access log records.
    shared_ptr<vector<ListDomainAccessLogsResponseBody::AccessLogs>> accessLogs_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The total number of records that match the query conditions.
    shared_ptr<int32_t> totalNum_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
