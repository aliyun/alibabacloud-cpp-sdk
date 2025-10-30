// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASERVICEMYAPIPERMISSIONSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASERVICEMYAPIPERMISSIONSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListDataServiceMyApiPermissionsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataServiceMyApiPermissionsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ListQuery, listQueryShrink_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataServiceMyApiPermissionsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ListQuery, listQueryShrink_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    ListDataServiceMyApiPermissionsShrinkRequest() = default ;
    ListDataServiceMyApiPermissionsShrinkRequest(const ListDataServiceMyApiPermissionsShrinkRequest &) = default ;
    ListDataServiceMyApiPermissionsShrinkRequest(ListDataServiceMyApiPermissionsShrinkRequest &&) = default ;
    ListDataServiceMyApiPermissionsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataServiceMyApiPermissionsShrinkRequest() = default ;
    ListDataServiceMyApiPermissionsShrinkRequest& operator=(const ListDataServiceMyApiPermissionsShrinkRequest &) = default ;
    ListDataServiceMyApiPermissionsShrinkRequest& operator=(ListDataServiceMyApiPermissionsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->listQueryShrink_ == nullptr
        && return this->opTenantId_ == nullptr && return this->projectId_ == nullptr; };
    // listQueryShrink Field Functions 
    bool hasListQueryShrink() const { return this->listQueryShrink_ != nullptr;};
    void deleteListQueryShrink() { this->listQueryShrink_ = nullptr;};
    inline string listQueryShrink() const { DARABONBA_PTR_GET_DEFAULT(listQueryShrink_, "") };
    inline ListDataServiceMyApiPermissionsShrinkRequest& setListQueryShrink(string listQueryShrink) { DARABONBA_PTR_SET_VALUE(listQueryShrink_, listQueryShrink) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ListDataServiceMyApiPermissionsShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int32_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0) };
    inline ListDataServiceMyApiPermissionsShrinkRequest& setProjectId(int32_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    std::shared_ptr<string> listQueryShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
