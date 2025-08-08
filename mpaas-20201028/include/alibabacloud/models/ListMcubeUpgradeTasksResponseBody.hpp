// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMCUBEUPGRADETASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMCUBEUPGRADETASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListMcubeUpgradeTasksResponseBodyListTaskResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class ListMcubeUpgradeTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMcubeUpgradeTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ListTaskResult, listTaskResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, ListMcubeUpgradeTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ListTaskResult, listTaskResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    ListMcubeUpgradeTasksResponseBody() = default ;
    ListMcubeUpgradeTasksResponseBody(const ListMcubeUpgradeTasksResponseBody &) = default ;
    ListMcubeUpgradeTasksResponseBody(ListMcubeUpgradeTasksResponseBody &&) = default ;
    ListMcubeUpgradeTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMcubeUpgradeTasksResponseBody() = default ;
    ListMcubeUpgradeTasksResponseBody& operator=(const ListMcubeUpgradeTasksResponseBody &) = default ;
    ListMcubeUpgradeTasksResponseBody& operator=(ListMcubeUpgradeTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->listTaskResult_ != nullptr
        && this->requestId_ != nullptr && this->resultCode_ != nullptr && this->resultMessage_ != nullptr; };
    // listTaskResult Field Functions 
    bool hasListTaskResult() const { return this->listTaskResult_ != nullptr;};
    void deleteListTaskResult() { this->listTaskResult_ = nullptr;};
    inline const ListMcubeUpgradeTasksResponseBodyListTaskResult & listTaskResult() const { DARABONBA_PTR_GET_CONST(listTaskResult_, ListMcubeUpgradeTasksResponseBodyListTaskResult) };
    inline ListMcubeUpgradeTasksResponseBodyListTaskResult listTaskResult() { DARABONBA_PTR_GET(listTaskResult_, ListMcubeUpgradeTasksResponseBodyListTaskResult) };
    inline ListMcubeUpgradeTasksResponseBody& setListTaskResult(const ListMcubeUpgradeTasksResponseBodyListTaskResult & listTaskResult) { DARABONBA_PTR_SET_VALUE(listTaskResult_, listTaskResult) };
    inline ListMcubeUpgradeTasksResponseBody& setListTaskResult(ListMcubeUpgradeTasksResponseBodyListTaskResult && listTaskResult) { DARABONBA_PTR_SET_RVALUE(listTaskResult_, listTaskResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMcubeUpgradeTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string resultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline ListMcubeUpgradeTasksResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string resultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline ListMcubeUpgradeTasksResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    std::shared_ptr<ListMcubeUpgradeTasksResponseBodyListTaskResult> listTaskResult_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resultCode_ = nullptr;
    std::shared_ptr<string> resultMessage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
