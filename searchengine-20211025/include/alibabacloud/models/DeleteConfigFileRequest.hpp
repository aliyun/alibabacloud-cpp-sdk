// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECONFIGFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECONFIGFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class DeleteConfigFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteConfigFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(fileName, fileName_);
      DARABONBA_PTR_TO_JSON(parentFullPath, parentFullPath_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteConfigFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(fileName, fileName_);
      DARABONBA_PTR_FROM_JSON(parentFullPath, parentFullPath_);
    };
    DeleteConfigFileRequest() = default ;
    DeleteConfigFileRequest(const DeleteConfigFileRequest &) = default ;
    DeleteConfigFileRequest(DeleteConfigFileRequest &&) = default ;
    DeleteConfigFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteConfigFileRequest() = default ;
    DeleteConfigFileRequest& operator=(const DeleteConfigFileRequest &) = default ;
    DeleteConfigFileRequest& operator=(DeleteConfigFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fileName_ != nullptr
        && this->parentFullPath_ != nullptr; };
    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline DeleteConfigFileRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // parentFullPath Field Functions 
    bool hasParentFullPath() const { return this->parentFullPath_ != nullptr;};
    void deleteParentFullPath() { this->parentFullPath_ = nullptr;};
    inline string parentFullPath() const { DARABONBA_PTR_GET_DEFAULT(parentFullPath_, "") };
    inline DeleteConfigFileRequest& setParentFullPath(string parentFullPath) { DARABONBA_PTR_SET_VALUE(parentFullPath_, parentFullPath) };


  protected:
    // The file name.
    // 
    // This parameter is required.
    std::shared_ptr<string> fileName_ = nullptr;
    // The path of the parent directory.
    // 
    // This parameter is required.
    std::shared_ptr<string> parentFullPath_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
