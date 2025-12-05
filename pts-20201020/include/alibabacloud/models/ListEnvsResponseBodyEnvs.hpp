// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENVSRESPONSEBODYENVS_HPP_
#define ALIBABACLOUD_MODELS_LISTENVSRESPONSEBODYENVS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListEnvsResponseBodyEnvsFiles.hpp>
#include <alibabacloud/models/ListEnvsResponseBodyEnvsProperties.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class ListEnvsResponseBodyEnvs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnvsResponseBodyEnvs& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(EnvId, envId_);
      DARABONBA_PTR_TO_JSON(EnvName, envName_);
      DARABONBA_PTR_TO_JSON(EnvVersion, envVersion_);
      DARABONBA_PTR_TO_JSON(Files, files_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(Properties, properties_);
      DARABONBA_PTR_TO_JSON(RelatedScenes, relatedScenes_);
      DARABONBA_PTR_TO_JSON(RunningScenes, runningScenes_);
      DARABONBA_PTR_TO_JSON(UsedCapacity, usedCapacity_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnvsResponseBodyEnvs& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(EnvId, envId_);
      DARABONBA_PTR_FROM_JSON(EnvName, envName_);
      DARABONBA_PTR_FROM_JSON(EnvVersion, envVersion_);
      DARABONBA_PTR_FROM_JSON(Files, files_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(Properties, properties_);
      DARABONBA_PTR_FROM_JSON(RelatedScenes, relatedScenes_);
      DARABONBA_PTR_FROM_JSON(RunningScenes, runningScenes_);
      DARABONBA_PTR_FROM_JSON(UsedCapacity, usedCapacity_);
    };
    ListEnvsResponseBodyEnvs() = default ;
    ListEnvsResponseBodyEnvs(const ListEnvsResponseBodyEnvs &) = default ;
    ListEnvsResponseBodyEnvs(ListEnvsResponseBodyEnvs &&) = default ;
    ListEnvsResponseBodyEnvs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnvsResponseBodyEnvs() = default ;
    ListEnvsResponseBodyEnvs& operator=(const ListEnvsResponseBodyEnvs &) = default ;
    ListEnvsResponseBodyEnvs& operator=(ListEnvsResponseBodyEnvs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->envId_ == nullptr && return this->envName_ == nullptr && return this->envVersion_ == nullptr && return this->files_ == nullptr && return this->modifiedTime_ == nullptr
        && return this->properties_ == nullptr && return this->relatedScenes_ == nullptr && return this->runningScenes_ == nullptr && return this->usedCapacity_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListEnvsResponseBodyEnvs& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // envId Field Functions 
    bool hasEnvId() const { return this->envId_ != nullptr;};
    void deleteEnvId() { this->envId_ = nullptr;};
    inline string envId() const { DARABONBA_PTR_GET_DEFAULT(envId_, "") };
    inline ListEnvsResponseBodyEnvs& setEnvId(string envId) { DARABONBA_PTR_SET_VALUE(envId_, envId) };


    // envName Field Functions 
    bool hasEnvName() const { return this->envName_ != nullptr;};
    void deleteEnvName() { this->envName_ = nullptr;};
    inline string envName() const { DARABONBA_PTR_GET_DEFAULT(envName_, "") };
    inline ListEnvsResponseBodyEnvs& setEnvName(string envName) { DARABONBA_PTR_SET_VALUE(envName_, envName) };


    // envVersion Field Functions 
    bool hasEnvVersion() const { return this->envVersion_ != nullptr;};
    void deleteEnvVersion() { this->envVersion_ = nullptr;};
    inline string envVersion() const { DARABONBA_PTR_GET_DEFAULT(envVersion_, "") };
    inline ListEnvsResponseBodyEnvs& setEnvVersion(string envVersion) { DARABONBA_PTR_SET_VALUE(envVersion_, envVersion) };


    // files Field Functions 
    bool hasFiles() const { return this->files_ != nullptr;};
    void deleteFiles() { this->files_ = nullptr;};
    inline const vector<Models::ListEnvsResponseBodyEnvsFiles> & files() const { DARABONBA_PTR_GET_CONST(files_, vector<Models::ListEnvsResponseBodyEnvsFiles>) };
    inline vector<Models::ListEnvsResponseBodyEnvsFiles> files() { DARABONBA_PTR_GET(files_, vector<Models::ListEnvsResponseBodyEnvsFiles>) };
    inline ListEnvsResponseBodyEnvs& setFiles(const vector<Models::ListEnvsResponseBodyEnvsFiles> & files) { DARABONBA_PTR_SET_VALUE(files_, files) };
    inline ListEnvsResponseBodyEnvs& setFiles(vector<Models::ListEnvsResponseBodyEnvsFiles> && files) { DARABONBA_PTR_SET_RVALUE(files_, files) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline int64_t modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, 0L) };
    inline ListEnvsResponseBodyEnvs& setModifiedTime(int64_t modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline const vector<Models::ListEnvsResponseBodyEnvsProperties> & properties() const { DARABONBA_PTR_GET_CONST(properties_, vector<Models::ListEnvsResponseBodyEnvsProperties>) };
    inline vector<Models::ListEnvsResponseBodyEnvsProperties> properties() { DARABONBA_PTR_GET(properties_, vector<Models::ListEnvsResponseBodyEnvsProperties>) };
    inline ListEnvsResponseBodyEnvs& setProperties(const vector<Models::ListEnvsResponseBodyEnvsProperties> & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
    inline ListEnvsResponseBodyEnvs& setProperties(vector<Models::ListEnvsResponseBodyEnvsProperties> && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


    // relatedScenes Field Functions 
    bool hasRelatedScenes() const { return this->relatedScenes_ != nullptr;};
    void deleteRelatedScenes() { this->relatedScenes_ = nullptr;};
    inline const vector<string> & relatedScenes() const { DARABONBA_PTR_GET_CONST(relatedScenes_, vector<string>) };
    inline vector<string> relatedScenes() { DARABONBA_PTR_GET(relatedScenes_, vector<string>) };
    inline ListEnvsResponseBodyEnvs& setRelatedScenes(const vector<string> & relatedScenes) { DARABONBA_PTR_SET_VALUE(relatedScenes_, relatedScenes) };
    inline ListEnvsResponseBodyEnvs& setRelatedScenes(vector<string> && relatedScenes) { DARABONBA_PTR_SET_RVALUE(relatedScenes_, relatedScenes) };


    // runningScenes Field Functions 
    bool hasRunningScenes() const { return this->runningScenes_ != nullptr;};
    void deleteRunningScenes() { this->runningScenes_ = nullptr;};
    inline const vector<string> & runningScenes() const { DARABONBA_PTR_GET_CONST(runningScenes_, vector<string>) };
    inline vector<string> runningScenes() { DARABONBA_PTR_GET(runningScenes_, vector<string>) };
    inline ListEnvsResponseBodyEnvs& setRunningScenes(const vector<string> & runningScenes) { DARABONBA_PTR_SET_VALUE(runningScenes_, runningScenes) };
    inline ListEnvsResponseBodyEnvs& setRunningScenes(vector<string> && runningScenes) { DARABONBA_PTR_SET_RVALUE(runningScenes_, runningScenes) };


    // usedCapacity Field Functions 
    bool hasUsedCapacity() const { return this->usedCapacity_ != nullptr;};
    void deleteUsedCapacity() { this->usedCapacity_ = nullptr;};
    inline int64_t usedCapacity() const { DARABONBA_PTR_GET_DEFAULT(usedCapacity_, 0L) };
    inline ListEnvsResponseBodyEnvs& setUsedCapacity(int64_t usedCapacity) { DARABONBA_PTR_SET_VALUE(usedCapacity_, usedCapacity) };


  protected:
    // The time when the environment was created.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The ID of the environment.
    std::shared_ptr<string> envId_ = nullptr;
    // The name of the environment.
    std::shared_ptr<string> envName_ = nullptr;
    // The JMeter version of the environment.
    std::shared_ptr<string> envVersion_ = nullptr;
    // The JAR files.
    std::shared_ptr<vector<Models::ListEnvsResponseBodyEnvsFiles>> files_ = nullptr;
    // The time when the environment was last modified.
    std::shared_ptr<int64_t> modifiedTime_ = nullptr;
    // The JMeter attributes.
    std::shared_ptr<vector<Models::ListEnvsResponseBodyEnvsProperties>> properties_ = nullptr;
    // The scenarios related to the environment.
    std::shared_ptr<vector<string>> relatedScenes_ = nullptr;
    // The IDs of the scenarios that run in the environment.
    std::shared_ptr<vector<string>> runningScenes_ = nullptr;
    // The total size of the environment file.
    std::shared_ptr<int64_t> usedCapacity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
