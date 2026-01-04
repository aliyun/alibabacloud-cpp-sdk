// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBLACKHOLESTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBLACKHOLESTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeBlackholeStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBlackholeStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BlackholeStatus, blackholeStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBlackholeStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BlackholeStatus, blackholeStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeBlackholeStatusResponseBody() = default ;
    DescribeBlackholeStatusResponseBody(const DescribeBlackholeStatusResponseBody &) = default ;
    DescribeBlackholeStatusResponseBody(DescribeBlackholeStatusResponseBody &&) = default ;
    DescribeBlackholeStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBlackholeStatusResponseBody() = default ;
    DescribeBlackholeStatusResponseBody& operator=(const DescribeBlackholeStatusResponseBody &) = default ;
    DescribeBlackholeStatusResponseBody& operator=(DescribeBlackholeStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BlackholeStatus : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BlackholeStatus& obj) { 
        DARABONBA_PTR_TO_JSON(BlackStatus, blackStatus_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(Ip, ip_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, BlackholeStatus& obj) { 
        DARABONBA_PTR_FROM_JSON(BlackStatus, blackStatus_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(Ip, ip_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      };
      BlackholeStatus() = default ;
      BlackholeStatus(const BlackholeStatus &) = default ;
      BlackholeStatus(BlackholeStatus &&) = default ;
      BlackholeStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BlackholeStatus() = default ;
      BlackholeStatus& operator=(const BlackholeStatus &) = default ;
      BlackholeStatus& operator=(BlackholeStatus &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->blackStatus_ == nullptr
        && this->endTime_ == nullptr && this->ip_ == nullptr && this->startTime_ == nullptr; };
      // blackStatus Field Functions 
      bool hasBlackStatus() const { return this->blackStatus_ != nullptr;};
      void deleteBlackStatus() { this->blackStatus_ = nullptr;};
      inline string getBlackStatus() const { DARABONBA_PTR_GET_DEFAULT(blackStatus_, "") };
      inline BlackholeStatus& setBlackStatus(string blackStatus) { DARABONBA_PTR_SET_VALUE(blackStatus_, blackStatus) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline BlackholeStatus& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline BlackholeStatus& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline BlackholeStatus& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      // Indicates whether blackhole filtering is triggered for the instance. Valid values:
      // 
      // *   **blackhole**: yes
      // *   **normal**: no
      shared_ptr<string> blackStatus_ {};
      // The end time of blackhole filtering. The value is a UNIX timestamp. Unit: seconds.
      shared_ptr<int64_t> endTime_ {};
      // The IP address of the instance.
      shared_ptr<string> ip_ {};
      // The start time of blackhole filtering. The value is a UNIX timestamp. Unit: seconds.
      shared_ptr<int64_t> startTime_ {};
    };

    virtual bool empty() const override { return this->blackholeStatus_ == nullptr
        && this->requestId_ == nullptr; };
    // blackholeStatus Field Functions 
    bool hasBlackholeStatus() const { return this->blackholeStatus_ != nullptr;};
    void deleteBlackholeStatus() { this->blackholeStatus_ = nullptr;};
    inline const vector<DescribeBlackholeStatusResponseBody::BlackholeStatus> & getBlackholeStatus() const { DARABONBA_PTR_GET_CONST(blackholeStatus_, vector<DescribeBlackholeStatusResponseBody::BlackholeStatus>) };
    inline vector<DescribeBlackholeStatusResponseBody::BlackholeStatus> getBlackholeStatus() { DARABONBA_PTR_GET(blackholeStatus_, vector<DescribeBlackholeStatusResponseBody::BlackholeStatus>) };
    inline DescribeBlackholeStatusResponseBody& setBlackholeStatus(const vector<DescribeBlackholeStatusResponseBody::BlackholeStatus> & blackholeStatus) { DARABONBA_PTR_SET_VALUE(blackholeStatus_, blackholeStatus) };
    inline DescribeBlackholeStatusResponseBody& setBlackholeStatus(vector<DescribeBlackholeStatusResponseBody::BlackholeStatus> && blackholeStatus) { DARABONBA_PTR_SET_RVALUE(blackholeStatus_, blackholeStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBlackholeStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the blackhole filtering status of the instance.
    shared_ptr<vector<DescribeBlackholeStatusResponseBody::BlackholeStatus>> blackholeStatus_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
