// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVYCOMPUTESESSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVYCOMPUTESESSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class ListLivyComputeSessionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLivyComputeSessionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(sessions, sessions_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListLivyComputeSessionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(sessions, sessions_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListLivyComputeSessionsResponseBody() = default ;
    ListLivyComputeSessionsResponseBody(const ListLivyComputeSessionsResponseBody &) = default ;
    ListLivyComputeSessionsResponseBody(ListLivyComputeSessionsResponseBody &&) = default ;
    ListLivyComputeSessionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLivyComputeSessionsResponseBody() = default ;
    ListLivyComputeSessionsResponseBody& operator=(const ListLivyComputeSessionsResponseBody &) = default ;
    ListLivyComputeSessionsResponseBody& operator=(ListLivyComputeSessionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Sessions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Sessions& obj) { 
        DARABONBA_PTR_TO_JSON(computeId, computeId_);
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(cuHours, cuHours_);
        DARABONBA_PTR_TO_JSON(endTime, endTime_);
        DARABONBA_PTR_TO_JSON(info, info_);
        DARABONBA_PTR_TO_JSON(mbSeconds, mbSeconds_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(queue, queue_);
        DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
        DARABONBA_PTR_TO_JSON(sparkConf, sparkConf_);
        DARABONBA_PTR_TO_JSON(state, state_);
        DARABONBA_PTR_TO_JSON(vcoreSeconds, vcoreSeconds_);
        DARABONBA_PTR_TO_JSON(webUI, webUI_);
      };
      friend void from_json(const Darabonba::Json& j, Sessions& obj) { 
        DARABONBA_PTR_FROM_JSON(computeId, computeId_);
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(cuHours, cuHours_);
        DARABONBA_PTR_FROM_JSON(endTime, endTime_);
        DARABONBA_PTR_FROM_JSON(info, info_);
        DARABONBA_PTR_FROM_JSON(mbSeconds, mbSeconds_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(queue, queue_);
        DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
        DARABONBA_PTR_FROM_JSON(sparkConf, sparkConf_);
        DARABONBA_PTR_FROM_JSON(state, state_);
        DARABONBA_PTR_FROM_JSON(vcoreSeconds, vcoreSeconds_);
        DARABONBA_PTR_FROM_JSON(webUI, webUI_);
      };
      Sessions() = default ;
      Sessions(const Sessions &) = default ;
      Sessions(Sessions &&) = default ;
      Sessions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Sessions() = default ;
      Sessions& operator=(const Sessions &) = default ;
      Sessions& operator=(Sessions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->computeId_ == nullptr
        && this->createTime_ == nullptr && this->cuHours_ == nullptr && this->endTime_ == nullptr && this->info_ == nullptr && this->mbSeconds_ == nullptr
        && this->name_ == nullptr && this->queue_ == nullptr && this->sessionId_ == nullptr && this->sparkConf_ == nullptr && this->state_ == nullptr
        && this->vcoreSeconds_ == nullptr && this->webUI_ == nullptr; };
      // computeId Field Functions 
      bool hasComputeId() const { return this->computeId_ != nullptr;};
      void deleteComputeId() { this->computeId_ = nullptr;};
      inline string getComputeId() const { DARABONBA_PTR_GET_DEFAULT(computeId_, "") };
      inline Sessions& setComputeId(string computeId) { DARABONBA_PTR_SET_VALUE(computeId_, computeId) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Sessions& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // cuHours Field Functions 
      bool hasCuHours() const { return this->cuHours_ != nullptr;};
      void deleteCuHours() { this->cuHours_ = nullptr;};
      inline double getCuHours() const { DARABONBA_PTR_GET_DEFAULT(cuHours_, 0.0) };
      inline Sessions& setCuHours(double cuHours) { DARABONBA_PTR_SET_VALUE(cuHours_, cuHours) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline Sessions& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // info Field Functions 
      bool hasInfo() const { return this->info_ != nullptr;};
      void deleteInfo() { this->info_ = nullptr;};
      inline string getInfo() const { DARABONBA_PTR_GET_DEFAULT(info_, "") };
      inline Sessions& setInfo(string info) { DARABONBA_PTR_SET_VALUE(info_, info) };


      // mbSeconds Field Functions 
      bool hasMbSeconds() const { return this->mbSeconds_ != nullptr;};
      void deleteMbSeconds() { this->mbSeconds_ = nullptr;};
      inline int64_t getMbSeconds() const { DARABONBA_PTR_GET_DEFAULT(mbSeconds_, 0L) };
      inline Sessions& setMbSeconds(int64_t mbSeconds) { DARABONBA_PTR_SET_VALUE(mbSeconds_, mbSeconds) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Sessions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // queue Field Functions 
      bool hasQueue() const { return this->queue_ != nullptr;};
      void deleteQueue() { this->queue_ = nullptr;};
      inline string getQueue() const { DARABONBA_PTR_GET_DEFAULT(queue_, "") };
      inline Sessions& setQueue(string queue) { DARABONBA_PTR_SET_VALUE(queue_, queue) };


      // sessionId Field Functions 
      bool hasSessionId() const { return this->sessionId_ != nullptr;};
      void deleteSessionId() { this->sessionId_ = nullptr;};
      inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
      inline Sessions& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


      // sparkConf Field Functions 
      bool hasSparkConf() const { return this->sparkConf_ != nullptr;};
      void deleteSparkConf() { this->sparkConf_ = nullptr;};
      inline string getSparkConf() const { DARABONBA_PTR_GET_DEFAULT(sparkConf_, "") };
      inline Sessions& setSparkConf(string sparkConf) { DARABONBA_PTR_SET_VALUE(sparkConf_, sparkConf) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Sessions& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // vcoreSeconds Field Functions 
      bool hasVcoreSeconds() const { return this->vcoreSeconds_ != nullptr;};
      void deleteVcoreSeconds() { this->vcoreSeconds_ = nullptr;};
      inline int64_t getVcoreSeconds() const { DARABONBA_PTR_GET_DEFAULT(vcoreSeconds_, 0L) };
      inline Sessions& setVcoreSeconds(int64_t vcoreSeconds) { DARABONBA_PTR_SET_VALUE(vcoreSeconds_, vcoreSeconds) };


      // webUI Field Functions 
      bool hasWebUI() const { return this->webUI_ != nullptr;};
      void deleteWebUI() { this->webUI_ = nullptr;};
      inline string getWebUI() const { DARABONBA_PTR_GET_DEFAULT(webUI_, "") };
      inline Sessions& setWebUI(string webUI) { DARABONBA_PTR_SET_VALUE(webUI_, webUI) };


    protected:
      shared_ptr<string> computeId_ {};
      shared_ptr<int64_t> createTime_ {};
      shared_ptr<double> cuHours_ {};
      shared_ptr<int64_t> endTime_ {};
      shared_ptr<string> info_ {};
      shared_ptr<int64_t> mbSeconds_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> queue_ {};
      shared_ptr<string> sessionId_ {};
      shared_ptr<string> sparkConf_ {};
      shared_ptr<string> state_ {};
      shared_ptr<int64_t> vcoreSeconds_ {};
      shared_ptr<string> webUI_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->sessions_ == nullptr && this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLivyComputeSessionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sessions Field Functions 
    bool hasSessions() const { return this->sessions_ != nullptr;};
    void deleteSessions() { this->sessions_ = nullptr;};
    inline const vector<ListLivyComputeSessionsResponseBody::Sessions> & getSessions() const { DARABONBA_PTR_GET_CONST(sessions_, vector<ListLivyComputeSessionsResponseBody::Sessions>) };
    inline vector<ListLivyComputeSessionsResponseBody::Sessions> getSessions() { DARABONBA_PTR_GET(sessions_, vector<ListLivyComputeSessionsResponseBody::Sessions>) };
    inline ListLivyComputeSessionsResponseBody& setSessions(const vector<ListLivyComputeSessionsResponseBody::Sessions> & sessions) { DARABONBA_PTR_SET_VALUE(sessions_, sessions) };
    inline ListLivyComputeSessionsResponseBody& setSessions(vector<ListLivyComputeSessionsResponseBody::Sessions> && sessions) { DARABONBA_PTR_SET_RVALUE(sessions_, sessions) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListLivyComputeSessionsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListLivyComputeSessionsResponseBody::Sessions>> sessions_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
