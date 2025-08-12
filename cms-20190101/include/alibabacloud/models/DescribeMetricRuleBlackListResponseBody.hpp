// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETRICRULEBLACKLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETRICRULEBLACKLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMetricRuleBlackListResponseBodyDescribeMetricRuleBlackList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMetricRuleBlackListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetricRuleBlackListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DescribeMetricRuleBlackList, describeMetricRuleBlackList_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetricRuleBlackListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DescribeMetricRuleBlackList, describeMetricRuleBlackList_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeMetricRuleBlackListResponseBody() = default ;
    DescribeMetricRuleBlackListResponseBody(const DescribeMetricRuleBlackListResponseBody &) = default ;
    DescribeMetricRuleBlackListResponseBody(DescribeMetricRuleBlackListResponseBody &&) = default ;
    DescribeMetricRuleBlackListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetricRuleBlackListResponseBody() = default ;
    DescribeMetricRuleBlackListResponseBody& operator=(const DescribeMetricRuleBlackListResponseBody &) = default ;
    DescribeMetricRuleBlackListResponseBody& operator=(DescribeMetricRuleBlackListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->describeMetricRuleBlackList_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr && this->total_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeMetricRuleBlackListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // describeMetricRuleBlackList Field Functions 
    bool hasDescribeMetricRuleBlackList() const { return this->describeMetricRuleBlackList_ != nullptr;};
    void deleteDescribeMetricRuleBlackList() { this->describeMetricRuleBlackList_ = nullptr;};
    inline const vector<DescribeMetricRuleBlackListResponseBodyDescribeMetricRuleBlackList> & describeMetricRuleBlackList() const { DARABONBA_PTR_GET_CONST(describeMetricRuleBlackList_, vector<DescribeMetricRuleBlackListResponseBodyDescribeMetricRuleBlackList>) };
    inline vector<DescribeMetricRuleBlackListResponseBodyDescribeMetricRuleBlackList> describeMetricRuleBlackList() { DARABONBA_PTR_GET(describeMetricRuleBlackList_, vector<DescribeMetricRuleBlackListResponseBodyDescribeMetricRuleBlackList>) };
    inline DescribeMetricRuleBlackListResponseBody& setDescribeMetricRuleBlackList(const vector<DescribeMetricRuleBlackListResponseBodyDescribeMetricRuleBlackList> & describeMetricRuleBlackList) { DARABONBA_PTR_SET_VALUE(describeMetricRuleBlackList_, describeMetricRuleBlackList) };
    inline DescribeMetricRuleBlackListResponseBody& setDescribeMetricRuleBlackList(vector<DescribeMetricRuleBlackListResponseBodyDescribeMetricRuleBlackList> && describeMetricRuleBlackList) { DARABONBA_PTR_SET_RVALUE(describeMetricRuleBlackList_, describeMetricRuleBlackList) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeMetricRuleBlackListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMetricRuleBlackListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeMetricRuleBlackListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeMetricRuleBlackListResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The categories of the Alibaba Cloud service. For example, ApsaraDB for Redis includes the following categories: ApsaraDB for Redis (standard architecture), ApsaraDB for Redis (cluster architecture), and ApsaraDB for Redis (read/write splitting architecture). In this case, the valid values of this parameter for ApsaraDB for Redis include `kvstore_standard`, `kvstore_sharding`, and `kvstore_splitrw`.
    std::shared_ptr<string> code_ = nullptr;
    // The queried blacklist policies.
    std::shared_ptr<vector<DescribeMetricRuleBlackListResponseBodyDescribeMetricRuleBlackList>> describeMetricRuleBlackList_ = nullptr;
    // The error message.
    std::shared_ptr<string> message_ = nullptr;
    // The namespace of the cloud service.
    std::shared_ptr<string> requestId_ = nullptr;
    // The namespace of the cloud service.
    // 
    // For more information about the namespaces of different cloud services, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
    std::shared_ptr<bool> success_ = nullptr;
    // The timestamp when the blacklist policy was created.
    // 
    // Unit: milliseconds.
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
