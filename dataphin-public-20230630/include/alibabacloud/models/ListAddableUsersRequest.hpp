// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTADDABLEUSERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTADDABLEUSERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAddableUsersRequestListQuery.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListAddableUsersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAddableUsersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAddableUsersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    ListAddableUsersRequest() = default ;
    ListAddableUsersRequest(const ListAddableUsersRequest &) = default ;
    ListAddableUsersRequest(ListAddableUsersRequest &&) = default ;
    ListAddableUsersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAddableUsersRequest() = default ;
    ListAddableUsersRequest& operator=(const ListAddableUsersRequest &) = default ;
    ListAddableUsersRequest& operator=(ListAddableUsersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->listQuery_ == nullptr
        && return this->opTenantId_ == nullptr; };
    // listQuery Field Functions 
    bool hasListQuery() const { return this->listQuery_ != nullptr;};
    void deleteListQuery() { this->listQuery_ = nullptr;};
    inline const ListAddableUsersRequestListQuery & listQuery() const { DARABONBA_PTR_GET_CONST(listQuery_, ListAddableUsersRequestListQuery) };
    inline ListAddableUsersRequestListQuery listQuery() { DARABONBA_PTR_GET(listQuery_, ListAddableUsersRequestListQuery) };
    inline ListAddableUsersRequest& setListQuery(const ListAddableUsersRequestListQuery & listQuery) { DARABONBA_PTR_SET_VALUE(listQuery_, listQuery) };
    inline ListAddableUsersRequest& setListQuery(ListAddableUsersRequestListQuery && listQuery) { DARABONBA_PTR_SET_RVALUE(listQuery_, listQuery) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ListAddableUsersRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    std::shared_ptr<ListAddableUsersRequestListQuery> listQuery_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
