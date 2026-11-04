// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ExecJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Command, command_);
      DARABONBA_PTR_TO_JSON(CommandArgs, commandArgs_);
      DARABONBA_PTR_TO_JSON(Envs, envs_);
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(JarStartArgs, jarStartArgs_);
      DARABONBA_PTR_TO_JSON(JarStartOptions, jarStartOptions_);
      DARABONBA_PTR_TO_JSON(Replicas, replicas_);
      DARABONBA_PTR_TO_JSON(Time, time_);
      DARABONBA_PTR_TO_JSON(WarStartOptions, warStartOptions_);
    };
    friend void from_json(const Darabonba::Json& j, ExecJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Command, command_);
      DARABONBA_PTR_FROM_JSON(CommandArgs, commandArgs_);
      DARABONBA_PTR_FROM_JSON(Envs, envs_);
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(JarStartArgs, jarStartArgs_);
      DARABONBA_PTR_FROM_JSON(JarStartOptions, jarStartOptions_);
      DARABONBA_PTR_FROM_JSON(Replicas, replicas_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
      DARABONBA_PTR_FROM_JSON(WarStartOptions, warStartOptions_);
    };
    ExecJobRequest() = default ;
    ExecJobRequest(const ExecJobRequest &) = default ;
    ExecJobRequest(ExecJobRequest &&) = default ;
    ExecJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecJobRequest() = default ;
    ExecJobRequest& operator=(const ExecJobRequest &) = default ;
    ExecJobRequest& operator=(ExecJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->command_ == nullptr && this->commandArgs_ == nullptr && this->envs_ == nullptr && this->eventId_ == nullptr && this->jarStartArgs_ == nullptr
        && this->jarStartOptions_ == nullptr && this->replicas_ == nullptr && this->time_ == nullptr && this->warStartOptions_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ExecJobRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // command Field Functions 
    bool hasCommand() const { return this->command_ != nullptr;};
    void deleteCommand() { this->command_ = nullptr;};
    inline string getCommand() const { DARABONBA_PTR_GET_DEFAULT(command_, "") };
    inline ExecJobRequest& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


    // commandArgs Field Functions 
    bool hasCommandArgs() const { return this->commandArgs_ != nullptr;};
    void deleteCommandArgs() { this->commandArgs_ = nullptr;};
    inline string getCommandArgs() const { DARABONBA_PTR_GET_DEFAULT(commandArgs_, "") };
    inline ExecJobRequest& setCommandArgs(string commandArgs) { DARABONBA_PTR_SET_VALUE(commandArgs_, commandArgs) };


    // envs Field Functions 
    bool hasEnvs() const { return this->envs_ != nullptr;};
    void deleteEnvs() { this->envs_ = nullptr;};
    inline string getEnvs() const { DARABONBA_PTR_GET_DEFAULT(envs_, "") };
    inline ExecJobRequest& setEnvs(string envs) { DARABONBA_PTR_SET_VALUE(envs_, envs) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline ExecJobRequest& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // jarStartArgs Field Functions 
    bool hasJarStartArgs() const { return this->jarStartArgs_ != nullptr;};
    void deleteJarStartArgs() { this->jarStartArgs_ = nullptr;};
    inline string getJarStartArgs() const { DARABONBA_PTR_GET_DEFAULT(jarStartArgs_, "") };
    inline ExecJobRequest& setJarStartArgs(string jarStartArgs) { DARABONBA_PTR_SET_VALUE(jarStartArgs_, jarStartArgs) };


    // jarStartOptions Field Functions 
    bool hasJarStartOptions() const { return this->jarStartOptions_ != nullptr;};
    void deleteJarStartOptions() { this->jarStartOptions_ = nullptr;};
    inline string getJarStartOptions() const { DARABONBA_PTR_GET_DEFAULT(jarStartOptions_, "") };
    inline ExecJobRequest& setJarStartOptions(string jarStartOptions) { DARABONBA_PTR_SET_VALUE(jarStartOptions_, jarStartOptions) };


    // replicas Field Functions 
    bool hasReplicas() const { return this->replicas_ != nullptr;};
    void deleteReplicas() { this->replicas_ = nullptr;};
    inline string getReplicas() const { DARABONBA_PTR_GET_DEFAULT(replicas_, "") };
    inline ExecJobRequest& setReplicas(string replicas) { DARABONBA_PTR_SET_VALUE(replicas_, replicas) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline ExecJobRequest& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // warStartOptions Field Functions 
    bool hasWarStartOptions() const { return this->warStartOptions_ != nullptr;};
    void deleteWarStartOptions() { this->warStartOptions_ = nullptr;};
    inline string getWarStartOptions() const { DARABONBA_PTR_GET_DEFAULT(warStartOptions_, "") };
    inline ExecJobRequest& setWarStartOptions(string warStartOptions) { DARABONBA_PTR_SET_VALUE(warStartOptions_, warStartOptions) };


  protected:
    // The ID of the job template.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // The image startup command. The command must be an executable object that exists in the container. Example:
    // 
    // ```
    // command:
    //       - echo
    //       - abc
    //       - >
    //       - file0
    // ```
    // Based on the preceding example, Command="echo" and CommandArgs=["abc", ">", "file0"].
    shared_ptr<string> command_ {};
    // The arguments for the image startup command. These are the arguments required by the **Command** startup command. Format:
    // 
    // `["a","b"]`
    // 
    // In the preceding example, CommandArgs=["abc", ">", "file0"]. The ["abc", ">", "file0"] part must be converted to a string in JSON array format. If this parameter is not required, leave it empty.
    shared_ptr<string> commandArgs_ {};
    // The environment variables for the container. You can customize environment variables or reference configuration items. To reference a configuration item, you must first create a ConfigMap instance. For more information, see [CreateConfigMap](https://help.aliyun.com/document_detail/176914.html). Valid values:
    // - Custom configuration
    //     - **name**: the name of the environment variable.
    //     - **value**: the value of the environment variable.
    // - Referenced configuration items
    //     - **name**: the name of the environment variable. You can reference a single key or all keys. To reference all keys, enter sae-sys-configmap-all-<configuration item name>, for example, sae-sys-configmap-all-test1.
    //     - **valueFrom**: the reference of the environment variable. Set the value to configMapRef.
    //     - **configMapId**: the ID of the configuration item.
    //     - **key**: the key. If you reference all key-value pairs, do not set this field.
    shared_ptr<string> envs_ {};
    // The event ID. This parameter is user-defined and used for idempotence. Only one job is created for the same event ID.
    shared_ptr<string> eventId_ {};
    // The startup arguments for the JAR package job. Default job startup command:
    // `$JAVA_HOME/bin/java $JarStartOptions -jar $CATALINA_OPTS "$package_path" $JarStartArgs`
    shared_ptr<string> jarStartArgs_ {};
    // The startup options for the JAR package job. Default job startup command:
    // `$JAVA_HOME/bin/java $JarStartOptions -jar $CATALINA_OPTS "$package_path" $JarStartArg`
    shared_ptr<string> jarStartOptions_ {};
    // The number of concurrent instances for the job.
    shared_ptr<string> replicas_ {};
    // The time when the job is triggered. Format: `yyyy-MM-dd\\"T\\"HH:mm:ss\\"Z\\"`.
    shared_ptr<string> time_ {};
    // The startup command for the WAR package deployment job. The configuration procedure is the same as that for the image deployment startup command. For more information, see [Configure a startup command](https://help.aliyun.com/document_detail/96677.html).
    shared_ptr<string> warStartOptions_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
