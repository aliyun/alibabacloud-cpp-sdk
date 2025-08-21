// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTONGYICHATHISTORYSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTONGYICHATHISTORYSRESPONSEBODY_HPP_
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
  class ListTongyiChatHistorysResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTongyiChatHistorysResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CostTime, costTime_);
      DARABONBA_PTR_TO_JSON(Datas, datas_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTongyiChatHistorysResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CostTime, costTime_);
      DARABONBA_PTR_FROM_JSON(Datas, datas_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListTongyiChatHistorysResponseBody() = default ;
    ListTongyiChatHistorysResponseBody(const ListTongyiChatHistorysResponseBody &) = default ;
    ListTongyiChatHistorysResponseBody(ListTongyiChatHistorysResponseBody &&) = default ;
    ListTongyiChatHistorysResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTongyiChatHistorysResponseBody() = default ;
    ListTongyiChatHistorysResponseBody& operator=(const ListTongyiChatHistorysResponseBody &) = default ;
    ListTongyiChatHistorysResponseBody& operator=(ListTongyiChatHistorysResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->costTime_ != nullptr
        && this->datas_ != nullptr && this->requestId_ != nullptr; };
    // costTime Field Functions 
    bool hasCostTime() const { return this->costTime_ != nullptr;};
    void deleteCostTime() { this->costTime_ = nullptr;};
    inline string costTime() const { DARABONBA_PTR_GET_DEFAULT(costTime_, "") };
    inline ListTongyiChatHistorysResponseBody& setCostTime(string costTime) { DARABONBA_PTR_SET_VALUE(costTime_, costTime) };


    // datas Field Functions 
    bool hasDatas() const { return this->datas_ != nullptr;};
    void deleteDatas() { this->datas_ = nullptr;};
    inline const vector<Darabonba::Json> & datas() const { DARABONBA_PTR_GET_CONST(datas_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> datas() { DARABONBA_PTR_GET(datas_, vector<Darabonba::Json>) };
    inline ListTongyiChatHistorysResponseBody& setDatas(const vector<Darabonba::Json> & datas) { DARABONBA_PTR_SET_VALUE(datas_, datas) };
    inline ListTongyiChatHistorysResponseBody& setDatas(vector<Darabonba::Json> && datas) { DARABONBA_PTR_SET_RVALUE(datas_, datas) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTongyiChatHistorysResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> costTime_ = nullptr;
    std::shared_ptr<vector<Darabonba::Json>> datas_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
