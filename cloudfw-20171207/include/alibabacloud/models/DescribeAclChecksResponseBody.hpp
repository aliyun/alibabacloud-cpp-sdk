// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACLCHECKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACLCHECKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeAclChecksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAclChecksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CheckRecords, checkRecords_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAclChecksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckRecords, checkRecords_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAclChecksResponseBody() = default ;
    DescribeAclChecksResponseBody(const DescribeAclChecksResponseBody &) = default ;
    DescribeAclChecksResponseBody(DescribeAclChecksResponseBody &&) = default ;
    DescribeAclChecksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAclChecksResponseBody() = default ;
    DescribeAclChecksResponseBody& operator=(const DescribeAclChecksResponseBody &) = default ;
    DescribeAclChecksResponseBody& operator=(DescribeAclChecksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CheckRecords : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CheckRecords& obj) { 
        DARABONBA_PTR_TO_JSON(AclType, aclType_);
        DARABONBA_PTR_TO_JSON(Records, records_);
      };
      friend void from_json(const Darabonba::Json& j, CheckRecords& obj) { 
        DARABONBA_PTR_FROM_JSON(AclType, aclType_);
        DARABONBA_PTR_FROM_JSON(Records, records_);
      };
      CheckRecords() = default ;
      CheckRecords(const CheckRecords &) = default ;
      CheckRecords(CheckRecords &&) = default ;
      CheckRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CheckRecords() = default ;
      CheckRecords& operator=(const CheckRecords &) = default ;
      CheckRecords& operator=(CheckRecords &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Records : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Records& obj) { 
          DARABONBA_PTR_TO_JSON(AclPendingCount, aclPendingCount_);
          DARABONBA_PTR_TO_JSON(AclTotalCount, aclTotalCount_);
          DARABONBA_PTR_TO_JSON(CheckName, checkName_);
          DARABONBA_PTR_TO_JSON(CheckStatus, checkStatus_);
          DARABONBA_PTR_TO_JSON(CheckType, checkType_);
          DARABONBA_PTR_TO_JSON(LastCheckTime, lastCheckTime_);
          DARABONBA_PTR_TO_JSON(Level, level_);
          DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        };
        friend void from_json(const Darabonba::Json& j, Records& obj) { 
          DARABONBA_PTR_FROM_JSON(AclPendingCount, aclPendingCount_);
          DARABONBA_PTR_FROM_JSON(AclTotalCount, aclTotalCount_);
          DARABONBA_PTR_FROM_JSON(CheckName, checkName_);
          DARABONBA_PTR_FROM_JSON(CheckStatus, checkStatus_);
          DARABONBA_PTR_FROM_JSON(CheckType, checkType_);
          DARABONBA_PTR_FROM_JSON(LastCheckTime, lastCheckTime_);
          DARABONBA_PTR_FROM_JSON(Level, level_);
          DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        };
        Records() = default ;
        Records(const Records &) = default ;
        Records(Records &&) = default ;
        Records(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Records() = default ;
        Records& operator=(const Records &) = default ;
        Records& operator=(Records &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->aclPendingCount_ == nullptr
        && this->aclTotalCount_ == nullptr && this->checkName_ == nullptr && this->checkStatus_ == nullptr && this->checkType_ == nullptr && this->lastCheckTime_ == nullptr
        && this->level_ == nullptr && this->taskId_ == nullptr; };
        // aclPendingCount Field Functions 
        bool hasAclPendingCount() const { return this->aclPendingCount_ != nullptr;};
        void deleteAclPendingCount() { this->aclPendingCount_ = nullptr;};
        inline int64_t getAclPendingCount() const { DARABONBA_PTR_GET_DEFAULT(aclPendingCount_, 0L) };
        inline Records& setAclPendingCount(int64_t aclPendingCount) { DARABONBA_PTR_SET_VALUE(aclPendingCount_, aclPendingCount) };


        // aclTotalCount Field Functions 
        bool hasAclTotalCount() const { return this->aclTotalCount_ != nullptr;};
        void deleteAclTotalCount() { this->aclTotalCount_ = nullptr;};
        inline int64_t getAclTotalCount() const { DARABONBA_PTR_GET_DEFAULT(aclTotalCount_, 0L) };
        inline Records& setAclTotalCount(int64_t aclTotalCount) { DARABONBA_PTR_SET_VALUE(aclTotalCount_, aclTotalCount) };


        // checkName Field Functions 
        bool hasCheckName() const { return this->checkName_ != nullptr;};
        void deleteCheckName() { this->checkName_ = nullptr;};
        inline string getCheckName() const { DARABONBA_PTR_GET_DEFAULT(checkName_, "") };
        inline Records& setCheckName(string checkName) { DARABONBA_PTR_SET_VALUE(checkName_, checkName) };


        // checkStatus Field Functions 
        bool hasCheckStatus() const { return this->checkStatus_ != nullptr;};
        void deleteCheckStatus() { this->checkStatus_ = nullptr;};
        inline string getCheckStatus() const { DARABONBA_PTR_GET_DEFAULT(checkStatus_, "") };
        inline Records& setCheckStatus(string checkStatus) { DARABONBA_PTR_SET_VALUE(checkStatus_, checkStatus) };


        // checkType Field Functions 
        bool hasCheckType() const { return this->checkType_ != nullptr;};
        void deleteCheckType() { this->checkType_ = nullptr;};
        inline string getCheckType() const { DARABONBA_PTR_GET_DEFAULT(checkType_, "") };
        inline Records& setCheckType(string checkType) { DARABONBA_PTR_SET_VALUE(checkType_, checkType) };


        // lastCheckTime Field Functions 
        bool hasLastCheckTime() const { return this->lastCheckTime_ != nullptr;};
        void deleteLastCheckTime() { this->lastCheckTime_ = nullptr;};
        inline string getLastCheckTime() const { DARABONBA_PTR_GET_DEFAULT(lastCheckTime_, "") };
        inline Records& setLastCheckTime(string lastCheckTime) { DARABONBA_PTR_SET_VALUE(lastCheckTime_, lastCheckTime) };


        // level Field Functions 
        bool hasLevel() const { return this->level_ != nullptr;};
        void deleteLevel() { this->level_ = nullptr;};
        inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
        inline Records& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


        // taskId Field Functions 
        bool hasTaskId() const { return this->taskId_ != nullptr;};
        void deleteTaskId() { this->taskId_ = nullptr;};
        inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
        inline Records& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      protected:
        shared_ptr<int64_t> aclPendingCount_ {};
        shared_ptr<int64_t> aclTotalCount_ {};
        shared_ptr<string> checkName_ {};
        shared_ptr<string> checkStatus_ {};
        shared_ptr<string> checkType_ {};
        shared_ptr<string> lastCheckTime_ {};
        shared_ptr<string> level_ {};
        shared_ptr<string> taskId_ {};
      };

      virtual bool empty() const override { return this->aclType_ == nullptr
        && this->records_ == nullptr; };
      // aclType Field Functions 
      bool hasAclType() const { return this->aclType_ != nullptr;};
      void deleteAclType() { this->aclType_ = nullptr;};
      inline string getAclType() const { DARABONBA_PTR_GET_DEFAULT(aclType_, "") };
      inline CheckRecords& setAclType(string aclType) { DARABONBA_PTR_SET_VALUE(aclType_, aclType) };


      // records Field Functions 
      bool hasRecords() const { return this->records_ != nullptr;};
      void deleteRecords() { this->records_ = nullptr;};
      inline const vector<CheckRecords::Records> & getRecords() const { DARABONBA_PTR_GET_CONST(records_, vector<CheckRecords::Records>) };
      inline vector<CheckRecords::Records> getRecords() { DARABONBA_PTR_GET(records_, vector<CheckRecords::Records>) };
      inline CheckRecords& setRecords(const vector<CheckRecords::Records> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
      inline CheckRecords& setRecords(vector<CheckRecords::Records> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


    protected:
      shared_ptr<string> aclType_ {};
      shared_ptr<vector<CheckRecords::Records>> records_ {};
    };

    virtual bool empty() const override { return this->checkRecords_ == nullptr
        && this->requestId_ == nullptr; };
    // checkRecords Field Functions 
    bool hasCheckRecords() const { return this->checkRecords_ != nullptr;};
    void deleteCheckRecords() { this->checkRecords_ = nullptr;};
    inline const DescribeAclChecksResponseBody::CheckRecords & getCheckRecords() const { DARABONBA_PTR_GET_CONST(checkRecords_, DescribeAclChecksResponseBody::CheckRecords) };
    inline DescribeAclChecksResponseBody::CheckRecords getCheckRecords() { DARABONBA_PTR_GET(checkRecords_, DescribeAclChecksResponseBody::CheckRecords) };
    inline DescribeAclChecksResponseBody& setCheckRecords(const DescribeAclChecksResponseBody::CheckRecords & checkRecords) { DARABONBA_PTR_SET_VALUE(checkRecords_, checkRecords) };
    inline DescribeAclChecksResponseBody& setCheckRecords(DescribeAclChecksResponseBody::CheckRecords && checkRecords) { DARABONBA_PTR_SET_RVALUE(checkRecords_, checkRecords) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAclChecksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeAclChecksResponseBody::CheckRecords> checkRecords_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
