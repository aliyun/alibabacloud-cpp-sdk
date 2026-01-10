// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCENARIOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSCENARIOSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class ScenarioList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ScenarioList& obj) { 
        DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(ScenarioName, scenarioName_);
      };
      friend void from_json(const Darabonba::Json& j, ScenarioList& obj) { 
        DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(ScenarioName, scenarioName_);
      };
      ScenarioList() = default ;
      ScenarioList(const ScenarioList &) = default ;
      ScenarioList(ScenarioList &&) = default ;
      ScenarioList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ScenarioList() = default ;
      ScenarioList& operator=(const ScenarioList &) = default ;
      ScenarioList& operator=(ScenarioList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->creatorId_ == nullptr
        && this->description_ == nullptr && this->id_ == nullptr && this->scenarioName_ == nullptr; };
      // creatorId Field Functions 
      bool hasCreatorId() const { return this->creatorId_ != nullptr;};
      void deleteCreatorId() { this->creatorId_ = nullptr;};
      inline string getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
      inline ScenarioList& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ScenarioList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline ScenarioList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // scenarioName Field Functions 
      bool hasScenarioName() const { return this->scenarioName_ != nullptr;};
      void deleteScenarioName() { this->scenarioName_ = nullptr;};
      inline string getScenarioName() const { DARABONBA_PTR_GET_DEFAULT(scenarioName_, "") };
      inline ScenarioList& setScenarioName(string scenarioName) { DARABONBA_PTR_SET_VALUE(scenarioName_, scenarioName) };


    protected:
      // The ID of the user who created the business scenario.
      shared_ptr<string> creatorId_ {};
      // The description of the business scenario.
      shared_ptr<string> description_ {};
      // The ID of the business scenario.
      shared_ptr<int64_t> id_ {};
      // The name of the business scenario.
      shared_ptr<string> scenarioName_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->scenarioList_ == nullptr && this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListScenariosResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListScenariosResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListScenariosResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scenarioList Field Functions 
    bool hasScenarioList() const { return this->scenarioList_ != nullptr;};
    void deleteScenarioList() { this->scenarioList_ = nullptr;};
    inline const vector<ListScenariosResponseBody::ScenarioList> & getScenarioList() const { DARABONBA_PTR_GET_CONST(scenarioList_, vector<ListScenariosResponseBody::ScenarioList>) };
    inline vector<ListScenariosResponseBody::ScenarioList> getScenarioList() { DARABONBA_PTR_GET(scenarioList_, vector<ListScenariosResponseBody::ScenarioList>) };
    inline ListScenariosResponseBody& setScenarioList(const vector<ListScenariosResponseBody::ScenarioList> & scenarioList) { DARABONBA_PTR_SET_VALUE(scenarioList_, scenarioList) };
    inline ListScenariosResponseBody& setScenarioList(vector<ListScenariosResponseBody::ScenarioList> && scenarioList) { DARABONBA_PTR_SET_RVALUE(scenarioList_, scenarioList) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListScenariosResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the request failed.
    shared_ptr<string> errorMessage_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The details of the returned business scenarios.
    shared_ptr<vector<ListScenariosResponseBody::ScenarioList>> scenarioList_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
