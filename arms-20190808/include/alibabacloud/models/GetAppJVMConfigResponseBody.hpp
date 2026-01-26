// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPJVMCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPPJVMCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetAppJVMConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppJVMConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(JvmInfoList, jvmInfoList_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAppJVMConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(JvmInfoList, jvmInfoList_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetAppJVMConfigResponseBody() = default ;
    GetAppJVMConfigResponseBody(const GetAppJVMConfigResponseBody &) = default ;
    GetAppJVMConfigResponseBody(GetAppJVMConfigResponseBody &&) = default ;
    GetAppJVMConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppJVMConfigResponseBody() = default ;
    GetAppJVMConfigResponseBody& operator=(const GetAppJVMConfigResponseBody &) = default ;
    GetAppJVMConfigResponseBody& operator=(GetAppJVMConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class JvmInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const JvmInfoList& obj) { 
        DARABONBA_PTR_TO_JSON(AgentVersion, agentVersion_);
        DARABONBA_PTR_TO_JSON(HostName, hostName_);
        DARABONBA_PTR_TO_JSON(Ip, ip_);
        DARABONBA_PTR_TO_JSON(Pid, pid_);
        DARABONBA_PTR_TO_JSON(ProcId, procId_);
        DARABONBA_PTR_TO_JSON(VmArgs, vmArgs_);
      };
      friend void from_json(const Darabonba::Json& j, JvmInfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(AgentVersion, agentVersion_);
        DARABONBA_PTR_FROM_JSON(HostName, hostName_);
        DARABONBA_PTR_FROM_JSON(Ip, ip_);
        DARABONBA_PTR_FROM_JSON(Pid, pid_);
        DARABONBA_PTR_FROM_JSON(ProcId, procId_);
        DARABONBA_PTR_FROM_JSON(VmArgs, vmArgs_);
      };
      JvmInfoList() = default ;
      JvmInfoList(const JvmInfoList &) = default ;
      JvmInfoList(JvmInfoList &&) = default ;
      JvmInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~JvmInfoList() = default ;
      JvmInfoList& operator=(const JvmInfoList &) = default ;
      JvmInfoList& operator=(JvmInfoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->agentVersion_ == nullptr
        && this->hostName_ == nullptr && this->ip_ == nullptr && this->pid_ == nullptr && this->procId_ == nullptr && this->vmArgs_ == nullptr; };
      // agentVersion Field Functions 
      bool hasAgentVersion() const { return this->agentVersion_ != nullptr;};
      void deleteAgentVersion() { this->agentVersion_ = nullptr;};
      inline string getAgentVersion() const { DARABONBA_PTR_GET_DEFAULT(agentVersion_, "") };
      inline JvmInfoList& setAgentVersion(string agentVersion) { DARABONBA_PTR_SET_VALUE(agentVersion_, agentVersion) };


      // hostName Field Functions 
      bool hasHostName() const { return this->hostName_ != nullptr;};
      void deleteHostName() { this->hostName_ = nullptr;};
      inline string getHostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
      inline JvmInfoList& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline JvmInfoList& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      // pid Field Functions 
      bool hasPid() const { return this->pid_ != nullptr;};
      void deletePid() { this->pid_ = nullptr;};
      inline string getPid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
      inline JvmInfoList& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


      // procId Field Functions 
      bool hasProcId() const { return this->procId_ != nullptr;};
      void deleteProcId() { this->procId_ = nullptr;};
      inline string getProcId() const { DARABONBA_PTR_GET_DEFAULT(procId_, "") };
      inline JvmInfoList& setProcId(string procId) { DARABONBA_PTR_SET_VALUE(procId_, procId) };


      // vmArgs Field Functions 
      bool hasVmArgs() const { return this->vmArgs_ != nullptr;};
      void deleteVmArgs() { this->vmArgs_ = nullptr;};
      inline string getVmArgs() const { DARABONBA_PTR_GET_DEFAULT(vmArgs_, "") };
      inline JvmInfoList& setVmArgs(string vmArgs) { DARABONBA_PTR_SET_VALUE(vmArgs_, vmArgs) };


    protected:
      // The version of the agent.
      shared_ptr<string> agentVersion_ {};
      // The hostname.
      shared_ptr<string> hostName_ {};
      // The IP address.
      shared_ptr<string> ip_ {};
      // The application ID.
      shared_ptr<string> pid_ {};
      // The process ID.
      shared_ptr<string> procId_ {};
      // The VM parameters.
      shared_ptr<string> vmArgs_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->jvmInfoList_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetAppJVMConfigResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // jvmInfoList Field Functions 
    bool hasJvmInfoList() const { return this->jvmInfoList_ != nullptr;};
    void deleteJvmInfoList() { this->jvmInfoList_ = nullptr;};
    inline const vector<GetAppJVMConfigResponseBody::JvmInfoList> & getJvmInfoList() const { DARABONBA_PTR_GET_CONST(jvmInfoList_, vector<GetAppJVMConfigResponseBody::JvmInfoList>) };
    inline vector<GetAppJVMConfigResponseBody::JvmInfoList> getJvmInfoList() { DARABONBA_PTR_GET(jvmInfoList_, vector<GetAppJVMConfigResponseBody::JvmInfoList>) };
    inline GetAppJVMConfigResponseBody& setJvmInfoList(const vector<GetAppJVMConfigResponseBody::JvmInfoList> & jvmInfoList) { DARABONBA_PTR_SET_VALUE(jvmInfoList_, jvmInfoList) };
    inline GetAppJVMConfigResponseBody& setJvmInfoList(vector<GetAppJVMConfigResponseBody::JvmInfoList> && jvmInfoList) { DARABONBA_PTR_SET_RVALUE(jvmInfoList_, jvmInfoList) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAppJVMConfigResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAppJVMConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAppJVMConfigResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code. Valid values: 2XX: The request is successful. 3XX: A redirection message is returned. 4XX: The request is invalid. 5XX: A server error occurs.
    shared_ptr<int32_t> code_ {};
    // The list of JVM information.
    shared_ptr<vector<GetAppJVMConfigResponseBody::JvmInfoList>> jvmInfoList_ {};
    // The error message returned if the request failed.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values: true and false.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
