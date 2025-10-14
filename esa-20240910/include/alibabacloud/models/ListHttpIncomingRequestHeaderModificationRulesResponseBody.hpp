// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHTTPINCOMINGREQUESTHEADERMODIFICATIONRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTHTTPINCOMINGREQUESTHEADERMODIFICATIONRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListHttpIncomingRequestHeaderModificationRulesResponseBodyConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListHttpIncomingRequestHeaderModificationRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHttpIncomingRequestHeaderModificationRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Configs, configs_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, ListHttpIncomingRequestHeaderModificationRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Configs, configs_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    ListHttpIncomingRequestHeaderModificationRulesResponseBody() = default ;
    ListHttpIncomingRequestHeaderModificationRulesResponseBody(const ListHttpIncomingRequestHeaderModificationRulesResponseBody &) = default ;
    ListHttpIncomingRequestHeaderModificationRulesResponseBody(ListHttpIncomingRequestHeaderModificationRulesResponseBody &&) = default ;
    ListHttpIncomingRequestHeaderModificationRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHttpIncomingRequestHeaderModificationRulesResponseBody() = default ;
    ListHttpIncomingRequestHeaderModificationRulesResponseBody& operator=(const ListHttpIncomingRequestHeaderModificationRulesResponseBody &) = default ;
    ListHttpIncomingRequestHeaderModificationRulesResponseBody& operator=(ListHttpIncomingRequestHeaderModificationRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configs_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr && return this->totalPage_ == nullptr; };
    // configs Field Functions 
    bool hasConfigs() const { return this->configs_ != nullptr;};
    void deleteConfigs() { this->configs_ = nullptr;};
    inline const vector<ListHttpIncomingRequestHeaderModificationRulesResponseBodyConfigs> & configs() const { DARABONBA_PTR_GET_CONST(configs_, vector<ListHttpIncomingRequestHeaderModificationRulesResponseBodyConfigs>) };
    inline vector<ListHttpIncomingRequestHeaderModificationRulesResponseBodyConfigs> configs() { DARABONBA_PTR_GET(configs_, vector<ListHttpIncomingRequestHeaderModificationRulesResponseBodyConfigs>) };
    inline ListHttpIncomingRequestHeaderModificationRulesResponseBody& setConfigs(const vector<ListHttpIncomingRequestHeaderModificationRulesResponseBodyConfigs> & configs) { DARABONBA_PTR_SET_VALUE(configs_, configs) };
    inline ListHttpIncomingRequestHeaderModificationRulesResponseBody& setConfigs(vector<ListHttpIncomingRequestHeaderModificationRulesResponseBodyConfigs> && configs) { DARABONBA_PTR_SET_RVALUE(configs_, configs) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListHttpIncomingRequestHeaderModificationRulesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListHttpIncomingRequestHeaderModificationRulesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListHttpIncomingRequestHeaderModificationRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListHttpIncomingRequestHeaderModificationRulesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t totalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline ListHttpIncomingRequestHeaderModificationRulesResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // The configuration list of the incoming HTTP request header modification.
    std::shared_ptr<vector<ListHttpIncomingRequestHeaderModificationRulesResponseBodyConfigs>> configs_ = nullptr;
    // The number of the returned page. Default value: **1**.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: 500. Valid values: 1 to 500.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> totalPage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
