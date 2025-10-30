// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTABLELINEAGEBYTASKIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTABLELINEAGEBYTASKIDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetTableLineageByTaskIdRequestTableLineageByTaskIdQuery.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetTableLineageByTaskIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTableLineageByTaskIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(TableLineageByTaskIdQuery, tableLineageByTaskIdQuery_);
    };
    friend void from_json(const Darabonba::Json& j, GetTableLineageByTaskIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(TableLineageByTaskIdQuery, tableLineageByTaskIdQuery_);
    };
    GetTableLineageByTaskIdRequest() = default ;
    GetTableLineageByTaskIdRequest(const GetTableLineageByTaskIdRequest &) = default ;
    GetTableLineageByTaskIdRequest(GetTableLineageByTaskIdRequest &&) = default ;
    GetTableLineageByTaskIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTableLineageByTaskIdRequest() = default ;
    GetTableLineageByTaskIdRequest& operator=(const GetTableLineageByTaskIdRequest &) = default ;
    GetTableLineageByTaskIdRequest& operator=(GetTableLineageByTaskIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && return this->tableLineageByTaskIdQuery_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetTableLineageByTaskIdRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // tableLineageByTaskIdQuery Field Functions 
    bool hasTableLineageByTaskIdQuery() const { return this->tableLineageByTaskIdQuery_ != nullptr;};
    void deleteTableLineageByTaskIdQuery() { this->tableLineageByTaskIdQuery_ = nullptr;};
    inline const GetTableLineageByTaskIdRequestTableLineageByTaskIdQuery & tableLineageByTaskIdQuery() const { DARABONBA_PTR_GET_CONST(tableLineageByTaskIdQuery_, GetTableLineageByTaskIdRequestTableLineageByTaskIdQuery) };
    inline GetTableLineageByTaskIdRequestTableLineageByTaskIdQuery tableLineageByTaskIdQuery() { DARABONBA_PTR_GET(tableLineageByTaskIdQuery_, GetTableLineageByTaskIdRequestTableLineageByTaskIdQuery) };
    inline GetTableLineageByTaskIdRequest& setTableLineageByTaskIdQuery(const GetTableLineageByTaskIdRequestTableLineageByTaskIdQuery & tableLineageByTaskIdQuery) { DARABONBA_PTR_SET_VALUE(tableLineageByTaskIdQuery_, tableLineageByTaskIdQuery) };
    inline GetTableLineageByTaskIdRequest& setTableLineageByTaskIdQuery(GetTableLineageByTaskIdRequestTableLineageByTaskIdQuery && tableLineageByTaskIdQuery) { DARABONBA_PTR_SET_RVALUE(tableLineageByTaskIdQuery_, tableLineageByTaskIdQuery) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<GetTableLineageByTaskIdRequestTableLineageByTaskIdQuery> tableLineageByTaskIdQuery_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
