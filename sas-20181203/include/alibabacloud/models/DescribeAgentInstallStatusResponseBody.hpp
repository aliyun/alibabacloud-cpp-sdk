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
      // The message returned for the request result.
      shared_ptr<string> message_ {};
      // The status code. Valid values:
      // - **-1**: Not installed.
      // - **0**: Installed.
      // - **1**: Failed to create the client directory.
      // - **2**: Failed to download the installation package.
      // - **3**: The installation file does not exist.
      // - **4**: The installation file verification information does not exist.
      // - **5**: The installation file failed verification.
      // - **6**: Failed to execute the installation file.
      // - **7**: Installation failed due to insufficient permissions.
      // - **8**: The client process was not detected.
      // - **100**: Installation failed due to an unknown error.
      // - **1001**: Installation failed. One-click client installation is not supported in this region.
      // - **1002**: Installation failed. Non-cloud hosts are not supported. Run the installation script on the server.
      // - **1003**: Installation failed. The operating system type is not supported.
      // - **1004**: Internal error. Try again later.
      // - **1005**: The ECS instance is not running. Start the ECS instance and try again.
      // - **1006**: One-click client installation is not supported for ECS instances in the classic network.
      // - **1007**: The command process was manually stopped.
      // - **1008**: Cloud Assistant is not installed. The client cannot be installed.
      // - **1009**: Command execution timed out. Try again later.
      // - **1010**: The server is already online. Client installation is not required.
      shared_ptr<string> resuleCode_ {};
      // The status result. Valid values:
      // 
      // - **-1**: not installed
      // - **0**: installing
      // - **1**: installed
      // - **2**: installation failed.
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
    // The list of server statuses.
    shared_ptr<vector<DescribeAgentInstallStatusResponseBody::AegisClientInvokeStatusResponseList>> aegisClientInvokeStatusResponseList_ {};
    // The request ID, which is a unique identifier generated by Alibaba Cloud for the request. You can use this ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
