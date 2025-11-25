// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTONGYICONVERSATIONLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTONGYICONVERSATIONLOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTongyiConversationLogsResponseBodySessionFlowDebugInfo.hpp>
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
    virtual bool empty() const override { return this->costTime_ == nullptr
        && return this->datas_ == nullptr && return this->requestId_ == nullptr && return this->sessionFlowDebugInfo_ == nullptr; };
    // costTime Field Functions 
    bool hasCostTime() const { return this->costTime_ != nullptr;};
    void deleteCostTime() { this->costTime_ = nullptr;};
    inline string costTime() const { DARABONBA_PTR_GET_DEFAULT(costTime_, "") };
    inline ListTongyiConversationLogsResponseBody& setCostTime(string costTime) { DARABONBA_PTR_SET_VALUE(costTime_, costTime) };


    // datas Field Functions 
    bool hasDatas() const { return this->datas_ != nullptr;};
    void deleteDatas() { this->datas_ = nullptr;};
    inline const vector<Darabonba::Json> & datas() const { DARABONBA_PTR_GET_CONST(datas_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> datas() { DARABONBA_PTR_GET(datas_, vector<Darabonba::Json>) };
    inline ListTongyiConversationLogsResponseBody& setDatas(const vector<Darabonba::Json> & datas) { DARABONBA_PTR_SET_VALUE(datas_, datas) };
    inline ListTongyiConversationLogsResponseBody& setDatas(vector<Darabonba::Json> && datas) { DARABONBA_PTR_SET_RVALUE(datas_, datas) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTongyiConversationLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sessionFlowDebugInfo Field Functions 
    bool hasSessionFlowDebugInfo() const { return this->sessionFlowDebugInfo_ != nullptr;};
    void deleteSessionFlowDebugInfo() { this->sessionFlowDebugInfo_ = nullptr;};
    inline const ListTongyiConversationLogsResponseBodySessionFlowDebugInfo & sessionFlowDebugInfo() const { DARABONBA_PTR_GET_CONST(sessionFlowDebugInfo_, ListTongyiConversationLogsResponseBodySessionFlowDebugInfo) };
    inline ListTongyiConversationLogsResponseBodySessionFlowDebugInfo sessionFlowDebugInfo() { DARABONBA_PTR_GET(sessionFlowDebugInfo_, ListTongyiConversationLogsResponseBodySessionFlowDebugInfo) };
    inline ListTongyiConversationLogsResponseBody& setSessionFlowDebugInfo(const ListTongyiConversationLogsResponseBodySessionFlowDebugInfo & sessionFlowDebugInfo) { DARABONBA_PTR_SET_VALUE(sessionFlowDebugInfo_, sessionFlowDebugInfo) };
    inline ListTongyiConversationLogsResponseBody& setSessionFlowDebugInfo(ListTongyiConversationLogsResponseBodySessionFlowDebugInfo && sessionFlowDebugInfo) { DARABONBA_PTR_SET_RVALUE(sessionFlowDebugInfo_, sessionFlowDebugInfo) };


  protected:
    std::shared_ptr<string> costTime_ = nullptr;
    std::shared_ptr<vector<Darabonba::Json>> datas_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<ListTongyiConversationLogsResponseBodySessionFlowDebugInfo> sessionFlowDebugInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
