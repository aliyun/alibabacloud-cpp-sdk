// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERRECOVERTIMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERRECOVERTIMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class DescribeClusterRecoverTimeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterRecoverTimeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RestoreRanges, restoreRanges_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterRecoverTimeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RestoreRanges, restoreRanges_);
    };
    DescribeClusterRecoverTimeResponseBody() = default ;
    DescribeClusterRecoverTimeResponseBody(const DescribeClusterRecoverTimeResponseBody &) = default ;
    DescribeClusterRecoverTimeResponseBody(DescribeClusterRecoverTimeResponseBody &&) = default ;
    DescribeClusterRecoverTimeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterRecoverTimeResponseBody() = default ;
    DescribeClusterRecoverTimeResponseBody& operator=(const DescribeClusterRecoverTimeResponseBody &) = default ;
    DescribeClusterRecoverTimeResponseBody& operator=(DescribeClusterRecoverTimeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RestoreRanges : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RestoreRanges& obj) { 
        DARABONBA_PTR_TO_JSON(RestoreBeginTime, restoreBeginTime_);
        DARABONBA_PTR_TO_JSON(RestoreEndTime, restoreEndTime_);
        DARABONBA_PTR_TO_JSON(RestoreType, restoreType_);
      };
      friend void from_json(const Darabonba::Json& j, RestoreRanges& obj) { 
        DARABONBA_PTR_FROM_JSON(RestoreBeginTime, restoreBeginTime_);
        DARABONBA_PTR_FROM_JSON(RestoreEndTime, restoreEndTime_);
        DARABONBA_PTR_FROM_JSON(RestoreType, restoreType_);
      };
      RestoreRanges() = default ;
      RestoreRanges(const RestoreRanges &) = default ;
      RestoreRanges(RestoreRanges &&) = default ;
      RestoreRanges(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RestoreRanges() = default ;
      RestoreRanges& operator=(const RestoreRanges &) = default ;
      RestoreRanges& operator=(RestoreRanges &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->restoreBeginTime_ == nullptr
        && this->restoreEndTime_ == nullptr && this->restoreType_ == nullptr; };
      // restoreBeginTime Field Functions 
      bool hasRestoreBeginTime() const { return this->restoreBeginTime_ != nullptr;};
      void deleteRestoreBeginTime() { this->restoreBeginTime_ = nullptr;};
      inline string getRestoreBeginTime() const { DARABONBA_PTR_GET_DEFAULT(restoreBeginTime_, "") };
      inline RestoreRanges& setRestoreBeginTime(string restoreBeginTime) { DARABONBA_PTR_SET_VALUE(restoreBeginTime_, restoreBeginTime) };


      // restoreEndTime Field Functions 
      bool hasRestoreEndTime() const { return this->restoreEndTime_ != nullptr;};
      void deleteRestoreEndTime() { this->restoreEndTime_ = nullptr;};
      inline string getRestoreEndTime() const { DARABONBA_PTR_GET_DEFAULT(restoreEndTime_, "") };
      inline RestoreRanges& setRestoreEndTime(string restoreEndTime) { DARABONBA_PTR_SET_VALUE(restoreEndTime_, restoreEndTime) };


      // restoreType Field Functions 
      bool hasRestoreType() const { return this->restoreType_ != nullptr;};
      void deleteRestoreType() { this->restoreType_ = nullptr;};
      inline string getRestoreType() const { DARABONBA_PTR_GET_DEFAULT(restoreType_, "") };
      inline RestoreRanges& setRestoreType(string restoreType) { DARABONBA_PTR_SET_VALUE(restoreType_, restoreType) };


    protected:
      // The beginning of the time range to which data can be restored.
      shared_ptr<string> restoreBeginTime_ {};
      // The end of the time range to which data can be restored.
      shared_ptr<string> restoreEndTime_ {};
      // The method used to restore data. Valid values:
      // 
      // *   **PointInTime** (default): Data is restored based on point in time
      shared_ptr<string> restoreType_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->restoreRanges_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeClusterRecoverTimeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // restoreRanges Field Functions 
    bool hasRestoreRanges() const { return this->restoreRanges_ != nullptr;};
    void deleteRestoreRanges() { this->restoreRanges_ = nullptr;};
    inline const vector<DescribeClusterRecoverTimeResponseBody::RestoreRanges> & getRestoreRanges() const { DARABONBA_PTR_GET_CONST(restoreRanges_, vector<DescribeClusterRecoverTimeResponseBody::RestoreRanges>) };
    inline vector<DescribeClusterRecoverTimeResponseBody::RestoreRanges> getRestoreRanges() { DARABONBA_PTR_GET(restoreRanges_, vector<DescribeClusterRecoverTimeResponseBody::RestoreRanges>) };
    inline DescribeClusterRecoverTimeResponseBody& setRestoreRanges(const vector<DescribeClusterRecoverTimeResponseBody::RestoreRanges> & restoreRanges) { DARABONBA_PTR_SET_VALUE(restoreRanges_, restoreRanges) };
    inline DescribeClusterRecoverTimeResponseBody& setRestoreRanges(vector<DescribeClusterRecoverTimeResponseBody::RestoreRanges> && restoreRanges) { DARABONBA_PTR_SET_RVALUE(restoreRanges_, restoreRanges) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The cluster backup sets of the instance. A cluster backup file contains the backup sets of each node.
    shared_ptr<vector<DescribeClusterRecoverTimeResponseBody::RestoreRanges>> restoreRanges_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
