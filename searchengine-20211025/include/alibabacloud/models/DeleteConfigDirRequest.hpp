// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECONFIGDIRREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECONFIGDIRREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class DeleteConfigDirRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteConfigDirRequest& obj) { 
      DARABONBA_PTR_TO_JSON(dirName, dirName_);
      DARABONBA_PTR_TO_JSON(parentFullPath, parentFullPath_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteConfigDirRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(dirName, dirName_);
      DARABONBA_PTR_FROM_JSON(parentFullPath, parentFullPath_);
    };
    DeleteConfigDirRequest() = default ;
    DeleteConfigDirRequest(const DeleteConfigDirRequest &) = default ;
    DeleteConfigDirRequest(DeleteConfigDirRequest &&) = default ;
    DeleteConfigDirRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteConfigDirRequest() = default ;
    DeleteConfigDirRequest& operator=(const DeleteConfigDirRequest &) = default ;
    DeleteConfigDirRequest& operator=(DeleteConfigDirRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dirName_ != nullptr
        && this->parentFullPath_ != nullptr; };
    // dirName Field Functions 
    bool hasDirName() const { return this->dirName_ != nullptr;};
    void deleteDirName() { this->dirName_ = nullptr;};
    inline string dirName() const { DARABONBA_PTR_GET_DEFAULT(dirName_, "") };
    inline DeleteConfigDirRequest& setDirName(string dirName) { DARABONBA_PTR_SET_VALUE(dirName_, dirName) };


    // parentFullPath Field Functions 
    bool hasParentFullPath() const { return this->parentFullPath_ != nullptr;};
    void deleteParentFullPath() { this->parentFullPath_ = nullptr;};
    inline string parentFullPath() const { DARABONBA_PTR_GET_DEFAULT(parentFullPath_, "") };
    inline DeleteConfigDirRequest& setParentFullPath(string parentFullPath) { DARABONBA_PTR_SET_VALUE(parentFullPath_, parentFullPath) };


  protected:
    // The directory name.
    // 
    // This parameter is required.
    std::shared_ptr<string> dirName_ = nullptr;
    // The path of the parent directory.
    // 
    // This parameter is required.
    std::shared_ptr<string> parentFullPath_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
