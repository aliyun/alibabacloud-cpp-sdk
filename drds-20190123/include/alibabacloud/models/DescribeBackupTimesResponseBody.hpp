// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPTIMESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPTIMESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeBackupTimesResponseBodyRestoreTime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeBackupTimesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupTimesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RestoreTime, restoreTime_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupTimesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RestoreTime, restoreTime_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeBackupTimesResponseBody() = default ;
    DescribeBackupTimesResponseBody(const DescribeBackupTimesResponseBody &) = default ;
    DescribeBackupTimesResponseBody(DescribeBackupTimesResponseBody &&) = default ;
    DescribeBackupTimesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupTimesResponseBody() = default ;
    DescribeBackupTimesResponseBody& operator=(const DescribeBackupTimesResponseBody &) = default ;
    DescribeBackupTimesResponseBody& operator=(DescribeBackupTimesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->restoreTime_ != nullptr && this->success_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBackupTimesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // restoreTime Field Functions 
    bool hasRestoreTime() const { return this->restoreTime_ != nullptr;};
    void deleteRestoreTime() { this->restoreTime_ = nullptr;};
    inline const DescribeBackupTimesResponseBodyRestoreTime & restoreTime() const { DARABONBA_PTR_GET_CONST(restoreTime_, DescribeBackupTimesResponseBodyRestoreTime) };
    inline DescribeBackupTimesResponseBodyRestoreTime restoreTime() { DARABONBA_PTR_GET(restoreTime_, DescribeBackupTimesResponseBodyRestoreTime) };
    inline DescribeBackupTimesResponseBody& setRestoreTime(const DescribeBackupTimesResponseBodyRestoreTime & restoreTime) { DARABONBA_PTR_SET_VALUE(restoreTime_, restoreTime) };
    inline DescribeBackupTimesResponseBody& setRestoreTime(DescribeBackupTimesResponseBodyRestoreTime && restoreTime) { DARABONBA_PTR_SET_RVALUE(restoreTime_, restoreTime) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeBackupTimesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Indicates the ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates the information about the time range within which the data of the instance can be restored to a point in time.
    std::shared_ptr<DescribeBackupTimesResponseBodyRestoreTime> restoreTime_ = nullptr;
    // Indicates whether the request is successful.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
