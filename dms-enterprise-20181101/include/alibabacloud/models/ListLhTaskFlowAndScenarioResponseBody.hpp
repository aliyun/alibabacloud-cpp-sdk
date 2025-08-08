// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLHTASKFLOWANDSCENARIORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLHTASKFLOWANDSCENARIORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListLhTaskFlowAndScenarioResponseBodyRawDAGList.hpp>
#include <alibabacloud/models/ListLhTaskFlowAndScenarioResponseBodyScenarioDAGList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListLhTaskFlowAndScenarioResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLhTaskFlowAndScenarioResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RawDAGList, rawDAGList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScenarioDAGList, scenarioDAGList_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListLhTaskFlowAndScenarioResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RawDAGList, rawDAGList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScenarioDAGList, scenarioDAGList_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListLhTaskFlowAndScenarioResponseBody() = default ;
    ListLhTaskFlowAndScenarioResponseBody(const ListLhTaskFlowAndScenarioResponseBody &) = default ;
    ListLhTaskFlowAndScenarioResponseBody(ListLhTaskFlowAndScenarioResponseBody &&) = default ;
    ListLhTaskFlowAndScenarioResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLhTaskFlowAndScenarioResponseBody() = default ;
    ListLhTaskFlowAndScenarioResponseBody& operator=(const ListLhTaskFlowAndScenarioResponseBody &) = default ;
    ListLhTaskFlowAndScenarioResponseBody& operator=(ListLhTaskFlowAndScenarioResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorCode_ != nullptr
        && this->errorMessage_ != nullptr && this->rawDAGList_ != nullptr && this->requestId_ != nullptr && this->scenarioDAGList_ != nullptr && this->success_ != nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListLhTaskFlowAndScenarioResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListLhTaskFlowAndScenarioResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // rawDAGList Field Functions 
    bool hasRawDAGList() const { return this->rawDAGList_ != nullptr;};
    void deleteRawDAGList() { this->rawDAGList_ = nullptr;};
    inline const ListLhTaskFlowAndScenarioResponseBodyRawDAGList & rawDAGList() const { DARABONBA_PTR_GET_CONST(rawDAGList_, ListLhTaskFlowAndScenarioResponseBodyRawDAGList) };
    inline ListLhTaskFlowAndScenarioResponseBodyRawDAGList rawDAGList() { DARABONBA_PTR_GET(rawDAGList_, ListLhTaskFlowAndScenarioResponseBodyRawDAGList) };
    inline ListLhTaskFlowAndScenarioResponseBody& setRawDAGList(const ListLhTaskFlowAndScenarioResponseBodyRawDAGList & rawDAGList) { DARABONBA_PTR_SET_VALUE(rawDAGList_, rawDAGList) };
    inline ListLhTaskFlowAndScenarioResponseBody& setRawDAGList(ListLhTaskFlowAndScenarioResponseBodyRawDAGList && rawDAGList) { DARABONBA_PTR_SET_RVALUE(rawDAGList_, rawDAGList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLhTaskFlowAndScenarioResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scenarioDAGList Field Functions 
    bool hasScenarioDAGList() const { return this->scenarioDAGList_ != nullptr;};
    void deleteScenarioDAGList() { this->scenarioDAGList_ = nullptr;};
    inline const ListLhTaskFlowAndScenarioResponseBodyScenarioDAGList & scenarioDAGList() const { DARABONBA_PTR_GET_CONST(scenarioDAGList_, ListLhTaskFlowAndScenarioResponseBodyScenarioDAGList) };
    inline ListLhTaskFlowAndScenarioResponseBodyScenarioDAGList scenarioDAGList() { DARABONBA_PTR_GET(scenarioDAGList_, ListLhTaskFlowAndScenarioResponseBodyScenarioDAGList) };
    inline ListLhTaskFlowAndScenarioResponseBody& setScenarioDAGList(const ListLhTaskFlowAndScenarioResponseBodyScenarioDAGList & scenarioDAGList) { DARABONBA_PTR_SET_VALUE(scenarioDAGList_, scenarioDAGList) };
    inline ListLhTaskFlowAndScenarioResponseBody& setScenarioDAGList(ListLhTaskFlowAndScenarioResponseBodyScenarioDAGList && scenarioDAGList) { DARABONBA_PTR_SET_RVALUE(scenarioDAGList_, scenarioDAGList) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListLhTaskFlowAndScenarioResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned if the request fails.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned if the request fails.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The task flows in the default business scenario.
    std::shared_ptr<ListLhTaskFlowAndScenarioResponseBodyRawDAGList> rawDAGList_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The task flows in other business scenarios.
    std::shared_ptr<ListLhTaskFlowAndScenarioResponseBodyScenarioDAGList> scenarioDAGList_ = nullptr;
    // Indicates whether the request is successful. Valid values:
    // 
    // - **true**: The request is successful.
    // - **false**: The request fails.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
