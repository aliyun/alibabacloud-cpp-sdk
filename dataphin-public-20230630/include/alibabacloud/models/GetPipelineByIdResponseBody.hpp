// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPIPELINEBYIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPIPELINEBYIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetPipelineByIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPipelineByIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetPipelineByIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetPipelineByIdResponseBody() = default ;
    GetPipelineByIdResponseBody(const GetPipelineByIdResponseBody &) = default ;
    GetPipelineByIdResponseBody(GetPipelineByIdResponseBody &&) = default ;
    GetPipelineByIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPipelineByIdResponseBody() = default ;
    GetPipelineByIdResponseBody& operator=(const GetPipelineByIdResponseBody &) = default ;
    GetPipelineByIdResponseBody& operator=(GetPipelineByIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Mode, mode_);
        DARABONBA_PTR_TO_JSON(NodeInfo, nodeInfo_);
        DARABONBA_PTR_TO_JSON(PipelineConfig, pipelineConfig_);
        DARABONBA_PTR_TO_JSON(PipelineJson, pipelineJson_);
        DARABONBA_PTR_TO_JSON(PipelineType, pipelineType_);
        DARABONBA_PTR_TO_JSON(ScheduleConfig, scheduleConfig_);
        DARABONBA_PTR_TO_JSON(Settings, settings_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Mode, mode_);
        DARABONBA_PTR_FROM_JSON(NodeInfo, nodeInfo_);
        DARABONBA_PTR_FROM_JSON(PipelineConfig, pipelineConfig_);
        DARABONBA_PTR_FROM_JSON(PipelineJson, pipelineJson_);
        DARABONBA_PTR_FROM_JSON(PipelineType, pipelineType_);
        DARABONBA_PTR_FROM_JSON(ScheduleConfig, scheduleConfig_);
        DARABONBA_PTR_FROM_JSON(Settings, settings_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PipelineConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PipelineConfig& obj) { 
          DARABONBA_PTR_TO_JSON(Hops, hops_);
          DARABONBA_PTR_TO_JSON(Steps, steps_);
        };
        friend void from_json(const Darabonba::Json& j, PipelineConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(Hops, hops_);
          DARABONBA_PTR_FROM_JSON(Steps, steps_);
        };
        PipelineConfig() = default ;
        PipelineConfig(const PipelineConfig &) = default ;
        PipelineConfig(PipelineConfig &&) = default ;
        PipelineConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PipelineConfig() = default ;
        PipelineConfig& operator=(const PipelineConfig &) = default ;
        PipelineConfig& operator=(PipelineConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Steps : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Steps& obj) { 
            DARABONBA_PTR_TO_JSON(IsDistribute, isDistribute_);
            DARABONBA_PTR_TO_JSON(Key, key_);
            DARABONBA_PTR_TO_JSON(PluginConfig, pluginConfig_);
            DARABONBA_PTR_TO_JSON(StepName, stepName_);
            DARABONBA_PTR_TO_JSON(StepType, stepType_);
          };
          friend void from_json(const Darabonba::Json& j, Steps& obj) { 
            DARABONBA_PTR_FROM_JSON(IsDistribute, isDistribute_);
            DARABONBA_PTR_FROM_JSON(Key, key_);
            DARABONBA_PTR_FROM_JSON(PluginConfig, pluginConfig_);
            DARABONBA_PTR_FROM_JSON(StepName, stepName_);
            DARABONBA_PTR_FROM_JSON(StepType, stepType_);
          };
          Steps() = default ;
          Steps(const Steps &) = default ;
          Steps(Steps &&) = default ;
          Steps(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Steps() = default ;
          Steps& operator=(const Steps &) = default ;
          Steps& operator=(Steps &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->isDistribute_ == nullptr
        && this->key_ == nullptr && this->pluginConfig_ == nullptr && this->stepName_ == nullptr && this->stepType_ == nullptr; };
          // isDistribute Field Functions 
          bool hasIsDistribute() const { return this->isDistribute_ != nullptr;};
          void deleteIsDistribute() { this->isDistribute_ = nullptr;};
          inline bool getIsDistribute() const { DARABONBA_PTR_GET_DEFAULT(isDistribute_, false) };
          inline Steps& setIsDistribute(bool isDistribute) { DARABONBA_PTR_SET_VALUE(isDistribute_, isDistribute) };


          // key Field Functions 
          bool hasKey() const { return this->key_ != nullptr;};
          void deleteKey() { this->key_ = nullptr;};
          inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
          inline Steps& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


          // pluginConfig Field Functions 
          bool hasPluginConfig() const { return this->pluginConfig_ != nullptr;};
          void deletePluginConfig() { this->pluginConfig_ = nullptr;};
          inline string getPluginConfig() const { DARABONBA_PTR_GET_DEFAULT(pluginConfig_, "") };
          inline Steps& setPluginConfig(string pluginConfig) { DARABONBA_PTR_SET_VALUE(pluginConfig_, pluginConfig) };


          // stepName Field Functions 
          bool hasStepName() const { return this->stepName_ != nullptr;};
          void deleteStepName() { this->stepName_ = nullptr;};
          inline string getStepName() const { DARABONBA_PTR_GET_DEFAULT(stepName_, "") };
          inline Steps& setStepName(string stepName) { DARABONBA_PTR_SET_VALUE(stepName_, stepName) };


          // stepType Field Functions 
          bool hasStepType() const { return this->stepType_ != nullptr;};
          void deleteStepType() { this->stepType_ = nullptr;};
          inline string getStepType() const { DARABONBA_PTR_GET_DEFAULT(stepType_, "") };
          inline Steps& setStepType(string stepType) { DARABONBA_PTR_SET_VALUE(stepType_, stepType) };


        protected:
          shared_ptr<bool> isDistribute_ {};
          shared_ptr<string> key_ {};
          shared_ptr<string> pluginConfig_ {};
          shared_ptr<string> stepName_ {};
          shared_ptr<string> stepType_ {};
        };

        class Hops : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Hops& obj) { 
            DARABONBA_PTR_TO_JSON(SendTo, sendTo_);
            DARABONBA_PTR_TO_JSON(Source, source_);
            DARABONBA_PTR_TO_JSON(Target, target_);
          };
          friend void from_json(const Darabonba::Json& j, Hops& obj) { 
            DARABONBA_PTR_FROM_JSON(SendTo, sendTo_);
            DARABONBA_PTR_FROM_JSON(Source, source_);
            DARABONBA_PTR_FROM_JSON(Target, target_);
          };
          Hops() = default ;
          Hops(const Hops &) = default ;
          Hops(Hops &&) = default ;
          Hops(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Hops() = default ;
          Hops& operator=(const Hops &) = default ;
          Hops& operator=(Hops &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->sendTo_ == nullptr
        && this->source_ == nullptr && this->target_ == nullptr; };
          // sendTo Field Functions 
          bool hasSendTo() const { return this->sendTo_ != nullptr;};
          void deleteSendTo() { this->sendTo_ = nullptr;};
          inline bool getSendTo() const { DARABONBA_PTR_GET_DEFAULT(sendTo_, false) };
          inline Hops& setSendTo(bool sendTo) { DARABONBA_PTR_SET_VALUE(sendTo_, sendTo) };


          // source Field Functions 
          bool hasSource() const { return this->source_ != nullptr;};
          void deleteSource() { this->source_ = nullptr;};
          inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
          inline Hops& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


          // target Field Functions 
          bool hasTarget() const { return this->target_ != nullptr;};
          void deleteTarget() { this->target_ = nullptr;};
          inline string getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
          inline Hops& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


        protected:
          shared_ptr<bool> sendTo_ {};
          shared_ptr<string> source_ {};
          shared_ptr<string> target_ {};
        };

        virtual bool empty() const override { return this->hops_ == nullptr
        && this->steps_ == nullptr; };
        // hops Field Functions 
        bool hasHops() const { return this->hops_ != nullptr;};
        void deleteHops() { this->hops_ = nullptr;};
        inline const vector<PipelineConfig::Hops> & getHops() const { DARABONBA_PTR_GET_CONST(hops_, vector<PipelineConfig::Hops>) };
        inline vector<PipelineConfig::Hops> getHops() { DARABONBA_PTR_GET(hops_, vector<PipelineConfig::Hops>) };
        inline PipelineConfig& setHops(const vector<PipelineConfig::Hops> & hops) { DARABONBA_PTR_SET_VALUE(hops_, hops) };
        inline PipelineConfig& setHops(vector<PipelineConfig::Hops> && hops) { DARABONBA_PTR_SET_RVALUE(hops_, hops) };


        // steps Field Functions 
        bool hasSteps() const { return this->steps_ != nullptr;};
        void deleteSteps() { this->steps_ = nullptr;};
        inline const vector<PipelineConfig::Steps> & getSteps() const { DARABONBA_PTR_GET_CONST(steps_, vector<PipelineConfig::Steps>) };
        inline vector<PipelineConfig::Steps> getSteps() { DARABONBA_PTR_GET(steps_, vector<PipelineConfig::Steps>) };
        inline PipelineConfig& setSteps(const vector<PipelineConfig::Steps> & steps) { DARABONBA_PTR_SET_VALUE(steps_, steps) };
        inline PipelineConfig& setSteps(vector<PipelineConfig::Steps> && steps) { DARABONBA_PTR_SET_RVALUE(steps_, steps) };


      protected:
        shared_ptr<vector<PipelineConfig::Hops>> hops_ {};
        shared_ptr<vector<PipelineConfig::Steps>> steps_ {};
      };

      class NodeInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NodeInfo& obj) { 
          DARABONBA_PTR_TO_JSON(Desc, desc_);
          DARABONBA_PTR_TO_JSON(Directory, directory_);
          DARABONBA_PTR_TO_JSON(FileId, fileId_);
          DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
          DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
          DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
        };
        friend void from_json(const Darabonba::Json& j, NodeInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(Desc, desc_);
          DARABONBA_PTR_FROM_JSON(Directory, directory_);
          DARABONBA_PTR_FROM_JSON(FileId, fileId_);
          DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
          DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
          DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
        };
        NodeInfo() = default ;
        NodeInfo(const NodeInfo &) = default ;
        NodeInfo(NodeInfo &&) = default ;
        NodeInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NodeInfo() = default ;
        NodeInfo& operator=(const NodeInfo &) = default ;
        NodeInfo& operator=(NodeInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->desc_ == nullptr
        && this->directory_ == nullptr && this->fileId_ == nullptr && this->nodeId_ == nullptr && this->nodeName_ == nullptr && this->pipelineId_ == nullptr; };
        // desc Field Functions 
        bool hasDesc() const { return this->desc_ != nullptr;};
        void deleteDesc() { this->desc_ = nullptr;};
        inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
        inline NodeInfo& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


        // directory Field Functions 
        bool hasDirectory() const { return this->directory_ != nullptr;};
        void deleteDirectory() { this->directory_ = nullptr;};
        inline string getDirectory() const { DARABONBA_PTR_GET_DEFAULT(directory_, "") };
        inline NodeInfo& setDirectory(string directory) { DARABONBA_PTR_SET_VALUE(directory_, directory) };


        // fileId Field Functions 
        bool hasFileId() const { return this->fileId_ != nullptr;};
        void deleteFileId() { this->fileId_ = nullptr;};
        inline int64_t getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, 0L) };
        inline NodeInfo& setFileId(int64_t fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
        inline NodeInfo& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        // nodeName Field Functions 
        bool hasNodeName() const { return this->nodeName_ != nullptr;};
        void deleteNodeName() { this->nodeName_ = nullptr;};
        inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
        inline NodeInfo& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


        // pipelineId Field Functions 
        bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
        void deletePipelineId() { this->pipelineId_ = nullptr;};
        inline int64_t getPipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, 0L) };
        inline NodeInfo& setPipelineId(int64_t pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


      protected:
        shared_ptr<string> desc_ {};
        shared_ptr<string> directory_ {};
        shared_ptr<int64_t> fileId_ {};
        shared_ptr<string> nodeId_ {};
        shared_ptr<string> nodeName_ {};
        shared_ptr<int64_t> pipelineId_ {};
      };

      virtual bool empty() const override { return this->mode_ == nullptr
        && this->nodeInfo_ == nullptr && this->pipelineConfig_ == nullptr && this->pipelineJson_ == nullptr && this->pipelineType_ == nullptr && this->scheduleConfig_ == nullptr
        && this->settings_ == nullptr; };
      // mode Field Functions 
      bool hasMode() const { return this->mode_ != nullptr;};
      void deleteMode() { this->mode_ = nullptr;};
      inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
      inline Data& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


      // nodeInfo Field Functions 
      bool hasNodeInfo() const { return this->nodeInfo_ != nullptr;};
      void deleteNodeInfo() { this->nodeInfo_ = nullptr;};
      inline const Data::NodeInfo & getNodeInfo() const { DARABONBA_PTR_GET_CONST(nodeInfo_, Data::NodeInfo) };
      inline Data::NodeInfo getNodeInfo() { DARABONBA_PTR_GET(nodeInfo_, Data::NodeInfo) };
      inline Data& setNodeInfo(const Data::NodeInfo & nodeInfo) { DARABONBA_PTR_SET_VALUE(nodeInfo_, nodeInfo) };
      inline Data& setNodeInfo(Data::NodeInfo && nodeInfo) { DARABONBA_PTR_SET_RVALUE(nodeInfo_, nodeInfo) };


      // pipelineConfig Field Functions 
      bool hasPipelineConfig() const { return this->pipelineConfig_ != nullptr;};
      void deletePipelineConfig() { this->pipelineConfig_ = nullptr;};
      inline const Data::PipelineConfig & getPipelineConfig() const { DARABONBA_PTR_GET_CONST(pipelineConfig_, Data::PipelineConfig) };
      inline Data::PipelineConfig getPipelineConfig() { DARABONBA_PTR_GET(pipelineConfig_, Data::PipelineConfig) };
      inline Data& setPipelineConfig(const Data::PipelineConfig & pipelineConfig) { DARABONBA_PTR_SET_VALUE(pipelineConfig_, pipelineConfig) };
      inline Data& setPipelineConfig(Data::PipelineConfig && pipelineConfig) { DARABONBA_PTR_SET_RVALUE(pipelineConfig_, pipelineConfig) };


      // pipelineJson Field Functions 
      bool hasPipelineJson() const { return this->pipelineJson_ != nullptr;};
      void deletePipelineJson() { this->pipelineJson_ = nullptr;};
      inline string getPipelineJson() const { DARABONBA_PTR_GET_DEFAULT(pipelineJson_, "") };
      inline Data& setPipelineJson(string pipelineJson) { DARABONBA_PTR_SET_VALUE(pipelineJson_, pipelineJson) };


      // pipelineType Field Functions 
      bool hasPipelineType() const { return this->pipelineType_ != nullptr;};
      void deletePipelineType() { this->pipelineType_ = nullptr;};
      inline int32_t getPipelineType() const { DARABONBA_PTR_GET_DEFAULT(pipelineType_, 0) };
      inline Data& setPipelineType(int32_t pipelineType) { DARABONBA_PTR_SET_VALUE(pipelineType_, pipelineType) };


      // scheduleConfig Field Functions 
      bool hasScheduleConfig() const { return this->scheduleConfig_ != nullptr;};
      void deleteScheduleConfig() { this->scheduleConfig_ = nullptr;};
      inline string getScheduleConfig() const { DARABONBA_PTR_GET_DEFAULT(scheduleConfig_, "") };
      inline Data& setScheduleConfig(string scheduleConfig) { DARABONBA_PTR_SET_VALUE(scheduleConfig_, scheduleConfig) };


      // settings Field Functions 
      bool hasSettings() const { return this->settings_ != nullptr;};
      void deleteSettings() { this->settings_ = nullptr;};
      inline string getSettings() const { DARABONBA_PTR_GET_DEFAULT(settings_, "") };
      inline Data& setSettings(string settings) { DARABONBA_PTR_SET_VALUE(settings_, settings) };


    protected:
      shared_ptr<string> mode_ {};
      shared_ptr<Data::NodeInfo> nodeInfo_ {};
      shared_ptr<Data::PipelineConfig> pipelineConfig_ {};
      shared_ptr<string> pipelineJson_ {};
      shared_ptr<int32_t> pipelineType_ {};
      shared_ptr<string> scheduleConfig_ {};
      shared_ptr<string> settings_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetPipelineByIdResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetPipelineByIdResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetPipelineByIdResponseBody::Data) };
    inline GetPipelineByIdResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetPipelineByIdResponseBody::Data) };
    inline GetPipelineByIdResponseBody& setData(const GetPipelineByIdResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetPipelineByIdResponseBody& setData(GetPipelineByIdResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetPipelineByIdResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetPipelineByIdResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPipelineByIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetPipelineByIdResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetPipelineByIdResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
