// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTDBLOGINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTDBLOGINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInstDbLogInfoResponseBodyLogTimeRange.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeInstDbLogInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstDbLogInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LogTimeRange, logTimeRange_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstDbLogInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LogTimeRange, logTimeRange_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeInstDbLogInfoResponseBody() = default ;
    DescribeInstDbLogInfoResponseBody(const DescribeInstDbLogInfoResponseBody &) = default ;
    DescribeInstDbLogInfoResponseBody(DescribeInstDbLogInfoResponseBody &&) = default ;
    DescribeInstDbLogInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstDbLogInfoResponseBody() = default ;
    DescribeInstDbLogInfoResponseBody& operator=(const DescribeInstDbLogInfoResponseBody &) = default ;
    DescribeInstDbLogInfoResponseBody& operator=(DescribeInstDbLogInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->logTimeRange_ != nullptr
        && this->requestId_ != nullptr && this->success_ != nullptr; };
    // logTimeRange Field Functions 
    bool hasLogTimeRange() const { return this->logTimeRange_ != nullptr;};
    void deleteLogTimeRange() { this->logTimeRange_ = nullptr;};
    inline const DescribeInstDbLogInfoResponseBodyLogTimeRange & logTimeRange() const { DARABONBA_PTR_GET_CONST(logTimeRange_, DescribeInstDbLogInfoResponseBodyLogTimeRange) };
    inline DescribeInstDbLogInfoResponseBodyLogTimeRange logTimeRange() { DARABONBA_PTR_GET(logTimeRange_, DescribeInstDbLogInfoResponseBodyLogTimeRange) };
    inline DescribeInstDbLogInfoResponseBody& setLogTimeRange(const DescribeInstDbLogInfoResponseBodyLogTimeRange & logTimeRange) { DARABONBA_PTR_SET_VALUE(logTimeRange_, logTimeRange) };
    inline DescribeInstDbLogInfoResponseBody& setLogTimeRange(DescribeInstDbLogInfoResponseBodyLogTimeRange && logTimeRange) { DARABONBA_PTR_SET_RVALUE(logTimeRange_, logTimeRange) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstDbLogInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeInstDbLogInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The time range for log query.
    std::shared_ptr<DescribeInstDbLogInfoResponseBodyLogTimeRange> logTimeRange_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
