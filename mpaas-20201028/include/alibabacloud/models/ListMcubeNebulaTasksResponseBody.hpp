// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMCUBENEBULATASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMCUBENEBULATASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListMcubeNebulaTasksResponseBodyListMcubeNebulaTaskResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class ListMcubeNebulaTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMcubeNebulaTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ListMcubeNebulaTaskResult, listMcubeNebulaTaskResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, ListMcubeNebulaTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ListMcubeNebulaTaskResult, listMcubeNebulaTaskResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    ListMcubeNebulaTasksResponseBody() = default ;
    ListMcubeNebulaTasksResponseBody(const ListMcubeNebulaTasksResponseBody &) = default ;
    ListMcubeNebulaTasksResponseBody(ListMcubeNebulaTasksResponseBody &&) = default ;
    ListMcubeNebulaTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMcubeNebulaTasksResponseBody() = default ;
    ListMcubeNebulaTasksResponseBody& operator=(const ListMcubeNebulaTasksResponseBody &) = default ;
    ListMcubeNebulaTasksResponseBody& operator=(ListMcubeNebulaTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->listMcubeNebulaTaskResult_ != nullptr
        && this->requestId_ != nullptr && this->resultCode_ != nullptr && this->resultMessage_ != nullptr; };
    // listMcubeNebulaTaskResult Field Functions 
    bool hasListMcubeNebulaTaskResult() const { return this->listMcubeNebulaTaskResult_ != nullptr;};
    void deleteListMcubeNebulaTaskResult() { this->listMcubeNebulaTaskResult_ = nullptr;};
    inline const ListMcubeNebulaTasksResponseBodyListMcubeNebulaTaskResult & listMcubeNebulaTaskResult() const { DARABONBA_PTR_GET_CONST(listMcubeNebulaTaskResult_, ListMcubeNebulaTasksResponseBodyListMcubeNebulaTaskResult) };
    inline ListMcubeNebulaTasksResponseBodyListMcubeNebulaTaskResult listMcubeNebulaTaskResult() { DARABONBA_PTR_GET(listMcubeNebulaTaskResult_, ListMcubeNebulaTasksResponseBodyListMcubeNebulaTaskResult) };
    inline ListMcubeNebulaTasksResponseBody& setListMcubeNebulaTaskResult(const ListMcubeNebulaTasksResponseBodyListMcubeNebulaTaskResult & listMcubeNebulaTaskResult) { DARABONBA_PTR_SET_VALUE(listMcubeNebulaTaskResult_, listMcubeNebulaTaskResult) };
    inline ListMcubeNebulaTasksResponseBody& setListMcubeNebulaTaskResult(ListMcubeNebulaTasksResponseBodyListMcubeNebulaTaskResult && listMcubeNebulaTaskResult) { DARABONBA_PTR_SET_RVALUE(listMcubeNebulaTaskResult_, listMcubeNebulaTaskResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMcubeNebulaTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string resultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline ListMcubeNebulaTasksResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string resultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline ListMcubeNebulaTasksResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    std::shared_ptr<ListMcubeNebulaTasksResponseBodyListMcubeNebulaTaskResult> listMcubeNebulaTaskResult_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resultCode_ = nullptr;
    std::shared_ptr<string> resultMessage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
