// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMMONLOGFIELDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMMONLOGFIELDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCommonLogFieldsResponseBodyLogFieldList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeCommonLogFieldsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCommonLogFieldsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LogFieldList, logFieldList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCommonLogFieldsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LogFieldList, logFieldList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeCommonLogFieldsResponseBody() = default ;
    DescribeCommonLogFieldsResponseBody(const DescribeCommonLogFieldsResponseBody &) = default ;
    DescribeCommonLogFieldsResponseBody(DescribeCommonLogFieldsResponseBody &&) = default ;
    DescribeCommonLogFieldsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCommonLogFieldsResponseBody() = default ;
    DescribeCommonLogFieldsResponseBody& operator=(const DescribeCommonLogFieldsResponseBody &) = default ;
    DescribeCommonLogFieldsResponseBody& operator=(DescribeCommonLogFieldsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logFieldList_ == nullptr
        && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // logFieldList Field Functions 
    bool hasLogFieldList() const { return this->logFieldList_ != nullptr;};
    void deleteLogFieldList() { this->logFieldList_ = nullptr;};
    inline const vector<DescribeCommonLogFieldsResponseBodyLogFieldList> & logFieldList() const { DARABONBA_PTR_GET_CONST(logFieldList_, vector<DescribeCommonLogFieldsResponseBodyLogFieldList>) };
    inline vector<DescribeCommonLogFieldsResponseBodyLogFieldList> logFieldList() { DARABONBA_PTR_GET(logFieldList_, vector<DescribeCommonLogFieldsResponseBodyLogFieldList>) };
    inline DescribeCommonLogFieldsResponseBody& setLogFieldList(const vector<DescribeCommonLogFieldsResponseBodyLogFieldList> & logFieldList) { DARABONBA_PTR_SET_VALUE(logFieldList_, logFieldList) };
    inline DescribeCommonLogFieldsResponseBody& setLogFieldList(vector<DescribeCommonLogFieldsResponseBodyLogFieldList> && logFieldList) { DARABONBA_PTR_SET_RVALUE(logFieldList_, logFieldList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCommonLogFieldsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeCommonLogFieldsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<DescribeCommonLogFieldsResponseBodyLogFieldList>> logFieldList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
