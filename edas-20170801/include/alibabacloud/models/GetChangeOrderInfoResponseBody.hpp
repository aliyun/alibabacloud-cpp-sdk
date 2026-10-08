// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHANGEORDERINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCHANGEORDERINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class GetChangeOrderInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetChangeOrderInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(changeOrderInfo, changeOrderInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetChangeOrderInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(changeOrderInfo, changeOrderInfo_);
    };
    GetChangeOrderInfoResponseBody() = default ;
    GetChangeOrderInfoResponseBody(const GetChangeOrderInfoResponseBody &) = default ;
    GetChangeOrderInfoResponseBody(GetChangeOrderInfoResponseBody &&) = default ;
    GetChangeOrderInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetChangeOrderInfoResponseBody() = default ;
    GetChangeOrderInfoResponseBody& operator=(const GetChangeOrderInfoResponseBody &) = default ;
    GetChangeOrderInfoResponseBody& operator=(GetChangeOrderInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ChangeOrderInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ChangeOrderInfo& obj) { 
        DARABONBA_PTR_TO_JSON(BatchCount, batchCount_);
        DARABONBA_PTR_TO_JSON(BatchType, batchType_);
        DARABONBA_PTR_TO_JSON(ChangeOrderDescription, changeOrderDescription_);
        DARABONBA_PTR_TO_JSON(ChangeOrderId, changeOrderId_);
        DARABONBA_PTR_TO_JSON(CoType, coType_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CreateUserId, createUserId_);
        DARABONBA_PTR_TO_JSON(Desc, desc_);
        DARABONBA_PTR_TO_JSON(PipelineInfoList, pipelineInfoList_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SupportRollback, supportRollback_);
        DARABONBA_PTR_TO_JSON(Targets, targets_);
        DARABONBA_PTR_TO_JSON(TrafficControl, trafficControl_);
      };
      friend void from_json(const Darabonba::Json& j, ChangeOrderInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(BatchCount, batchCount_);
        DARABONBA_PTR_FROM_JSON(BatchType, batchType_);
        DARABONBA_PTR_FROM_JSON(ChangeOrderDescription, changeOrderDescription_);
        DARABONBA_PTR_FROM_JSON(ChangeOrderId, changeOrderId_);
        DARABONBA_PTR_FROM_JSON(CoType, coType_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CreateUserId, createUserId_);
        DARABONBA_PTR_FROM_JSON(Desc, desc_);
        DARABONBA_PTR_FROM_JSON(PipelineInfoList, pipelineInfoList_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SupportRollback, supportRollback_);
        DARABONBA_PTR_FROM_JSON(Targets, targets_);
        DARABONBA_PTR_FROM_JSON(TrafficControl, trafficControl_);
      };
      ChangeOrderInfo() = default ;
      ChangeOrderInfo(const ChangeOrderInfo &) = default ;
      ChangeOrderInfo(ChangeOrderInfo &&) = default ;
      ChangeOrderInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ChangeOrderInfo() = default ;
      ChangeOrderInfo& operator=(const ChangeOrderInfo &) = default ;
      ChangeOrderInfo& operator=(ChangeOrderInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TrafficControl : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TrafficControl& obj) { 
          DARABONBA_PTR_TO_JSON(Routes, routes_);
          DARABONBA_PTR_TO_JSON(Rules, rules_);
          DARABONBA_PTR_TO_JSON(Tips, tips_);
        };
        friend void from_json(const Darabonba::Json& j, TrafficControl& obj) { 
          DARABONBA_PTR_FROM_JSON(Routes, routes_);
          DARABONBA_PTR_FROM_JSON(Rules, rules_);
          DARABONBA_PTR_FROM_JSON(Tips, tips_);
        };
        TrafficControl() = default ;
        TrafficControl(const TrafficControl &) = default ;
        TrafficControl(TrafficControl &&) = default ;
        TrafficControl(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TrafficControl() = default ;
        TrafficControl& operator=(const TrafficControl &) = default ;
        TrafficControl& operator=(TrafficControl &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->routes_ == nullptr
        && this->rules_ == nullptr && this->tips_ == nullptr; };
        // routes Field Functions 
        bool hasRoutes() const { return this->routes_ != nullptr;};
        void deleteRoutes() { this->routes_ = nullptr;};
        inline string getRoutes() const { DARABONBA_PTR_GET_DEFAULT(routes_, "") };
        inline TrafficControl& setRoutes(string routes) { DARABONBA_PTR_SET_VALUE(routes_, routes) };


        // rules Field Functions 
        bool hasRules() const { return this->rules_ != nullptr;};
        void deleteRules() { this->rules_ = nullptr;};
        inline string getRules() const { DARABONBA_PTR_GET_DEFAULT(rules_, "") };
        inline TrafficControl& setRules(string rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };


        // tips Field Functions 
        bool hasTips() const { return this->tips_ != nullptr;};
        void deleteTips() { this->tips_ = nullptr;};
        inline string getTips() const { DARABONBA_PTR_GET_DEFAULT(tips_, "") };
        inline TrafficControl& setTips(string tips) { DARABONBA_PTR_SET_VALUE(tips_, tips) };


      protected:
        // The traffic forwarding rule.
        shared_ptr<string> routes_ {};
        // The routing rule for traffic.
        shared_ptr<string> rules_ {};
        // The description of the traffic rule.
        shared_ptr<string> tips_ {};
      };

      class Targets : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Targets& obj) { 
          DARABONBA_PTR_TO_JSON(Items, items_);
        };
        friend void from_json(const Darabonba::Json& j, Targets& obj) { 
          DARABONBA_PTR_FROM_JSON(Items, items_);
        };
        Targets() = default ;
        Targets(const Targets &) = default ;
        Targets(Targets &&) = default ;
        Targets(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Targets() = default ;
        Targets& operator=(const Targets &) = default ;
        Targets& operator=(Targets &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->items_ == nullptr; };
        // items Field Functions 
        bool hasItems() const { return this->items_ != nullptr;};
        void deleteItems() { this->items_ = nullptr;};
        inline const vector<string> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<string>) };
        inline vector<string> getItems() { DARABONBA_PTR_GET(items_, vector<string>) };
        inline Targets& setItems(const vector<string> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
        inline Targets& setItems(vector<string> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


      protected:
        shared_ptr<vector<string>> items_ {};
      };

      class PipelineInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PipelineInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(PipelineInfo, pipelineInfo_);
        };
        friend void from_json(const Darabonba::Json& j, PipelineInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(PipelineInfo, pipelineInfo_);
        };
        PipelineInfoList() = default ;
        PipelineInfoList(const PipelineInfoList &) = default ;
        PipelineInfoList(PipelineInfoList &&) = default ;
        PipelineInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PipelineInfoList() = default ;
        PipelineInfoList& operator=(const PipelineInfoList &) = default ;
        PipelineInfoList& operator=(PipelineInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class PipelineInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PipelineInfo& obj) { 
            DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
            DARABONBA_PTR_TO_JSON(PipelineName, pipelineName_);
            DARABONBA_PTR_TO_JSON(PipelineStatus, pipelineStatus_);
            DARABONBA_PTR_TO_JSON(StageDetailList, stageDetailList_);
            DARABONBA_PTR_TO_JSON(StageList, stageList_);
            DARABONBA_PTR_TO_JSON(StartTime, startTime_);
            DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
          };
          friend void from_json(const Darabonba::Json& j, PipelineInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
            DARABONBA_PTR_FROM_JSON(PipelineName, pipelineName_);
            DARABONBA_PTR_FROM_JSON(PipelineStatus, pipelineStatus_);
            DARABONBA_PTR_FROM_JSON(StageDetailList, stageDetailList_);
            DARABONBA_PTR_FROM_JSON(StageList, stageList_);
            DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
            DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
          };
          PipelineInfo() = default ;
          PipelineInfo(const PipelineInfo &) = default ;
          PipelineInfo(PipelineInfo &&) = default ;
          PipelineInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PipelineInfo() = default ;
          PipelineInfo& operator=(const PipelineInfo &) = default ;
          PipelineInfo& operator=(PipelineInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class StageList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const StageList& obj) { 
              DARABONBA_PTR_TO_JSON(StageInfoDTO, stageInfoDTO_);
            };
            friend void from_json(const Darabonba::Json& j, StageList& obj) { 
              DARABONBA_PTR_FROM_JSON(StageInfoDTO, stageInfoDTO_);
            };
            StageList() = default ;
            StageList(const StageList &) = default ;
            StageList(StageList &&) = default ;
            StageList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~StageList() = default ;
            StageList& operator=(const StageList &) = default ;
            StageList& operator=(StageList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class StageInfoDTO : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const StageInfoDTO& obj) { 
                DARABONBA_PTR_TO_JSON(StageId, stageId_);
                DARABONBA_PTR_TO_JSON(StageName, stageName_);
                DARABONBA_PTR_TO_JSON(StageResultDTO, stageResultDTO_);
                DARABONBA_PTR_TO_JSON(Status, status_);
              };
              friend void from_json(const Darabonba::Json& j, StageInfoDTO& obj) { 
                DARABONBA_PTR_FROM_JSON(StageId, stageId_);
                DARABONBA_PTR_FROM_JSON(StageName, stageName_);
                DARABONBA_PTR_FROM_JSON(StageResultDTO, stageResultDTO_);
                DARABONBA_PTR_FROM_JSON(Status, status_);
              };
              StageInfoDTO() = default ;
              StageInfoDTO(const StageInfoDTO &) = default ;
              StageInfoDTO(StageInfoDTO &&) = default ;
              StageInfoDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~StageInfoDTO() = default ;
              StageInfoDTO& operator=(const StageInfoDTO &) = default ;
              StageInfoDTO& operator=(StageInfoDTO &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class StageResultDTO : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const StageResultDTO& obj) { 
                  DARABONBA_PTR_TO_JSON(InstanceDTOList, instanceDTOList_);
                  DARABONBA_PTR_TO_JSON(ServiceStage, serviceStage_);
                };
                friend void from_json(const Darabonba::Json& j, StageResultDTO& obj) { 
                  DARABONBA_PTR_FROM_JSON(InstanceDTOList, instanceDTOList_);
                  DARABONBA_PTR_FROM_JSON(ServiceStage, serviceStage_);
                };
                StageResultDTO() = default ;
                StageResultDTO(const StageResultDTO &) = default ;
                StageResultDTO(StageResultDTO &&) = default ;
                StageResultDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~StageResultDTO() = default ;
                StageResultDTO& operator=(const StageResultDTO &) = default ;
                StageResultDTO& operator=(StageResultDTO &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                class ServiceStage : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const ServiceStage& obj) { 
                    DARABONBA_PTR_TO_JSON(Message, message_);
                    DARABONBA_PTR_TO_JSON(StageId, stageId_);
                    DARABONBA_PTR_TO_JSON(StageName, stageName_);
                    DARABONBA_PTR_TO_JSON(Status, status_);
                  };
                  friend void from_json(const Darabonba::Json& j, ServiceStage& obj) { 
                    DARABONBA_PTR_FROM_JSON(Message, message_);
                    DARABONBA_PTR_FROM_JSON(StageId, stageId_);
                    DARABONBA_PTR_FROM_JSON(StageName, stageName_);
                    DARABONBA_PTR_FROM_JSON(Status, status_);
                  };
                  ServiceStage() = default ;
                  ServiceStage(const ServiceStage &) = default ;
                  ServiceStage(ServiceStage &&) = default ;
                  ServiceStage(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~ServiceStage() = default ;
                  ServiceStage& operator=(const ServiceStage &) = default ;
                  ServiceStage& operator=(ServiceStage &&) = default ;
                  virtual void validate() const override {
                  };
                  virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                  virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                  virtual bool empty() const override { return this->message_ == nullptr
        && this->stageId_ == nullptr && this->stageName_ == nullptr && this->status_ == nullptr; };
                  // message Field Functions 
                  bool hasMessage() const { return this->message_ != nullptr;};
                  void deleteMessage() { this->message_ = nullptr;};
                  inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
                  inline ServiceStage& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


                  // stageId Field Functions 
                  bool hasStageId() const { return this->stageId_ != nullptr;};
                  void deleteStageId() { this->stageId_ = nullptr;};
                  inline string getStageId() const { DARABONBA_PTR_GET_DEFAULT(stageId_, "") };
                  inline ServiceStage& setStageId(string stageId) { DARABONBA_PTR_SET_VALUE(stageId_, stageId) };


                  // stageName Field Functions 
                  bool hasStageName() const { return this->stageName_ != nullptr;};
                  void deleteStageName() { this->stageName_ = nullptr;};
                  inline string getStageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
                  inline ServiceStage& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


                  // status Field Functions 
                  bool hasStatus() const { return this->status_ != nullptr;};
                  void deleteStatus() { this->status_ = nullptr;};
                  inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
                  inline ServiceStage& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


                protected:
                  shared_ptr<string> message_ {};
                  shared_ptr<string> stageId_ {};
                  shared_ptr<string> stageName_ {};
                  shared_ptr<int32_t> status_ {};
                };

                class InstanceDTOList : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const InstanceDTOList& obj) { 
                    DARABONBA_PTR_TO_JSON(InstanceDTO, instanceDTO_);
                  };
                  friend void from_json(const Darabonba::Json& j, InstanceDTOList& obj) { 
                    DARABONBA_PTR_FROM_JSON(InstanceDTO, instanceDTO_);
                  };
                  InstanceDTOList() = default ;
                  InstanceDTOList(const InstanceDTOList &) = default ;
                  InstanceDTOList(InstanceDTOList &&) = default ;
                  InstanceDTOList(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~InstanceDTOList() = default ;
                  InstanceDTOList& operator=(const InstanceDTOList &) = default ;
                  InstanceDTOList& operator=(InstanceDTOList &&) = default ;
                  virtual void validate() const override {
                  };
                  virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                  virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                  class InstanceDTO : public Darabonba::Model {
                  public:
                    friend void to_json(Darabonba::Json& j, const InstanceDTO& obj) { 
                      DARABONBA_PTR_TO_JSON(InstanceIp, instanceIp_);
                      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
                      DARABONBA_PTR_TO_JSON(InstanceStageDTOList, instanceStageDTOList_);
                      DARABONBA_PTR_TO_JSON(PodName, podName_);
                      DARABONBA_PTR_TO_JSON(PodStatus, podStatus_);
                      DARABONBA_PTR_TO_JSON(Status, status_);
                    };
                    friend void from_json(const Darabonba::Json& j, InstanceDTO& obj) { 
                      DARABONBA_PTR_FROM_JSON(InstanceIp, instanceIp_);
                      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
                      DARABONBA_PTR_FROM_JSON(InstanceStageDTOList, instanceStageDTOList_);
                      DARABONBA_PTR_FROM_JSON(PodName, podName_);
                      DARABONBA_PTR_FROM_JSON(PodStatus, podStatus_);
                      DARABONBA_PTR_FROM_JSON(Status, status_);
                    };
                    InstanceDTO() = default ;
                    InstanceDTO(const InstanceDTO &) = default ;
                    InstanceDTO(InstanceDTO &&) = default ;
                    InstanceDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
                    virtual ~InstanceDTO() = default ;
                    InstanceDTO& operator=(const InstanceDTO &) = default ;
                    InstanceDTO& operator=(InstanceDTO &&) = default ;
                    virtual void validate() const override {
                    };
                    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                    class InstanceStageDTOList : public Darabonba::Model {
                    public:
                      friend void to_json(Darabonba::Json& j, const InstanceStageDTOList& obj) { 
                        DARABONBA_PTR_TO_JSON(InstanceStageDTO, instanceStageDTO_);
                      };
                      friend void from_json(const Darabonba::Json& j, InstanceStageDTOList& obj) { 
                        DARABONBA_PTR_FROM_JSON(InstanceStageDTO, instanceStageDTO_);
                      };
                      InstanceStageDTOList() = default ;
                      InstanceStageDTOList(const InstanceStageDTOList &) = default ;
                      InstanceStageDTOList(InstanceStageDTOList &&) = default ;
                      InstanceStageDTOList(const Darabonba::Json & obj) { from_json(obj, *this); };
                      virtual ~InstanceStageDTOList() = default ;
                      InstanceStageDTOList& operator=(const InstanceStageDTOList &) = default ;
                      InstanceStageDTOList& operator=(InstanceStageDTOList &&) = default ;
                      virtual void validate() const override {
                      };
                      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                      class InstanceStageDTO : public Darabonba::Model {
                      public:
                        friend void to_json(Darabonba::Json& j, const InstanceStageDTO& obj) { 
                          DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
                          DARABONBA_PTR_TO_JSON(StageId, stageId_);
                          DARABONBA_PTR_TO_JSON(StageMessage, stageMessage_);
                          DARABONBA_PTR_TO_JSON(StageName, stageName_);
                          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
                          DARABONBA_PTR_TO_JSON(Status, status_);
                        };
                        friend void from_json(const Darabonba::Json& j, InstanceStageDTO& obj) { 
                          DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
                          DARABONBA_PTR_FROM_JSON(StageId, stageId_);
                          DARABONBA_PTR_FROM_JSON(StageMessage, stageMessage_);
                          DARABONBA_PTR_FROM_JSON(StageName, stageName_);
                          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
                          DARABONBA_PTR_FROM_JSON(Status, status_);
                        };
                        InstanceStageDTO() = default ;
                        InstanceStageDTO(const InstanceStageDTO &) = default ;
                        InstanceStageDTO(InstanceStageDTO &&) = default ;
                        InstanceStageDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
                        virtual ~InstanceStageDTO() = default ;
                        InstanceStageDTO& operator=(const InstanceStageDTO &) = default ;
                        InstanceStageDTO& operator=(InstanceStageDTO &&) = default ;
                        virtual void validate() const override {
                        };
                        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                        virtual bool empty() const override { return this->finishTime_ == nullptr
        && this->stageId_ == nullptr && this->stageMessage_ == nullptr && this->stageName_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr; };
                        // finishTime Field Functions 
                        bool hasFinishTime() const { return this->finishTime_ != nullptr;};
                        void deleteFinishTime() { this->finishTime_ = nullptr;};
                        inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
                        inline InstanceStageDTO& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


                        // stageId Field Functions 
                        bool hasStageId() const { return this->stageId_ != nullptr;};
                        void deleteStageId() { this->stageId_ = nullptr;};
                        inline string getStageId() const { DARABONBA_PTR_GET_DEFAULT(stageId_, "") };
                        inline InstanceStageDTO& setStageId(string stageId) { DARABONBA_PTR_SET_VALUE(stageId_, stageId) };


                        // stageMessage Field Functions 
                        bool hasStageMessage() const { return this->stageMessage_ != nullptr;};
                        void deleteStageMessage() { this->stageMessage_ = nullptr;};
                        inline string getStageMessage() const { DARABONBA_PTR_GET_DEFAULT(stageMessage_, "") };
                        inline InstanceStageDTO& setStageMessage(string stageMessage) { DARABONBA_PTR_SET_VALUE(stageMessage_, stageMessage) };


                        // stageName Field Functions 
                        bool hasStageName() const { return this->stageName_ != nullptr;};
                        void deleteStageName() { this->stageName_ = nullptr;};
                        inline string getStageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
                        inline InstanceStageDTO& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


                        // startTime Field Functions 
                        bool hasStartTime() const { return this->startTime_ != nullptr;};
                        void deleteStartTime() { this->startTime_ = nullptr;};
                        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
                        inline InstanceStageDTO& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


                        // status Field Functions 
                        bool hasStatus() const { return this->status_ != nullptr;};
                        void deleteStatus() { this->status_ = nullptr;};
                        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
                        inline InstanceStageDTO& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


                      protected:
                        shared_ptr<string> finishTime_ {};
                        shared_ptr<string> stageId_ {};
                        shared_ptr<string> stageMessage_ {};
                        shared_ptr<string> stageName_ {};
                        shared_ptr<string> startTime_ {};
                        shared_ptr<int32_t> status_ {};
                      };

                      virtual bool empty() const override { return this->instanceStageDTO_ == nullptr; };
                      // instanceStageDTO Field Functions 
                      bool hasInstanceStageDTO() const { return this->instanceStageDTO_ != nullptr;};
                      void deleteInstanceStageDTO() { this->instanceStageDTO_ = nullptr;};
                      inline const vector<InstanceStageDTOList::InstanceStageDTO> & getInstanceStageDTO() const { DARABONBA_PTR_GET_CONST(instanceStageDTO_, vector<InstanceStageDTOList::InstanceStageDTO>) };
                      inline vector<InstanceStageDTOList::InstanceStageDTO> getInstanceStageDTO() { DARABONBA_PTR_GET(instanceStageDTO_, vector<InstanceStageDTOList::InstanceStageDTO>) };
                      inline InstanceStageDTOList& setInstanceStageDTO(const vector<InstanceStageDTOList::InstanceStageDTO> & instanceStageDTO) { DARABONBA_PTR_SET_VALUE(instanceStageDTO_, instanceStageDTO) };
                      inline InstanceStageDTOList& setInstanceStageDTO(vector<InstanceStageDTOList::InstanceStageDTO> && instanceStageDTO) { DARABONBA_PTR_SET_RVALUE(instanceStageDTO_, instanceStageDTO) };


                    protected:
                      shared_ptr<vector<InstanceStageDTOList::InstanceStageDTO>> instanceStageDTO_ {};
                    };

                    virtual bool empty() const override { return this->instanceIp_ == nullptr
        && this->instanceName_ == nullptr && this->instanceStageDTOList_ == nullptr && this->podName_ == nullptr && this->podStatus_ == nullptr && this->status_ == nullptr; };
                    // instanceIp Field Functions 
                    bool hasInstanceIp() const { return this->instanceIp_ != nullptr;};
                    void deleteInstanceIp() { this->instanceIp_ = nullptr;};
                    inline string getInstanceIp() const { DARABONBA_PTR_GET_DEFAULT(instanceIp_, "") };
                    inline InstanceDTO& setInstanceIp(string instanceIp) { DARABONBA_PTR_SET_VALUE(instanceIp_, instanceIp) };


                    // instanceName Field Functions 
                    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
                    void deleteInstanceName() { this->instanceName_ = nullptr;};
                    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
                    inline InstanceDTO& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


                    // instanceStageDTOList Field Functions 
                    bool hasInstanceStageDTOList() const { return this->instanceStageDTOList_ != nullptr;};
                    void deleteInstanceStageDTOList() { this->instanceStageDTOList_ = nullptr;};
                    inline const InstanceDTO::InstanceStageDTOList & getInstanceStageDTOList() const { DARABONBA_PTR_GET_CONST(instanceStageDTOList_, InstanceDTO::InstanceStageDTOList) };
                    inline InstanceDTO::InstanceStageDTOList getInstanceStageDTOList() { DARABONBA_PTR_GET(instanceStageDTOList_, InstanceDTO::InstanceStageDTOList) };
                    inline InstanceDTO& setInstanceStageDTOList(const InstanceDTO::InstanceStageDTOList & instanceStageDTOList) { DARABONBA_PTR_SET_VALUE(instanceStageDTOList_, instanceStageDTOList) };
                    inline InstanceDTO& setInstanceStageDTOList(InstanceDTO::InstanceStageDTOList && instanceStageDTOList) { DARABONBA_PTR_SET_RVALUE(instanceStageDTOList_, instanceStageDTOList) };


                    // podName Field Functions 
                    bool hasPodName() const { return this->podName_ != nullptr;};
                    void deletePodName() { this->podName_ = nullptr;};
                    inline string getPodName() const { DARABONBA_PTR_GET_DEFAULT(podName_, "") };
                    inline InstanceDTO& setPodName(string podName) { DARABONBA_PTR_SET_VALUE(podName_, podName) };


                    // podStatus Field Functions 
                    bool hasPodStatus() const { return this->podStatus_ != nullptr;};
                    void deletePodStatus() { this->podStatus_ = nullptr;};
                    inline string getPodStatus() const { DARABONBA_PTR_GET_DEFAULT(podStatus_, "") };
                    inline InstanceDTO& setPodStatus(string podStatus) { DARABONBA_PTR_SET_VALUE(podStatus_, podStatus) };


                    // status Field Functions 
                    bool hasStatus() const { return this->status_ != nullptr;};
                    void deleteStatus() { this->status_ = nullptr;};
                    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
                    inline InstanceDTO& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


                  protected:
                    shared_ptr<string> instanceIp_ {};
                    shared_ptr<string> instanceName_ {};
                    shared_ptr<InstanceDTO::InstanceStageDTOList> instanceStageDTOList_ {};
                    shared_ptr<string> podName_ {};
                    shared_ptr<string> podStatus_ {};
                    shared_ptr<int32_t> status_ {};
                  };

                  virtual bool empty() const override { return this->instanceDTO_ == nullptr; };
                  // instanceDTO Field Functions 
                  bool hasInstanceDTO() const { return this->instanceDTO_ != nullptr;};
                  void deleteInstanceDTO() { this->instanceDTO_ = nullptr;};
                  inline const vector<InstanceDTOList::InstanceDTO> & getInstanceDTO() const { DARABONBA_PTR_GET_CONST(instanceDTO_, vector<InstanceDTOList::InstanceDTO>) };
                  inline vector<InstanceDTOList::InstanceDTO> getInstanceDTO() { DARABONBA_PTR_GET(instanceDTO_, vector<InstanceDTOList::InstanceDTO>) };
                  inline InstanceDTOList& setInstanceDTO(const vector<InstanceDTOList::InstanceDTO> & instanceDTO) { DARABONBA_PTR_SET_VALUE(instanceDTO_, instanceDTO) };
                  inline InstanceDTOList& setInstanceDTO(vector<InstanceDTOList::InstanceDTO> && instanceDTO) { DARABONBA_PTR_SET_RVALUE(instanceDTO_, instanceDTO) };


                protected:
                  shared_ptr<vector<InstanceDTOList::InstanceDTO>> instanceDTO_ {};
                };

                virtual bool empty() const override { return this->instanceDTOList_ == nullptr
        && this->serviceStage_ == nullptr; };
                // instanceDTOList Field Functions 
                bool hasInstanceDTOList() const { return this->instanceDTOList_ != nullptr;};
                void deleteInstanceDTOList() { this->instanceDTOList_ = nullptr;};
                inline const StageResultDTO::InstanceDTOList & getInstanceDTOList() const { DARABONBA_PTR_GET_CONST(instanceDTOList_, StageResultDTO::InstanceDTOList) };
                inline StageResultDTO::InstanceDTOList getInstanceDTOList() { DARABONBA_PTR_GET(instanceDTOList_, StageResultDTO::InstanceDTOList) };
                inline StageResultDTO& setInstanceDTOList(const StageResultDTO::InstanceDTOList & instanceDTOList) { DARABONBA_PTR_SET_VALUE(instanceDTOList_, instanceDTOList) };
                inline StageResultDTO& setInstanceDTOList(StageResultDTO::InstanceDTOList && instanceDTOList) { DARABONBA_PTR_SET_RVALUE(instanceDTOList_, instanceDTOList) };


                // serviceStage Field Functions 
                bool hasServiceStage() const { return this->serviceStage_ != nullptr;};
                void deleteServiceStage() { this->serviceStage_ = nullptr;};
                inline const StageResultDTO::ServiceStage & getServiceStage() const { DARABONBA_PTR_GET_CONST(serviceStage_, StageResultDTO::ServiceStage) };
                inline StageResultDTO::ServiceStage getServiceStage() { DARABONBA_PTR_GET(serviceStage_, StageResultDTO::ServiceStage) };
                inline StageResultDTO& setServiceStage(const StageResultDTO::ServiceStage & serviceStage) { DARABONBA_PTR_SET_VALUE(serviceStage_, serviceStage) };
                inline StageResultDTO& setServiceStage(StageResultDTO::ServiceStage && serviceStage) { DARABONBA_PTR_SET_RVALUE(serviceStage_, serviceStage) };


              protected:
                shared_ptr<StageResultDTO::InstanceDTOList> instanceDTOList_ {};
                shared_ptr<StageResultDTO::ServiceStage> serviceStage_ {};
              };

              virtual bool empty() const override { return this->stageId_ == nullptr
        && this->stageName_ == nullptr && this->stageResultDTO_ == nullptr && this->status_ == nullptr; };
              // stageId Field Functions 
              bool hasStageId() const { return this->stageId_ != nullptr;};
              void deleteStageId() { this->stageId_ = nullptr;};
              inline string getStageId() const { DARABONBA_PTR_GET_DEFAULT(stageId_, "") };
              inline StageInfoDTO& setStageId(string stageId) { DARABONBA_PTR_SET_VALUE(stageId_, stageId) };


              // stageName Field Functions 
              bool hasStageName() const { return this->stageName_ != nullptr;};
              void deleteStageName() { this->stageName_ = nullptr;};
              inline string getStageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
              inline StageInfoDTO& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


              // stageResultDTO Field Functions 
              bool hasStageResultDTO() const { return this->stageResultDTO_ != nullptr;};
              void deleteStageResultDTO() { this->stageResultDTO_ = nullptr;};
              inline const StageInfoDTO::StageResultDTO & getStageResultDTO() const { DARABONBA_PTR_GET_CONST(stageResultDTO_, StageInfoDTO::StageResultDTO) };
              inline StageInfoDTO::StageResultDTO getStageResultDTO() { DARABONBA_PTR_GET(stageResultDTO_, StageInfoDTO::StageResultDTO) };
              inline StageInfoDTO& setStageResultDTO(const StageInfoDTO::StageResultDTO & stageResultDTO) { DARABONBA_PTR_SET_VALUE(stageResultDTO_, stageResultDTO) };
              inline StageInfoDTO& setStageResultDTO(StageInfoDTO::StageResultDTO && stageResultDTO) { DARABONBA_PTR_SET_RVALUE(stageResultDTO_, stageResultDTO) };


              // status Field Functions 
              bool hasStatus() const { return this->status_ != nullptr;};
              void deleteStatus() { this->status_ = nullptr;};
              inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
              inline StageInfoDTO& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


            protected:
              shared_ptr<string> stageId_ {};
              shared_ptr<string> stageName_ {};
              shared_ptr<StageInfoDTO::StageResultDTO> stageResultDTO_ {};
              shared_ptr<int32_t> status_ {};
            };

            virtual bool empty() const override { return this->stageInfoDTO_ == nullptr; };
            // stageInfoDTO Field Functions 
            bool hasStageInfoDTO() const { return this->stageInfoDTO_ != nullptr;};
            void deleteStageInfoDTO() { this->stageInfoDTO_ = nullptr;};
            inline const vector<StageList::StageInfoDTO> & getStageInfoDTO() const { DARABONBA_PTR_GET_CONST(stageInfoDTO_, vector<StageList::StageInfoDTO>) };
            inline vector<StageList::StageInfoDTO> getStageInfoDTO() { DARABONBA_PTR_GET(stageInfoDTO_, vector<StageList::StageInfoDTO>) };
            inline StageList& setStageInfoDTO(const vector<StageList::StageInfoDTO> & stageInfoDTO) { DARABONBA_PTR_SET_VALUE(stageInfoDTO_, stageInfoDTO) };
            inline StageList& setStageInfoDTO(vector<StageList::StageInfoDTO> && stageInfoDTO) { DARABONBA_PTR_SET_RVALUE(stageInfoDTO_, stageInfoDTO) };


          protected:
            shared_ptr<vector<StageList::StageInfoDTO>> stageInfoDTO_ {};
          };

          class StageDetailList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const StageDetailList& obj) { 
              DARABONBA_PTR_TO_JSON(StageDetailDTO, stageDetailDTO_);
            };
            friend void from_json(const Darabonba::Json& j, StageDetailList& obj) { 
              DARABONBA_PTR_FROM_JSON(StageDetailDTO, stageDetailDTO_);
            };
            StageDetailList() = default ;
            StageDetailList(const StageDetailList &) = default ;
            StageDetailList(StageDetailList &&) = default ;
            StageDetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~StageDetailList() = default ;
            StageDetailList& operator=(const StageDetailList &) = default ;
            StageDetailList& operator=(StageDetailList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class StageDetailDTO : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const StageDetailDTO& obj) { 
                DARABONBA_PTR_TO_JSON(StageId, stageId_);
                DARABONBA_PTR_TO_JSON(StageName, stageName_);
                DARABONBA_PTR_TO_JSON(StageStatus, stageStatus_);
                DARABONBA_PTR_TO_JSON(TaskList, taskList_);
              };
              friend void from_json(const Darabonba::Json& j, StageDetailDTO& obj) { 
                DARABONBA_PTR_FROM_JSON(StageId, stageId_);
                DARABONBA_PTR_FROM_JSON(StageName, stageName_);
                DARABONBA_PTR_FROM_JSON(StageStatus, stageStatus_);
                DARABONBA_PTR_FROM_JSON(TaskList, taskList_);
              };
              StageDetailDTO() = default ;
              StageDetailDTO(const StageDetailDTO &) = default ;
              StageDetailDTO(StageDetailDTO &&) = default ;
              StageDetailDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~StageDetailDTO() = default ;
              StageDetailDTO& operator=(const StageDetailDTO &) = default ;
              StageDetailDTO& operator=(StageDetailDTO &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class TaskList : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const TaskList& obj) { 
                  DARABONBA_PTR_TO_JSON(TaskInfoDTO, taskInfoDTO_);
                };
                friend void from_json(const Darabonba::Json& j, TaskList& obj) { 
                  DARABONBA_PTR_FROM_JSON(TaskInfoDTO, taskInfoDTO_);
                };
                TaskList() = default ;
                TaskList(const TaskList &) = default ;
                TaskList(TaskList &&) = default ;
                TaskList(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~TaskList() = default ;
                TaskList& operator=(const TaskList &) = default ;
                TaskList& operator=(TaskList &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                class TaskInfoDTO : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const TaskInfoDTO& obj) { 
                    DARABONBA_PTR_TO_JSON(RetryType, retryType_);
                    DARABONBA_PTR_TO_JSON(ShowManualIgnorance, showManualIgnorance_);
                    DARABONBA_PTR_TO_JSON(TaskErrorCode, taskErrorCode_);
                    DARABONBA_PTR_TO_JSON(TaskErrorIgnorance, taskErrorIgnorance_);
                    DARABONBA_PTR_TO_JSON(TaskErrorMessage, taskErrorMessage_);
                    DARABONBA_PTR_TO_JSON(TaskId, taskId_);
                    DARABONBA_PTR_TO_JSON(TaskMessage, taskMessage_);
                    DARABONBA_PTR_TO_JSON(TaskName, taskName_);
                    DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
                  };
                  friend void from_json(const Darabonba::Json& j, TaskInfoDTO& obj) { 
                    DARABONBA_PTR_FROM_JSON(RetryType, retryType_);
                    DARABONBA_PTR_FROM_JSON(ShowManualIgnorance, showManualIgnorance_);
                    DARABONBA_PTR_FROM_JSON(TaskErrorCode, taskErrorCode_);
                    DARABONBA_PTR_FROM_JSON(TaskErrorIgnorance, taskErrorIgnorance_);
                    DARABONBA_PTR_FROM_JSON(TaskErrorMessage, taskErrorMessage_);
                    DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
                    DARABONBA_PTR_FROM_JSON(TaskMessage, taskMessage_);
                    DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
                    DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
                  };
                  TaskInfoDTO() = default ;
                  TaskInfoDTO(const TaskInfoDTO &) = default ;
                  TaskInfoDTO(TaskInfoDTO &&) = default ;
                  TaskInfoDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~TaskInfoDTO() = default ;
                  TaskInfoDTO& operator=(const TaskInfoDTO &) = default ;
                  TaskInfoDTO& operator=(TaskInfoDTO &&) = default ;
                  virtual void validate() const override {
                  };
                  virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                  virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                  virtual bool empty() const override { return this->retryType_ == nullptr
        && this->showManualIgnorance_ == nullptr && this->taskErrorCode_ == nullptr && this->taskErrorIgnorance_ == nullptr && this->taskErrorMessage_ == nullptr && this->taskId_ == nullptr
        && this->taskMessage_ == nullptr && this->taskName_ == nullptr && this->taskStatus_ == nullptr; };
                  // retryType Field Functions 
                  bool hasRetryType() const { return this->retryType_ != nullptr;};
                  void deleteRetryType() { this->retryType_ = nullptr;};
                  inline int32_t getRetryType() const { DARABONBA_PTR_GET_DEFAULT(retryType_, 0) };
                  inline TaskInfoDTO& setRetryType(int32_t retryType) { DARABONBA_PTR_SET_VALUE(retryType_, retryType) };


                  // showManualIgnorance Field Functions 
                  bool hasShowManualIgnorance() const { return this->showManualIgnorance_ != nullptr;};
                  void deleteShowManualIgnorance() { this->showManualIgnorance_ = nullptr;};
                  inline bool getShowManualIgnorance() const { DARABONBA_PTR_GET_DEFAULT(showManualIgnorance_, false) };
                  inline TaskInfoDTO& setShowManualIgnorance(bool showManualIgnorance) { DARABONBA_PTR_SET_VALUE(showManualIgnorance_, showManualIgnorance) };


                  // taskErrorCode Field Functions 
                  bool hasTaskErrorCode() const { return this->taskErrorCode_ != nullptr;};
                  void deleteTaskErrorCode() { this->taskErrorCode_ = nullptr;};
                  inline string getTaskErrorCode() const { DARABONBA_PTR_GET_DEFAULT(taskErrorCode_, "") };
                  inline TaskInfoDTO& setTaskErrorCode(string taskErrorCode) { DARABONBA_PTR_SET_VALUE(taskErrorCode_, taskErrorCode) };


                  // taskErrorIgnorance Field Functions 
                  bool hasTaskErrorIgnorance() const { return this->taskErrorIgnorance_ != nullptr;};
                  void deleteTaskErrorIgnorance() { this->taskErrorIgnorance_ = nullptr;};
                  inline int32_t getTaskErrorIgnorance() const { DARABONBA_PTR_GET_DEFAULT(taskErrorIgnorance_, 0) };
                  inline TaskInfoDTO& setTaskErrorIgnorance(int32_t taskErrorIgnorance) { DARABONBA_PTR_SET_VALUE(taskErrorIgnorance_, taskErrorIgnorance) };


                  // taskErrorMessage Field Functions 
                  bool hasTaskErrorMessage() const { return this->taskErrorMessage_ != nullptr;};
                  void deleteTaskErrorMessage() { this->taskErrorMessage_ = nullptr;};
                  inline string getTaskErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(taskErrorMessage_, "") };
                  inline TaskInfoDTO& setTaskErrorMessage(string taskErrorMessage) { DARABONBA_PTR_SET_VALUE(taskErrorMessage_, taskErrorMessage) };


                  // taskId Field Functions 
                  bool hasTaskId() const { return this->taskId_ != nullptr;};
                  void deleteTaskId() { this->taskId_ = nullptr;};
                  inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
                  inline TaskInfoDTO& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


                  // taskMessage Field Functions 
                  bool hasTaskMessage() const { return this->taskMessage_ != nullptr;};
                  void deleteTaskMessage() { this->taskMessage_ = nullptr;};
                  inline string getTaskMessage() const { DARABONBA_PTR_GET_DEFAULT(taskMessage_, "") };
                  inline TaskInfoDTO& setTaskMessage(string taskMessage) { DARABONBA_PTR_SET_VALUE(taskMessage_, taskMessage) };


                  // taskName Field Functions 
                  bool hasTaskName() const { return this->taskName_ != nullptr;};
                  void deleteTaskName() { this->taskName_ = nullptr;};
                  inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
                  inline TaskInfoDTO& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


                  // taskStatus Field Functions 
                  bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
                  void deleteTaskStatus() { this->taskStatus_ = nullptr;};
                  inline string getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
                  inline TaskInfoDTO& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


                protected:
                  shared_ptr<int32_t> retryType_ {};
                  shared_ptr<bool> showManualIgnorance_ {};
                  shared_ptr<string> taskErrorCode_ {};
                  shared_ptr<int32_t> taskErrorIgnorance_ {};
                  shared_ptr<string> taskErrorMessage_ {};
                  shared_ptr<string> taskId_ {};
                  shared_ptr<string> taskMessage_ {};
                  shared_ptr<string> taskName_ {};
                  shared_ptr<string> taskStatus_ {};
                };

                virtual bool empty() const override { return this->taskInfoDTO_ == nullptr; };
                // taskInfoDTO Field Functions 
                bool hasTaskInfoDTO() const { return this->taskInfoDTO_ != nullptr;};
                void deleteTaskInfoDTO() { this->taskInfoDTO_ = nullptr;};
                inline const vector<TaskList::TaskInfoDTO> & getTaskInfoDTO() const { DARABONBA_PTR_GET_CONST(taskInfoDTO_, vector<TaskList::TaskInfoDTO>) };
                inline vector<TaskList::TaskInfoDTO> getTaskInfoDTO() { DARABONBA_PTR_GET(taskInfoDTO_, vector<TaskList::TaskInfoDTO>) };
                inline TaskList& setTaskInfoDTO(const vector<TaskList::TaskInfoDTO> & taskInfoDTO) { DARABONBA_PTR_SET_VALUE(taskInfoDTO_, taskInfoDTO) };
                inline TaskList& setTaskInfoDTO(vector<TaskList::TaskInfoDTO> && taskInfoDTO) { DARABONBA_PTR_SET_RVALUE(taskInfoDTO_, taskInfoDTO) };


              protected:
                shared_ptr<vector<TaskList::TaskInfoDTO>> taskInfoDTO_ {};
              };

              virtual bool empty() const override { return this->stageId_ == nullptr
        && this->stageName_ == nullptr && this->stageStatus_ == nullptr && this->taskList_ == nullptr; };
              // stageId Field Functions 
              bool hasStageId() const { return this->stageId_ != nullptr;};
              void deleteStageId() { this->stageId_ = nullptr;};
              inline string getStageId() const { DARABONBA_PTR_GET_DEFAULT(stageId_, "") };
              inline StageDetailDTO& setStageId(string stageId) { DARABONBA_PTR_SET_VALUE(stageId_, stageId) };


              // stageName Field Functions 
              bool hasStageName() const { return this->stageName_ != nullptr;};
              void deleteStageName() { this->stageName_ = nullptr;};
              inline string getStageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
              inline StageDetailDTO& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


              // stageStatus Field Functions 
              bool hasStageStatus() const { return this->stageStatus_ != nullptr;};
              void deleteStageStatus() { this->stageStatus_ = nullptr;};
              inline int32_t getStageStatus() const { DARABONBA_PTR_GET_DEFAULT(stageStatus_, 0) };
              inline StageDetailDTO& setStageStatus(int32_t stageStatus) { DARABONBA_PTR_SET_VALUE(stageStatus_, stageStatus) };


              // taskList Field Functions 
              bool hasTaskList() const { return this->taskList_ != nullptr;};
              void deleteTaskList() { this->taskList_ = nullptr;};
              inline const StageDetailDTO::TaskList & getTaskList() const { DARABONBA_PTR_GET_CONST(taskList_, StageDetailDTO::TaskList) };
              inline StageDetailDTO::TaskList getTaskList() { DARABONBA_PTR_GET(taskList_, StageDetailDTO::TaskList) };
              inline StageDetailDTO& setTaskList(const StageDetailDTO::TaskList & taskList) { DARABONBA_PTR_SET_VALUE(taskList_, taskList) };
              inline StageDetailDTO& setTaskList(StageDetailDTO::TaskList && taskList) { DARABONBA_PTR_SET_RVALUE(taskList_, taskList) };


            protected:
              shared_ptr<string> stageId_ {};
              shared_ptr<string> stageName_ {};
              shared_ptr<int32_t> stageStatus_ {};
              shared_ptr<StageDetailDTO::TaskList> taskList_ {};
            };

            virtual bool empty() const override { return this->stageDetailDTO_ == nullptr; };
            // stageDetailDTO Field Functions 
            bool hasStageDetailDTO() const { return this->stageDetailDTO_ != nullptr;};
            void deleteStageDetailDTO() { this->stageDetailDTO_ = nullptr;};
            inline const vector<StageDetailList::StageDetailDTO> & getStageDetailDTO() const { DARABONBA_PTR_GET_CONST(stageDetailDTO_, vector<StageDetailList::StageDetailDTO>) };
            inline vector<StageDetailList::StageDetailDTO> getStageDetailDTO() { DARABONBA_PTR_GET(stageDetailDTO_, vector<StageDetailList::StageDetailDTO>) };
            inline StageDetailList& setStageDetailDTO(const vector<StageDetailList::StageDetailDTO> & stageDetailDTO) { DARABONBA_PTR_SET_VALUE(stageDetailDTO_, stageDetailDTO) };
            inline StageDetailList& setStageDetailDTO(vector<StageDetailList::StageDetailDTO> && stageDetailDTO) { DARABONBA_PTR_SET_RVALUE(stageDetailDTO_, stageDetailDTO) };


          protected:
            shared_ptr<vector<StageDetailList::StageDetailDTO>> stageDetailDTO_ {};
          };

          virtual bool empty() const override { return this->pipelineId_ == nullptr
        && this->pipelineName_ == nullptr && this->pipelineStatus_ == nullptr && this->stageDetailList_ == nullptr && this->stageList_ == nullptr && this->startTime_ == nullptr
        && this->updateTime_ == nullptr; };
          // pipelineId Field Functions 
          bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
          void deletePipelineId() { this->pipelineId_ = nullptr;};
          inline string getPipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
          inline PipelineInfo& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


          // pipelineName Field Functions 
          bool hasPipelineName() const { return this->pipelineName_ != nullptr;};
          void deletePipelineName() { this->pipelineName_ = nullptr;};
          inline string getPipelineName() const { DARABONBA_PTR_GET_DEFAULT(pipelineName_, "") };
          inline PipelineInfo& setPipelineName(string pipelineName) { DARABONBA_PTR_SET_VALUE(pipelineName_, pipelineName) };


          // pipelineStatus Field Functions 
          bool hasPipelineStatus() const { return this->pipelineStatus_ != nullptr;};
          void deletePipelineStatus() { this->pipelineStatus_ = nullptr;};
          inline int32_t getPipelineStatus() const { DARABONBA_PTR_GET_DEFAULT(pipelineStatus_, 0) };
          inline PipelineInfo& setPipelineStatus(int32_t pipelineStatus) { DARABONBA_PTR_SET_VALUE(pipelineStatus_, pipelineStatus) };


          // stageDetailList Field Functions 
          bool hasStageDetailList() const { return this->stageDetailList_ != nullptr;};
          void deleteStageDetailList() { this->stageDetailList_ = nullptr;};
          inline const PipelineInfo::StageDetailList & getStageDetailList() const { DARABONBA_PTR_GET_CONST(stageDetailList_, PipelineInfo::StageDetailList) };
          inline PipelineInfo::StageDetailList getStageDetailList() { DARABONBA_PTR_GET(stageDetailList_, PipelineInfo::StageDetailList) };
          inline PipelineInfo& setStageDetailList(const PipelineInfo::StageDetailList & stageDetailList) { DARABONBA_PTR_SET_VALUE(stageDetailList_, stageDetailList) };
          inline PipelineInfo& setStageDetailList(PipelineInfo::StageDetailList && stageDetailList) { DARABONBA_PTR_SET_RVALUE(stageDetailList_, stageDetailList) };


          // stageList Field Functions 
          bool hasStageList() const { return this->stageList_ != nullptr;};
          void deleteStageList() { this->stageList_ = nullptr;};
          inline const PipelineInfo::StageList & getStageList() const { DARABONBA_PTR_GET_CONST(stageList_, PipelineInfo::StageList) };
          inline PipelineInfo::StageList getStageList() { DARABONBA_PTR_GET(stageList_, PipelineInfo::StageList) };
          inline PipelineInfo& setStageList(const PipelineInfo::StageList & stageList) { DARABONBA_PTR_SET_VALUE(stageList_, stageList) };
          inline PipelineInfo& setStageList(PipelineInfo::StageList && stageList) { DARABONBA_PTR_SET_RVALUE(stageList_, stageList) };


          // startTime Field Functions 
          bool hasStartTime() const { return this->startTime_ != nullptr;};
          void deleteStartTime() { this->startTime_ = nullptr;};
          inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
          inline PipelineInfo& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


          // updateTime Field Functions 
          bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
          void deleteUpdateTime() { this->updateTime_ = nullptr;};
          inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
          inline PipelineInfo& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


        protected:
          shared_ptr<string> pipelineId_ {};
          shared_ptr<string> pipelineName_ {};
          shared_ptr<int32_t> pipelineStatus_ {};
          shared_ptr<PipelineInfo::StageDetailList> stageDetailList_ {};
          shared_ptr<PipelineInfo::StageList> stageList_ {};
          shared_ptr<string> startTime_ {};
          shared_ptr<string> updateTime_ {};
        };

        virtual bool empty() const override { return this->pipelineInfo_ == nullptr; };
        // pipelineInfo Field Functions 
        bool hasPipelineInfo() const { return this->pipelineInfo_ != nullptr;};
        void deletePipelineInfo() { this->pipelineInfo_ = nullptr;};
        inline const vector<PipelineInfoList::PipelineInfo> & getPipelineInfo() const { DARABONBA_PTR_GET_CONST(pipelineInfo_, vector<PipelineInfoList::PipelineInfo>) };
        inline vector<PipelineInfoList::PipelineInfo> getPipelineInfo() { DARABONBA_PTR_GET(pipelineInfo_, vector<PipelineInfoList::PipelineInfo>) };
        inline PipelineInfoList& setPipelineInfo(const vector<PipelineInfoList::PipelineInfo> & pipelineInfo) { DARABONBA_PTR_SET_VALUE(pipelineInfo_, pipelineInfo) };
        inline PipelineInfoList& setPipelineInfo(vector<PipelineInfoList::PipelineInfo> && pipelineInfo) { DARABONBA_PTR_SET_RVALUE(pipelineInfo_, pipelineInfo) };


      protected:
        shared_ptr<vector<PipelineInfoList::PipelineInfo>> pipelineInfo_ {};
      };

      virtual bool empty() const override { return this->batchCount_ == nullptr
        && this->batchType_ == nullptr && this->changeOrderDescription_ == nullptr && this->changeOrderId_ == nullptr && this->coType_ == nullptr && this->createTime_ == nullptr
        && this->createUserId_ == nullptr && this->desc_ == nullptr && this->pipelineInfoList_ == nullptr && this->status_ == nullptr && this->supportRollback_ == nullptr
        && this->targets_ == nullptr && this->trafficControl_ == nullptr; };
      // batchCount Field Functions 
      bool hasBatchCount() const { return this->batchCount_ != nullptr;};
      void deleteBatchCount() { this->batchCount_ = nullptr;};
      inline int32_t getBatchCount() const { DARABONBA_PTR_GET_DEFAULT(batchCount_, 0) };
      inline ChangeOrderInfo& setBatchCount(int32_t batchCount) { DARABONBA_PTR_SET_VALUE(batchCount_, batchCount) };


      // batchType Field Functions 
      bool hasBatchType() const { return this->batchType_ != nullptr;};
      void deleteBatchType() { this->batchType_ = nullptr;};
      inline string getBatchType() const { DARABONBA_PTR_GET_DEFAULT(batchType_, "") };
      inline ChangeOrderInfo& setBatchType(string batchType) { DARABONBA_PTR_SET_VALUE(batchType_, batchType) };


      // changeOrderDescription Field Functions 
      bool hasChangeOrderDescription() const { return this->changeOrderDescription_ != nullptr;};
      void deleteChangeOrderDescription() { this->changeOrderDescription_ = nullptr;};
      inline string getChangeOrderDescription() const { DARABONBA_PTR_GET_DEFAULT(changeOrderDescription_, "") };
      inline ChangeOrderInfo& setChangeOrderDescription(string changeOrderDescription) { DARABONBA_PTR_SET_VALUE(changeOrderDescription_, changeOrderDescription) };


      // changeOrderId Field Functions 
      bool hasChangeOrderId() const { return this->changeOrderId_ != nullptr;};
      void deleteChangeOrderId() { this->changeOrderId_ = nullptr;};
      inline string getChangeOrderId() const { DARABONBA_PTR_GET_DEFAULT(changeOrderId_, "") };
      inline ChangeOrderInfo& setChangeOrderId(string changeOrderId) { DARABONBA_PTR_SET_VALUE(changeOrderId_, changeOrderId) };


      // coType Field Functions 
      bool hasCoType() const { return this->coType_ != nullptr;};
      void deleteCoType() { this->coType_ = nullptr;};
      inline string getCoType() const { DARABONBA_PTR_GET_DEFAULT(coType_, "") };
      inline ChangeOrderInfo& setCoType(string coType) { DARABONBA_PTR_SET_VALUE(coType_, coType) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline ChangeOrderInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // createUserId Field Functions 
      bool hasCreateUserId() const { return this->createUserId_ != nullptr;};
      void deleteCreateUserId() { this->createUserId_ = nullptr;};
      inline string getCreateUserId() const { DARABONBA_PTR_GET_DEFAULT(createUserId_, "") };
      inline ChangeOrderInfo& setCreateUserId(string createUserId) { DARABONBA_PTR_SET_VALUE(createUserId_, createUserId) };


      // desc Field Functions 
      bool hasDesc() const { return this->desc_ != nullptr;};
      void deleteDesc() { this->desc_ = nullptr;};
      inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
      inline ChangeOrderInfo& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


      // pipelineInfoList Field Functions 
      bool hasPipelineInfoList() const { return this->pipelineInfoList_ != nullptr;};
      void deletePipelineInfoList() { this->pipelineInfoList_ = nullptr;};
      inline const ChangeOrderInfo::PipelineInfoList & getPipelineInfoList() const { DARABONBA_PTR_GET_CONST(pipelineInfoList_, ChangeOrderInfo::PipelineInfoList) };
      inline ChangeOrderInfo::PipelineInfoList getPipelineInfoList() { DARABONBA_PTR_GET(pipelineInfoList_, ChangeOrderInfo::PipelineInfoList) };
      inline ChangeOrderInfo& setPipelineInfoList(const ChangeOrderInfo::PipelineInfoList & pipelineInfoList) { DARABONBA_PTR_SET_VALUE(pipelineInfoList_, pipelineInfoList) };
      inline ChangeOrderInfo& setPipelineInfoList(ChangeOrderInfo::PipelineInfoList && pipelineInfoList) { DARABONBA_PTR_SET_RVALUE(pipelineInfoList_, pipelineInfoList) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline ChangeOrderInfo& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // supportRollback Field Functions 
      bool hasSupportRollback() const { return this->supportRollback_ != nullptr;};
      void deleteSupportRollback() { this->supportRollback_ = nullptr;};
      inline bool getSupportRollback() const { DARABONBA_PTR_GET_DEFAULT(supportRollback_, false) };
      inline ChangeOrderInfo& setSupportRollback(bool supportRollback) { DARABONBA_PTR_SET_VALUE(supportRollback_, supportRollback) };


      // targets Field Functions 
      bool hasTargets() const { return this->targets_ != nullptr;};
      void deleteTargets() { this->targets_ = nullptr;};
      inline const ChangeOrderInfo::Targets & getTargets() const { DARABONBA_PTR_GET_CONST(targets_, ChangeOrderInfo::Targets) };
      inline ChangeOrderInfo::Targets getTargets() { DARABONBA_PTR_GET(targets_, ChangeOrderInfo::Targets) };
      inline ChangeOrderInfo& setTargets(const ChangeOrderInfo::Targets & targets) { DARABONBA_PTR_SET_VALUE(targets_, targets) };
      inline ChangeOrderInfo& setTargets(ChangeOrderInfo::Targets && targets) { DARABONBA_PTR_SET_RVALUE(targets_, targets) };


      // trafficControl Field Functions 
      bool hasTrafficControl() const { return this->trafficControl_ != nullptr;};
      void deleteTrafficControl() { this->trafficControl_ = nullptr;};
      inline const ChangeOrderInfo::TrafficControl & getTrafficControl() const { DARABONBA_PTR_GET_CONST(trafficControl_, ChangeOrderInfo::TrafficControl) };
      inline ChangeOrderInfo::TrafficControl getTrafficControl() { DARABONBA_PTR_GET(trafficControl_, ChangeOrderInfo::TrafficControl) };
      inline ChangeOrderInfo& setTrafficControl(const ChangeOrderInfo::TrafficControl & trafficControl) { DARABONBA_PTR_SET_VALUE(trafficControl_, trafficControl) };
      inline ChangeOrderInfo& setTrafficControl(ChangeOrderInfo::TrafficControl && trafficControl) { DARABONBA_PTR_SET_RVALUE(trafficControl_, trafficControl) };


    protected:
      // The number of batches for the change.
      shared_ptr<int32_t> batchCount_ {};
      // The execution mode for the next batch in a phased release.
      // 
      // - Automatic: The next batch is automatically executed.
      // 
      // - Manual: The next batch is manually executed.
      shared_ptr<string> batchType_ {};
      // The description of the change process.
      shared_ptr<string> changeOrderDescription_ {};
      // The ID of the change process.
      shared_ptr<string> changeOrderId_ {};
      // The classification of the change process.
      shared_ptr<string> coType_ {};
      // The time when the change process was created.
      shared_ptr<string> createTime_ {};
      // The owner of the change process.
      shared_ptr<string> createUserId_ {};
      // The description of the change process.
      shared_ptr<string> desc_ {};
      shared_ptr<ChangeOrderInfo::PipelineInfoList> pipelineInfoList_ {};
      // The status of the change.
      // 
      // - 0: ready
      // 
      // - 1: in progress
      // 
      // - 2: successful
      // 
      // - 3: failed
      // 
      // - 6: stopped
      // 
      // - 7: partially successful
      // 
      // - 8: waiting for manual confirmation to proceed with the next batch in manual phased release mode
      // 
      // - 9: waiting for the next batch to be executed in automatic phased release mode
      // 
      // - 10: failed due to a system exception
      shared_ptr<int32_t> status_ {};
      // Indicates whether rollback is supported.
      // 
      // - true: Rollback is supported.
      // 
      // - false: Rollback is not supported.
      shared_ptr<bool> supportRollback_ {};
      shared_ptr<ChangeOrderInfo::Targets> targets_ {};
      // The throttling rule.
      shared_ptr<ChangeOrderInfo::TrafficControl> trafficControl_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->changeOrderInfo_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetChangeOrderInfoResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetChangeOrderInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetChangeOrderInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // changeOrderInfo Field Functions 
    bool hasChangeOrderInfo() const { return this->changeOrderInfo_ != nullptr;};
    void deleteChangeOrderInfo() { this->changeOrderInfo_ = nullptr;};
    inline const GetChangeOrderInfoResponseBody::ChangeOrderInfo & getChangeOrderInfo() const { DARABONBA_PTR_GET_CONST(changeOrderInfo_, GetChangeOrderInfoResponseBody::ChangeOrderInfo) };
    inline GetChangeOrderInfoResponseBody::ChangeOrderInfo getChangeOrderInfo() { DARABONBA_PTR_GET(changeOrderInfo_, GetChangeOrderInfoResponseBody::ChangeOrderInfo) };
    inline GetChangeOrderInfoResponseBody& setChangeOrderInfo(const GetChangeOrderInfoResponseBody::ChangeOrderInfo & changeOrderInfo) { DARABONBA_PTR_SET_VALUE(changeOrderInfo_, changeOrderInfo) };
    inline GetChangeOrderInfoResponseBody& setChangeOrderInfo(GetChangeOrderInfoResponseBody::ChangeOrderInfo && changeOrderInfo) { DARABONBA_PTR_SET_RVALUE(changeOrderInfo_, changeOrderInfo) };


  protected:
    // The status of the API call or a POP error code.
    shared_ptr<int32_t> code_ {};
    // Additional information.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The details of the change process.
    shared_ptr<GetChangeOrderInfoResponseBody::ChangeOrderInfo> changeOrderInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
