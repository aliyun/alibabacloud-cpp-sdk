// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLERESOURCEDIRECTORYRESPONSEBODYRESOURCEDIRECTORY_HPP_
#define ALIBABACLOUD_MODELS_ENABLERESOURCEDIRECTORYRESPONSEBODYRESOURCEDIRECTORY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class EnableResourceDirectoryResponseBodyResourceDirectory : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableResourceDirectoryResponseBodyResourceDirectory& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(MasterAccountId, masterAccountId_);
      DARABONBA_PTR_TO_JSON(MasterAccountName, masterAccountName_);
      DARABONBA_PTR_TO_JSON(ResourceDirectoryId, resourceDirectoryId_);
      DARABONBA_PTR_TO_JSON(RootFolderId, rootFolderId_);
    };
    friend void from_json(const Darabonba::Json& j, EnableResourceDirectoryResponseBodyResourceDirectory& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(MasterAccountId, masterAccountId_);
      DARABONBA_PTR_FROM_JSON(MasterAccountName, masterAccountName_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryId, resourceDirectoryId_);
      DARABONBA_PTR_FROM_JSON(RootFolderId, rootFolderId_);
    };
    EnableResourceDirectoryResponseBodyResourceDirectory() = default ;
    EnableResourceDirectoryResponseBodyResourceDirectory(const EnableResourceDirectoryResponseBodyResourceDirectory &) = default ;
    EnableResourceDirectoryResponseBodyResourceDirectory(EnableResourceDirectoryResponseBodyResourceDirectory &&) = default ;
    EnableResourceDirectoryResponseBodyResourceDirectory(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableResourceDirectoryResponseBodyResourceDirectory() = default ;
    EnableResourceDirectoryResponseBodyResourceDirectory& operator=(const EnableResourceDirectoryResponseBodyResourceDirectory &) = default ;
    EnableResourceDirectoryResponseBodyResourceDirectory& operator=(EnableResourceDirectoryResponseBodyResourceDirectory &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->masterAccountId_ == nullptr && return this->masterAccountName_ == nullptr && return this->resourceDirectoryId_ == nullptr && return this->rootFolderId_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline EnableResourceDirectoryResponseBodyResourceDirectory& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // masterAccountId Field Functions 
    bool hasMasterAccountId() const { return this->masterAccountId_ != nullptr;};
    void deleteMasterAccountId() { this->masterAccountId_ = nullptr;};
    inline string masterAccountId() const { DARABONBA_PTR_GET_DEFAULT(masterAccountId_, "") };
    inline EnableResourceDirectoryResponseBodyResourceDirectory& setMasterAccountId(string masterAccountId) { DARABONBA_PTR_SET_VALUE(masterAccountId_, masterAccountId) };


    // masterAccountName Field Functions 
    bool hasMasterAccountName() const { return this->masterAccountName_ != nullptr;};
    void deleteMasterAccountName() { this->masterAccountName_ = nullptr;};
    inline string masterAccountName() const { DARABONBA_PTR_GET_DEFAULT(masterAccountName_, "") };
    inline EnableResourceDirectoryResponseBodyResourceDirectory& setMasterAccountName(string masterAccountName) { DARABONBA_PTR_SET_VALUE(masterAccountName_, masterAccountName) };


    // resourceDirectoryId Field Functions 
    bool hasResourceDirectoryId() const { return this->resourceDirectoryId_ != nullptr;};
    void deleteResourceDirectoryId() { this->resourceDirectoryId_ = nullptr;};
    inline string resourceDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryId_, "") };
    inline EnableResourceDirectoryResponseBodyResourceDirectory& setResourceDirectoryId(string resourceDirectoryId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryId_, resourceDirectoryId) };


    // rootFolderId Field Functions 
    bool hasRootFolderId() const { return this->rootFolderId_ != nullptr;};
    void deleteRootFolderId() { this->rootFolderId_ = nullptr;};
    inline string rootFolderId() const { DARABONBA_PTR_GET_DEFAULT(rootFolderId_, "") };
    inline EnableResourceDirectoryResponseBodyResourceDirectory& setRootFolderId(string rootFolderId) { DARABONBA_PTR_SET_VALUE(rootFolderId_, rootFolderId) };


  protected:
    // The time when the resource directory was enabled.
    std::shared_ptr<string> createTime_ = nullptr;
    // The ID of the management account.
    std::shared_ptr<string> masterAccountId_ = nullptr;
    // The name of the management account.
    std::shared_ptr<string> masterAccountName_ = nullptr;
    // The ID of the resource directory.
    std::shared_ptr<string> resourceDirectoryId_ = nullptr;
    // The ID of the Root folder.
    std::shared_ptr<string> rootFolderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
