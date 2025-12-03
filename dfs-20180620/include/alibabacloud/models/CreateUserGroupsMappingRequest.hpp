// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUSERGROUPSMAPPINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEUSERGROUPSMAPPINGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class CreateUserGroupsMappingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUserGroupsMappingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(GroupNames, groupNames_);
      DARABONBA_PTR_TO_JSON(InputRegionId, inputRegionId_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUserGroupsMappingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(GroupNames, groupNames_);
      DARABONBA_PTR_FROM_JSON(InputRegionId, inputRegionId_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    CreateUserGroupsMappingRequest() = default ;
    CreateUserGroupsMappingRequest(const CreateUserGroupsMappingRequest &) = default ;
    CreateUserGroupsMappingRequest(CreateUserGroupsMappingRequest &&) = default ;
    CreateUserGroupsMappingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUserGroupsMappingRequest() = default ;
    CreateUserGroupsMappingRequest& operator=(const CreateUserGroupsMappingRequest &) = default ;
    CreateUserGroupsMappingRequest& operator=(CreateUserGroupsMappingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileSystemId_ == nullptr
        && return this->groupNames_ == nullptr && return this->inputRegionId_ == nullptr && return this->userName_ == nullptr; };
    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline CreateUserGroupsMappingRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // groupNames Field Functions 
    bool hasGroupNames() const { return this->groupNames_ != nullptr;};
    void deleteGroupNames() { this->groupNames_ = nullptr;};
    inline const vector<string> & groupNames() const { DARABONBA_PTR_GET_CONST(groupNames_, vector<string>) };
    inline vector<string> groupNames() { DARABONBA_PTR_GET(groupNames_, vector<string>) };
    inline CreateUserGroupsMappingRequest& setGroupNames(const vector<string> & groupNames) { DARABONBA_PTR_SET_VALUE(groupNames_, groupNames) };
    inline CreateUserGroupsMappingRequest& setGroupNames(vector<string> && groupNames) { DARABONBA_PTR_SET_RVALUE(groupNames_, groupNames) };


    // inputRegionId Field Functions 
    bool hasInputRegionId() const { return this->inputRegionId_ != nullptr;};
    void deleteInputRegionId() { this->inputRegionId_ = nullptr;};
    inline string inputRegionId() const { DARABONBA_PTR_GET_DEFAULT(inputRegionId_, "") };
    inline CreateUserGroupsMappingRequest& setInputRegionId(string inputRegionId) { DARABONBA_PTR_SET_VALUE(inputRegionId_, inputRegionId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline CreateUserGroupsMappingRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> fileSystemId_ = nullptr;
    std::shared_ptr<vector<string>> groupNames_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> inputRegionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
