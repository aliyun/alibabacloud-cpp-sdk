// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTMEMBERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTMEMBERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListProjectMembersRequestListQuery.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListProjectMembersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectMembersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectMembersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    ListProjectMembersRequest() = default ;
    ListProjectMembersRequest(const ListProjectMembersRequest &) = default ;
    ListProjectMembersRequest(ListProjectMembersRequest &&) = default ;
    ListProjectMembersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectMembersRequest() = default ;
    ListProjectMembersRequest& operator=(const ListProjectMembersRequest &) = default ;
    ListProjectMembersRequest& operator=(ListProjectMembersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->listQuery_ != nullptr && this->opTenantId_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListProjectMembersRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // listQuery Field Functions 
    bool hasListQuery() const { return this->listQuery_ != nullptr;};
    void deleteListQuery() { this->listQuery_ = nullptr;};
    inline const ListProjectMembersRequestListQuery & listQuery() const { DARABONBA_PTR_GET_CONST(listQuery_, ListProjectMembersRequestListQuery) };
    inline ListProjectMembersRequestListQuery listQuery() { DARABONBA_PTR_GET(listQuery_, ListProjectMembersRequestListQuery) };
    inline ListProjectMembersRequest& setListQuery(const ListProjectMembersRequestListQuery & listQuery) { DARABONBA_PTR_SET_VALUE(listQuery_, listQuery) };
    inline ListProjectMembersRequest& setListQuery(ListProjectMembersRequestListQuery && listQuery) { DARABONBA_PTR_SET_RVALUE(listQuery_, listQuery) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ListProjectMembersRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    // This parameter is required.
    std::shared_ptr<ListProjectMembersRequestListQuery> listQuery_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
