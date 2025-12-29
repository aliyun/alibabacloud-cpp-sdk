// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCERECOVERTIMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCERECOVERTIMERESPONSEBODY_HPP_
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
  class DescribeInstanceRecoverTimeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceRecoverTimeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RestoreRanges, restoreRanges_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceRecoverTimeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RestoreRanges, restoreRanges_);
    };
    DescribeInstanceRecoverTimeResponseBody() = default ;
    DescribeInstanceRecoverTimeResponseBody(const DescribeInstanceRecoverTimeResponseBody &) = default ;
    DescribeInstanceRecoverTimeResponseBody(DescribeInstanceRecoverTimeResponseBody &&) = default ;
    DescribeInstanceRecoverTimeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceRecoverTimeResponseBody() = default ;
    DescribeInstanceRecoverTimeResponseBody& operator=(const DescribeInstanceRecoverTimeResponseBody &) = default ;
    DescribeInstanceRecoverTimeResponseBody& operator=(DescribeInstanceRecoverTimeResponseBody &&) = default ;
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
      // The method used to restore data. Valid value:
      // 
      // *   PointInTime (default): Data is restored to a point in time.
      shared_ptr<string> restoreType_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->restoreRanges_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceRecoverTimeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // restoreRanges Field Functions 
    bool hasRestoreRanges() const { return this->restoreRanges_ != nullptr;};
    void deleteRestoreRanges() { this->restoreRanges_ = nullptr;};
    inline const vector<DescribeInstanceRecoverTimeResponseBody::RestoreRanges> & getRestoreRanges() const { DARABONBA_PTR_GET_CONST(restoreRanges_, vector<DescribeInstanceRecoverTimeResponseBody::RestoreRanges>) };
    inline vector<DescribeInstanceRecoverTimeResponseBody::RestoreRanges> getRestoreRanges() { DARABONBA_PTR_GET(restoreRanges_, vector<DescribeInstanceRecoverTimeResponseBody::RestoreRanges>) };
    inline DescribeInstanceRecoverTimeResponseBody& setRestoreRanges(const vector<DescribeInstanceRecoverTimeResponseBody::RestoreRanges> & restoreRanges) { DARABONBA_PTR_SET_VALUE(restoreRanges_, restoreRanges) };
    inline DescribeInstanceRecoverTimeResponseBody& setRestoreRanges(vector<DescribeInstanceRecoverTimeResponseBody::RestoreRanges> && restoreRanges) { DARABONBA_PTR_SET_RVALUE(restoreRanges_, restoreRanges) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The time ranges to which data can be restored. The time ranges include those used for point-in-time data restoration.
    shared_ptr<vector<DescribeInstanceRecoverTimeResponseBody::RestoreRanges>> restoreRanges_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
