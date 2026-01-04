// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBLOCKSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBLOCKSTATUSRESPONSEBODY_HPP_
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
  class DescribeBlockStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBlockStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StatusList, statusList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBlockStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StatusList, statusList_);
    };
    DescribeBlockStatusResponseBody() = default ;
    DescribeBlockStatusResponseBody(const DescribeBlockStatusResponseBody &) = default ;
    DescribeBlockStatusResponseBody(DescribeBlockStatusResponseBody &&) = default ;
    DescribeBlockStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBlockStatusResponseBody() = default ;
    DescribeBlockStatusResponseBody& operator=(const DescribeBlockStatusResponseBody &) = default ;
    DescribeBlockStatusResponseBody& operator=(DescribeBlockStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StatusList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StatusList& obj) { 
        DARABONBA_PTR_TO_JSON(BlockStatusList, blockStatusList_);
        DARABONBA_PTR_TO_JSON(Ip, ip_);
      };
      friend void from_json(const Darabonba::Json& j, StatusList& obj) { 
        DARABONBA_PTR_FROM_JSON(BlockStatusList, blockStatusList_);
        DARABONBA_PTR_FROM_JSON(Ip, ip_);
      };
      StatusList() = default ;
      StatusList(const StatusList &) = default ;
      StatusList(StatusList &&) = default ;
      StatusList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StatusList() = default ;
      StatusList& operator=(const StatusList &) = default ;
      StatusList& operator=(StatusList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class BlockStatusList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BlockStatusList& obj) { 
          DARABONBA_PTR_TO_JSON(BlockStatus, blockStatus_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(Line, line_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        };
        friend void from_json(const Darabonba::Json& j, BlockStatusList& obj) { 
          DARABONBA_PTR_FROM_JSON(BlockStatus, blockStatus_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(Line, line_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        };
        BlockStatusList() = default ;
        BlockStatusList(const BlockStatusList &) = default ;
        BlockStatusList(BlockStatusList &&) = default ;
        BlockStatusList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BlockStatusList() = default ;
        BlockStatusList& operator=(const BlockStatusList &) = default ;
        BlockStatusList& operator=(BlockStatusList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->blockStatus_ == nullptr
        && this->endTime_ == nullptr && this->line_ == nullptr && this->startTime_ == nullptr; };
        // blockStatus Field Functions 
        bool hasBlockStatus() const { return this->blockStatus_ != nullptr;};
        void deleteBlockStatus() { this->blockStatus_ = nullptr;};
        inline string getBlockStatus() const { DARABONBA_PTR_GET_DEFAULT(blockStatus_, "") };
        inline BlockStatusList& setBlockStatus(string blockStatus) { DARABONBA_PTR_SET_VALUE(blockStatus_, blockStatus) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
        inline BlockStatusList& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // line Field Functions 
        bool hasLine() const { return this->line_ != nullptr;};
        void deleteLine() { this->line_ = nullptr;};
        inline string getLine() const { DARABONBA_PTR_GET_DEFAULT(line_, "") };
        inline BlockStatusList& setLine(string line) { DARABONBA_PTR_SET_VALUE(line_, line) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
        inline BlockStatusList& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      protected:
        // The blocking status of the network traffic. Valid values:
        // 
        // *   **areablock**: Network traffic is blocked.
        // *   **normal**: Network traffic is not blocked.
        shared_ptr<string> blockStatus_ {};
        // The end time of the blocking. This value is a UNIX timestamp. Unit: seconds.
        shared_ptr<int64_t> endTime_ {};
        // The Internet service provider (ISP) line from which the traffic is blocked. Valid values:
        // 
        // *   **ct**: China Telecom (International)
        // *   **cut**: China Unicom (International)
        shared_ptr<string> line_ {};
        // The start time of the blocking. This value is a UNIX timestamp. Unit: seconds.
        shared_ptr<int64_t> startTime_ {};
      };

      virtual bool empty() const override { return this->blockStatusList_ == nullptr
        && this->ip_ == nullptr; };
      // blockStatusList Field Functions 
      bool hasBlockStatusList() const { return this->blockStatusList_ != nullptr;};
      void deleteBlockStatusList() { this->blockStatusList_ = nullptr;};
      inline const vector<StatusList::BlockStatusList> & getBlockStatusList() const { DARABONBA_PTR_GET_CONST(blockStatusList_, vector<StatusList::BlockStatusList>) };
      inline vector<StatusList::BlockStatusList> getBlockStatusList() { DARABONBA_PTR_GET(blockStatusList_, vector<StatusList::BlockStatusList>) };
      inline StatusList& setBlockStatusList(const vector<StatusList::BlockStatusList> & blockStatusList) { DARABONBA_PTR_SET_VALUE(blockStatusList_, blockStatusList) };
      inline StatusList& setBlockStatusList(vector<StatusList::BlockStatusList> && blockStatusList) { DARABONBA_PTR_SET_RVALUE(blockStatusList_, blockStatusList) };


      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline StatusList& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    protected:
      // An array that consists of details of the Diversion from Origin Server configuration.
      shared_ptr<vector<StatusList::BlockStatusList>> blockStatusList_ {};
      // The IP address of the instance.
      shared_ptr<string> ip_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->statusList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBlockStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // statusList Field Functions 
    bool hasStatusList() const { return this->statusList_ != nullptr;};
    void deleteStatusList() { this->statusList_ = nullptr;};
    inline const vector<DescribeBlockStatusResponseBody::StatusList> & getStatusList() const { DARABONBA_PTR_GET_CONST(statusList_, vector<DescribeBlockStatusResponseBody::StatusList>) };
    inline vector<DescribeBlockStatusResponseBody::StatusList> getStatusList() { DARABONBA_PTR_GET(statusList_, vector<DescribeBlockStatusResponseBody::StatusList>) };
    inline DescribeBlockStatusResponseBody& setStatusList(const vector<DescribeBlockStatusResponseBody::StatusList> & statusList) { DARABONBA_PTR_SET_VALUE(statusList_, statusList) };
    inline DescribeBlockStatusResponseBody& setStatusList(vector<DescribeBlockStatusResponseBody::StatusList> && statusList) { DARABONBA_PTR_SET_RVALUE(statusList_, statusList) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // An array that consists of details of the Diversion from Origin Server configurations of the instance.
    shared_ptr<vector<DescribeBlockStatusResponseBody::StatusList>> statusList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
