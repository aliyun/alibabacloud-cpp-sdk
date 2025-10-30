// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTROWPERMISSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTROWPERMISSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListRowPermissionRequestPageRowPermissionQuery.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListRowPermissionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRowPermissionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(PageRowPermissionQuery, pageRowPermissionQuery_);
    };
    friend void from_json(const Darabonba::Json& j, ListRowPermissionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(PageRowPermissionQuery, pageRowPermissionQuery_);
    };
    ListRowPermissionRequest() = default ;
    ListRowPermissionRequest(const ListRowPermissionRequest &) = default ;
    ListRowPermissionRequest(ListRowPermissionRequest &&) = default ;
    ListRowPermissionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRowPermissionRequest() = default ;
    ListRowPermissionRequest& operator=(const ListRowPermissionRequest &) = default ;
    ListRowPermissionRequest& operator=(ListRowPermissionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && return this->pageRowPermissionQuery_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ListRowPermissionRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // pageRowPermissionQuery Field Functions 
    bool hasPageRowPermissionQuery() const { return this->pageRowPermissionQuery_ != nullptr;};
    void deletePageRowPermissionQuery() { this->pageRowPermissionQuery_ = nullptr;};
    inline const ListRowPermissionRequestPageRowPermissionQuery & pageRowPermissionQuery() const { DARABONBA_PTR_GET_CONST(pageRowPermissionQuery_, ListRowPermissionRequestPageRowPermissionQuery) };
    inline ListRowPermissionRequestPageRowPermissionQuery pageRowPermissionQuery() { DARABONBA_PTR_GET(pageRowPermissionQuery_, ListRowPermissionRequestPageRowPermissionQuery) };
    inline ListRowPermissionRequest& setPageRowPermissionQuery(const ListRowPermissionRequestPageRowPermissionQuery & pageRowPermissionQuery) { DARABONBA_PTR_SET_VALUE(pageRowPermissionQuery_, pageRowPermissionQuery) };
    inline ListRowPermissionRequest& setPageRowPermissionQuery(ListRowPermissionRequestPageRowPermissionQuery && pageRowPermissionQuery) { DARABONBA_PTR_SET_RVALUE(pageRowPermissionQuery_, pageRowPermissionQuery) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<ListRowPermissionRequestPageRowPermissionQuery> pageRowPermissionQuery_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
