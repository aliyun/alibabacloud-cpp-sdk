// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLIVYCOMPUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLIVYCOMPUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class GetLivyComputeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLivyComputeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetLivyComputeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetLivyComputeResponseBody() = default ;
    GetLivyComputeResponseBody(const GetLivyComputeResponseBody &) = default ;
    GetLivyComputeResponseBody(GetLivyComputeResponseBody &&) = default ;
    GetLivyComputeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLivyComputeResponseBody() = default ;
    GetLivyComputeResponseBody& operator=(const GetLivyComputeResponseBody &) = default ;
    GetLivyComputeResponseBody& operator=(GetLivyComputeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(authType, authType_);
        DARABONBA_PTR_TO_JSON(autoStopConfiguration, autoStopConfiguration_);
        DARABONBA_PTR_TO_JSON(computeId, computeId_);
        DARABONBA_PTR_TO_JSON(cpuLimit, cpuLimit_);
        DARABONBA_PTR_TO_JSON(createdBy, createdBy_);
        DARABONBA_PTR_TO_JSON(displayReleaseVersion, displayReleaseVersion_);
        DARABONBA_PTR_TO_JSON(enablePublic, enablePublic_);
        DARABONBA_PTR_TO_JSON(endpoint, endpoint_);
        DARABONBA_PTR_TO_JSON(endpointInner, endpointInner_);
        DARABONBA_PTR_TO_JSON(environmentId, environmentId_);
        DARABONBA_PTR_TO_JSON(fusion, fusion_);
        DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(livyServerConf, livyServerConf_);
        DARABONBA_PTR_TO_JSON(livyVersion, livyVersion_);
        DARABONBA_PTR_TO_JSON(memoryLimit, memoryLimit_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(networkName, networkName_);
        DARABONBA_PTR_TO_JSON(queueName, queueName_);
        DARABONBA_PTR_TO_JSON(ramUserId, ramUserId_);
        DARABONBA_PTR_TO_JSON(releaseVersion, releaseVersion_);
        DARABONBA_PTR_TO_JSON(startTime, startTime_);
        DARABONBA_PTR_TO_JSON(status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(authType, authType_);
        DARABONBA_PTR_FROM_JSON(autoStopConfiguration, autoStopConfiguration_);
        DARABONBA_PTR_FROM_JSON(computeId, computeId_);
        DARABONBA_PTR_FROM_JSON(cpuLimit, cpuLimit_);
        DARABONBA_PTR_FROM_JSON(createdBy, createdBy_);
        DARABONBA_PTR_FROM_JSON(displayReleaseVersion, displayReleaseVersion_);
        DARABONBA_PTR_FROM_JSON(enablePublic, enablePublic_);
        DARABONBA_PTR_FROM_JSON(endpoint, endpoint_);
        DARABONBA_PTR_FROM_JSON(endpointInner, endpointInner_);
        DARABONBA_PTR_FROM_JSON(environmentId, environmentId_);
        DARABONBA_PTR_FROM_JSON(fusion, fusion_);
        DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(livyServerConf, livyServerConf_);
        DARABONBA_PTR_FROM_JSON(livyVersion, livyVersion_);
        DARABONBA_PTR_FROM_JSON(memoryLimit, memoryLimit_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(networkName, networkName_);
        DARABONBA_PTR_FROM_JSON(queueName, queueName_);
        DARABONBA_PTR_FROM_JSON(ramUserId, ramUserId_);
        DARABONBA_PTR_FROM_JSON(releaseVersion, releaseVersion_);
        DARABONBA_PTR_FROM_JSON(startTime, startTime_);
        DARABONBA_PTR_FROM_JSON(status, status_);
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
      class AutoStopConfiguration : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AutoStopConfiguration& obj) { 
          DARABONBA_PTR_TO_JSON(enable, enable_);
          DARABONBA_PTR_TO_JSON(idleTimeoutMinutes, idleTimeoutMinutes_);
        };
        friend void from_json(const Darabonba::Json& j, AutoStopConfiguration& obj) { 
          DARABONBA_PTR_FROM_JSON(enable, enable_);
          DARABONBA_PTR_FROM_JSON(idleTimeoutMinutes, idleTimeoutMinutes_);
        };
        AutoStopConfiguration() = default ;
        AutoStopConfiguration(const AutoStopConfiguration &) = default ;
        AutoStopConfiguration(AutoStopConfiguration &&) = default ;
        AutoStopConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AutoStopConfiguration() = default ;
        AutoStopConfiguration& operator=(const AutoStopConfiguration &) = default ;
        AutoStopConfiguration& operator=(AutoStopConfiguration &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->enable_ == nullptr
        && this->idleTimeoutMinutes_ == nullptr; };
        // enable Field Functions 
        bool hasEnable() const { return this->enable_ != nullptr;};
        void deleteEnable() { this->enable_ = nullptr;};
        inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
        inline AutoStopConfiguration& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


        // idleTimeoutMinutes Field Functions 
        bool hasIdleTimeoutMinutes() const { return this->idleTimeoutMinutes_ != nullptr;};
        void deleteIdleTimeoutMinutes() { this->idleTimeoutMinutes_ = nullptr;};
        inline int64_t getIdleTimeoutMinutes() const { DARABONBA_PTR_GET_DEFAULT(idleTimeoutMinutes_, 0L) };
        inline AutoStopConfiguration& setIdleTimeoutMinutes(int64_t idleTimeoutMinutes) { DARABONBA_PTR_SET_VALUE(idleTimeoutMinutes_, idleTimeoutMinutes) };


      protected:
        shared_ptr<bool> enable_ {};
        shared_ptr<int64_t> idleTimeoutMinutes_ {};
      };

      virtual bool empty() const override { return this->authType_ == nullptr
        && this->autoStopConfiguration_ == nullptr && this->computeId_ == nullptr && this->cpuLimit_ == nullptr && this->createdBy_ == nullptr && this->displayReleaseVersion_ == nullptr
        && this->enablePublic_ == nullptr && this->endpoint_ == nullptr && this->endpointInner_ == nullptr && this->environmentId_ == nullptr && this->fusion_ == nullptr
        && this->gmtCreate_ == nullptr && this->livyServerConf_ == nullptr && this->livyVersion_ == nullptr && this->memoryLimit_ == nullptr && this->name_ == nullptr
        && this->networkName_ == nullptr && this->queueName_ == nullptr && this->ramUserId_ == nullptr && this->releaseVersion_ == nullptr && this->startTime_ == nullptr
        && this->status_ == nullptr; };
      // authType Field Functions 
      bool hasAuthType() const { return this->authType_ != nullptr;};
      void deleteAuthType() { this->authType_ = nullptr;};
      inline string getAuthType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
      inline Data& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


      // autoStopConfiguration Field Functions 
      bool hasAutoStopConfiguration() const { return this->autoStopConfiguration_ != nullptr;};
      void deleteAutoStopConfiguration() { this->autoStopConfiguration_ = nullptr;};
      inline const Data::AutoStopConfiguration & getAutoStopConfiguration() const { DARABONBA_PTR_GET_CONST(autoStopConfiguration_, Data::AutoStopConfiguration) };
      inline Data::AutoStopConfiguration getAutoStopConfiguration() { DARABONBA_PTR_GET(autoStopConfiguration_, Data::AutoStopConfiguration) };
      inline Data& setAutoStopConfiguration(const Data::AutoStopConfiguration & autoStopConfiguration) { DARABONBA_PTR_SET_VALUE(autoStopConfiguration_, autoStopConfiguration) };
      inline Data& setAutoStopConfiguration(Data::AutoStopConfiguration && autoStopConfiguration) { DARABONBA_PTR_SET_RVALUE(autoStopConfiguration_, autoStopConfiguration) };


      // computeId Field Functions 
      bool hasComputeId() const { return this->computeId_ != nullptr;};
      void deleteComputeId() { this->computeId_ = nullptr;};
      inline string getComputeId() const { DARABONBA_PTR_GET_DEFAULT(computeId_, "") };
      inline Data& setComputeId(string computeId) { DARABONBA_PTR_SET_VALUE(computeId_, computeId) };


      // cpuLimit Field Functions 
      bool hasCpuLimit() const { return this->cpuLimit_ != nullptr;};
      void deleteCpuLimit() { this->cpuLimit_ = nullptr;};
      inline string getCpuLimit() const { DARABONBA_PTR_GET_DEFAULT(cpuLimit_, "") };
      inline Data& setCpuLimit(string cpuLimit) { DARABONBA_PTR_SET_VALUE(cpuLimit_, cpuLimit) };


      // createdBy Field Functions 
      bool hasCreatedBy() const { return this->createdBy_ != nullptr;};
      void deleteCreatedBy() { this->createdBy_ = nullptr;};
      inline string getCreatedBy() const { DARABONBA_PTR_GET_DEFAULT(createdBy_, "") };
      inline Data& setCreatedBy(string createdBy) { DARABONBA_PTR_SET_VALUE(createdBy_, createdBy) };


      // displayReleaseVersion Field Functions 
      bool hasDisplayReleaseVersion() const { return this->displayReleaseVersion_ != nullptr;};
      void deleteDisplayReleaseVersion() { this->displayReleaseVersion_ = nullptr;};
      inline string getDisplayReleaseVersion() const { DARABONBA_PTR_GET_DEFAULT(displayReleaseVersion_, "") };
      inline Data& setDisplayReleaseVersion(string displayReleaseVersion) { DARABONBA_PTR_SET_VALUE(displayReleaseVersion_, displayReleaseVersion) };


      // enablePublic Field Functions 
      bool hasEnablePublic() const { return this->enablePublic_ != nullptr;};
      void deleteEnablePublic() { this->enablePublic_ = nullptr;};
      inline bool getEnablePublic() const { DARABONBA_PTR_GET_DEFAULT(enablePublic_, false) };
      inline Data& setEnablePublic(bool enablePublic) { DARABONBA_PTR_SET_VALUE(enablePublic_, enablePublic) };


      // endpoint Field Functions 
      bool hasEndpoint() const { return this->endpoint_ != nullptr;};
      void deleteEndpoint() { this->endpoint_ = nullptr;};
      inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
      inline Data& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


      // endpointInner Field Functions 
      bool hasEndpointInner() const { return this->endpointInner_ != nullptr;};
      void deleteEndpointInner() { this->endpointInner_ = nullptr;};
      inline string getEndpointInner() const { DARABONBA_PTR_GET_DEFAULT(endpointInner_, "") };
      inline Data& setEndpointInner(string endpointInner) { DARABONBA_PTR_SET_VALUE(endpointInner_, endpointInner) };


      // environmentId Field Functions 
      bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
      void deleteEnvironmentId() { this->environmentId_ = nullptr;};
      inline string getEnvironmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
      inline Data& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


      // fusion Field Functions 
      bool hasFusion() const { return this->fusion_ != nullptr;};
      void deleteFusion() { this->fusion_ = nullptr;};
      inline bool getFusion() const { DARABONBA_PTR_GET_DEFAULT(fusion_, false) };
      inline Data& setFusion(bool fusion) { DARABONBA_PTR_SET_VALUE(fusion_, fusion) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline Data& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // livyServerConf Field Functions 
      bool hasLivyServerConf() const { return this->livyServerConf_ != nullptr;};
      void deleteLivyServerConf() { this->livyServerConf_ = nullptr;};
      inline string getLivyServerConf() const { DARABONBA_PTR_GET_DEFAULT(livyServerConf_, "") };
      inline Data& setLivyServerConf(string livyServerConf) { DARABONBA_PTR_SET_VALUE(livyServerConf_, livyServerConf) };


      // livyVersion Field Functions 
      bool hasLivyVersion() const { return this->livyVersion_ != nullptr;};
      void deleteLivyVersion() { this->livyVersion_ = nullptr;};
      inline string getLivyVersion() const { DARABONBA_PTR_GET_DEFAULT(livyVersion_, "") };
      inline Data& setLivyVersion(string livyVersion) { DARABONBA_PTR_SET_VALUE(livyVersion_, livyVersion) };


      // memoryLimit Field Functions 
      bool hasMemoryLimit() const { return this->memoryLimit_ != nullptr;};
      void deleteMemoryLimit() { this->memoryLimit_ = nullptr;};
      inline string getMemoryLimit() const { DARABONBA_PTR_GET_DEFAULT(memoryLimit_, "") };
      inline Data& setMemoryLimit(string memoryLimit) { DARABONBA_PTR_SET_VALUE(memoryLimit_, memoryLimit) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // networkName Field Functions 
      bool hasNetworkName() const { return this->networkName_ != nullptr;};
      void deleteNetworkName() { this->networkName_ = nullptr;};
      inline string getNetworkName() const { DARABONBA_PTR_GET_DEFAULT(networkName_, "") };
      inline Data& setNetworkName(string networkName) { DARABONBA_PTR_SET_VALUE(networkName_, networkName) };


      // queueName Field Functions 
      bool hasQueueName() const { return this->queueName_ != nullptr;};
      void deleteQueueName() { this->queueName_ = nullptr;};
      inline string getQueueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
      inline Data& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


      // ramUserId Field Functions 
      bool hasRamUserId() const { return this->ramUserId_ != nullptr;};
      void deleteRamUserId() { this->ramUserId_ = nullptr;};
      inline string getRamUserId() const { DARABONBA_PTR_GET_DEFAULT(ramUserId_, "") };
      inline Data& setRamUserId(string ramUserId) { DARABONBA_PTR_SET_VALUE(ramUserId_, ramUserId) };


      // releaseVersion Field Functions 
      bool hasReleaseVersion() const { return this->releaseVersion_ != nullptr;};
      void deleteReleaseVersion() { this->releaseVersion_ = nullptr;};
      inline string getReleaseVersion() const { DARABONBA_PTR_GET_DEFAULT(releaseVersion_, "") };
      inline Data& setReleaseVersion(string releaseVersion) { DARABONBA_PTR_SET_VALUE(releaseVersion_, releaseVersion) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline Data& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> authType_ {};
      shared_ptr<Data::AutoStopConfiguration> autoStopConfiguration_ {};
      shared_ptr<string> computeId_ {};
      shared_ptr<string> cpuLimit_ {};
      shared_ptr<string> createdBy_ {};
      shared_ptr<string> displayReleaseVersion_ {};
      shared_ptr<bool> enablePublic_ {};
      shared_ptr<string> endpoint_ {};
      shared_ptr<string> endpointInner_ {};
      shared_ptr<string> environmentId_ {};
      shared_ptr<bool> fusion_ {};
      shared_ptr<int64_t> gmtCreate_ {};
      shared_ptr<string> livyServerConf_ {};
      shared_ptr<string> livyVersion_ {};
      shared_ptr<string> memoryLimit_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> networkName_ {};
      shared_ptr<string> queueName_ {};
      shared_ptr<string> ramUserId_ {};
      shared_ptr<string> releaseVersion_ {};
      shared_ptr<int64_t> startTime_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetLivyComputeResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetLivyComputeResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetLivyComputeResponseBody::Data) };
    inline GetLivyComputeResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetLivyComputeResponseBody::Data) };
    inline GetLivyComputeResponseBody& setData(const GetLivyComputeResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetLivyComputeResponseBody& setData(GetLivyComputeResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetLivyComputeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLivyComputeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetLivyComputeResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
