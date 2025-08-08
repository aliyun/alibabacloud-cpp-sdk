// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCENARIOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSCENARIOSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListScenariosResponseBodyScenarioList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListScenariosResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListScenariosResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScenarioList, scenarioList_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListScenariosResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScenarioList, scenarioList_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListScenariosResponseBody() = default ;
    ListScenariosResponseBody(const ListScenariosResponseBody &) = default ;
    ListScenariosResponseBody(ListScenariosResponseBody &&) = default ;
    ListScenariosResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListScenariosResponseBody() = default ;
    ListScenariosResponseBody& operator=(const ListScenariosResponseBody &) = default ;
    ListScenariosResponseBody& operator=(ListScenariosResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorCode_ != nullptr
        && this->errorMessage_ != nullptr && this->requestId_ != nullptr && this->scenarioList_ != nullptr && this->success_ != nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListScenariosResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListScenariosResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListScenariosResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scenarioList Field Functions 
    bool hasScenarioList() const { return this->scenarioList_ != nullptr;};
    void deleteScenarioList() { this->scenarioList_ = nullptr;};
    inline const vector<ListScenariosResponseBodyScenarioList> & scenarioList() const { DARABONBA_PTR_GET_CONST(scenarioList_, vector<ListScenariosResponseBodyScenarioList>) };
    inline vector<ListScenariosResponseBodyScenarioList> scenarioList() { DARABONBA_PTR_GET(scenarioList_, vector<ListScenariosResponseBodyScenarioList>) };
    inline ListScenariosResponseBody& setScenarioList(const vector<ListScenariosResponseBodyScenarioList> & scenarioList) { DARABONBA_PTR_SET_VALUE(scenarioList_, scenarioList) };
    inline ListScenariosResponseBody& setScenarioList(vector<ListScenariosResponseBodyScenarioList> && scenarioList) { DARABONBA_PTR_SET_RVALUE(scenarioList_, scenarioList) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListScenariosResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned if the request failed.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned if the request failed.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The details of the returned business scenarios.
    std::shared_ptr<vector<ListScenariosResponseBodyScenarioList>> scenarioList_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
