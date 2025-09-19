// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEREBOOTSTATUSRESPONSEBODYREBOOTSTATUSES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEREBOOTSTATUSRESPONSEBODYREBOOTSTATUSES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeInstanceRebootStatusResponseBodyRebootStatuses : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceRebootStatusResponseBodyRebootStatuses& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(RebootStatus, rebootStatus_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceRebootStatusResponseBodyRebootStatuses& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(RebootStatus, rebootStatus_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DescribeInstanceRebootStatusResponseBodyRebootStatuses() = default ;
    DescribeInstanceRebootStatusResponseBodyRebootStatuses(const DescribeInstanceRebootStatusResponseBodyRebootStatuses &) = default ;
    DescribeInstanceRebootStatusResponseBodyRebootStatuses(DescribeInstanceRebootStatusResponseBodyRebootStatuses &&) = default ;
    DescribeInstanceRebootStatusResponseBodyRebootStatuses(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceRebootStatusResponseBodyRebootStatuses() = default ;
    DescribeInstanceRebootStatusResponseBodyRebootStatuses& operator=(const DescribeInstanceRebootStatusResponseBodyRebootStatuses &) = default ;
    DescribeInstanceRebootStatusResponseBodyRebootStatuses& operator=(DescribeInstanceRebootStatusResponseBodyRebootStatuses &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->msg_ != nullptr && this->rebootStatus_ != nullptr && this->uuid_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeInstanceRebootStatusResponseBodyRebootStatuses& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string msg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline DescribeInstanceRebootStatusResponseBodyRebootStatuses& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // rebootStatus Field Functions 
    bool hasRebootStatus() const { return this->rebootStatus_ != nullptr;};
    void deleteRebootStatus() { this->rebootStatus_ = nullptr;};
    inline int32_t rebootStatus() const { DARABONBA_PTR_GET_DEFAULT(rebootStatus_, 0) };
    inline DescribeInstanceRebootStatusResponseBodyRebootStatuses& setRebootStatus(int32_t rebootStatus) { DARABONBA_PTR_SET_VALUE(rebootStatus_, rebootStatus) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeInstanceRebootStatusResponseBodyRebootStatuses& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The error code that is returned when the server failed to be restarted. Valid values:
    // 
    // *   **10001**: The restart command failed to be sent.
    // *   **10002**: The restart operation failed.
    // *   **10003**: A timeout error occurs.
    std::shared_ptr<string> code_ = nullptr;
    // The message that is returned when the server failed to be restarted.
    std::shared_ptr<string> msg_ = nullptr;
    // The status of the server. Valid values:
    // 
    // *   **0**: The server is being restarted.
    // *   **1**: The server is restarted.
    // *   **2**: The server failed to be restarted.
    std::shared_ptr<int32_t> rebootStatus_ = nullptr;
    // The UUID of the server.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
