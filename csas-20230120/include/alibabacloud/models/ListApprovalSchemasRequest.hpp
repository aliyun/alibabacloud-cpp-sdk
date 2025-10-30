// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPROVALSCHEMASREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPROVALSCHEMASREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListApprovalSchemasRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApprovalSchemasRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
      DARABONBA_PTR_TO_JSON(SchemaIds, schemaIds_);
      DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
    };
    friend void from_json(const Darabonba::Json& j, ListApprovalSchemasRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
      DARABONBA_PTR_FROM_JSON(SchemaIds, schemaIds_);
      DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
    };
    ListApprovalSchemasRequest() = default ;
    ListApprovalSchemasRequest(const ListApprovalSchemasRequest &) = default ;
    ListApprovalSchemasRequest(ListApprovalSchemasRequest &&) = default ;
    ListApprovalSchemasRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApprovalSchemasRequest() = default ;
    ListApprovalSchemasRequest& operator=(const ListApprovalSchemasRequest &) = default ;
    ListApprovalSchemasRequest& operator=(ListApprovalSchemasRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->pageSize_ == nullptr && return this->policyType_ == nullptr && return this->schemaIds_ == nullptr && return this->schemaName_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline ListApprovalSchemasRequest& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListApprovalSchemasRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string policyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline ListApprovalSchemasRequest& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    // schemaIds Field Functions 
    bool hasSchemaIds() const { return this->schemaIds_ != nullptr;};
    void deleteSchemaIds() { this->schemaIds_ = nullptr;};
    inline const vector<string> & schemaIds() const { DARABONBA_PTR_GET_CONST(schemaIds_, vector<string>) };
    inline vector<string> schemaIds() { DARABONBA_PTR_GET(schemaIds_, vector<string>) };
    inline ListApprovalSchemasRequest& setSchemaIds(const vector<string> & schemaIds) { DARABONBA_PTR_SET_VALUE(schemaIds_, schemaIds) };
    inline ListApprovalSchemasRequest& setSchemaIds(vector<string> && schemaIds) { DARABONBA_PTR_SET_RVALUE(schemaIds_, schemaIds) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline ListApprovalSchemasRequest& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> currentPage_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    std::shared_ptr<string> policyType_ = nullptr;
    std::shared_ptr<vector<string>> schemaIds_ = nullptr;
    std::shared_ptr<string> schemaName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
