// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ONSTRACEGETRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ONSTRACEGETRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ons20190214
{
namespace Models
{
  class OnsTraceGetResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OnsTraceGetResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TraceData, traceData_);
    };
    friend void from_json(const Darabonba::Json& j, OnsTraceGetResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TraceData, traceData_);
    };
    OnsTraceGetResultResponseBody() = default ;
    OnsTraceGetResultResponseBody(const OnsTraceGetResultResponseBody &) = default ;
    OnsTraceGetResultResponseBody(OnsTraceGetResultResponseBody &&) = default ;
    OnsTraceGetResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OnsTraceGetResultResponseBody() = default ;
    OnsTraceGetResultResponseBody& operator=(const OnsTraceGetResultResponseBody &) = default ;
    OnsTraceGetResultResponseBody& operator=(OnsTraceGetResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TraceData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TraceData& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(MsgId, msgId_);
        DARABONBA_PTR_TO_JSON(MsgKey, msgKey_);
        DARABONBA_PTR_TO_JSON(QueryId, queryId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Topic, topic_);
        DARABONBA_PTR_TO_JSON(TraceList, traceList_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, TraceData& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(MsgId, msgId_);
        DARABONBA_PTR_FROM_JSON(MsgKey, msgKey_);
        DARABONBA_PTR_FROM_JSON(QueryId, queryId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Topic, topic_);
        DARABONBA_PTR_FROM_JSON(TraceList, traceList_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      TraceData() = default ;
      TraceData(const TraceData &) = default ;
      TraceData(TraceData &&) = default ;
      TraceData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TraceData() = default ;
      TraceData& operator=(const TraceData &) = default ;
      TraceData& operator=(TraceData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TraceList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TraceList& obj) { 
          DARABONBA_PTR_TO_JSON(TraceMapDo, traceMapDo_);
        };
        friend void from_json(const Darabonba::Json& j, TraceList& obj) { 
          DARABONBA_PTR_FROM_JSON(TraceMapDo, traceMapDo_);
        };
        TraceList() = default ;
        TraceList(const TraceList &) = default ;
        TraceList(TraceList &&) = default ;
        TraceList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TraceList() = default ;
        TraceList& operator=(const TraceList &) = default ;
        TraceList& operator=(TraceList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TraceMapDo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TraceMapDo& obj) { 
            DARABONBA_PTR_TO_JSON(BornHost, bornHost_);
            DARABONBA_PTR_TO_JSON(CostTime, costTime_);
            DARABONBA_PTR_TO_JSON(MsgId, msgId_);
            DARABONBA_PTR_TO_JSON(MsgKey, msgKey_);
            DARABONBA_PTR_TO_JSON(PubGroupName, pubGroupName_);
            DARABONBA_PTR_TO_JSON(PubTime, pubTime_);
            DARABONBA_PTR_TO_JSON(Status, status_);
            DARABONBA_PTR_TO_JSON(SubList, subList_);
            DARABONBA_PTR_TO_JSON(Tag, tag_);
            DARABONBA_PTR_TO_JSON(Topic, topic_);
          };
          friend void from_json(const Darabonba::Json& j, TraceMapDo& obj) { 
            DARABONBA_PTR_FROM_JSON(BornHost, bornHost_);
            DARABONBA_PTR_FROM_JSON(CostTime, costTime_);
            DARABONBA_PTR_FROM_JSON(MsgId, msgId_);
            DARABONBA_PTR_FROM_JSON(MsgKey, msgKey_);
            DARABONBA_PTR_FROM_JSON(PubGroupName, pubGroupName_);
            DARABONBA_PTR_FROM_JSON(PubTime, pubTime_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
            DARABONBA_PTR_FROM_JSON(SubList, subList_);
            DARABONBA_PTR_FROM_JSON(Tag, tag_);
            DARABONBA_PTR_FROM_JSON(Topic, topic_);
          };
          TraceMapDo() = default ;
          TraceMapDo(const TraceMapDo &) = default ;
          TraceMapDo(TraceMapDo &&) = default ;
          TraceMapDo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TraceMapDo() = default ;
          TraceMapDo& operator=(const TraceMapDo &) = default ;
          TraceMapDo& operator=(TraceMapDo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class SubList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const SubList& obj) { 
              DARABONBA_PTR_TO_JSON(SubMapDo, subMapDo_);
            };
            friend void from_json(const Darabonba::Json& j, SubList& obj) { 
              DARABONBA_PTR_FROM_JSON(SubMapDo, subMapDo_);
            };
            SubList() = default ;
            SubList(const SubList &) = default ;
            SubList(SubList &&) = default ;
            SubList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~SubList() = default ;
            SubList& operator=(const SubList &) = default ;
            SubList& operator=(SubList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class SubMapDo : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const SubMapDo& obj) { 
                DARABONBA_PTR_TO_JSON(ClientList, clientList_);
                DARABONBA_PTR_TO_JSON(FailCount, failCount_);
                DARABONBA_PTR_TO_JSON(SubGroupName, subGroupName_);
                DARABONBA_PTR_TO_JSON(SuccessCount, successCount_);
              };
              friend void from_json(const Darabonba::Json& j, SubMapDo& obj) { 
                DARABONBA_PTR_FROM_JSON(ClientList, clientList_);
                DARABONBA_PTR_FROM_JSON(FailCount, failCount_);
                DARABONBA_PTR_FROM_JSON(SubGroupName, subGroupName_);
                DARABONBA_PTR_FROM_JSON(SuccessCount, successCount_);
              };
              SubMapDo() = default ;
              SubMapDo(const SubMapDo &) = default ;
              SubMapDo(SubMapDo &&) = default ;
              SubMapDo(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~SubMapDo() = default ;
              SubMapDo& operator=(const SubMapDo &) = default ;
              SubMapDo& operator=(SubMapDo &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class ClientList : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const ClientList& obj) { 
                  DARABONBA_PTR_TO_JSON(SubClientInfoDo, subClientInfoDo_);
                };
                friend void from_json(const Darabonba::Json& j, ClientList& obj) { 
                  DARABONBA_PTR_FROM_JSON(SubClientInfoDo, subClientInfoDo_);
                };
                ClientList() = default ;
                ClientList(const ClientList &) = default ;
                ClientList(ClientList &&) = default ;
                ClientList(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~ClientList() = default ;
                ClientList& operator=(const ClientList &) = default ;
                ClientList& operator=(ClientList &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                class SubClientInfoDo : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const SubClientInfoDo& obj) { 
                    DARABONBA_PTR_TO_JSON(ClientHost, clientHost_);
                    DARABONBA_PTR_TO_JSON(CostTime, costTime_);
                    DARABONBA_PTR_TO_JSON(ReconsumeTimes, reconsumeTimes_);
                    DARABONBA_PTR_TO_JSON(Status, status_);
                    DARABONBA_PTR_TO_JSON(SubGroupName, subGroupName_);
                    DARABONBA_PTR_TO_JSON(SubTime, subTime_);
                  };
                  friend void from_json(const Darabonba::Json& j, SubClientInfoDo& obj) { 
                    DARABONBA_PTR_FROM_JSON(ClientHost, clientHost_);
                    DARABONBA_PTR_FROM_JSON(CostTime, costTime_);
                    DARABONBA_PTR_FROM_JSON(ReconsumeTimes, reconsumeTimes_);
                    DARABONBA_PTR_FROM_JSON(Status, status_);
                    DARABONBA_PTR_FROM_JSON(SubGroupName, subGroupName_);
                    DARABONBA_PTR_FROM_JSON(SubTime, subTime_);
                  };
                  SubClientInfoDo() = default ;
                  SubClientInfoDo(const SubClientInfoDo &) = default ;
                  SubClientInfoDo(SubClientInfoDo &&) = default ;
                  SubClientInfoDo(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~SubClientInfoDo() = default ;
                  SubClientInfoDo& operator=(const SubClientInfoDo &) = default ;
                  SubClientInfoDo& operator=(SubClientInfoDo &&) = default ;
                  virtual void validate() const override {
                  };
                  virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                  virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                  virtual bool empty() const override { return this->clientHost_ == nullptr
        && this->costTime_ == nullptr && this->reconsumeTimes_ == nullptr && this->status_ == nullptr && this->subGroupName_ == nullptr && this->subTime_ == nullptr; };
                  // clientHost Field Functions 
                  bool hasClientHost() const { return this->clientHost_ != nullptr;};
                  void deleteClientHost() { this->clientHost_ = nullptr;};
                  inline string getClientHost() const { DARABONBA_PTR_GET_DEFAULT(clientHost_, "") };
                  inline SubClientInfoDo& setClientHost(string clientHost) { DARABONBA_PTR_SET_VALUE(clientHost_, clientHost) };


                  // costTime Field Functions 
                  bool hasCostTime() const { return this->costTime_ != nullptr;};
                  void deleteCostTime() { this->costTime_ = nullptr;};
                  inline int32_t getCostTime() const { DARABONBA_PTR_GET_DEFAULT(costTime_, 0) };
                  inline SubClientInfoDo& setCostTime(int32_t costTime) { DARABONBA_PTR_SET_VALUE(costTime_, costTime) };


                  // reconsumeTimes Field Functions 
                  bool hasReconsumeTimes() const { return this->reconsumeTimes_ != nullptr;};
                  void deleteReconsumeTimes() { this->reconsumeTimes_ = nullptr;};
                  inline int32_t getReconsumeTimes() const { DARABONBA_PTR_GET_DEFAULT(reconsumeTimes_, 0) };
                  inline SubClientInfoDo& setReconsumeTimes(int32_t reconsumeTimes) { DARABONBA_PTR_SET_VALUE(reconsumeTimes_, reconsumeTimes) };


                  // status Field Functions 
                  bool hasStatus() const { return this->status_ != nullptr;};
                  void deleteStatus() { this->status_ = nullptr;};
                  inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
                  inline SubClientInfoDo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


                  // subGroupName Field Functions 
                  bool hasSubGroupName() const { return this->subGroupName_ != nullptr;};
                  void deleteSubGroupName() { this->subGroupName_ = nullptr;};
                  inline string getSubGroupName() const { DARABONBA_PTR_GET_DEFAULT(subGroupName_, "") };
                  inline SubClientInfoDo& setSubGroupName(string subGroupName) { DARABONBA_PTR_SET_VALUE(subGroupName_, subGroupName) };


                  // subTime Field Functions 
                  bool hasSubTime() const { return this->subTime_ != nullptr;};
                  void deleteSubTime() { this->subTime_ = nullptr;};
                  inline int64_t getSubTime() const { DARABONBA_PTR_GET_DEFAULT(subTime_, 0L) };
                  inline SubClientInfoDo& setSubTime(int64_t subTime) { DARABONBA_PTR_SET_VALUE(subTime_, subTime) };


                protected:
                  shared_ptr<string> clientHost_ {};
                  shared_ptr<int32_t> costTime_ {};
                  shared_ptr<int32_t> reconsumeTimes_ {};
                  shared_ptr<string> status_ {};
                  shared_ptr<string> subGroupName_ {};
                  shared_ptr<int64_t> subTime_ {};
                };

                virtual bool empty() const override { return this->subClientInfoDo_ == nullptr; };
                // subClientInfoDo Field Functions 
                bool hasSubClientInfoDo() const { return this->subClientInfoDo_ != nullptr;};
                void deleteSubClientInfoDo() { this->subClientInfoDo_ = nullptr;};
                inline const vector<ClientList::SubClientInfoDo> & getSubClientInfoDo() const { DARABONBA_PTR_GET_CONST(subClientInfoDo_, vector<ClientList::SubClientInfoDo>) };
                inline vector<ClientList::SubClientInfoDo> getSubClientInfoDo() { DARABONBA_PTR_GET(subClientInfoDo_, vector<ClientList::SubClientInfoDo>) };
                inline ClientList& setSubClientInfoDo(const vector<ClientList::SubClientInfoDo> & subClientInfoDo) { DARABONBA_PTR_SET_VALUE(subClientInfoDo_, subClientInfoDo) };
                inline ClientList& setSubClientInfoDo(vector<ClientList::SubClientInfoDo> && subClientInfoDo) { DARABONBA_PTR_SET_RVALUE(subClientInfoDo_, subClientInfoDo) };


              protected:
                shared_ptr<vector<ClientList::SubClientInfoDo>> subClientInfoDo_ {};
              };

              virtual bool empty() const override { return this->clientList_ == nullptr
        && this->failCount_ == nullptr && this->subGroupName_ == nullptr && this->successCount_ == nullptr; };
              // clientList Field Functions 
              bool hasClientList() const { return this->clientList_ != nullptr;};
              void deleteClientList() { this->clientList_ = nullptr;};
              inline const SubMapDo::ClientList & getClientList() const { DARABONBA_PTR_GET_CONST(clientList_, SubMapDo::ClientList) };
              inline SubMapDo::ClientList getClientList() { DARABONBA_PTR_GET(clientList_, SubMapDo::ClientList) };
              inline SubMapDo& setClientList(const SubMapDo::ClientList & clientList) { DARABONBA_PTR_SET_VALUE(clientList_, clientList) };
              inline SubMapDo& setClientList(SubMapDo::ClientList && clientList) { DARABONBA_PTR_SET_RVALUE(clientList_, clientList) };


              // failCount Field Functions 
              bool hasFailCount() const { return this->failCount_ != nullptr;};
              void deleteFailCount() { this->failCount_ = nullptr;};
              inline int32_t getFailCount() const { DARABONBA_PTR_GET_DEFAULT(failCount_, 0) };
              inline SubMapDo& setFailCount(int32_t failCount) { DARABONBA_PTR_SET_VALUE(failCount_, failCount) };


              // subGroupName Field Functions 
              bool hasSubGroupName() const { return this->subGroupName_ != nullptr;};
              void deleteSubGroupName() { this->subGroupName_ = nullptr;};
              inline string getSubGroupName() const { DARABONBA_PTR_GET_DEFAULT(subGroupName_, "") };
              inline SubMapDo& setSubGroupName(string subGroupName) { DARABONBA_PTR_SET_VALUE(subGroupName_, subGroupName) };


              // successCount Field Functions 
              bool hasSuccessCount() const { return this->successCount_ != nullptr;};
              void deleteSuccessCount() { this->successCount_ = nullptr;};
              inline int32_t getSuccessCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0) };
              inline SubMapDo& setSuccessCount(int32_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


            protected:
              shared_ptr<SubMapDo::ClientList> clientList_ {};
              shared_ptr<int32_t> failCount_ {};
              shared_ptr<string> subGroupName_ {};
              shared_ptr<int32_t> successCount_ {};
            };

            virtual bool empty() const override { return this->subMapDo_ == nullptr; };
            // subMapDo Field Functions 
            bool hasSubMapDo() const { return this->subMapDo_ != nullptr;};
            void deleteSubMapDo() { this->subMapDo_ = nullptr;};
            inline const vector<SubList::SubMapDo> & getSubMapDo() const { DARABONBA_PTR_GET_CONST(subMapDo_, vector<SubList::SubMapDo>) };
            inline vector<SubList::SubMapDo> getSubMapDo() { DARABONBA_PTR_GET(subMapDo_, vector<SubList::SubMapDo>) };
            inline SubList& setSubMapDo(const vector<SubList::SubMapDo> & subMapDo) { DARABONBA_PTR_SET_VALUE(subMapDo_, subMapDo) };
            inline SubList& setSubMapDo(vector<SubList::SubMapDo> && subMapDo) { DARABONBA_PTR_SET_RVALUE(subMapDo_, subMapDo) };


          protected:
            shared_ptr<vector<SubList::SubMapDo>> subMapDo_ {};
          };

          virtual bool empty() const override { return this->bornHost_ == nullptr
        && this->costTime_ == nullptr && this->msgId_ == nullptr && this->msgKey_ == nullptr && this->pubGroupName_ == nullptr && this->pubTime_ == nullptr
        && this->status_ == nullptr && this->subList_ == nullptr && this->tag_ == nullptr && this->topic_ == nullptr; };
          // bornHost Field Functions 
          bool hasBornHost() const { return this->bornHost_ != nullptr;};
          void deleteBornHost() { this->bornHost_ = nullptr;};
          inline string getBornHost() const { DARABONBA_PTR_GET_DEFAULT(bornHost_, "") };
          inline TraceMapDo& setBornHost(string bornHost) { DARABONBA_PTR_SET_VALUE(bornHost_, bornHost) };


          // costTime Field Functions 
          bool hasCostTime() const { return this->costTime_ != nullptr;};
          void deleteCostTime() { this->costTime_ = nullptr;};
          inline int32_t getCostTime() const { DARABONBA_PTR_GET_DEFAULT(costTime_, 0) };
          inline TraceMapDo& setCostTime(int32_t costTime) { DARABONBA_PTR_SET_VALUE(costTime_, costTime) };


          // msgId Field Functions 
          bool hasMsgId() const { return this->msgId_ != nullptr;};
          void deleteMsgId() { this->msgId_ = nullptr;};
          inline string getMsgId() const { DARABONBA_PTR_GET_DEFAULT(msgId_, "") };
          inline TraceMapDo& setMsgId(string msgId) { DARABONBA_PTR_SET_VALUE(msgId_, msgId) };


          // msgKey Field Functions 
          bool hasMsgKey() const { return this->msgKey_ != nullptr;};
          void deleteMsgKey() { this->msgKey_ = nullptr;};
          inline string getMsgKey() const { DARABONBA_PTR_GET_DEFAULT(msgKey_, "") };
          inline TraceMapDo& setMsgKey(string msgKey) { DARABONBA_PTR_SET_VALUE(msgKey_, msgKey) };


          // pubGroupName Field Functions 
          bool hasPubGroupName() const { return this->pubGroupName_ != nullptr;};
          void deletePubGroupName() { this->pubGroupName_ = nullptr;};
          inline string getPubGroupName() const { DARABONBA_PTR_GET_DEFAULT(pubGroupName_, "") };
          inline TraceMapDo& setPubGroupName(string pubGroupName) { DARABONBA_PTR_SET_VALUE(pubGroupName_, pubGroupName) };


          // pubTime Field Functions 
          bool hasPubTime() const { return this->pubTime_ != nullptr;};
          void deletePubTime() { this->pubTime_ = nullptr;};
          inline int64_t getPubTime() const { DARABONBA_PTR_GET_DEFAULT(pubTime_, 0L) };
          inline TraceMapDo& setPubTime(int64_t pubTime) { DARABONBA_PTR_SET_VALUE(pubTime_, pubTime) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline TraceMapDo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // subList Field Functions 
          bool hasSubList() const { return this->subList_ != nullptr;};
          void deleteSubList() { this->subList_ = nullptr;};
          inline const TraceMapDo::SubList & getSubList() const { DARABONBA_PTR_GET_CONST(subList_, TraceMapDo::SubList) };
          inline TraceMapDo::SubList getSubList() { DARABONBA_PTR_GET(subList_, TraceMapDo::SubList) };
          inline TraceMapDo& setSubList(const TraceMapDo::SubList & subList) { DARABONBA_PTR_SET_VALUE(subList_, subList) };
          inline TraceMapDo& setSubList(TraceMapDo::SubList && subList) { DARABONBA_PTR_SET_RVALUE(subList_, subList) };


          // tag Field Functions 
          bool hasTag() const { return this->tag_ != nullptr;};
          void deleteTag() { this->tag_ = nullptr;};
          inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
          inline TraceMapDo& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


          // topic Field Functions 
          bool hasTopic() const { return this->topic_ != nullptr;};
          void deleteTopic() { this->topic_ = nullptr;};
          inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
          inline TraceMapDo& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


        protected:
          shared_ptr<string> bornHost_ {};
          shared_ptr<int32_t> costTime_ {};
          shared_ptr<string> msgId_ {};
          shared_ptr<string> msgKey_ {};
          shared_ptr<string> pubGroupName_ {};
          shared_ptr<int64_t> pubTime_ {};
          shared_ptr<string> status_ {};
          shared_ptr<TraceMapDo::SubList> subList_ {};
          shared_ptr<string> tag_ {};
          shared_ptr<string> topic_ {};
        };

        virtual bool empty() const override { return this->traceMapDo_ == nullptr; };
        // traceMapDo Field Functions 
        bool hasTraceMapDo() const { return this->traceMapDo_ != nullptr;};
        void deleteTraceMapDo() { this->traceMapDo_ = nullptr;};
        inline const vector<TraceList::TraceMapDo> & getTraceMapDo() const { DARABONBA_PTR_GET_CONST(traceMapDo_, vector<TraceList::TraceMapDo>) };
        inline vector<TraceList::TraceMapDo> getTraceMapDo() { DARABONBA_PTR_GET(traceMapDo_, vector<TraceList::TraceMapDo>) };
        inline TraceList& setTraceMapDo(const vector<TraceList::TraceMapDo> & traceMapDo) { DARABONBA_PTR_SET_VALUE(traceMapDo_, traceMapDo) };
        inline TraceList& setTraceMapDo(vector<TraceList::TraceMapDo> && traceMapDo) { DARABONBA_PTR_SET_RVALUE(traceMapDo_, traceMapDo) };


      protected:
        shared_ptr<vector<TraceList::TraceMapDo>> traceMapDo_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->instanceId_ == nullptr && this->msgId_ == nullptr && this->msgKey_ == nullptr && this->queryId_ == nullptr && this->status_ == nullptr
        && this->topic_ == nullptr && this->traceList_ == nullptr && this->updateTime_ == nullptr && this->userId_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline TraceData& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline TraceData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // msgId Field Functions 
      bool hasMsgId() const { return this->msgId_ != nullptr;};
      void deleteMsgId() { this->msgId_ = nullptr;};
      inline string getMsgId() const { DARABONBA_PTR_GET_DEFAULT(msgId_, "") };
      inline TraceData& setMsgId(string msgId) { DARABONBA_PTR_SET_VALUE(msgId_, msgId) };


      // msgKey Field Functions 
      bool hasMsgKey() const { return this->msgKey_ != nullptr;};
      void deleteMsgKey() { this->msgKey_ = nullptr;};
      inline string getMsgKey() const { DARABONBA_PTR_GET_DEFAULT(msgKey_, "") };
      inline TraceData& setMsgKey(string msgKey) { DARABONBA_PTR_SET_VALUE(msgKey_, msgKey) };


      // queryId Field Functions 
      bool hasQueryId() const { return this->queryId_ != nullptr;};
      void deleteQueryId() { this->queryId_ = nullptr;};
      inline string getQueryId() const { DARABONBA_PTR_GET_DEFAULT(queryId_, "") };
      inline TraceData& setQueryId(string queryId) { DARABONBA_PTR_SET_VALUE(queryId_, queryId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline TraceData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // topic Field Functions 
      bool hasTopic() const { return this->topic_ != nullptr;};
      void deleteTopic() { this->topic_ = nullptr;};
      inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
      inline TraceData& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


      // traceList Field Functions 
      bool hasTraceList() const { return this->traceList_ != nullptr;};
      void deleteTraceList() { this->traceList_ = nullptr;};
      inline const TraceData::TraceList & getTraceList() const { DARABONBA_PTR_GET_CONST(traceList_, TraceData::TraceList) };
      inline TraceData::TraceList getTraceList() { DARABONBA_PTR_GET(traceList_, TraceData::TraceList) };
      inline TraceData& setTraceList(const TraceData::TraceList & traceList) { DARABONBA_PTR_SET_VALUE(traceList_, traceList) };
      inline TraceData& setTraceList(TraceData::TraceList && traceList) { DARABONBA_PTR_SET_RVALUE(traceList_, traceList) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline TraceData& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline TraceData& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // The point in time when the task was created.
      shared_ptr<int64_t> createTime_ {};
      // The ID of the instance
      shared_ptr<string> instanceId_ {};
      // The ID of the message that is queried.
      shared_ptr<string> msgId_ {};
      // The key of the message that is queried.
      shared_ptr<string> msgKey_ {};
      // The ID of the task.
      shared_ptr<string> queryId_ {};
      // The status of the task. Valid values:
      // 
      // *   **finish**: The task is complete.
      // *   **working**: The task is in progress.
      // *   **removed**: The task is deleted.
      shared_ptr<string> status_ {};
      // The topic in which the message is stored.
      shared_ptr<string> topic_ {};
      shared_ptr<TraceData::TraceList> traceList_ {};
      // The most recent point in time when the task was updated.
      shared_ptr<int64_t> updateTime_ {};
      // The ID of the user who created the task.
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->traceData_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline OnsTraceGetResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // traceData Field Functions 
    bool hasTraceData() const { return this->traceData_ != nullptr;};
    void deleteTraceData() { this->traceData_ = nullptr;};
    inline const OnsTraceGetResultResponseBody::TraceData & getTraceData() const { DARABONBA_PTR_GET_CONST(traceData_, OnsTraceGetResultResponseBody::TraceData) };
    inline OnsTraceGetResultResponseBody::TraceData getTraceData() { DARABONBA_PTR_GET(traceData_, OnsTraceGetResultResponseBody::TraceData) };
    inline OnsTraceGetResultResponseBody& setTraceData(const OnsTraceGetResultResponseBody::TraceData & traceData) { DARABONBA_PTR_SET_VALUE(traceData_, traceData) };
    inline OnsTraceGetResultResponseBody& setTraceData(OnsTraceGetResultResponseBody::TraceData && traceData) { DARABONBA_PTR_SET_RVALUE(traceData_, traceData) };


  protected:
    // The ID of the request. This parameter is a common parameter. Each request has a unique ID. You can use this ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The details of the message trace.
    shared_ptr<OnsTraceGetResultResponseBody::TraceData> traceData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ons20190214
#endif
