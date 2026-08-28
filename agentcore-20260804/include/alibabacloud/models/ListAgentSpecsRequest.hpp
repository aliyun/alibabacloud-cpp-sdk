// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTSPECSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTSPECSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class ListAgentSpecsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgentSpecsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(agentSpecName, agentSpecName_);
      DARABONBA_PTR_TO_JSON(bizTag, bizTag_);
      DARABONBA_PTR_TO_JSON(orderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(owner, owner_);
      DARABONBA_PTR_TO_JSON(pageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(scope, scope_);
      DARABONBA_PTR_TO_JSON(search, search_);
      DARABONBA_PTR_TO_JSON(withCapabilities, withCapabilities_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgentSpecsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(agentSpecName, agentSpecName_);
      DARABONBA_PTR_FROM_JSON(bizTag, bizTag_);
      DARABONBA_PTR_FROM_JSON(orderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(owner, owner_);
      DARABONBA_PTR_FROM_JSON(pageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(scope, scope_);
      DARABONBA_PTR_FROM_JSON(search, search_);
      DARABONBA_PTR_FROM_JSON(withCapabilities, withCapabilities_);
    };
    ListAgentSpecsRequest() = default ;
    ListAgentSpecsRequest(const ListAgentSpecsRequest &) = default ;
    ListAgentSpecsRequest(ListAgentSpecsRequest &&) = default ;
    ListAgentSpecsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgentSpecsRequest() = default ;
    ListAgentSpecsRequest& operator=(const ListAgentSpecsRequest &) = default ;
    ListAgentSpecsRequest& operator=(ListAgentSpecsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentSpecName_ == nullptr
        && this->bizTag_ == nullptr && this->orderBy_ == nullptr && this->owner_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr
        && this->scope_ == nullptr && this->search_ == nullptr && this->withCapabilities_ == nullptr; };
    // agentSpecName Field Functions 
    bool hasAgentSpecName() const { return this->agentSpecName_ != nullptr;};
    void deleteAgentSpecName() { this->agentSpecName_ = nullptr;};
    inline string getAgentSpecName() const { DARABONBA_PTR_GET_DEFAULT(agentSpecName_, "") };
    inline ListAgentSpecsRequest& setAgentSpecName(string agentSpecName) { DARABONBA_PTR_SET_VALUE(agentSpecName_, agentSpecName) };


    // bizTag Field Functions 
    bool hasBizTag() const { return this->bizTag_ != nullptr;};
    void deleteBizTag() { this->bizTag_ = nullptr;};
    inline string getBizTag() const { DARABONBA_PTR_GET_DEFAULT(bizTag_, "") };
    inline ListAgentSpecsRequest& setBizTag(string bizTag) { DARABONBA_PTR_SET_VALUE(bizTag_, bizTag) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline ListAgentSpecsRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline ListAgentSpecsRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListAgentSpecsRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAgentSpecsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline ListAgentSpecsRequest& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // search Field Functions 
    bool hasSearch() const { return this->search_ != nullptr;};
    void deleteSearch() { this->search_ = nullptr;};
    inline string getSearch() const { DARABONBA_PTR_GET_DEFAULT(search_, "") };
    inline ListAgentSpecsRequest& setSearch(string search) { DARABONBA_PTR_SET_VALUE(search_, search) };


    // withCapabilities Field Functions 
    bool hasWithCapabilities() const { return this->withCapabilities_ != nullptr;};
    void deleteWithCapabilities() { this->withCapabilities_ = nullptr;};
    inline bool getWithCapabilities() const { DARABONBA_PTR_GET_DEFAULT(withCapabilities_, false) };
    inline ListAgentSpecsRequest& setWithCapabilities(bool withCapabilities) { DARABONBA_PTR_SET_VALUE(withCapabilities_, withCapabilities) };


  protected:
    // The AgentSpec name used as a search keyword. Use this parameter together with the search parameter.
    shared_ptr<string> agentSpecName_ {};
    // The business tag used for fuzzy filtering.
    shared_ptr<string> bizTag_ {};
    // The field by which to sort results. Set this parameter to download_count to sort by download count. By default, results are sorted by update time.
    shared_ptr<string> orderBy_ {};
    // The owner used to filter results.
    shared_ptr<string> owner_ {};
    // The page number. Pages start from 1. Default value: 1.
    shared_ptr<int32_t> pageNo_ {};
    // The number of entries per page. Default value: 10. Maximum value: 50.
    shared_ptr<int32_t> pageSize_ {};
    // The visibility scope used to filter results. Valid values:
    // 
    // - PUBLIC
    // - PRIVATE
    shared_ptr<string> scope_ {};
    // The search mode. Valid values:
    // 
    // - accurate: exact match.
    // - blur: fuzzy match.
    // 
    // Default value: blur.
    shared_ptr<string> search_ {};
    // Specifies whether to return the Skills and McpServers lists. Default value: false.
    shared_ptr<bool> withCapabilities_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
