// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Datahub20240620
{
namespace Models
{
  class GetGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
    };
    friend void from_json(const Darabonba::Json& j, GetGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
    };
    GetGroupRequest() = default ;
    GetGroupRequest(const GetGroupRequest &) = default ;
    GetGroupRequest(GetGroupRequest &&) = default ;
    GetGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGroupRequest() = default ;
    GetGroupRequest& operator=(const GetGroupRequest &) = default ;
    GetGroupRequest& operator=(GetGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupName_ == nullptr
        && this->projectName_ == nullptr; };
    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline GetGroupRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline GetGroupRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


  protected:
    // This parameter is required.
    shared_ptr<string> groupName_ {};
    // This parameter is required.
    shared_ptr<string> projectName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Datahub20240620
#endif
