// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEUSERGROUPSMAPPINGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEUSERGROUPSMAPPINGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class DeleteUserGroupsMappingShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteUserGroupsMappingShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(GroupNames, groupNamesShrink_);
      DARABONBA_PTR_TO_JSON(InputRegionId, inputRegionId_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteUserGroupsMappingShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(GroupNames, groupNamesShrink_);
      DARABONBA_PTR_FROM_JSON(InputRegionId, inputRegionId_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    DeleteUserGroupsMappingShrinkRequest() = default ;
    DeleteUserGroupsMappingShrinkRequest(const DeleteUserGroupsMappingShrinkRequest &) = default ;
    DeleteUserGroupsMappingShrinkRequest(DeleteUserGroupsMappingShrinkRequest &&) = default ;
    DeleteUserGroupsMappingShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteUserGroupsMappingShrinkRequest() = default ;
    DeleteUserGroupsMappingShrinkRequest& operator=(const DeleteUserGroupsMappingShrinkRequest &) = default ;
    DeleteUserGroupsMappingShrinkRequest& operator=(DeleteUserGroupsMappingShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileSystemId_ == nullptr
        && return this->groupNamesShrink_ == nullptr && return this->inputRegionId_ == nullptr && return this->userName_ == nullptr; };
    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline DeleteUserGroupsMappingShrinkRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // groupNamesShrink Field Functions 
    bool hasGroupNamesShrink() const { return this->groupNamesShrink_ != nullptr;};
    void deleteGroupNamesShrink() { this->groupNamesShrink_ = nullptr;};
    inline string groupNamesShrink() const { DARABONBA_PTR_GET_DEFAULT(groupNamesShrink_, "") };
    inline DeleteUserGroupsMappingShrinkRequest& setGroupNamesShrink(string groupNamesShrink) { DARABONBA_PTR_SET_VALUE(groupNamesShrink_, groupNamesShrink) };


    // inputRegionId Field Functions 
    bool hasInputRegionId() const { return this->inputRegionId_ != nullptr;};
    void deleteInputRegionId() { this->inputRegionId_ = nullptr;};
    inline string inputRegionId() const { DARABONBA_PTR_GET_DEFAULT(inputRegionId_, "") };
    inline DeleteUserGroupsMappingShrinkRequest& setInputRegionId(string inputRegionId) { DARABONBA_PTR_SET_VALUE(inputRegionId_, inputRegionId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline DeleteUserGroupsMappingShrinkRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> fileSystemId_ = nullptr;
    std::shared_ptr<string> groupNamesShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> inputRegionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
