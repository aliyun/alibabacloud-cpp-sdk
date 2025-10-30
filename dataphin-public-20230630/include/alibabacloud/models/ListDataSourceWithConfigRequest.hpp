// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASOURCEWITHCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASOURCEWITHCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDataSourceWithConfigRequestListQuery.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListDataSourceWithConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataSourceWithConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataSourceWithConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    ListDataSourceWithConfigRequest() = default ;
    ListDataSourceWithConfigRequest(const ListDataSourceWithConfigRequest &) = default ;
    ListDataSourceWithConfigRequest(ListDataSourceWithConfigRequest &&) = default ;
    ListDataSourceWithConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataSourceWithConfigRequest() = default ;
    ListDataSourceWithConfigRequest& operator=(const ListDataSourceWithConfigRequest &) = default ;
    ListDataSourceWithConfigRequest& operator=(ListDataSourceWithConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->listQuery_ == nullptr
        && return this->opTenantId_ == nullptr; };
    // listQuery Field Functions 
    bool hasListQuery() const { return this->listQuery_ != nullptr;};
    void deleteListQuery() { this->listQuery_ = nullptr;};
    inline const ListDataSourceWithConfigRequestListQuery & listQuery() const { DARABONBA_PTR_GET_CONST(listQuery_, ListDataSourceWithConfigRequestListQuery) };
    inline ListDataSourceWithConfigRequestListQuery listQuery() { DARABONBA_PTR_GET(listQuery_, ListDataSourceWithConfigRequestListQuery) };
    inline ListDataSourceWithConfigRequest& setListQuery(const ListDataSourceWithConfigRequestListQuery & listQuery) { DARABONBA_PTR_SET_VALUE(listQuery_, listQuery) };
    inline ListDataSourceWithConfigRequest& setListQuery(ListDataSourceWithConfigRequestListQuery && listQuery) { DARABONBA_PTR_SET_RVALUE(listQuery_, listQuery) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ListDataSourceWithConfigRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    std::shared_ptr<ListDataSourceWithConfigRequestListQuery> listQuery_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
