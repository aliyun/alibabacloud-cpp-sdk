// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTERVENESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINTERVENESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ListIntervenesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntervenesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(InterveneType, interveneType_);
      DARABONBA_PTR_TO_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntervenesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(InterveneType, interveneType_);
      DARABONBA_PTR_FROM_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
    };
    ListIntervenesRequest() = default ;
    ListIntervenesRequest(const ListIntervenesRequest &) = default ;
    ListIntervenesRequest(ListIntervenesRequest &&) = default ;
    ListIntervenesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntervenesRequest() = default ;
    ListIntervenesRequest& operator=(const ListIntervenesRequest &) = default ;
    ListIntervenesRequest& operator=(ListIntervenesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentKey_ != nullptr
        && this->interveneType_ != nullptr && this->pageIndex_ != nullptr && this->pageSize_ != nullptr && this->query_ != nullptr && this->ruleId_ != nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline ListIntervenesRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // interveneType Field Functions 
    bool hasInterveneType() const { return this->interveneType_ != nullptr;};
    void deleteInterveneType() { this->interveneType_ = nullptr;};
    inline int32_t interveneType() const { DARABONBA_PTR_GET_DEFAULT(interveneType_, 0) };
    inline ListIntervenesRequest& setInterveneType(int32_t interveneType) { DARABONBA_PTR_SET_VALUE(interveneType_, interveneType) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int32_t pageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
    inline ListIntervenesRequest& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListIntervenesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string query() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline ListIntervenesRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline ListIntervenesRequest& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> agentKey_ = nullptr;
    std::shared_ptr<int32_t> interveneType_ = nullptr;
    std::shared_ptr<int32_t> pageIndex_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> query_ = nullptr;
    std::shared_ptr<int64_t> ruleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
