// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEREBOOTSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEREBOOTSTATUSRESPONSEBODY_HPP_
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
  class DescribeInstanceRebootStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceRebootStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RebootStatuses, rebootStatuses_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceRebootStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RebootStatuses, rebootStatuses_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeInstanceRebootStatusResponseBody() = default ;
    DescribeInstanceRebootStatusResponseBody(const DescribeInstanceRebootStatusResponseBody &) = default ;
    DescribeInstanceRebootStatusResponseBody(DescribeInstanceRebootStatusResponseBody &&) = default ;
    DescribeInstanceRebootStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceRebootStatusResponseBody() = default ;
    DescribeInstanceRebootStatusResponseBody& operator=(const DescribeInstanceRebootStatusResponseBody &) = default ;
    DescribeInstanceRebootStatusResponseBody& operator=(DescribeInstanceRebootStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RebootStatuses : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RebootStatuses& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(Msg, msg_);
        DARABONBA_PTR_TO_JSON(RebootStatus, rebootStatus_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      };
      friend void from_json(const Darabonba::Json& j, RebootStatuses& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(Msg, msg_);
        DARABONBA_PTR_FROM_JSON(RebootStatus, rebootStatus_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      };
      RebootStatuses() = default ;
      RebootStatuses(const RebootStatuses &) = default ;
      RebootStatuses(RebootStatuses &&) = default ;
      RebootStatuses(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RebootStatuses() = default ;
      RebootStatuses& operator=(const RebootStatuses &) = default ;
      RebootStatuses& operator=(RebootStatuses &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->code_ == nullptr
        && this->msg_ == nullptr && this->rebootStatus_ == nullptr && this->uuid_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline RebootStatuses& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // msg Field Functions 
      bool hasMsg() const { return this->msg_ != nullptr;};
      void deleteMsg() { this->msg_ = nullptr;};
      inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
      inline RebootStatuses& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


      // rebootStatus Field Functions 
      bool hasRebootStatus() const { return this->rebootStatus_ != nullptr;};
      void deleteRebootStatus() { this->rebootStatus_ = nullptr;};
      inline int32_t getRebootStatus() const { DARABONBA_PTR_GET_DEFAULT(rebootStatus_, 0) };
      inline RebootStatuses& setRebootStatus(int32_t rebootStatus) { DARABONBA_PTR_SET_VALUE(rebootStatus_, rebootStatus) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline RebootStatuses& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      // The error code that is returned when the server failed to be restarted. Valid values:
      // 
      // *   **10001**: The restart command failed to be sent.
      // *   **10002**: The restart operation failed.
      // *   **10003**: A timeout error occurs.
      shared_ptr<string> code_ {};
      // The message that is returned when the server failed to be restarted.
      shared_ptr<string> msg_ {};
      // The status of the server. Valid values:
      // 
      // *   **0**: The server is being restarted.
      // *   **1**: The server is restarted.
      // *   **2**: The server failed to be restarted.
      shared_ptr<int32_t> rebootStatus_ {};
      // The UUID of the server.
      shared_ptr<string> uuid_ {};
    };

    virtual bool empty() const override { return this->rebootStatuses_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // rebootStatuses Field Functions 
    bool hasRebootStatuses() const { return this->rebootStatuses_ != nullptr;};
    void deleteRebootStatuses() { this->rebootStatuses_ = nullptr;};
    inline const vector<DescribeInstanceRebootStatusResponseBody::RebootStatuses> & getRebootStatuses() const { DARABONBA_PTR_GET_CONST(rebootStatuses_, vector<DescribeInstanceRebootStatusResponseBody::RebootStatuses>) };
    inline vector<DescribeInstanceRebootStatusResponseBody::RebootStatuses> getRebootStatuses() { DARABONBA_PTR_GET(rebootStatuses_, vector<DescribeInstanceRebootStatusResponseBody::RebootStatuses>) };
    inline DescribeInstanceRebootStatusResponseBody& setRebootStatuses(const vector<DescribeInstanceRebootStatusResponseBody::RebootStatuses> & rebootStatuses) { DARABONBA_PTR_SET_VALUE(rebootStatuses_, rebootStatuses) };
    inline DescribeInstanceRebootStatusResponseBody& setRebootStatuses(vector<DescribeInstanceRebootStatusResponseBody::RebootStatuses> && rebootStatuses) { DARABONBA_PTR_SET_RVALUE(rebootStatuses_, rebootStatuses) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceRebootStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeInstanceRebootStatusResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // An array that consists of the status information about the servers that you restart.
    shared_ptr<vector<DescribeInstanceRebootStatusResponseBody::RebootStatuses>> rebootStatuses_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
