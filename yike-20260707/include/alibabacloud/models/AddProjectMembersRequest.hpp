// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDPROJECTMEMBERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDPROJECTMEMBERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260707
{
namespace Models
{
  class AddProjectMembersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddProjectMembersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(YikeUserIds, yikeUserIds_);
    };
    friend void from_json(const Darabonba::Json& j, AddProjectMembersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(YikeUserIds, yikeUserIds_);
    };
    AddProjectMembersRequest() = default ;
    AddProjectMembersRequest(const AddProjectMembersRequest &) = default ;
    AddProjectMembersRequest(AddProjectMembersRequest &&) = default ;
    AddProjectMembersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddProjectMembersRequest() = default ;
    AddProjectMembersRequest& operator=(const AddProjectMembersRequest &) = default ;
    AddProjectMembersRequest& operator=(AddProjectMembersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->projectId_ == nullptr
        && this->yikeUserIds_ == nullptr; };
    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline AddProjectMembersRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // yikeUserIds Field Functions 
    bool hasYikeUserIds() const { return this->yikeUserIds_ != nullptr;};
    void deleteYikeUserIds() { this->yikeUserIds_ = nullptr;};
    inline string getYikeUserIds() const { DARABONBA_PTR_GET_DEFAULT(yikeUserIds_, "") };
    inline AddProjectMembersRequest& setYikeUserIds(string yikeUserIds) { DARABONBA_PTR_SET_VALUE(yikeUserIds_, yikeUserIds) };


  protected:
    // The project ID.
    // 
    // This parameter is required.
    shared_ptr<string> projectId_ {};
    // The Yike user IDs to be added. Separate multiple IDs with commas. The users must belong to the current Alibaba Cloud account. By default, the Edit permission is granted.
    // 
    // This parameter is required.
    shared_ptr<string> yikeUserIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif
