// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECONFIGFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECONFIGFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class CreateConfigFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateConfigFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(fileName, fileName_);
      DARABONBA_PTR_TO_JSON(ossPath, ossPath_);
      DARABONBA_PTR_TO_JSON(parentFullPath, parentFullPath_);
    };
    friend void from_json(const Darabonba::Json& j, CreateConfigFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(fileName, fileName_);
      DARABONBA_PTR_FROM_JSON(ossPath, ossPath_);
      DARABONBA_PTR_FROM_JSON(parentFullPath, parentFullPath_);
    };
    CreateConfigFileRequest() = default ;
    CreateConfigFileRequest(const CreateConfigFileRequest &) = default ;
    CreateConfigFileRequest(CreateConfigFileRequest &&) = default ;
    CreateConfigFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateConfigFileRequest() = default ;
    CreateConfigFileRequest& operator=(const CreateConfigFileRequest &) = default ;
    CreateConfigFileRequest& operator=(CreateConfigFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fileName_ != nullptr
        && this->ossPath_ != nullptr && this->parentFullPath_ != nullptr; };
    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline CreateConfigFileRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // ossPath Field Functions 
    bool hasOssPath() const { return this->ossPath_ != nullptr;};
    void deleteOssPath() { this->ossPath_ = nullptr;};
    inline string ossPath() const { DARABONBA_PTR_GET_DEFAULT(ossPath_, "") };
    inline CreateConfigFileRequest& setOssPath(string ossPath) { DARABONBA_PTR_SET_VALUE(ossPath_, ossPath) };


    // parentFullPath Field Functions 
    bool hasParentFullPath() const { return this->parentFullPath_ != nullptr;};
    void deleteParentFullPath() { this->parentFullPath_ = nullptr;};
    inline string parentFullPath() const { DARABONBA_PTR_GET_DEFAULT(parentFullPath_, "") };
    inline CreateConfigFileRequest& setParentFullPath(string parentFullPath) { DARABONBA_PTR_SET_VALUE(parentFullPath_, parentFullPath) };


  protected:
    // The name of the directory.
    std::shared_ptr<string> fileName_ = nullptr;
    // The Object Storage Service (OSS) URL of the file.
    std::shared_ptr<string> ossPath_ = nullptr;
    // The path of the parent directory.
    std::shared_ptr<string> parentFullPath_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
