// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMULTIDIMTABLERECORDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMULTIDIMTABLERECORDSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListMultiDimTableRecordsRequestFilter.hpp>
#include <alibabacloud/models/ListMultiDimTableRecordsRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListMultiDimTableRecordsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMultiDimTableRecordsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BaseId, baseId_);
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(SheetIdOrName, sheetIdOrName_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, ListMultiDimTableRecordsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BaseId, baseId_);
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(SheetIdOrName, sheetIdOrName_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    ListMultiDimTableRecordsRequest() = default ;
    ListMultiDimTableRecordsRequest(const ListMultiDimTableRecordsRequest &) = default ;
    ListMultiDimTableRecordsRequest(ListMultiDimTableRecordsRequest &&) = default ;
    ListMultiDimTableRecordsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMultiDimTableRecordsRequest() = default ;
    ListMultiDimTableRecordsRequest& operator=(const ListMultiDimTableRecordsRequest &) = default ;
    ListMultiDimTableRecordsRequest& operator=(ListMultiDimTableRecordsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->baseId_ == nullptr
        && return this->filter_ == nullptr && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->sheetIdOrName_ == nullptr && return this->tenantContext_ == nullptr; };
    // baseId Field Functions 
    bool hasBaseId() const { return this->baseId_ != nullptr;};
    void deleteBaseId() { this->baseId_ = nullptr;};
    inline string baseId() const { DARABONBA_PTR_GET_DEFAULT(baseId_, "") };
    inline ListMultiDimTableRecordsRequest& setBaseId(string baseId) { DARABONBA_PTR_SET_VALUE(baseId_, baseId) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const ListMultiDimTableRecordsRequestFilter & filter() const { DARABONBA_PTR_GET_CONST(filter_, ListMultiDimTableRecordsRequestFilter) };
    inline ListMultiDimTableRecordsRequestFilter filter() { DARABONBA_PTR_GET(filter_, ListMultiDimTableRecordsRequestFilter) };
    inline ListMultiDimTableRecordsRequest& setFilter(const ListMultiDimTableRecordsRequestFilter & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline ListMultiDimTableRecordsRequest& setFilter(ListMultiDimTableRecordsRequestFilter && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListMultiDimTableRecordsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListMultiDimTableRecordsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // sheetIdOrName Field Functions 
    bool hasSheetIdOrName() const { return this->sheetIdOrName_ != nullptr;};
    void deleteSheetIdOrName() { this->sheetIdOrName_ = nullptr;};
    inline string sheetIdOrName() const { DARABONBA_PTR_GET_DEFAULT(sheetIdOrName_, "") };
    inline ListMultiDimTableRecordsRequest& setSheetIdOrName(string sheetIdOrName) { DARABONBA_PTR_SET_VALUE(sheetIdOrName_, sheetIdOrName) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const ListMultiDimTableRecordsRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, ListMultiDimTableRecordsRequestTenantContext) };
    inline ListMultiDimTableRecordsRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, ListMultiDimTableRecordsRequestTenantContext) };
    inline ListMultiDimTableRecordsRequest& setTenantContext(const ListMultiDimTableRecordsRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline ListMultiDimTableRecordsRequest& setTenantContext(ListMultiDimTableRecordsRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> baseId_ = nullptr;
    std::shared_ptr<ListMultiDimTableRecordsRequestFilter> filter_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sheetIdOrName_ = nullptr;
    std::shared_ptr<ListMultiDimTableRecordsRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
