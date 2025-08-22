// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEJOBREQUESTDATASOURCES_HPP_
#define ALIBABACLOUD_MODELS_CREATEJOBREQUESTDATASOURCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class CreateJobRequestDataSources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateJobRequestDataSources& obj) { 
      DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_TO_JSON(DataSourceVersion, dataSourceVersion_);
      DARABONBA_PTR_TO_JSON(EnableCache, enableCache_);
      DARABONBA_PTR_TO_JSON(MountAccess, mountAccess_);
      DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
      DARABONBA_PTR_TO_JSON(Options, options_);
      DARABONBA_PTR_TO_JSON(Uri, uri_);
    };
    friend void from_json(const Darabonba::Json& j, CreateJobRequestDataSources& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_FROM_JSON(DataSourceVersion, dataSourceVersion_);
      DARABONBA_PTR_FROM_JSON(EnableCache, enableCache_);
      DARABONBA_PTR_FROM_JSON(MountAccess, mountAccess_);
      DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
      DARABONBA_PTR_FROM_JSON(Options, options_);
      DARABONBA_PTR_FROM_JSON(Uri, uri_);
    };
    CreateJobRequestDataSources() = default ;
    CreateJobRequestDataSources(const CreateJobRequestDataSources &) = default ;
    CreateJobRequestDataSources(CreateJobRequestDataSources &&) = default ;
    CreateJobRequestDataSources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateJobRequestDataSources() = default ;
    CreateJobRequestDataSources& operator=(const CreateJobRequestDataSources &) = default ;
    CreateJobRequestDataSources& operator=(CreateJobRequestDataSources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataSourceId_ != nullptr
        && this->dataSourceVersion_ != nullptr && this->enableCache_ != nullptr && this->mountAccess_ != nullptr && this->mountPath_ != nullptr && this->options_ != nullptr
        && this->uri_ != nullptr; };
    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline string dataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
    inline CreateJobRequestDataSources& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // dataSourceVersion Field Functions 
    bool hasDataSourceVersion() const { return this->dataSourceVersion_ != nullptr;};
    void deleteDataSourceVersion() { this->dataSourceVersion_ = nullptr;};
    inline string dataSourceVersion() const { DARABONBA_PTR_GET_DEFAULT(dataSourceVersion_, "") };
    inline CreateJobRequestDataSources& setDataSourceVersion(string dataSourceVersion) { DARABONBA_PTR_SET_VALUE(dataSourceVersion_, dataSourceVersion) };


    // enableCache Field Functions 
    bool hasEnableCache() const { return this->enableCache_ != nullptr;};
    void deleteEnableCache() { this->enableCache_ = nullptr;};
    inline bool enableCache() const { DARABONBA_PTR_GET_DEFAULT(enableCache_, false) };
    inline CreateJobRequestDataSources& setEnableCache(bool enableCache) { DARABONBA_PTR_SET_VALUE(enableCache_, enableCache) };


    // mountAccess Field Functions 
    bool hasMountAccess() const { return this->mountAccess_ != nullptr;};
    void deleteMountAccess() { this->mountAccess_ = nullptr;};
    inline string mountAccess() const { DARABONBA_PTR_GET_DEFAULT(mountAccess_, "") };
    inline CreateJobRequestDataSources& setMountAccess(string mountAccess) { DARABONBA_PTR_SET_VALUE(mountAccess_, mountAccess) };


    // mountPath Field Functions 
    bool hasMountPath() const { return this->mountPath_ != nullptr;};
    void deleteMountPath() { this->mountPath_ = nullptr;};
    inline string mountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
    inline CreateJobRequestDataSources& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline string options() const { DARABONBA_PTR_GET_DEFAULT(options_, "") };
    inline CreateJobRequestDataSources& setOptions(string options) { DARABONBA_PTR_SET_VALUE(options_, options) };


    // uri Field Functions 
    bool hasUri() const { return this->uri_ != nullptr;};
    void deleteUri() { this->uri_ = nullptr;};
    inline string uri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
    inline CreateJobRequestDataSources& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


  protected:
    // The data source ID.
    std::shared_ptr<string> dataSourceId_ = nullptr;
    std::shared_ptr<string> dataSourceVersion_ = nullptr;
    std::shared_ptr<bool> enableCache_ = nullptr;
    std::shared_ptr<string> mountAccess_ = nullptr;
    // The path to which the job is mounted. By default, the mount path in the data source configuration is used. This parameter is optional.
    std::shared_ptr<string> mountPath_ = nullptr;
    // The mount attribute of the custom dataset. Set the value to OSS.
    std::shared_ptr<string> options_ = nullptr;
    // The data source path.
    std::shared_ptr<string> uri_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
