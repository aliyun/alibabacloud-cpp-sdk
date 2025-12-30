// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITPACKAGEJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITPACKAGEJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitPackageJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitPackageJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Inputs, inputs_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(ScheduleConfig, scheduleConfig_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitPackageJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Inputs, inputs_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(ScheduleConfig, scheduleConfig_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitPackageJobRequest() = default ;
    SubmitPackageJobRequest(const SubmitPackageJobRequest &) = default ;
    SubmitPackageJobRequest(SubmitPackageJobRequest &&) = default ;
    SubmitPackageJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitPackageJobRequest() = default ;
    SubmitPackageJobRequest& operator=(const SubmitPackageJobRequest &) = default ;
    SubmitPackageJobRequest& operator=(SubmitPackageJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ScheduleConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ScheduleConfig& obj) { 
        DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
      };
      friend void from_json(const Darabonba::Json& j, ScheduleConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
      };
      ScheduleConfig() = default ;
      ScheduleConfig(const ScheduleConfig &) = default ;
      ScheduleConfig(ScheduleConfig &&) = default ;
      ScheduleConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ScheduleConfig() = default ;
      ScheduleConfig& operator=(const ScheduleConfig &) = default ;
      ScheduleConfig& operator=(ScheduleConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->pipelineId_ == nullptr
        && this->priority_ == nullptr; };
      // pipelineId Field Functions 
      bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
      void deletePipelineId() { this->pipelineId_ = nullptr;};
      inline string getPipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
      inline ScheduleConfig& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
      inline ScheduleConfig& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    protected:
      // The ID of the MPS queue to which the job was submitted.
      shared_ptr<string> pipelineId_ {};
      // The priority of the job. Valid values: 1 to 10. The greater the value, the higher the priority.
      shared_ptr<int32_t> priority_ {};
    };

    class Output : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Output& obj) { 
        DARABONBA_PTR_TO_JSON(Media, media_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Output& obj) { 
        DARABONBA_PTR_FROM_JSON(Media, media_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Output() = default ;
      Output(const Output &) = default ;
      Output(Output &&) = default ;
      Output(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Output() = default ;
      Output& operator=(const Output &) = default ;
      Output& operator=(Output &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->media_ == nullptr
        && this->type_ == nullptr; };
      // media Field Functions 
      bool hasMedia() const { return this->media_ != nullptr;};
      void deleteMedia() { this->media_ = nullptr;};
      inline string getMedia() const { DARABONBA_PTR_GET_DEFAULT(media_, "") };
      inline Output& setMedia(string media) { DARABONBA_PTR_SET_VALUE(media_, media) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Output& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The media object. If Type is set to OSS, set this parameter to the URL of an OSS object. Both the OSS and HTTP protocols are supported. If Type is set to Media, set this parameter to the ID of a media asset.
      // 
      // This parameter is required.
      shared_ptr<string> media_ {};
      // The type of the media object. Valid values:
      // 
      // *   OSS: an OSS object.
      // *   Media: a media asset.
      // 
      // This parameter is required.
      shared_ptr<string> type_ {};
    };

    class Inputs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Inputs& obj) { 
        DARABONBA_PTR_TO_JSON(Input, input_);
      };
      friend void from_json(const Darabonba::Json& j, Inputs& obj) { 
        DARABONBA_PTR_FROM_JSON(Input, input_);
      };
      Inputs() = default ;
      Inputs(const Inputs &) = default ;
      Inputs(Inputs &&) = default ;
      Inputs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Inputs() = default ;
      Inputs& operator=(const Inputs &) = default ;
      Inputs& operator=(Inputs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Input : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Input& obj) { 
          DARABONBA_PTR_TO_JSON(Media, media_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Input& obj) { 
          DARABONBA_PTR_FROM_JSON(Media, media_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Input() = default ;
        Input(const Input &) = default ;
        Input(Input &&) = default ;
        Input(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Input() = default ;
        Input& operator=(const Input &) = default ;
        Input& operator=(Input &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->media_ == nullptr
        && this->type_ == nullptr; };
        // media Field Functions 
        bool hasMedia() const { return this->media_ != nullptr;};
        void deleteMedia() { this->media_ = nullptr;};
        inline string getMedia() const { DARABONBA_PTR_GET_DEFAULT(media_, "") };
        inline Input& setMedia(string media) { DARABONBA_PTR_SET_VALUE(media_, media) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Input& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The media object.
        // 
        // *   If Type is set to OSS, set this parameter to the URL of an OSS object. Both the OSS and HTTP protocols are supported.
        // *   If Type is set to Media, set this parameter to the ID of a media asset.
        // 
        // This parameter is required.
        shared_ptr<string> media_ {};
        // The type of the media object. Valid values:
        // 
        // *   OSS: an Object Storage Service (OSS) object.
        // *   Media: a media asset.
        // 
        // This parameter is required.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->input_ == nullptr; };
      // input Field Functions 
      bool hasInput() const { return this->input_ != nullptr;};
      void deleteInput() { this->input_ = nullptr;};
      inline const Inputs::Input & getInput() const { DARABONBA_PTR_GET_CONST(input_, Inputs::Input) };
      inline Inputs::Input getInput() { DARABONBA_PTR_GET(input_, Inputs::Input) };
      inline Inputs& setInput(const Inputs::Input & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
      inline Inputs& setInput(Inputs::Input && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    protected:
      // The information about the input stream file.
      // 
      // This parameter is required.
      shared_ptr<Inputs::Input> input_ {};
    };

    virtual bool empty() const override { return this->inputs_ == nullptr
        && this->name_ == nullptr && this->output_ == nullptr && this->scheduleConfig_ == nullptr && this->userData_ == nullptr; };
    // inputs Field Functions 
    bool hasInputs() const { return this->inputs_ != nullptr;};
    void deleteInputs() { this->inputs_ = nullptr;};
    inline const vector<SubmitPackageJobRequest::Inputs> & getInputs() const { DARABONBA_PTR_GET_CONST(inputs_, vector<SubmitPackageJobRequest::Inputs>) };
    inline vector<SubmitPackageJobRequest::Inputs> getInputs() { DARABONBA_PTR_GET(inputs_, vector<SubmitPackageJobRequest::Inputs>) };
    inline SubmitPackageJobRequest& setInputs(const vector<SubmitPackageJobRequest::Inputs> & inputs) { DARABONBA_PTR_SET_VALUE(inputs_, inputs) };
    inline SubmitPackageJobRequest& setInputs(vector<SubmitPackageJobRequest::Inputs> && inputs) { DARABONBA_PTR_SET_RVALUE(inputs_, inputs) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SubmitPackageJobRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const SubmitPackageJobRequest::Output & getOutput() const { DARABONBA_PTR_GET_CONST(output_, SubmitPackageJobRequest::Output) };
    inline SubmitPackageJobRequest::Output getOutput() { DARABONBA_PTR_GET(output_, SubmitPackageJobRequest::Output) };
    inline SubmitPackageJobRequest& setOutput(const SubmitPackageJobRequest::Output & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline SubmitPackageJobRequest& setOutput(SubmitPackageJobRequest::Output && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // scheduleConfig Field Functions 
    bool hasScheduleConfig() const { return this->scheduleConfig_ != nullptr;};
    void deleteScheduleConfig() { this->scheduleConfig_ = nullptr;};
    inline const SubmitPackageJobRequest::ScheduleConfig & getScheduleConfig() const { DARABONBA_PTR_GET_CONST(scheduleConfig_, SubmitPackageJobRequest::ScheduleConfig) };
    inline SubmitPackageJobRequest::ScheduleConfig getScheduleConfig() { DARABONBA_PTR_GET(scheduleConfig_, SubmitPackageJobRequest::ScheduleConfig) };
    inline SubmitPackageJobRequest& setScheduleConfig(const SubmitPackageJobRequest::ScheduleConfig & scheduleConfig) { DARABONBA_PTR_SET_VALUE(scheduleConfig_, scheduleConfig) };
    inline SubmitPackageJobRequest& setScheduleConfig(SubmitPackageJobRequest::ScheduleConfig && scheduleConfig) { DARABONBA_PTR_SET_RVALUE(scheduleConfig_, scheduleConfig) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitPackageJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The input of the job.
    // 
    // This parameter is required.
    shared_ptr<vector<SubmitPackageJobRequest::Inputs>> inputs_ {};
    // The name of the job.
    shared_ptr<string> name_ {};
    // The output of the job.
    // 
    // This parameter is required.
    shared_ptr<SubmitPackageJobRequest::Output> output_ {};
    // The scheduling settings.
    shared_ptr<SubmitPackageJobRequest::ScheduleConfig> scheduleConfig_ {};
    // The user-defined data.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
