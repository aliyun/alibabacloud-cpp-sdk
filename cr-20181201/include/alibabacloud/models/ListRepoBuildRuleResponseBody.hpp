// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREPOBUILDRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTREPOBUILDRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRepoBuildRuleResponseBodyBuildRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListRepoBuildRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRepoBuildRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BuildRules, buildRules_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListRepoBuildRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BuildRules, buildRules_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListRepoBuildRuleResponseBody() = default ;
    ListRepoBuildRuleResponseBody(const ListRepoBuildRuleResponseBody &) = default ;
    ListRepoBuildRuleResponseBody(ListRepoBuildRuleResponseBody &&) = default ;
    ListRepoBuildRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRepoBuildRuleResponseBody() = default ;
    ListRepoBuildRuleResponseBody& operator=(const ListRepoBuildRuleResponseBody &) = default ;
    ListRepoBuildRuleResponseBody& operator=(ListRepoBuildRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->buildRules_ != nullptr
        && this->code_ != nullptr && this->isSuccess_ != nullptr && this->pageNo_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr
        && this->totalCount_ != nullptr; };
    // buildRules Field Functions 
    bool hasBuildRules() const { return this->buildRules_ != nullptr;};
    void deleteBuildRules() { this->buildRules_ = nullptr;};
    inline const vector<ListRepoBuildRuleResponseBodyBuildRules> & buildRules() const { DARABONBA_PTR_GET_CONST(buildRules_, vector<ListRepoBuildRuleResponseBodyBuildRules>) };
    inline vector<ListRepoBuildRuleResponseBodyBuildRules> buildRules() { DARABONBA_PTR_GET(buildRules_, vector<ListRepoBuildRuleResponseBodyBuildRules>) };
    inline ListRepoBuildRuleResponseBody& setBuildRules(const vector<ListRepoBuildRuleResponseBodyBuildRules> & buildRules) { DARABONBA_PTR_SET_VALUE(buildRules_, buildRules) };
    inline ListRepoBuildRuleResponseBody& setBuildRules(vector<ListRepoBuildRuleResponseBodyBuildRules> && buildRules) { DARABONBA_PTR_SET_RVALUE(buildRules_, buildRules) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListRepoBuildRuleResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool isSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline ListRepoBuildRuleResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListRepoBuildRuleResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListRepoBuildRuleResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRepoBuildRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListRepoBuildRuleResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of image building rules.
    std::shared_ptr<vector<ListRepoBuildRuleResponseBodyBuildRules>> buildRules_ = nullptr;
    // The return value.
    std::shared_ptr<string> code_ = nullptr;
    // Indicates whether the request is successful. Valid values:
    // 
    // *   `true`: The request is successful.
    // *   `false`: The request fails.
    std::shared_ptr<bool> isSuccess_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of returned entries.
    std::shared_ptr<string> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
