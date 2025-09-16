// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLISHADVANCECONFIGREQUESTFILES_HPP_
#define ALIBABACLOUD_MODELS_PUBLISHADVANCECONFIGREQUESTFILES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PublishAdvanceConfigRequestFilesConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class PublishAdvanceConfigRequestFiles : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublishAdvanceConfigRequestFiles& obj) { 
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(dirName, dirName_);
      DARABONBA_PTR_TO_JSON(fileName, fileName_);
      DARABONBA_PTR_TO_JSON(operateType, operateType_);
      DARABONBA_PTR_TO_JSON(ossPath, ossPath_);
      DARABONBA_PTR_TO_JSON(parentFullPath, parentFullPath_);
    };
    friend void from_json(const Darabonba::Json& j, PublishAdvanceConfigRequestFiles& obj) { 
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(dirName, dirName_);
      DARABONBA_PTR_FROM_JSON(fileName, fileName_);
      DARABONBA_PTR_FROM_JSON(operateType, operateType_);
      DARABONBA_PTR_FROM_JSON(ossPath, ossPath_);
      DARABONBA_PTR_FROM_JSON(parentFullPath, parentFullPath_);
    };
    PublishAdvanceConfigRequestFiles() = default ;
    PublishAdvanceConfigRequestFiles(const PublishAdvanceConfigRequestFiles &) = default ;
    PublishAdvanceConfigRequestFiles(PublishAdvanceConfigRequestFiles &&) = default ;
    PublishAdvanceConfigRequestFiles(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublishAdvanceConfigRequestFiles() = default ;
    PublishAdvanceConfigRequestFiles& operator=(const PublishAdvanceConfigRequestFiles &) = default ;
    PublishAdvanceConfigRequestFiles& operator=(PublishAdvanceConfigRequestFiles &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->config_ != nullptr
        && this->dirName_ != nullptr && this->fileName_ != nullptr && this->operateType_ != nullptr && this->ossPath_ != nullptr && this->parentFullPath_ != nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const Models::PublishAdvanceConfigRequestFilesConfig & config() const { DARABONBA_PTR_GET_CONST(config_, Models::PublishAdvanceConfigRequestFilesConfig) };
    inline Models::PublishAdvanceConfigRequestFilesConfig config() { DARABONBA_PTR_GET(config_, Models::PublishAdvanceConfigRequestFilesConfig) };
    inline PublishAdvanceConfigRequestFiles& setConfig(const Models::PublishAdvanceConfigRequestFilesConfig & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline PublishAdvanceConfigRequestFiles& setConfig(Models::PublishAdvanceConfigRequestFilesConfig && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // dirName Field Functions 
    bool hasDirName() const { return this->dirName_ != nullptr;};
    void deleteDirName() { this->dirName_ = nullptr;};
    inline string dirName() const { DARABONBA_PTR_GET_DEFAULT(dirName_, "") };
    inline PublishAdvanceConfigRequestFiles& setDirName(string dirName) { DARABONBA_PTR_SET_VALUE(dirName_, dirName) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline PublishAdvanceConfigRequestFiles& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // operateType Field Functions 
    bool hasOperateType() const { return this->operateType_ != nullptr;};
    void deleteOperateType() { this->operateType_ = nullptr;};
    inline string operateType() const { DARABONBA_PTR_GET_DEFAULT(operateType_, "") };
    inline PublishAdvanceConfigRequestFiles& setOperateType(string operateType) { DARABONBA_PTR_SET_VALUE(operateType_, operateType) };


    // ossPath Field Functions 
    bool hasOssPath() const { return this->ossPath_ != nullptr;};
    void deleteOssPath() { this->ossPath_ = nullptr;};
    inline string ossPath() const { DARABONBA_PTR_GET_DEFAULT(ossPath_, "") };
    inline PublishAdvanceConfigRequestFiles& setOssPath(string ossPath) { DARABONBA_PTR_SET_VALUE(ossPath_, ossPath) };


    // parentFullPath Field Functions 
    bool hasParentFullPath() const { return this->parentFullPath_ != nullptr;};
    void deleteParentFullPath() { this->parentFullPath_ = nullptr;};
    inline string parentFullPath() const { DARABONBA_PTR_GET_DEFAULT(parentFullPath_, "") };
    inline PublishAdvanceConfigRequestFiles& setParentFullPath(string parentFullPath) { DARABONBA_PTR_SET_VALUE(parentFullPath_, parentFullPath) };


  protected:
    // The information about the advanced configuration.
    std::shared_ptr<Models::PublishAdvanceConfigRequestFilesConfig> config_ = nullptr;
    // The directory name.
    std::shared_ptr<string> dirName_ = nullptr;
    // The file name.
    std::shared_ptr<string> fileName_ = nullptr;
    // The operation type. Valid values: UPDATE and DELETE. Default value: UPDATE.
    std::shared_ptr<string> operateType_ = nullptr;
    // The path of the Object Storage Service (OSS) object.
    std::shared_ptr<string> ossPath_ = nullptr;
    // The path of the parent directory.
    std::shared_ptr<string> parentFullPath_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
