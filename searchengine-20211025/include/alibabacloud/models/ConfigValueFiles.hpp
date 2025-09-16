// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGVALUEFILES_HPP_
#define ALIBABACLOUD_MODELS_CONFIGVALUEFILES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ConfigValueFilesConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ConfigValueFiles : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigValueFiles& obj) { 
      DARABONBA_PTR_TO_JSON(operateType, operateType_);
      DARABONBA_PTR_TO_JSON(parentFullPath, parentFullPath_);
      DARABONBA_PTR_TO_JSON(fileName, fileName_);
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(dirName, dirName_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigValueFiles& obj) { 
      DARABONBA_PTR_FROM_JSON(operateType, operateType_);
      DARABONBA_PTR_FROM_JSON(parentFullPath, parentFullPath_);
      DARABONBA_PTR_FROM_JSON(fileName, fileName_);
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(dirName, dirName_);
    };
    ConfigValueFiles() = default ;
    ConfigValueFiles(const ConfigValueFiles &) = default ;
    ConfigValueFiles(ConfigValueFiles &&) = default ;
    ConfigValueFiles(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigValueFiles() = default ;
    ConfigValueFiles& operator=(const ConfigValueFiles &) = default ;
    ConfigValueFiles& operator=(ConfigValueFiles &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->operateType_ != nullptr
        && this->parentFullPath_ != nullptr && this->fileName_ != nullptr && this->config_ != nullptr && this->dirName_ != nullptr; };
    // operateType Field Functions 
    bool hasOperateType() const { return this->operateType_ != nullptr;};
    void deleteOperateType() { this->operateType_ = nullptr;};
    inline string operateType() const { DARABONBA_PTR_GET_DEFAULT(operateType_, "") };
    inline ConfigValueFiles& setOperateType(string operateType) { DARABONBA_PTR_SET_VALUE(operateType_, operateType) };


    // parentFullPath Field Functions 
    bool hasParentFullPath() const { return this->parentFullPath_ != nullptr;};
    void deleteParentFullPath() { this->parentFullPath_ = nullptr;};
    inline string parentFullPath() const { DARABONBA_PTR_GET_DEFAULT(parentFullPath_, "") };
    inline ConfigValueFiles& setParentFullPath(string parentFullPath) { DARABONBA_PTR_SET_VALUE(parentFullPath_, parentFullPath) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline ConfigValueFiles& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const Models::ConfigValueFilesConfig & config() const { DARABONBA_PTR_GET_CONST(config_, Models::ConfigValueFilesConfig) };
    inline Models::ConfigValueFilesConfig config() { DARABONBA_PTR_GET(config_, Models::ConfigValueFilesConfig) };
    inline ConfigValueFiles& setConfig(const Models::ConfigValueFilesConfig & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline ConfigValueFiles& setConfig(Models::ConfigValueFilesConfig && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // dirName Field Functions 
    bool hasDirName() const { return this->dirName_ != nullptr;};
    void deleteDirName() { this->dirName_ = nullptr;};
    inline string dirName() const { DARABONBA_PTR_GET_DEFAULT(dirName_, "") };
    inline ConfigValueFiles& setDirName(string dirName) { DARABONBA_PTR_SET_VALUE(dirName_, dirName) };


  protected:
    // The operation type. Valid values: UPDATE and DELETE. Default value: UPDATE.
    std::shared_ptr<string> operateType_ = nullptr;
    // The path of the parent directory.
    std::shared_ptr<string> parentFullPath_ = nullptr;
    // The file name.
    std::shared_ptr<string> fileName_ = nullptr;
    // The configuration to be modified.
    std::shared_ptr<Models::ConfigValueFilesConfig> config_ = nullptr;
    // The directory name.
    std::shared_ptr<string> dirName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
