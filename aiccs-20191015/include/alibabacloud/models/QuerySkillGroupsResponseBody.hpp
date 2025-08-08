// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSKILLGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSKILLGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QuerySkillGroupsResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class QuerySkillGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySkillGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(OnePageSize, onePageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
      DARABONBA_PTR_TO_JSON(TotalResults, totalResults_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySkillGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(OnePageSize, onePageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
      DARABONBA_PTR_FROM_JSON(TotalResults, totalResults_);
    };
    QuerySkillGroupsResponseBody() = default ;
    QuerySkillGroupsResponseBody(const QuerySkillGroupsResponseBody &) = default ;
    QuerySkillGroupsResponseBody(QuerySkillGroupsResponseBody &&) = default ;
    QuerySkillGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySkillGroupsResponseBody() = default ;
    QuerySkillGroupsResponseBody& operator=(const QuerySkillGroupsResponseBody &) = default ;
    QuerySkillGroupsResponseBody& operator=(QuerySkillGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentPage_ != nullptr
        && this->data_ != nullptr && this->onePageSize_ != nullptr && this->requestId_ != nullptr && this->totalPage_ != nullptr && this->totalResults_ != nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline QuerySkillGroupsResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<QuerySkillGroupsResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<QuerySkillGroupsResponseBodyData>) };
    inline vector<QuerySkillGroupsResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<QuerySkillGroupsResponseBodyData>) };
    inline QuerySkillGroupsResponseBody& setData(const vector<QuerySkillGroupsResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QuerySkillGroupsResponseBody& setData(vector<QuerySkillGroupsResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // onePageSize Field Functions 
    bool hasOnePageSize() const { return this->onePageSize_ != nullptr;};
    void deleteOnePageSize() { this->onePageSize_ = nullptr;};
    inline int32_t onePageSize() const { DARABONBA_PTR_GET_DEFAULT(onePageSize_, 0) };
    inline QuerySkillGroupsResponseBody& setOnePageSize(int32_t onePageSize) { DARABONBA_PTR_SET_VALUE(onePageSize_, onePageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QuerySkillGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t totalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline QuerySkillGroupsResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


    // totalResults Field Functions 
    bool hasTotalResults() const { return this->totalResults_ != nullptr;};
    void deleteTotalResults() { this->totalResults_ = nullptr;};
    inline int32_t totalResults() const { DARABONBA_PTR_GET_DEFAULT(totalResults_, 0) };
    inline QuerySkillGroupsResponseBody& setTotalResults(int32_t totalResults) { DARABONBA_PTR_SET_VALUE(totalResults_, totalResults) };


  protected:
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    std::shared_ptr<vector<QuerySkillGroupsResponseBodyData>> data_ = nullptr;
    std::shared_ptr<int32_t> onePageSize_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalPage_ = nullptr;
    std::shared_ptr<int32_t> totalResults_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
