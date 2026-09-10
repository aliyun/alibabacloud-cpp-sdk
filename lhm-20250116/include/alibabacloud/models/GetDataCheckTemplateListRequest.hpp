// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATACHECKTEMPLATELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDATACHECKTEMPLATELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class GetDataCheckTemplateListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataCheckTemplateListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(checkType, checkType_);
      DARABONBA_PTR_TO_JSON(groupBy, groupBy_);
      DARABONBA_PTR_TO_JSON(idList, idList_);
      DARABONBA_PTR_TO_JSON(isAdmin, isAdmin_);
      DARABONBA_PTR_TO_JSON(isBuiltin, isBuiltin_);
      DARABONBA_PTR_TO_JSON(needTotalCount, needTotalCount_);
      DARABONBA_PTR_TO_JSON(orderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(orderDirection, orderDirection_);
      DARABONBA_PTR_TO_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(templateName, templateName_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataCheckTemplateListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(checkType, checkType_);
      DARABONBA_PTR_FROM_JSON(groupBy, groupBy_);
      DARABONBA_PTR_FROM_JSON(idList, idList_);
      DARABONBA_PTR_FROM_JSON(isAdmin, isAdmin_);
      DARABONBA_PTR_FROM_JSON(isBuiltin, isBuiltin_);
      DARABONBA_PTR_FROM_JSON(needTotalCount, needTotalCount_);
      DARABONBA_PTR_FROM_JSON(orderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(orderDirection, orderDirection_);
      DARABONBA_PTR_FROM_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(templateName, templateName_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    GetDataCheckTemplateListRequest() = default ;
    GetDataCheckTemplateListRequest(const GetDataCheckTemplateListRequest &) = default ;
    GetDataCheckTemplateListRequest(GetDataCheckTemplateListRequest &&) = default ;
    GetDataCheckTemplateListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataCheckTemplateListRequest() = default ;
    GetDataCheckTemplateListRequest& operator=(const GetDataCheckTemplateListRequest &) = default ;
    GetDataCheckTemplateListRequest& operator=(GetDataCheckTemplateListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkType_ == nullptr
        && this->groupBy_ == nullptr && this->idList_ == nullptr && this->isAdmin_ == nullptr && this->isBuiltin_ == nullptr && this->needTotalCount_ == nullptr
        && this->orderBy_ == nullptr && this->orderDirection_ == nullptr && this->pageIndex_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->templateName_ == nullptr && this->tenantId_ == nullptr; };
    // checkType Field Functions 
    bool hasCheckType() const { return this->checkType_ != nullptr;};
    void deleteCheckType() { this->checkType_ = nullptr;};
    inline int32_t getCheckType() const { DARABONBA_PTR_GET_DEFAULT(checkType_, 0) };
    inline GetDataCheckTemplateListRequest& setCheckType(int32_t checkType) { DARABONBA_PTR_SET_VALUE(checkType_, checkType) };


    // groupBy Field Functions 
    bool hasGroupBy() const { return this->groupBy_ != nullptr;};
    void deleteGroupBy() { this->groupBy_ = nullptr;};
    inline string getGroupBy() const { DARABONBA_PTR_GET_DEFAULT(groupBy_, "") };
    inline GetDataCheckTemplateListRequest& setGroupBy(string groupBy) { DARABONBA_PTR_SET_VALUE(groupBy_, groupBy) };


    // idList Field Functions 
    bool hasIdList() const { return this->idList_ != nullptr;};
    void deleteIdList() { this->idList_ = nullptr;};
    inline const vector<string> & getIdList() const { DARABONBA_PTR_GET_CONST(idList_, vector<string>) };
    inline vector<string> getIdList() { DARABONBA_PTR_GET(idList_, vector<string>) };
    inline GetDataCheckTemplateListRequest& setIdList(const vector<string> & idList) { DARABONBA_PTR_SET_VALUE(idList_, idList) };
    inline GetDataCheckTemplateListRequest& setIdList(vector<string> && idList) { DARABONBA_PTR_SET_RVALUE(idList_, idList) };


    // isAdmin Field Functions 
    bool hasIsAdmin() const { return this->isAdmin_ != nullptr;};
    void deleteIsAdmin() { this->isAdmin_ = nullptr;};
    inline bool getIsAdmin() const { DARABONBA_PTR_GET_DEFAULT(isAdmin_, false) };
    inline GetDataCheckTemplateListRequest& setIsAdmin(bool isAdmin) { DARABONBA_PTR_SET_VALUE(isAdmin_, isAdmin) };


    // isBuiltin Field Functions 
    bool hasIsBuiltin() const { return this->isBuiltin_ != nullptr;};
    void deleteIsBuiltin() { this->isBuiltin_ = nullptr;};
    inline int32_t getIsBuiltin() const { DARABONBA_PTR_GET_DEFAULT(isBuiltin_, 0) };
    inline GetDataCheckTemplateListRequest& setIsBuiltin(int32_t isBuiltin) { DARABONBA_PTR_SET_VALUE(isBuiltin_, isBuiltin) };


    // needTotalCount Field Functions 
    bool hasNeedTotalCount() const { return this->needTotalCount_ != nullptr;};
    void deleteNeedTotalCount() { this->needTotalCount_ = nullptr;};
    inline bool getNeedTotalCount() const { DARABONBA_PTR_GET_DEFAULT(needTotalCount_, false) };
    inline GetDataCheckTemplateListRequest& setNeedTotalCount(bool needTotalCount) { DARABONBA_PTR_SET_VALUE(needTotalCount_, needTotalCount) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline GetDataCheckTemplateListRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // orderDirection Field Functions 
    bool hasOrderDirection() const { return this->orderDirection_ != nullptr;};
    void deleteOrderDirection() { this->orderDirection_ = nullptr;};
    inline string getOrderDirection() const { DARABONBA_PTR_GET_DEFAULT(orderDirection_, "") };
    inline GetDataCheckTemplateListRequest& setOrderDirection(string orderDirection) { DARABONBA_PTR_SET_VALUE(orderDirection_, orderDirection) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int32_t getPageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
    inline GetDataCheckTemplateListRequest& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetDataCheckTemplateListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataCheckTemplateListRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline GetDataCheckTemplateListRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline GetDataCheckTemplateListRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The validation rule type. Valid values:
    // - 0: data volume comparison.
    // - 1: metric comparison.
    // - 2: weak content comparison.
    // - 3: custom comparison.
    // - 4: full-text comparison.
    // - 5: null rate comparison.
    shared_ptr<int32_t> checkType_ {};
    // The field used for grouping (GROUP BY condition). Configure this parameter as needed.
    shared_ptr<string> groupBy_ {};
    // The list of validation template UUIDs. The source code of CheckTemplatePagedQry indicates that this parameter has no actual effect and does not need to be exposed externally. It is retained only for backward compatibility with legacy calls. Passing this parameter does not affect query results.
    shared_ptr<vector<string>> idList_ {};
    // **[Deprecated]** This parameter is deprecated and does not need to be passed. The source code of CheckTemplatePagedQry marks this parameter with @Deprecated.
    shared_ptr<bool> isAdmin_ {};
    // Specifies whether the template is built-in. Valid values:
    // - 0: No. The template is a custom template.
    // - 1: Yes. The template is a built-in template.
    shared_ptr<int32_t> isBuiltin_ {};
    // Specifies whether to return the total record count in the paginated results.
    shared_ptr<bool> needTotalCount_ {};
    // The field used for sorting. Configure this parameter as needed.
    shared_ptr<string> orderBy_ {};
    // The sort direction. Valid values:
    // - ASC: ascending order.
    // - DESC: descending order.
    shared_ptr<string> orderDirection_ {};
    // The page number. Pages start from 1.
    shared_ptr<int32_t> pageIndex_ {};
    // The page size, which specifies the number of records returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The name of the validation template.
    shared_ptr<string> templateName_ {};
    // The tenant ID.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
