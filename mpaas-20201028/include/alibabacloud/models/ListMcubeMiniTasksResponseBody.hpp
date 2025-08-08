// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMCUBEMINITASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMCUBEMINITASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListMcubeMiniTasksResponseBodyListMiniTaskResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class ListMcubeMiniTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMcubeMiniTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ListMiniTaskResult, listMiniTaskResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, ListMcubeMiniTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ListMiniTaskResult, listMiniTaskResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    ListMcubeMiniTasksResponseBody() = default ;
    ListMcubeMiniTasksResponseBody(const ListMcubeMiniTasksResponseBody &) = default ;
    ListMcubeMiniTasksResponseBody(ListMcubeMiniTasksResponseBody &&) = default ;
    ListMcubeMiniTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMcubeMiniTasksResponseBody() = default ;
    ListMcubeMiniTasksResponseBody& operator=(const ListMcubeMiniTasksResponseBody &) = default ;
    ListMcubeMiniTasksResponseBody& operator=(ListMcubeMiniTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->listMiniTaskResult_ != nullptr
        && this->requestId_ != nullptr && this->resultCode_ != nullptr && this->resultMessage_ != nullptr; };
    // listMiniTaskResult Field Functions 
    bool hasListMiniTaskResult() const { return this->listMiniTaskResult_ != nullptr;};
    void deleteListMiniTaskResult() { this->listMiniTaskResult_ = nullptr;};
    inline const ListMcubeMiniTasksResponseBodyListMiniTaskResult & listMiniTaskResult() const { DARABONBA_PTR_GET_CONST(listMiniTaskResult_, ListMcubeMiniTasksResponseBodyListMiniTaskResult) };
    inline ListMcubeMiniTasksResponseBodyListMiniTaskResult listMiniTaskResult() { DARABONBA_PTR_GET(listMiniTaskResult_, ListMcubeMiniTasksResponseBodyListMiniTaskResult) };
    inline ListMcubeMiniTasksResponseBody& setListMiniTaskResult(const ListMcubeMiniTasksResponseBodyListMiniTaskResult & listMiniTaskResult) { DARABONBA_PTR_SET_VALUE(listMiniTaskResult_, listMiniTaskResult) };
    inline ListMcubeMiniTasksResponseBody& setListMiniTaskResult(ListMcubeMiniTasksResponseBodyListMiniTaskResult && listMiniTaskResult) { DARABONBA_PTR_SET_RVALUE(listMiniTaskResult_, listMiniTaskResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMcubeMiniTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string resultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline ListMcubeMiniTasksResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string resultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline ListMcubeMiniTasksResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    std::shared_ptr<ListMcubeMiniTasksResponseBodyListMiniTaskResult> listMiniTaskResult_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resultCode_ = nullptr;
    std::shared_ptr<string> resultMessage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
