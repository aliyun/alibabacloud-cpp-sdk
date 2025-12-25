// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERWAFRULESETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERWAFRULESETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListUserWafRulesetsResponseBodyRulesets.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListUserWafRulesetsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserWafRulesetsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceUsage, instanceUsage_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Rulesets, rulesets_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserWafRulesetsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceUsage, instanceUsage_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Rulesets, rulesets_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListUserWafRulesetsResponseBody() = default ;
    ListUserWafRulesetsResponseBody(const ListUserWafRulesetsResponseBody &) = default ;
    ListUserWafRulesetsResponseBody(ListUserWafRulesetsResponseBody &&) = default ;
    ListUserWafRulesetsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserWafRulesetsResponseBody() = default ;
    ListUserWafRulesetsResponseBody& operator=(const ListUserWafRulesetsResponseBody &) = default ;
    ListUserWafRulesetsResponseBody& operator=(ListUserWafRulesetsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceUsage_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->rulesets_ == nullptr && return this->totalCount_ == nullptr; };
    // instanceUsage Field Functions 
    bool hasInstanceUsage() const { return this->instanceUsage_ != nullptr;};
    void deleteInstanceUsage() { this->instanceUsage_ = nullptr;};
    inline int64_t instanceUsage() const { DARABONBA_PTR_GET_DEFAULT(instanceUsage_, 0L) };
    inline ListUserWafRulesetsResponseBody& setInstanceUsage(int64_t instanceUsage) { DARABONBA_PTR_SET_VALUE(instanceUsage_, instanceUsage) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListUserWafRulesetsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListUserWafRulesetsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUserWafRulesetsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rulesets Field Functions 
    bool hasRulesets() const { return this->rulesets_ != nullptr;};
    void deleteRulesets() { this->rulesets_ = nullptr;};
    inline const vector<ListUserWafRulesetsResponseBodyRulesets> & rulesets() const { DARABONBA_PTR_GET_CONST(rulesets_, vector<ListUserWafRulesetsResponseBodyRulesets>) };
    inline vector<ListUserWafRulesetsResponseBodyRulesets> rulesets() { DARABONBA_PTR_GET(rulesets_, vector<ListUserWafRulesetsResponseBodyRulesets>) };
    inline ListUserWafRulesetsResponseBody& setRulesets(const vector<ListUserWafRulesetsResponseBodyRulesets> & rulesets) { DARABONBA_PTR_SET_VALUE(rulesets_, rulesets) };
    inline ListUserWafRulesetsResponseBody& setRulesets(vector<ListUserWafRulesetsResponseBodyRulesets> && rulesets) { DARABONBA_PTR_SET_RVALUE(rulesets_, rulesets) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListUserWafRulesetsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<int64_t> instanceUsage_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<ListUserWafRulesetsResponseBodyRulesets>> rulesets_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
