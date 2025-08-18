// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTROWPERMISSIONBYUSERIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTROWPERMISSIONBYUSERIDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListRowPermissionByUserIdRequestListRowPermissionByUserIdQuery.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListRowPermissionByUserIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRowPermissionByUserIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ListRowPermissionByUserIdQuery, listRowPermissionByUserIdQuery_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRowPermissionByUserIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ListRowPermissionByUserIdQuery, listRowPermissionByUserIdQuery_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    ListRowPermissionByUserIdRequest() = default ;
    ListRowPermissionByUserIdRequest(const ListRowPermissionByUserIdRequest &) = default ;
    ListRowPermissionByUserIdRequest(ListRowPermissionByUserIdRequest &&) = default ;
    ListRowPermissionByUserIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRowPermissionByUserIdRequest() = default ;
    ListRowPermissionByUserIdRequest& operator=(const ListRowPermissionByUserIdRequest &) = default ;
    ListRowPermissionByUserIdRequest& operator=(ListRowPermissionByUserIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->listRowPermissionByUserIdQuery_ != nullptr
        && this->opTenantId_ != nullptr; };
    // listRowPermissionByUserIdQuery Field Functions 
    bool hasListRowPermissionByUserIdQuery() const { return this->listRowPermissionByUserIdQuery_ != nullptr;};
    void deleteListRowPermissionByUserIdQuery() { this->listRowPermissionByUserIdQuery_ = nullptr;};
    inline const ListRowPermissionByUserIdRequestListRowPermissionByUserIdQuery & listRowPermissionByUserIdQuery() const { DARABONBA_PTR_GET_CONST(listRowPermissionByUserIdQuery_, ListRowPermissionByUserIdRequestListRowPermissionByUserIdQuery) };
    inline ListRowPermissionByUserIdRequestListRowPermissionByUserIdQuery listRowPermissionByUserIdQuery() { DARABONBA_PTR_GET(listRowPermissionByUserIdQuery_, ListRowPermissionByUserIdRequestListRowPermissionByUserIdQuery) };
    inline ListRowPermissionByUserIdRequest& setListRowPermissionByUserIdQuery(const ListRowPermissionByUserIdRequestListRowPermissionByUserIdQuery & listRowPermissionByUserIdQuery) { DARABONBA_PTR_SET_VALUE(listRowPermissionByUserIdQuery_, listRowPermissionByUserIdQuery) };
    inline ListRowPermissionByUserIdRequest& setListRowPermissionByUserIdQuery(ListRowPermissionByUserIdRequestListRowPermissionByUserIdQuery && listRowPermissionByUserIdQuery) { DARABONBA_PTR_SET_RVALUE(listRowPermissionByUserIdQuery_, listRowPermissionByUserIdQuery) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ListRowPermissionByUserIdRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    std::shared_ptr<ListRowPermissionByUserIdRequestListRowPermissionByUserIdQuery> listRowPermissionByUserIdQuery_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
