// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYSTEMLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYSTEMLOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSystemLogResponseBodySystemLog.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeSystemLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSystemLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SystemLog, systemLog_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSystemLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SystemLog, systemLog_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeSystemLogResponseBody() = default ;
    DescribeSystemLogResponseBody(const DescribeSystemLogResponseBody &) = default ;
    DescribeSystemLogResponseBody(DescribeSystemLogResponseBody &&) = default ;
    DescribeSystemLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSystemLogResponseBody() = default ;
    DescribeSystemLogResponseBody& operator=(const DescribeSystemLogResponseBody &) = default ;
    DescribeSystemLogResponseBody& operator=(DescribeSystemLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->systemLog_ == nullptr && return this->total_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSystemLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // systemLog Field Functions 
    bool hasSystemLog() const { return this->systemLog_ != nullptr;};
    void deleteSystemLog() { this->systemLog_ = nullptr;};
    inline const vector<DescribeSystemLogResponseBodySystemLog> & systemLog() const { DARABONBA_PTR_GET_CONST(systemLog_, vector<DescribeSystemLogResponseBodySystemLog>) };
    inline vector<DescribeSystemLogResponseBodySystemLog> systemLog() { DARABONBA_PTR_GET(systemLog_, vector<DescribeSystemLogResponseBodySystemLog>) };
    inline DescribeSystemLogResponseBody& setSystemLog(const vector<DescribeSystemLogResponseBodySystemLog> & systemLog) { DARABONBA_PTR_SET_VALUE(systemLog_, systemLog) };
    inline DescribeSystemLogResponseBody& setSystemLog(vector<DescribeSystemLogResponseBodySystemLog> && systemLog) { DARABONBA_PTR_SET_RVALUE(systemLog_, systemLog) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline DescribeSystemLogResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // An array that consists of details of the billing logs for the burstable clean bandwidth.
    std::shared_ptr<vector<DescribeSystemLogResponseBodySystemLog>> systemLog_ = nullptr;
    // The total number of billing logs for the burstable clean bandwidth.
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
