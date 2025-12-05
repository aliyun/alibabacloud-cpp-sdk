// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEENVREQUESTENV_HPP_
#define ALIBABACLOUD_MODELS_SAVEENVREQUESTENV_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SaveEnvRequestEnvFiles.hpp>
#include <alibabacloud/models/SaveEnvRequestEnvProperties.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class SaveEnvRequestEnv : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveEnvRequestEnv& obj) { 
      DARABONBA_PTR_TO_JSON(EnvId, envId_);
      DARABONBA_PTR_TO_JSON(EnvName, envName_);
      DARABONBA_PTR_TO_JSON(Files, files_);
      DARABONBA_PTR_TO_JSON(JmeterPluginLabel, jmeterPluginLabel_);
      DARABONBA_PTR_TO_JSON(Properties, properties_);
    };
    friend void from_json(const Darabonba::Json& j, SaveEnvRequestEnv& obj) { 
      DARABONBA_PTR_FROM_JSON(EnvId, envId_);
      DARABONBA_PTR_FROM_JSON(EnvName, envName_);
      DARABONBA_PTR_FROM_JSON(Files, files_);
      DARABONBA_PTR_FROM_JSON(JmeterPluginLabel, jmeterPluginLabel_);
      DARABONBA_PTR_FROM_JSON(Properties, properties_);
    };
    SaveEnvRequestEnv() = default ;
    SaveEnvRequestEnv(const SaveEnvRequestEnv &) = default ;
    SaveEnvRequestEnv(SaveEnvRequestEnv &&) = default ;
    SaveEnvRequestEnv(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveEnvRequestEnv() = default ;
    SaveEnvRequestEnv& operator=(const SaveEnvRequestEnv &) = default ;
    SaveEnvRequestEnv& operator=(SaveEnvRequestEnv &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->envId_ == nullptr
        && return this->envName_ == nullptr && return this->files_ == nullptr && return this->jmeterPluginLabel_ == nullptr && return this->properties_ == nullptr; };
    // envId Field Functions 
    bool hasEnvId() const { return this->envId_ != nullptr;};
    void deleteEnvId() { this->envId_ = nullptr;};
    inline string envId() const { DARABONBA_PTR_GET_DEFAULT(envId_, "") };
    inline SaveEnvRequestEnv& setEnvId(string envId) { DARABONBA_PTR_SET_VALUE(envId_, envId) };


    // envName Field Functions 
    bool hasEnvName() const { return this->envName_ != nullptr;};
    void deleteEnvName() { this->envName_ = nullptr;};
    inline string envName() const { DARABONBA_PTR_GET_DEFAULT(envName_, "") };
    inline SaveEnvRequestEnv& setEnvName(string envName) { DARABONBA_PTR_SET_VALUE(envName_, envName) };


    // files Field Functions 
    bool hasFiles() const { return this->files_ != nullptr;};
    void deleteFiles() { this->files_ = nullptr;};
    inline const vector<Models::SaveEnvRequestEnvFiles> & files() const { DARABONBA_PTR_GET_CONST(files_, vector<Models::SaveEnvRequestEnvFiles>) };
    inline vector<Models::SaveEnvRequestEnvFiles> files() { DARABONBA_PTR_GET(files_, vector<Models::SaveEnvRequestEnvFiles>) };
    inline SaveEnvRequestEnv& setFiles(const vector<Models::SaveEnvRequestEnvFiles> & files) { DARABONBA_PTR_SET_VALUE(files_, files) };
    inline SaveEnvRequestEnv& setFiles(vector<Models::SaveEnvRequestEnvFiles> && files) { DARABONBA_PTR_SET_RVALUE(files_, files) };


    // jmeterPluginLabel Field Functions 
    bool hasJmeterPluginLabel() const { return this->jmeterPluginLabel_ != nullptr;};
    void deleteJmeterPluginLabel() { this->jmeterPluginLabel_ = nullptr;};
    inline string jmeterPluginLabel() const { DARABONBA_PTR_GET_DEFAULT(jmeterPluginLabel_, "") };
    inline SaveEnvRequestEnv& setJmeterPluginLabel(string jmeterPluginLabel) { DARABONBA_PTR_SET_VALUE(jmeterPluginLabel_, jmeterPluginLabel) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline const vector<Models::SaveEnvRequestEnvProperties> & properties() const { DARABONBA_PTR_GET_CONST(properties_, vector<Models::SaveEnvRequestEnvProperties>) };
    inline vector<Models::SaveEnvRequestEnvProperties> properties() { DARABONBA_PTR_GET(properties_, vector<Models::SaveEnvRequestEnvProperties>) };
    inline SaveEnvRequestEnv& setProperties(const vector<Models::SaveEnvRequestEnvProperties> & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
    inline SaveEnvRequestEnv& setProperties(vector<Models::SaveEnvRequestEnvProperties> && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


  protected:
    // The ID of the JMeter environment. To create a JMeter environment, leave this parameter empty. To update a JMeter environment, specify the ID of the environment.
    std::shared_ptr<string> envId_ = nullptr;
    // The name of the environment.
    // 
    // This parameter is required.
    std::shared_ptr<string> envName_ = nullptr;
    // The files on which the environment depends.
    // 
    // This parameter is required.
    std::shared_ptr<vector<Models::SaveEnvRequestEnvFiles>> files_ = nullptr;
    // The extension label.
    std::shared_ptr<string> jmeterPluginLabel_ = nullptr;
    // The JMeter attributes.
    std::shared_ptr<vector<Models::SaveEnvRequestEnvProperties>> properties_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
