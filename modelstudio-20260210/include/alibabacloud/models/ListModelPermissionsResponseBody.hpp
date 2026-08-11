// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMODELPERMISSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMODELPERMISSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ModelStudio20260210
{
namespace Models
{
  class ListModelPermissionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListModelPermissionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(list, list_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListModelPermissionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(list, list_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListModelPermissionsResponseBody() = default ;
    ListModelPermissionsResponseBody(const ListModelPermissionsResponseBody &) = default ;
    ListModelPermissionsResponseBody(ListModelPermissionsResponseBody &&) = default ;
    ListModelPermissionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListModelPermissionsResponseBody() = default ;
    ListModelPermissionsResponseBody& operator=(const ListModelPermissionsResponseBody &) = default ;
    ListModelPermissionsResponseBody& operator=(ListModelPermissionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class List : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const List& obj) { 
        DARABONBA_PTR_TO_JSON(model, model_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(permissions, permissions_);
      };
      friend void from_json(const Darabonba::Json& j, List& obj) { 
        DARABONBA_PTR_FROM_JSON(model, model_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(permissions, permissions_);
      };
      List() = default ;
      List(const List &) = default ;
      List(List &&) = default ;
      List(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~List() = default ;
      List& operator=(const List &) = default ;
      List& operator=(List &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Permissions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Permissions& obj) { 
          DARABONBA_PTR_TO_JSON(deploy, deploy_);
          DARABONBA_PTR_TO_JSON(fineTune, fineTune_);
          DARABONBA_PTR_TO_JSON(inference, inference_);
        };
        friend void from_json(const Darabonba::Json& j, Permissions& obj) { 
          DARABONBA_PTR_FROM_JSON(deploy, deploy_);
          DARABONBA_PTR_FROM_JSON(fineTune, fineTune_);
          DARABONBA_PTR_FROM_JSON(inference, inference_);
        };
        Permissions() = default ;
        Permissions(const Permissions &) = default ;
        Permissions(Permissions &&) = default ;
        Permissions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Permissions() = default ;
        Permissions& operator=(const Permissions &) = default ;
        Permissions& operator=(Permissions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->deploy_ == nullptr
        && this->fineTune_ == nullptr && this->inference_ == nullptr; };
        // deploy Field Functions 
        bool hasDeploy() const { return this->deploy_ != nullptr;};
        void deleteDeploy() { this->deploy_ = nullptr;};
        inline bool getDeploy() const { DARABONBA_PTR_GET_DEFAULT(deploy_, false) };
        inline Permissions& setDeploy(bool deploy) { DARABONBA_PTR_SET_VALUE(deploy_, deploy) };


        // fineTune Field Functions 
        bool hasFineTune() const { return this->fineTune_ != nullptr;};
        void deleteFineTune() { this->fineTune_ = nullptr;};
        inline bool getFineTune() const { DARABONBA_PTR_GET_DEFAULT(fineTune_, false) };
        inline Permissions& setFineTune(bool fineTune) { DARABONBA_PTR_SET_VALUE(fineTune_, fineTune) };


        // inference Field Functions 
        bool hasInference() const { return this->inference_ != nullptr;};
        void deleteInference() { this->inference_ = nullptr;};
        inline bool getInference() const { DARABONBA_PTR_GET_DEFAULT(inference_, false) };
        inline Permissions& setInference(bool inference) { DARABONBA_PTR_SET_VALUE(inference_, inference) };


      protected:
        // The model deployment authorization. A value of true indicates that the model has been granted authorization. A value of false indicates that the model has not been granted authorization.
        shared_ptr<bool> deploy_ {};
        // The model training authorization. A value of true indicates that the model has been granted training authorization. A value of false indicates that the model has not been granted authorization.
        shared_ptr<bool> fineTune_ {};
        // Indicates whether the model has inference permission. A value of true indicates that the model is authorized. A value of false indicates that the model is not authorized.
        shared_ptr<bool> inference_ {};
      };

      virtual bool empty() const override { return this->model_ == nullptr
        && this->name_ == nullptr && this->permissions_ == nullptr; };
      // model Field Functions 
      bool hasModel() const { return this->model_ != nullptr;};
      void deleteModel() { this->model_ = nullptr;};
      inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
      inline List& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline List& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // permissions Field Functions 
      bool hasPermissions() const { return this->permissions_ != nullptr;};
      void deletePermissions() { this->permissions_ = nullptr;};
      inline const List::Permissions & getPermissions() const { DARABONBA_PTR_GET_CONST(permissions_, List::Permissions) };
      inline List::Permissions getPermissions() { DARABONBA_PTR_GET(permissions_, List::Permissions) };
      inline List& setPermissions(const List::Permissions & permissions) { DARABONBA_PTR_SET_VALUE(permissions_, permissions) };
      inline List& setPermissions(List::Permissions && permissions) { DARABONBA_PTR_SET_RVALUE(permissions_, permissions) };


    protected:
      // The model.
      shared_ptr<string> model_ {};
      // The model name.
      shared_ptr<string> name_ {};
      // The authorization status.
      shared_ptr<List::Permissions> permissions_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->errorMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->list_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListModelPermissionsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListModelPermissionsResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListModelPermissionsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<ListModelPermissionsResponseBody::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<ListModelPermissionsResponseBody::List>) };
    inline vector<ListModelPermissionsResponseBody::List> getList() { DARABONBA_PTR_GET(list_, vector<ListModelPermissionsResponseBody::List>) };
    inline ListModelPermissionsResponseBody& setList(const vector<ListModelPermissionsResponseBody::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline ListModelPermissionsResponseBody& setList(vector<ListModelPermissionsResponseBody::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListModelPermissionsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListModelPermissionsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListModelPermissionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListModelPermissionsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListModelPermissionsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The error code. This value is empty when the call is successful.
    shared_ptr<string> code_ {};
    // The error message.
    shared_ptr<string> errorMessage_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The list of workspace permissions.
    shared_ptr<vector<ListModelPermissionsResponseBody::List>> list_ {};
    // The maximum number of entries returned per request.
    shared_ptr<int32_t> maxResults_ {};
    // The token for the next request.
    shared_ptr<string> nextToken_ {};
    // The unique request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the API call is successful.
    shared_ptr<bool> success_ {};
    // The total number of entries.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ModelStudio20260210
#endif
