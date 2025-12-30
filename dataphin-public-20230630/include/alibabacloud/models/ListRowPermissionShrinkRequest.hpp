// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTROWPERMISSIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTROWPERMISSIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListRowPermissionShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRowPermissionShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(PageRowPermissionQuery, pageRowPermissionQueryShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListRowPermissionShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(PageRowPermissionQuery, pageRowPermissionQueryShrink_);
    };
    ListRowPermissionShrinkRequest() = default ;
    ListRowPermissionShrinkRequest(const ListRowPermissionShrinkRequest &) = default ;
    ListRowPermissionShrinkRequest(ListRowPermissionShrinkRequest &&) = default ;
    ListRowPermissionShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRowPermissionShrinkRequest() = default ;
    ListRowPermissionShrinkRequest& operator=(const ListRowPermissionShrinkRequest &) = default ;
    ListRowPermissionShrinkRequest& operator=(ListRowPermissionShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->pageRowPermissionQueryShrink_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ListRowPermissionShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // pageRowPermissionQueryShrink Field Functions 
    bool hasPageRowPermissionQueryShrink() const { return this->pageRowPermissionQueryShrink_ != nullptr;};
    void deletePageRowPermissionQueryShrink() { this->pageRowPermissionQueryShrink_ = nullptr;};
    inline string getPageRowPermissionQueryShrink() const { DARABONBA_PTR_GET_DEFAULT(pageRowPermissionQueryShrink_, "") };
    inline ListRowPermissionShrinkRequest& setPageRowPermissionQueryShrink(string pageRowPermissionQueryShrink) { DARABONBA_PTR_SET_VALUE(pageRowPermissionQueryShrink_, pageRowPermissionQueryShrink) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<string> pageRowPermissionQueryShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
