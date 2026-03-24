// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTONGYICONVERSATIONLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTONGYICONVERSATIONLOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class ListTongyiConversationLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTongyiConversationLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CostTime, costTime_);
      DARABONBA_PTR_TO_JSON(Datas, datas_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SessionFlowDebugInfo, sessionFlowDebugInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ListTongyiConversationLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CostTime, costTime_);
      DARABONBA_PTR_FROM_JSON(Datas, datas_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SessionFlowDebugInfo, sessionFlowDebugInfo_);
    };
    ListTongyiConversationLogsResponseBody() = default ;
    ListTongyiConversationLogsResponseBody(const ListTongyiConversationLogsResponseBody &) = default ;
    ListTongyiConversationLogsResponseBody(ListTongyiConversationLogsResponseBody &&) = default ;
    ListTongyiConversationLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTongyiConversationLogsResponseBody() = default ;
    ListTongyiConversationLogsResponseBody& operator=(const ListTongyiConversationLogsResponseBody &) = default ;
    ListTongyiConversationLogsResponseBody& operator=(ListTongyiConversationLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SessionFlowDebugInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SessionFlowDebugInfo& obj) { 
        DARABONBA_ANY_TO_JSON(ApiParams, apiParams_);
        DARABONBA_ANY_TO_JSON(SlotParams, slotParams_);
      };
      friend void from_json(const Darabonba::Json& j, SessionFlowDebugInfo& obj) { 
        DARABONBA_ANY_FROM_JSON(ApiParams, apiParams_);
        DARABONBA_ANY_FROM_JSON(SlotParams, slotParams_);
      };
      SessionFlowDebugInfo() = default ;
      SessionFlowDebugInfo(const SessionFlowDebugInfo &) = default ;
      SessionFlowDebugInfo(SessionFlowDebugInfo &&) = default ;
      SessionFlowDebugInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SessionFlowDebugInfo() = default ;
      SessionFlowDebugInfo& operator=(const SessionFlowDebugInfo &) = default ;
      SessionFlowDebugInfo& operator=(SessionFlowDebugInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->apiParams_ == nullptr
        && this->slotParams_ == nullptr; };
      // apiParams Field Functions 
      bool hasApiParams() const { return this->apiParams_ != nullptr;};
      void deleteApiParams() { this->apiParams_ = nullptr;};
      inline       const Darabonba::Json & getApiParams() const { DARABONBA_GET(apiParams_) };
      Darabonba::Json & getApiParams() { DARABONBA_GET(apiParams_) };
      inline SessionFlowDebugInfo& setApiParams(const Darabonba::Json & apiParams) { DARABONBA_SET_VALUE(apiParams_, apiParams) };
      inline SessionFlowDebugInfo& setApiParams(Darabonba::Json && apiParams) { DARABONBA_SET_RVALUE(apiParams_, apiParams) };


      // slotParams Field Functions 
      bool hasSlotParams() const { return this->slotParams_ != nullptr;};
      void deleteSlotParams() { this->slotParams_ = nullptr;};
      inline       const Darabonba::Json & getSlotParams() const { DARABONBA_GET(slotParams_) };
      Darabonba::Json & getSlotParams() { DARABONBA_GET(slotParams_) };
      inline SessionFlowDebugInfo& setSlotParams(const Darabonba::Json & slotParams) { DARABONBA_SET_VALUE(slotParams_, slotParams) };
      inline SessionFlowDebugInfo& setSlotParams(Darabonba::Json && slotParams) { DARABONBA_SET_RVALUE(slotParams_, slotParams) };


    protected:
      Darabonba::Json apiParams_ {};
      Darabonba::Json slotParams_ {};
    };

    virtual bool empty() const override { return this->costTime_ == nullptr
        && this->datas_ == nullptr && this->requestId_ == nullptr && this->sessionFlowDebugInfo_ == nullptr; };
    // costTime Field Functions 
    bool hasCostTime() const { return this->costTime_ != nullptr;};
    void deleteCostTime() { this->costTime_ = nullptr;};
    inline string getCostTime() const { DARABONBA_PTR_GET_DEFAULT(costTime_, "") };
    inline ListTongyiConversationLogsResponseBody& setCostTime(string costTime) { DARABONBA_PTR_SET_VALUE(costTime_, costTime) };


    // datas Field Functions 
    bool hasDatas() const { return this->datas_ != nullptr;};
    void deleteDatas() { this->datas_ = nullptr;};
    inline const vector<Darabonba::Json> & getDatas() const { DARABONBA_PTR_GET_CONST(datas_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getDatas() { DARABONBA_PTR_GET(datas_, vector<Darabonba::Json>) };
    inline ListTongyiConversationLogsResponseBody& setDatas(const vector<Darabonba::Json> & datas) { DARABONBA_PTR_SET_VALUE(datas_, datas) };
    inline ListTongyiConversationLogsResponseBody& setDatas(vector<Darabonba::Json> && datas) { DARABONBA_PTR_SET_RVALUE(datas_, datas) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTongyiConversationLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sessionFlowDebugInfo Field Functions 
    bool hasSessionFlowDebugInfo() const { return this->sessionFlowDebugInfo_ != nullptr;};
    void deleteSessionFlowDebugInfo() { this->sessionFlowDebugInfo_ = nullptr;};
    inline const ListTongyiConversationLogsResponseBody::SessionFlowDebugInfo & getSessionFlowDebugInfo() const { DARABONBA_PTR_GET_CONST(sessionFlowDebugInfo_, ListTongyiConversationLogsResponseBody::SessionFlowDebugInfo) };
    inline ListTongyiConversationLogsResponseBody::SessionFlowDebugInfo getSessionFlowDebugInfo() { DARABONBA_PTR_GET(sessionFlowDebugInfo_, ListTongyiConversationLogsResponseBody::SessionFlowDebugInfo) };
    inline ListTongyiConversationLogsResponseBody& setSessionFlowDebugInfo(const ListTongyiConversationLogsResponseBody::SessionFlowDebugInfo & sessionFlowDebugInfo) { DARABONBA_PTR_SET_VALUE(sessionFlowDebugInfo_, sessionFlowDebugInfo) };
    inline ListTongyiConversationLogsResponseBody& setSessionFlowDebugInfo(ListTongyiConversationLogsResponseBody::SessionFlowDebugInfo && sessionFlowDebugInfo) { DARABONBA_PTR_SET_RVALUE(sessionFlowDebugInfo_, sessionFlowDebugInfo) };


  protected:
    shared_ptr<string> costTime_ {};
    shared_ptr<vector<Darabonba::Json>> datas_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<ListTongyiConversationLogsResponseBody::SessionFlowDebugInfo> sessionFlowDebugInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
