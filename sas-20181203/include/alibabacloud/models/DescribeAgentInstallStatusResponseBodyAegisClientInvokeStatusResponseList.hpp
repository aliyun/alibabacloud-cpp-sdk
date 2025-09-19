// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAGENTINSTALLSTATUSRESPONSEBODYAEGISCLIENTINVOKESTATUSRESPONSELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAGENTINSTALLSTATUSRESPONSEBODYAEGISCLIENTINVOKESTATUSRESPONSELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeAgentInstallStatusResponseBodyAegisClientInvokeStatusResponseList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAgentInstallStatusResponseBodyAegisClientInvokeStatusResponseList& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(ResuleCode, resuleCode_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAgentInstallStatusResponseBodyAegisClientInvokeStatusResponseList& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(ResuleCode, resuleCode_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DescribeAgentInstallStatusResponseBodyAegisClientInvokeStatusResponseList() = default ;
    DescribeAgentInstallStatusResponseBodyAegisClientInvokeStatusResponseList(const DescribeAgentInstallStatusResponseBodyAegisClientInvokeStatusResponseList &) = default ;
    DescribeAgentInstallStatusResponseBodyAegisClientInvokeStatusResponseList(DescribeAgentInstallStatusResponseBodyAegisClientInvokeStatusResponseList &&) = default ;
    DescribeAgentInstallStatusResponseBodyAegisClientInvokeStatusResponseList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAgentInstallStatusResponseBodyAegisClientInvokeStatusResponseList() = default ;
    DescribeAgentInstallStatusResponseBodyAegisClientInvokeStatusResponseList& operator=(const DescribeAgentInstallStatusResponseBodyAegisClientInvokeStatusResponseList &) = default ;
    DescribeAgentInstallStatusResponseBodyAegisClientInvokeStatusResponseList& operator=(DescribeAgentInstallStatusResponseBodyAegisClientInvokeStatusResponseList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->message_ != nullptr
        && this->resuleCode_ != nullptr && this->result_ != nullptr && this->uuid_ != nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeAgentInstallStatusResponseBodyAegisClientInvokeStatusResponseList& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // resuleCode Field Functions 
    bool hasResuleCode() const { return this->resuleCode_ != nullptr;};
    void deleteResuleCode() { this->resuleCode_ = nullptr;};
    inline string resuleCode() const { DARABONBA_PTR_GET_DEFAULT(resuleCode_, "") };
    inline DescribeAgentInstallStatusResponseBodyAegisClientInvokeStatusResponseList& setResuleCode(string resuleCode) { DARABONBA_PTR_SET_VALUE(resuleCode_, resuleCode) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline int32_t result() const { DARABONBA_PTR_GET_DEFAULT(result_, 0) };
    inline DescribeAgentInstallStatusResponseBodyAegisClientInvokeStatusResponseList& setResult(int32_t result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeAgentInstallStatusResponseBodyAegisClientInvokeStatusResponseList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
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
    std::shared_ptr<string> resuleCode_ = nullptr;
    // The installation result. Valid value:
    // 
    // *   **-1**: The agent is not installed.
    // *   **0**: The agent is being installed.
    // *   **1**: The agent is installed.
    // *   **2**: The installation failed.
    std::shared_ptr<int32_t> result_ = nullptr;
    // The UUID of the server.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
