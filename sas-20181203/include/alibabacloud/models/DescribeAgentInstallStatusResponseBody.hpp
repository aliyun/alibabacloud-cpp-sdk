// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAGENTINSTALLSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAGENTINSTALLSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeAgentInstallStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAgentInstallStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AegisClientInvokeStatusResponseList, aegisClientInvokeStatusResponseList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAgentInstallStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AegisClientInvokeStatusResponseList, aegisClientInvokeStatusResponseList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAgentInstallStatusResponseBody() = default ;
    DescribeAgentInstallStatusResponseBody(const DescribeAgentInstallStatusResponseBody &) = default ;
    DescribeAgentInstallStatusResponseBody(DescribeAgentInstallStatusResponseBody &&) = default ;
    DescribeAgentInstallStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAgentInstallStatusResponseBody() = default ;
    DescribeAgentInstallStatusResponseBody& operator=(const DescribeAgentInstallStatusResponseBody &) = default ;
    DescribeAgentInstallStatusResponseBody& operator=(DescribeAgentInstallStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AegisClientInvokeStatusResponseList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AegisClientInvokeStatusResponseList& obj) { 
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(ResuleCode, resuleCode_);
        DARABONBA_PTR_TO_JSON(Result, result_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      };
      friend void from_json(const Darabonba::Json& j, AegisClientInvokeStatusResponseList& obj) { 
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(ResuleCode, resuleCode_);
        DARABONBA_PTR_FROM_JSON(Result, result_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      };
      AegisClientInvokeStatusResponseList() = default ;
      AegisClientInvokeStatusResponseList(const AegisClientInvokeStatusResponseList &) = default ;
      AegisClientInvokeStatusResponseList(AegisClientInvokeStatusResponseList &&) = default ;
      AegisClientInvokeStatusResponseList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AegisClientInvokeStatusResponseList() = default ;
      AegisClientInvokeStatusResponseList& operator=(const AegisClientInvokeStatusResponseList &) = default ;
      AegisClientInvokeStatusResponseList& operator=(AegisClientInvokeStatusResponseList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->message_ == nullptr
        && this->resuleCode_ == nullptr && this->result_ == nullptr && this->uuid_ == nullptr; };
      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline AegisClientInvokeStatusResponseList& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // resuleCode Field Functions 
      bool hasResuleCode() const { return this->resuleCode_ != nullptr;};
      void deleteResuleCode() { this->resuleCode_ = nullptr;};
      inline string getResuleCode() const { DARABONBA_PTR_GET_DEFAULT(resuleCode_, "") };
      inline AegisClientInvokeStatusResponseList& setResuleCode(string resuleCode) { DARABONBA_PTR_SET_VALUE(resuleCode_, resuleCode) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline int32_t getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, 0) };
      inline AegisClientInvokeStatusResponseList& setResult(int32_t result) { DARABONBA_PTR_SET_VALUE(result_, result) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline AegisClientInvokeStatusResponseList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      // The returned message.
      shared_ptr<string> message_ {};
      // The installation status. Valid value:
      // 
      // *   **-1**: The agent is not installed.
      // *   **0**: The agent is installed.
      // *   **1**: Failed to create a directory in the client.
      // *   **2**: Failed to download the installation package.
      // *   **3**: The installation file does not exist.
      // *   **4**: The verification information of the installation file does not exist.
      // *   **5**: Failed to verify the installation file.
      // *   **6**: Failed to execute the installation file.
      // *   **7**: You do not have the required permissions. The installation failed.
      // *   **8**: No client process is detected.
      // *   **100**: The installation failed due to an unknown error.
      // *   **1001**: The installation failed. One-click installation is not supported in this region.
      // *   **1002**: The installation failed. Servers that are not provided by Alibaba Cloud are not supported. Install the agent by executing a script on the server.
      // *   **1003**: The installation failed. The operating system is not supported.
      // *   **1004**: An internal error occurred. Try again later.
      // *   **1005**: The Elastic Compute Service (ECS) instance is not started. Start the ECS instance and try again.
      // *   **1006**: One-click installation is not supported for ECS instances of the classic network type.
      // *   **1007**: The running command is manually stopped.
      // *   **1008**: Cloud Assistant is not installed. You cannot install the client.
      // *   **1009**: The command execution timed out. Try again later.
      // *   **1010**: The machine is already online. You do not need to install a client.
      shared_ptr<string> resuleCode_ {};
      // The installation result. Valid value:
      // 
      // *   **-1**: The agent is not installed.
      // *   **0**: The agent is being installed.
      // *   **1**: The agent is installed.
      // *   **2**: The installation failed.
      shared_ptr<int32_t> result_ {};
      // The UUID of the server.
      shared_ptr<string> uuid_ {};
    };

    virtual bool empty() const override { return this->aegisClientInvokeStatusResponseList_ == nullptr
        && this->requestId_ == nullptr; };
    // aegisClientInvokeStatusResponseList Field Functions 
    bool hasAegisClientInvokeStatusResponseList() const { return this->aegisClientInvokeStatusResponseList_ != nullptr;};
    void deleteAegisClientInvokeStatusResponseList() { this->aegisClientInvokeStatusResponseList_ = nullptr;};
    inline const vector<DescribeAgentInstallStatusResponseBody::AegisClientInvokeStatusResponseList> & getAegisClientInvokeStatusResponseList() const { DARABONBA_PTR_GET_CONST(aegisClientInvokeStatusResponseList_, vector<DescribeAgentInstallStatusResponseBody::AegisClientInvokeStatusResponseList>) };
    inline vector<DescribeAgentInstallStatusResponseBody::AegisClientInvokeStatusResponseList> getAegisClientInvokeStatusResponseList() { DARABONBA_PTR_GET(aegisClientInvokeStatusResponseList_, vector<DescribeAgentInstallStatusResponseBody::AegisClientInvokeStatusResponseList>) };
    inline DescribeAgentInstallStatusResponseBody& setAegisClientInvokeStatusResponseList(const vector<DescribeAgentInstallStatusResponseBody::AegisClientInvokeStatusResponseList> & aegisClientInvokeStatusResponseList) { DARABONBA_PTR_SET_VALUE(aegisClientInvokeStatusResponseList_, aegisClientInvokeStatusResponseList) };
    inline DescribeAgentInstallStatusResponseBody& setAegisClientInvokeStatusResponseList(vector<DescribeAgentInstallStatusResponseBody::AegisClientInvokeStatusResponseList> && aegisClientInvokeStatusResponseList) { DARABONBA_PTR_SET_RVALUE(aegisClientInvokeStatusResponseList_, aegisClientInvokeStatusResponseList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAgentInstallStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status of servers.
    shared_ptr<vector<DescribeAgentInstallStatusResponseBody::AegisClientInvokeStatusResponseList>> aegisClientInvokeStatusResponseList_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
