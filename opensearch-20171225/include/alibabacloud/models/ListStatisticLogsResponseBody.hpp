// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTATISTICLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSTATISTICLOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class ListStatisticLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStatisticLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListStatisticLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListStatisticLogsResponseBody() = default ;
    ListStatisticLogsResponseBody(const ListStatisticLogsResponseBody &) = default ;
    ListStatisticLogsResponseBody(ListStatisticLogsResponseBody &&) = default ;
    ListStatisticLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStatisticLogsResponseBody() = default ;
    ListStatisticLogsResponseBody& operator=(const ListStatisticLogsResponseBody &) = default ;
    ListStatisticLogsResponseBody& operator=(ListStatisticLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->result_ == nullptr && return this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListStatisticLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<Darabonba::Json> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> result() { DARABONBA_PTR_GET(result_, vector<Darabonba::Json>) };
    inline ListStatisticLogsResponseBody& setResult(const vector<Darabonba::Json> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListStatisticLogsResponseBody& setResult(vector<Darabonba::Json> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListStatisticLogsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The returned result. For more information, see
    // 
    // *   [Parameters of hotwords rankings](https://help.aliyun.com/document_detail/421248.html).
    std::shared_ptr<vector<Darabonba::Json>> result_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
