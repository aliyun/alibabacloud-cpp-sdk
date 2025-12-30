// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTHORIZEDDATASERVICEAPIDETAILSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTHORIZEDDATASERVICEAPIDETAILSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListAuthorizedDataServiceApiDetailsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuthorizedDataServiceApiDetailsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuthorizedDataServiceApiDetailsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListAuthorizedDataServiceApiDetailsResponseBody() = default ;
    ListAuthorizedDataServiceApiDetailsResponseBody(const ListAuthorizedDataServiceApiDetailsResponseBody &) = default ;
    ListAuthorizedDataServiceApiDetailsResponseBody(ListAuthorizedDataServiceApiDetailsResponseBody &&) = default ;
    ListAuthorizedDataServiceApiDetailsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuthorizedDataServiceApiDetailsResponseBody() = default ;
    ListAuthorizedDataServiceApiDetailsResponseBody& operator=(const ListAuthorizedDataServiceApiDetailsResponseBody &) = default ;
    ListAuthorizedDataServiceApiDetailsResponseBody& operator=(ListAuthorizedDataServiceApiDetailsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Data : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Data& obj) { 
          DARABONBA_PTR_TO_JSON(ApiId, apiId_);
          DARABONBA_PTR_TO_JSON(ApiName, apiName_);
          DARABONBA_PTR_TO_JSON(AppId, appId_);
          DARABONBA_PTR_TO_JSON(AuthType, authType_);
          DARABONBA_PTR_TO_JSON(AuthorizedDevReturnParameters, authorizedDevReturnParameters_);
          DARABONBA_PTR_TO_JSON(AuthorizedProdReturnParameters, authorizedProdReturnParameters_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(DevAuthPeriod, devAuthPeriod_);
          DARABONBA_PTR_TO_JSON(ProdAuthPeriod, prodAuthPeriod_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        };
        friend void from_json(const Darabonba::Json& j, Data& obj) { 
          DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
          DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
          DARABONBA_PTR_FROM_JSON(AppId, appId_);
          DARABONBA_PTR_FROM_JSON(AuthType, authType_);
          DARABONBA_PTR_FROM_JSON(AuthorizedDevReturnParameters, authorizedDevReturnParameters_);
          DARABONBA_PTR_FROM_JSON(AuthorizedProdReturnParameters, authorizedProdReturnParameters_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(DevAuthPeriod, devAuthPeriod_);
          DARABONBA_PTR_FROM_JSON(ProdAuthPeriod, prodAuthPeriod_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        };
        Data() = default ;
        Data(const Data &) = default ;
        Data(Data &&) = default ;
        Data(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Data() = default ;
        Data& operator=(const Data &) = default ;
        Data& operator=(Data &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class AuthorizedProdReturnParameters : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AuthorizedProdReturnParameters& obj) { 
            DARABONBA_PTR_TO_JSON(ExampleValue, exampleValue_);
            DARABONBA_PTR_TO_JSON(IsAuthorized, isAuthorized_);
            DARABONBA_PTR_TO_JSON(ParameterDataType, parameterDataType_);
            DARABONBA_PTR_TO_JSON(ParameterDescription, parameterDescription_);
            DARABONBA_PTR_TO_JSON(ParameterName, parameterName_);
          };
          friend void from_json(const Darabonba::Json& j, AuthorizedProdReturnParameters& obj) { 
            DARABONBA_PTR_FROM_JSON(ExampleValue, exampleValue_);
            DARABONBA_PTR_FROM_JSON(IsAuthorized, isAuthorized_);
            DARABONBA_PTR_FROM_JSON(ParameterDataType, parameterDataType_);
            DARABONBA_PTR_FROM_JSON(ParameterDescription, parameterDescription_);
            DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
          };
          AuthorizedProdReturnParameters() = default ;
          AuthorizedProdReturnParameters(const AuthorizedProdReturnParameters &) = default ;
          AuthorizedProdReturnParameters(AuthorizedProdReturnParameters &&) = default ;
          AuthorizedProdReturnParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AuthorizedProdReturnParameters() = default ;
          AuthorizedProdReturnParameters& operator=(const AuthorizedProdReturnParameters &) = default ;
          AuthorizedProdReturnParameters& operator=(AuthorizedProdReturnParameters &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->exampleValue_ == nullptr
        && this->isAuthorized_ == nullptr && this->parameterDataType_ == nullptr && this->parameterDescription_ == nullptr && this->parameterName_ == nullptr; };
          // exampleValue Field Functions 
          bool hasExampleValue() const { return this->exampleValue_ != nullptr;};
          void deleteExampleValue() { this->exampleValue_ = nullptr;};
          inline string getExampleValue() const { DARABONBA_PTR_GET_DEFAULT(exampleValue_, "") };
          inline AuthorizedProdReturnParameters& setExampleValue(string exampleValue) { DARABONBA_PTR_SET_VALUE(exampleValue_, exampleValue) };


          // isAuthorized Field Functions 
          bool hasIsAuthorized() const { return this->isAuthorized_ != nullptr;};
          void deleteIsAuthorized() { this->isAuthorized_ = nullptr;};
          inline int32_t getIsAuthorized() const { DARABONBA_PTR_GET_DEFAULT(isAuthorized_, 0) };
          inline AuthorizedProdReturnParameters& setIsAuthorized(int32_t isAuthorized) { DARABONBA_PTR_SET_VALUE(isAuthorized_, isAuthorized) };


          // parameterDataType Field Functions 
          bool hasParameterDataType() const { return this->parameterDataType_ != nullptr;};
          void deleteParameterDataType() { this->parameterDataType_ = nullptr;};
          inline int32_t getParameterDataType() const { DARABONBA_PTR_GET_DEFAULT(parameterDataType_, 0) };
          inline AuthorizedProdReturnParameters& setParameterDataType(int32_t parameterDataType) { DARABONBA_PTR_SET_VALUE(parameterDataType_, parameterDataType) };


          // parameterDescription Field Functions 
          bool hasParameterDescription() const { return this->parameterDescription_ != nullptr;};
          void deleteParameterDescription() { this->parameterDescription_ = nullptr;};
          inline string getParameterDescription() const { DARABONBA_PTR_GET_DEFAULT(parameterDescription_, "") };
          inline AuthorizedProdReturnParameters& setParameterDescription(string parameterDescription) { DARABONBA_PTR_SET_VALUE(parameterDescription_, parameterDescription) };


          // parameterName Field Functions 
          bool hasParameterName() const { return this->parameterName_ != nullptr;};
          void deleteParameterName() { this->parameterName_ = nullptr;};
          inline string getParameterName() const { DARABONBA_PTR_GET_DEFAULT(parameterName_, "") };
          inline AuthorizedProdReturnParameters& setParameterName(string parameterName) { DARABONBA_PTR_SET_VALUE(parameterName_, parameterName) };


        protected:
          shared_ptr<string> exampleValue_ {};
          shared_ptr<int32_t> isAuthorized_ {};
          shared_ptr<int32_t> parameterDataType_ {};
          shared_ptr<string> parameterDescription_ {};
          shared_ptr<string> parameterName_ {};
        };

        class AuthorizedDevReturnParameters : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AuthorizedDevReturnParameters& obj) { 
            DARABONBA_PTR_TO_JSON(ExampleValue, exampleValue_);
            DARABONBA_PTR_TO_JSON(IsAuthorized, isAuthorized_);
            DARABONBA_PTR_TO_JSON(ParameterDataType, parameterDataType_);
            DARABONBA_PTR_TO_JSON(ParameterDescription, parameterDescription_);
            DARABONBA_PTR_TO_JSON(ParameterName, parameterName_);
          };
          friend void from_json(const Darabonba::Json& j, AuthorizedDevReturnParameters& obj) { 
            DARABONBA_PTR_FROM_JSON(ExampleValue, exampleValue_);
            DARABONBA_PTR_FROM_JSON(IsAuthorized, isAuthorized_);
            DARABONBA_PTR_FROM_JSON(ParameterDataType, parameterDataType_);
            DARABONBA_PTR_FROM_JSON(ParameterDescription, parameterDescription_);
            DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
          };
          AuthorizedDevReturnParameters() = default ;
          AuthorizedDevReturnParameters(const AuthorizedDevReturnParameters &) = default ;
          AuthorizedDevReturnParameters(AuthorizedDevReturnParameters &&) = default ;
          AuthorizedDevReturnParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AuthorizedDevReturnParameters() = default ;
          AuthorizedDevReturnParameters& operator=(const AuthorizedDevReturnParameters &) = default ;
          AuthorizedDevReturnParameters& operator=(AuthorizedDevReturnParameters &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->exampleValue_ == nullptr
        && this->isAuthorized_ == nullptr && this->parameterDataType_ == nullptr && this->parameterDescription_ == nullptr && this->parameterName_ == nullptr; };
          // exampleValue Field Functions 
          bool hasExampleValue() const { return this->exampleValue_ != nullptr;};
          void deleteExampleValue() { this->exampleValue_ = nullptr;};
          inline string getExampleValue() const { DARABONBA_PTR_GET_DEFAULT(exampleValue_, "") };
          inline AuthorizedDevReturnParameters& setExampleValue(string exampleValue) { DARABONBA_PTR_SET_VALUE(exampleValue_, exampleValue) };


          // isAuthorized Field Functions 
          bool hasIsAuthorized() const { return this->isAuthorized_ != nullptr;};
          void deleteIsAuthorized() { this->isAuthorized_ = nullptr;};
          inline int32_t getIsAuthorized() const { DARABONBA_PTR_GET_DEFAULT(isAuthorized_, 0) };
          inline AuthorizedDevReturnParameters& setIsAuthorized(int32_t isAuthorized) { DARABONBA_PTR_SET_VALUE(isAuthorized_, isAuthorized) };


          // parameterDataType Field Functions 
          bool hasParameterDataType() const { return this->parameterDataType_ != nullptr;};
          void deleteParameterDataType() { this->parameterDataType_ = nullptr;};
          inline int32_t getParameterDataType() const { DARABONBA_PTR_GET_DEFAULT(parameterDataType_, 0) };
          inline AuthorizedDevReturnParameters& setParameterDataType(int32_t parameterDataType) { DARABONBA_PTR_SET_VALUE(parameterDataType_, parameterDataType) };


          // parameterDescription Field Functions 
          bool hasParameterDescription() const { return this->parameterDescription_ != nullptr;};
          void deleteParameterDescription() { this->parameterDescription_ = nullptr;};
          inline string getParameterDescription() const { DARABONBA_PTR_GET_DEFAULT(parameterDescription_, "") };
          inline AuthorizedDevReturnParameters& setParameterDescription(string parameterDescription) { DARABONBA_PTR_SET_VALUE(parameterDescription_, parameterDescription) };


          // parameterName Field Functions 
          bool hasParameterName() const { return this->parameterName_ != nullptr;};
          void deleteParameterName() { this->parameterName_ = nullptr;};
          inline string getParameterName() const { DARABONBA_PTR_GET_DEFAULT(parameterName_, "") };
          inline AuthorizedDevReturnParameters& setParameterName(string parameterName) { DARABONBA_PTR_SET_VALUE(parameterName_, parameterName) };


        protected:
          shared_ptr<string> exampleValue_ {};
          shared_ptr<int32_t> isAuthorized_ {};
          shared_ptr<int32_t> parameterDataType_ {};
          shared_ptr<string> parameterDescription_ {};
          shared_ptr<string> parameterName_ {};
        };

        virtual bool empty() const override { return this->apiId_ == nullptr
        && this->apiName_ == nullptr && this->appId_ == nullptr && this->authType_ == nullptr && this->authorizedDevReturnParameters_ == nullptr && this->authorizedProdReturnParameters_ == nullptr
        && this->description_ == nullptr && this->devAuthPeriod_ == nullptr && this->prodAuthPeriod_ == nullptr && this->projectId_ == nullptr; };
        // apiId Field Functions 
        bool hasApiId() const { return this->apiId_ != nullptr;};
        void deleteApiId() { this->apiId_ = nullptr;};
        inline int64_t getApiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, 0L) };
        inline Data& setApiId(int64_t apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


        // apiName Field Functions 
        bool hasApiName() const { return this->apiName_ != nullptr;};
        void deleteApiName() { this->apiName_ = nullptr;};
        inline string getApiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
        inline Data& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


        // appId Field Functions 
        bool hasAppId() const { return this->appId_ != nullptr;};
        void deleteAppId() { this->appId_ = nullptr;};
        inline int64_t getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0L) };
        inline Data& setAppId(int64_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


        // authType Field Functions 
        bool hasAuthType() const { return this->authType_ != nullptr;};
        void deleteAuthType() { this->authType_ = nullptr;};
        inline string getAuthType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
        inline Data& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


        // authorizedDevReturnParameters Field Functions 
        bool hasAuthorizedDevReturnParameters() const { return this->authorizedDevReturnParameters_ != nullptr;};
        void deleteAuthorizedDevReturnParameters() { this->authorizedDevReturnParameters_ = nullptr;};
        inline const vector<Data::AuthorizedDevReturnParameters> & getAuthorizedDevReturnParameters() const { DARABONBA_PTR_GET_CONST(authorizedDevReturnParameters_, vector<Data::AuthorizedDevReturnParameters>) };
        inline vector<Data::AuthorizedDevReturnParameters> getAuthorizedDevReturnParameters() { DARABONBA_PTR_GET(authorizedDevReturnParameters_, vector<Data::AuthorizedDevReturnParameters>) };
        inline Data& setAuthorizedDevReturnParameters(const vector<Data::AuthorizedDevReturnParameters> & authorizedDevReturnParameters) { DARABONBA_PTR_SET_VALUE(authorizedDevReturnParameters_, authorizedDevReturnParameters) };
        inline Data& setAuthorizedDevReturnParameters(vector<Data::AuthorizedDevReturnParameters> && authorizedDevReturnParameters) { DARABONBA_PTR_SET_RVALUE(authorizedDevReturnParameters_, authorizedDevReturnParameters) };


        // authorizedProdReturnParameters Field Functions 
        bool hasAuthorizedProdReturnParameters() const { return this->authorizedProdReturnParameters_ != nullptr;};
        void deleteAuthorizedProdReturnParameters() { this->authorizedProdReturnParameters_ = nullptr;};
        inline const vector<Data::AuthorizedProdReturnParameters> & getAuthorizedProdReturnParameters() const { DARABONBA_PTR_GET_CONST(authorizedProdReturnParameters_, vector<Data::AuthorizedProdReturnParameters>) };
        inline vector<Data::AuthorizedProdReturnParameters> getAuthorizedProdReturnParameters() { DARABONBA_PTR_GET(authorizedProdReturnParameters_, vector<Data::AuthorizedProdReturnParameters>) };
        inline Data& setAuthorizedProdReturnParameters(const vector<Data::AuthorizedProdReturnParameters> & authorizedProdReturnParameters) { DARABONBA_PTR_SET_VALUE(authorizedProdReturnParameters_, authorizedProdReturnParameters) };
        inline Data& setAuthorizedProdReturnParameters(vector<Data::AuthorizedProdReturnParameters> && authorizedProdReturnParameters) { DARABONBA_PTR_SET_RVALUE(authorizedProdReturnParameters_, authorizedProdReturnParameters) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // devAuthPeriod Field Functions 
        bool hasDevAuthPeriod() const { return this->devAuthPeriod_ != nullptr;};
        void deleteDevAuthPeriod() { this->devAuthPeriod_ = nullptr;};
        inline string getDevAuthPeriod() const { DARABONBA_PTR_GET_DEFAULT(devAuthPeriod_, "") };
        inline Data& setDevAuthPeriod(string devAuthPeriod) { DARABONBA_PTR_SET_VALUE(devAuthPeriod_, devAuthPeriod) };


        // prodAuthPeriod Field Functions 
        bool hasProdAuthPeriod() const { return this->prodAuthPeriod_ != nullptr;};
        void deleteProdAuthPeriod() { this->prodAuthPeriod_ = nullptr;};
        inline string getProdAuthPeriod() const { DARABONBA_PTR_GET_DEFAULT(prodAuthPeriod_, "") };
        inline Data& setProdAuthPeriod(string prodAuthPeriod) { DARABONBA_PTR_SET_VALUE(prodAuthPeriod_, prodAuthPeriod) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline Data& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      protected:
        // API_ID
        shared_ptr<int64_t> apiId_ {};
        shared_ptr<string> apiName_ {};
        shared_ptr<int64_t> appId_ {};
        shared_ptr<string> authType_ {};
        shared_ptr<vector<Data::AuthorizedDevReturnParameters>> authorizedDevReturnParameters_ {};
        shared_ptr<vector<Data::AuthorizedProdReturnParameters>> authorizedProdReturnParameters_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> devAuthPeriod_ {};
        shared_ptr<string> prodAuthPeriod_ {};
        shared_ptr<int64_t> projectId_ {};
      };

      virtual bool empty() const override { return this->data_ == nullptr
        && this->totalCount_ == nullptr; };
      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const vector<Result::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<Result::Data>) };
      inline vector<Result::Data> getData() { DARABONBA_PTR_GET(data_, vector<Result::Data>) };
      inline Result& setData(const vector<Result::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline Result& setData(vector<Result::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Result& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<Result::Data>> data_ {};
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListAuthorizedDataServiceApiDetailsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListAuthorizedDataServiceApiDetailsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAuthorizedDataServiceApiDetailsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAuthorizedDataServiceApiDetailsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const ListAuthorizedDataServiceApiDetailsResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, ListAuthorizedDataServiceApiDetailsResponseBody::Result) };
    inline ListAuthorizedDataServiceApiDetailsResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, ListAuthorizedDataServiceApiDetailsResponseBody::Result) };
    inline ListAuthorizedDataServiceApiDetailsResponseBody& setResult(const ListAuthorizedDataServiceApiDetailsResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListAuthorizedDataServiceApiDetailsResponseBody& setResult(ListAuthorizedDataServiceApiDetailsResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListAuthorizedDataServiceApiDetailsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<ListAuthorizedDataServiceApiDetailsResponseBody::Result> result_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
