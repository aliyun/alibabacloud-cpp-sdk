// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMCUBEMINIAPPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMCUBEMINIAPPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListMcubeMiniAppsResponseBodyListMiniResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class ListMcubeMiniAppsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMcubeMiniAppsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ListMiniResult, listMiniResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, ListMcubeMiniAppsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ListMiniResult, listMiniResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    ListMcubeMiniAppsResponseBody() = default ;
    ListMcubeMiniAppsResponseBody(const ListMcubeMiniAppsResponseBody &) = default ;
    ListMcubeMiniAppsResponseBody(ListMcubeMiniAppsResponseBody &&) = default ;
    ListMcubeMiniAppsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMcubeMiniAppsResponseBody() = default ;
    ListMcubeMiniAppsResponseBody& operator=(const ListMcubeMiniAppsResponseBody &) = default ;
    ListMcubeMiniAppsResponseBody& operator=(ListMcubeMiniAppsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->listMiniResult_ != nullptr
        && this->requestId_ != nullptr && this->resultCode_ != nullptr && this->resultMessage_ != nullptr; };
    // listMiniResult Field Functions 
    bool hasListMiniResult() const { return this->listMiniResult_ != nullptr;};
    void deleteListMiniResult() { this->listMiniResult_ = nullptr;};
    inline const ListMcubeMiniAppsResponseBodyListMiniResult & listMiniResult() const { DARABONBA_PTR_GET_CONST(listMiniResult_, ListMcubeMiniAppsResponseBodyListMiniResult) };
    inline ListMcubeMiniAppsResponseBodyListMiniResult listMiniResult() { DARABONBA_PTR_GET(listMiniResult_, ListMcubeMiniAppsResponseBodyListMiniResult) };
    inline ListMcubeMiniAppsResponseBody& setListMiniResult(const ListMcubeMiniAppsResponseBodyListMiniResult & listMiniResult) { DARABONBA_PTR_SET_VALUE(listMiniResult_, listMiniResult) };
    inline ListMcubeMiniAppsResponseBody& setListMiniResult(ListMcubeMiniAppsResponseBodyListMiniResult && listMiniResult) { DARABONBA_PTR_SET_RVALUE(listMiniResult_, listMiniResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMcubeMiniAppsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string resultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline ListMcubeMiniAppsResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string resultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline ListMcubeMiniAppsResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    std::shared_ptr<ListMcubeMiniAppsResponseBodyListMiniResult> listMiniResult_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resultCode_ = nullptr;
    std::shared_ptr<string> resultMessage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
