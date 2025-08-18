// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTABLECOLUMNLINEAGEBYTASKIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTABLECOLUMNLINEAGEBYTASKIDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetTableColumnLineageByTaskIdRequestTableColumnLineageByTaskIdQuery.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetTableColumnLineageByTaskIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTableColumnLineageByTaskIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(TableColumnLineageByTaskIdQuery, tableColumnLineageByTaskIdQuery_);
    };
    friend void from_json(const Darabonba::Json& j, GetTableColumnLineageByTaskIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(TableColumnLineageByTaskIdQuery, tableColumnLineageByTaskIdQuery_);
    };
    GetTableColumnLineageByTaskIdRequest() = default ;
    GetTableColumnLineageByTaskIdRequest(const GetTableColumnLineageByTaskIdRequest &) = default ;
    GetTableColumnLineageByTaskIdRequest(GetTableColumnLineageByTaskIdRequest &&) = default ;
    GetTableColumnLineageByTaskIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTableColumnLineageByTaskIdRequest() = default ;
    GetTableColumnLineageByTaskIdRequest& operator=(const GetTableColumnLineageByTaskIdRequest &) = default ;
    GetTableColumnLineageByTaskIdRequest& operator=(GetTableColumnLineageByTaskIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->opTenantId_ != nullptr
        && this->tableColumnLineageByTaskIdQuery_ != nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetTableColumnLineageByTaskIdRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // tableColumnLineageByTaskIdQuery Field Functions 
    bool hasTableColumnLineageByTaskIdQuery() const { return this->tableColumnLineageByTaskIdQuery_ != nullptr;};
    void deleteTableColumnLineageByTaskIdQuery() { this->tableColumnLineageByTaskIdQuery_ = nullptr;};
    inline const GetTableColumnLineageByTaskIdRequestTableColumnLineageByTaskIdQuery & tableColumnLineageByTaskIdQuery() const { DARABONBA_PTR_GET_CONST(tableColumnLineageByTaskIdQuery_, GetTableColumnLineageByTaskIdRequestTableColumnLineageByTaskIdQuery) };
    inline GetTableColumnLineageByTaskIdRequestTableColumnLineageByTaskIdQuery tableColumnLineageByTaskIdQuery() { DARABONBA_PTR_GET(tableColumnLineageByTaskIdQuery_, GetTableColumnLineageByTaskIdRequestTableColumnLineageByTaskIdQuery) };
    inline GetTableColumnLineageByTaskIdRequest& setTableColumnLineageByTaskIdQuery(const GetTableColumnLineageByTaskIdRequestTableColumnLineageByTaskIdQuery & tableColumnLineageByTaskIdQuery) { DARABONBA_PTR_SET_VALUE(tableColumnLineageByTaskIdQuery_, tableColumnLineageByTaskIdQuery) };
    inline GetTableColumnLineageByTaskIdRequest& setTableColumnLineageByTaskIdQuery(GetTableColumnLineageByTaskIdRequestTableColumnLineageByTaskIdQuery && tableColumnLineageByTaskIdQuery) { DARABONBA_PTR_SET_RVALUE(tableColumnLineageByTaskIdQuery_, tableColumnLineageByTaskIdQuery) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<GetTableColumnLineageByTaskIdRequestTableColumnLineageByTaskIdQuery> tableColumnLineageByTaskIdQuery_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
