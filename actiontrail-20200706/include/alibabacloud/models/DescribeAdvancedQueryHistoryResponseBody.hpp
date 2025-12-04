// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEADVANCEDQUERYHISTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEADVANCEDQUERYHISTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAdvancedQueryHistoryResponseBodyQueryHistoryList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class DescribeAdvancedQueryHistoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAdvancedQueryHistoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(QueryHistoryList, queryHistoryList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAdvancedQueryHistoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(QueryHistoryList, queryHistoryList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAdvancedQueryHistoryResponseBody() = default ;
    DescribeAdvancedQueryHistoryResponseBody(const DescribeAdvancedQueryHistoryResponseBody &) = default ;
    DescribeAdvancedQueryHistoryResponseBody(DescribeAdvancedQueryHistoryResponseBody &&) = default ;
    DescribeAdvancedQueryHistoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAdvancedQueryHistoryResponseBody() = default ;
    DescribeAdvancedQueryHistoryResponseBody& operator=(const DescribeAdvancedQueryHistoryResponseBody &) = default ;
    DescribeAdvancedQueryHistoryResponseBody& operator=(DescribeAdvancedQueryHistoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->queryHistoryList_ == nullptr
        && return this->requestId_ == nullptr; };
    // queryHistoryList Field Functions 
    bool hasQueryHistoryList() const { return this->queryHistoryList_ != nullptr;};
    void deleteQueryHistoryList() { this->queryHistoryList_ = nullptr;};
    inline const vector<DescribeAdvancedQueryHistoryResponseBodyQueryHistoryList> & queryHistoryList() const { DARABONBA_PTR_GET_CONST(queryHistoryList_, vector<DescribeAdvancedQueryHistoryResponseBodyQueryHistoryList>) };
    inline vector<DescribeAdvancedQueryHistoryResponseBodyQueryHistoryList> queryHistoryList() { DARABONBA_PTR_GET(queryHistoryList_, vector<DescribeAdvancedQueryHistoryResponseBodyQueryHistoryList>) };
    inline DescribeAdvancedQueryHistoryResponseBody& setQueryHistoryList(const vector<DescribeAdvancedQueryHistoryResponseBodyQueryHistoryList> & queryHistoryList) { DARABONBA_PTR_SET_VALUE(queryHistoryList_, queryHistoryList) };
    inline DescribeAdvancedQueryHistoryResponseBody& setQueryHistoryList(vector<DescribeAdvancedQueryHistoryResponseBodyQueryHistoryList> && queryHistoryList) { DARABONBA_PTR_SET_RVALUE(queryHistoryList_, queryHistoryList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAdvancedQueryHistoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeAdvancedQueryHistoryResponseBodyQueryHistoryList>> queryHistoryList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
