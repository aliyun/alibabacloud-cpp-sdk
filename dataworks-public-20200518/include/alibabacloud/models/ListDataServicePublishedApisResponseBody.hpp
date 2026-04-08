// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASERVICEPUBLISHEDAPISRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASERVICEPUBLISHEDAPISRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListDataServicePublishedApisResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataServicePublishedApisResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataServicePublishedApisResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListDataServicePublishedApisResponseBody() = default ;
    ListDataServicePublishedApisResponseBody(const ListDataServicePublishedApisResponseBody &) = default ;
    ListDataServicePublishedApisResponseBody(ListDataServicePublishedApisResponseBody &&) = default ;
    ListDataServicePublishedApisResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataServicePublishedApisResponseBody() = default ;
    ListDataServicePublishedApisResponseBody& operator=(const ListDataServicePublishedApisResponseBody &) = default ;
    ListDataServicePublishedApisResponseBody& operator=(ListDataServicePublishedApisResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Apis, apis_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Apis, apis_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
      class Apis : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Apis& obj) { 
          DARABONBA_PTR_TO_JSON(ApiId, apiId_);
          DARABONBA_PTR_TO_JSON(ApiMode, apiMode_);
          DARABONBA_PTR_TO_JSON(ApiName, apiName_);
          DARABONBA_PTR_TO_JSON(ApiPath, apiPath_);
          DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_TO_JSON(OperatorId, operatorId_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(Protocols, protocols_);
          DARABONBA_PTR_TO_JSON(RegistrationDetails, registrationDetails_);
          DARABONBA_PTR_TO_JSON(RequestMethod, requestMethod_);
          DARABONBA_PTR_TO_JSON(ResponseContentType, responseContentType_);
          DARABONBA_PTR_TO_JSON(ScriptDetails, scriptDetails_);
          DARABONBA_PTR_TO_JSON(SqlMode, sqlMode_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
          DARABONBA_PTR_TO_JSON(Timeout, timeout_);
          DARABONBA_PTR_TO_JSON(VisibleRange, visibleRange_);
          DARABONBA_PTR_TO_JSON(WizardDetails, wizardDetails_);
        };
        friend void from_json(const Darabonba::Json& j, Apis& obj) { 
          DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
          DARABONBA_PTR_FROM_JSON(ApiMode, apiMode_);
          DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
          DARABONBA_PTR_FROM_JSON(ApiPath, apiPath_);
          DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_FROM_JSON(OperatorId, operatorId_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(Protocols, protocols_);
          DARABONBA_PTR_FROM_JSON(RegistrationDetails, registrationDetails_);
          DARABONBA_PTR_FROM_JSON(RequestMethod, requestMethod_);
          DARABONBA_PTR_FROM_JSON(ResponseContentType, responseContentType_);
          DARABONBA_PTR_FROM_JSON(ScriptDetails, scriptDetails_);
          DARABONBA_PTR_FROM_JSON(SqlMode, sqlMode_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
          DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
          DARABONBA_PTR_FROM_JSON(VisibleRange, visibleRange_);
          DARABONBA_PTR_FROM_JSON(WizardDetails, wizardDetails_);
        };
        Apis() = default ;
        Apis(const Apis &) = default ;
        Apis(Apis &&) = default ;
        Apis(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Apis() = default ;
        Apis& operator=(const Apis &) = default ;
        Apis& operator=(Apis &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class WizardDetails : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const WizardDetails& obj) { 
            DARABONBA_PTR_TO_JSON(FailedResultSample, failedResultSample_);
            DARABONBA_PTR_TO_JSON(IsPagedResponse, isPagedResponse_);
            DARABONBA_PTR_TO_JSON(SuccessfulResultSample, successfulResultSample_);
            DARABONBA_PTR_TO_JSON(WizardConnection, wizardConnection_);
            DARABONBA_PTR_TO_JSON(WizardErrorCodes, wizardErrorCodes_);
            DARABONBA_PTR_TO_JSON(WizardRequestParameters, wizardRequestParameters_);
            DARABONBA_PTR_TO_JSON(WizardResponseParameters, wizardResponseParameters_);
          };
          friend void from_json(const Darabonba::Json& j, WizardDetails& obj) { 
            DARABONBA_PTR_FROM_JSON(FailedResultSample, failedResultSample_);
            DARABONBA_PTR_FROM_JSON(IsPagedResponse, isPagedResponse_);
            DARABONBA_PTR_FROM_JSON(SuccessfulResultSample, successfulResultSample_);
            DARABONBA_PTR_FROM_JSON(WizardConnection, wizardConnection_);
            DARABONBA_PTR_FROM_JSON(WizardErrorCodes, wizardErrorCodes_);
            DARABONBA_PTR_FROM_JSON(WizardRequestParameters, wizardRequestParameters_);
            DARABONBA_PTR_FROM_JSON(WizardResponseParameters, wizardResponseParameters_);
          };
          WizardDetails() = default ;
          WizardDetails(const WizardDetails &) = default ;
          WizardDetails(WizardDetails &&) = default ;
          WizardDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~WizardDetails() = default ;
          WizardDetails& operator=(const WizardDetails &) = default ;
          WizardDetails& operator=(WizardDetails &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class WizardResponseParameters : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const WizardResponseParameters& obj) { 
              DARABONBA_PTR_TO_JSON(ExampleValue, exampleValue_);
              DARABONBA_PTR_TO_JSON(ParameterDataType, parameterDataType_);
              DARABONBA_PTR_TO_JSON(ParameterDescription, parameterDescription_);
              DARABONBA_PTR_TO_JSON(ParameterName, parameterName_);
            };
            friend void from_json(const Darabonba::Json& j, WizardResponseParameters& obj) { 
              DARABONBA_PTR_FROM_JSON(ExampleValue, exampleValue_);
              DARABONBA_PTR_FROM_JSON(ParameterDataType, parameterDataType_);
              DARABONBA_PTR_FROM_JSON(ParameterDescription, parameterDescription_);
              DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
            };
            WizardResponseParameters() = default ;
            WizardResponseParameters(const WizardResponseParameters &) = default ;
            WizardResponseParameters(WizardResponseParameters &&) = default ;
            WizardResponseParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~WizardResponseParameters() = default ;
            WizardResponseParameters& operator=(const WizardResponseParameters &) = default ;
            WizardResponseParameters& operator=(WizardResponseParameters &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->exampleValue_ == nullptr
        && this->parameterDataType_ == nullptr && this->parameterDescription_ == nullptr && this->parameterName_ == nullptr; };
            // exampleValue Field Functions 
            bool hasExampleValue() const { return this->exampleValue_ != nullptr;};
            void deleteExampleValue() { this->exampleValue_ = nullptr;};
            inline string getExampleValue() const { DARABONBA_PTR_GET_DEFAULT(exampleValue_, "") };
            inline WizardResponseParameters& setExampleValue(string exampleValue) { DARABONBA_PTR_SET_VALUE(exampleValue_, exampleValue) };


            // parameterDataType Field Functions 
            bool hasParameterDataType() const { return this->parameterDataType_ != nullptr;};
            void deleteParameterDataType() { this->parameterDataType_ = nullptr;};
            inline int32_t getParameterDataType() const { DARABONBA_PTR_GET_DEFAULT(parameterDataType_, 0) };
            inline WizardResponseParameters& setParameterDataType(int32_t parameterDataType) { DARABONBA_PTR_SET_VALUE(parameterDataType_, parameterDataType) };


            // parameterDescription Field Functions 
            bool hasParameterDescription() const { return this->parameterDescription_ != nullptr;};
            void deleteParameterDescription() { this->parameterDescription_ = nullptr;};
            inline string getParameterDescription() const { DARABONBA_PTR_GET_DEFAULT(parameterDescription_, "") };
            inline WizardResponseParameters& setParameterDescription(string parameterDescription) { DARABONBA_PTR_SET_VALUE(parameterDescription_, parameterDescription) };


            // parameterName Field Functions 
            bool hasParameterName() const { return this->parameterName_ != nullptr;};
            void deleteParameterName() { this->parameterName_ = nullptr;};
            inline string getParameterName() const { DARABONBA_PTR_GET_DEFAULT(parameterName_, "") };
            inline WizardResponseParameters& setParameterName(string parameterName) { DARABONBA_PTR_SET_VALUE(parameterName_, parameterName) };


          protected:
            // The sample value.
            shared_ptr<string> exampleValue_ {};
            // The data type of the parameter. Valid values:
            // 
            // *   0: String
            // *   1: Int
            // *   2: Long
            // *   3: Float
            // *   4: Double
            // *   5: Boolean
            // *   6: StringList
            // *   7: IntList
            // *   8: LongList
            // *   9: FloatList
            // *   10: DoubleList
            // *   11: BooleanList
            shared_ptr<int32_t> parameterDataType_ {};
            // The description.
            shared_ptr<string> parameterDescription_ {};
            // The name of the parameter.
            shared_ptr<string> parameterName_ {};
          };

          class WizardRequestParameters : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const WizardRequestParameters& obj) { 
              DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
              DARABONBA_PTR_TO_JSON(ExampleValue, exampleValue_);
              DARABONBA_PTR_TO_JSON(IsRequiredParameter, isRequiredParameter_);
              DARABONBA_PTR_TO_JSON(ParameterDataType, parameterDataType_);
              DARABONBA_PTR_TO_JSON(ParameterDescription, parameterDescription_);
              DARABONBA_PTR_TO_JSON(ParameterName, parameterName_);
              DARABONBA_PTR_TO_JSON(ParameterOperator, parameterOperator_);
              DARABONBA_PTR_TO_JSON(ParameterPosition, parameterPosition_);
            };
            friend void from_json(const Darabonba::Json& j, WizardRequestParameters& obj) { 
              DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
              DARABONBA_PTR_FROM_JSON(ExampleValue, exampleValue_);
              DARABONBA_PTR_FROM_JSON(IsRequiredParameter, isRequiredParameter_);
              DARABONBA_PTR_FROM_JSON(ParameterDataType, parameterDataType_);
              DARABONBA_PTR_FROM_JSON(ParameterDescription, parameterDescription_);
              DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
              DARABONBA_PTR_FROM_JSON(ParameterOperator, parameterOperator_);
              DARABONBA_PTR_FROM_JSON(ParameterPosition, parameterPosition_);
            };
            WizardRequestParameters() = default ;
            WizardRequestParameters(const WizardRequestParameters &) = default ;
            WizardRequestParameters(WizardRequestParameters &&) = default ;
            WizardRequestParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~WizardRequestParameters() = default ;
            WizardRequestParameters& operator=(const WizardRequestParameters &) = default ;
            WizardRequestParameters& operator=(WizardRequestParameters &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->defaultValue_ == nullptr
        && this->exampleValue_ == nullptr && this->isRequiredParameter_ == nullptr && this->parameterDataType_ == nullptr && this->parameterDescription_ == nullptr && this->parameterName_ == nullptr
        && this->parameterOperator_ == nullptr && this->parameterPosition_ == nullptr; };
            // defaultValue Field Functions 
            bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
            void deleteDefaultValue() { this->defaultValue_ = nullptr;};
            inline string getDefaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
            inline WizardRequestParameters& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


            // exampleValue Field Functions 
            bool hasExampleValue() const { return this->exampleValue_ != nullptr;};
            void deleteExampleValue() { this->exampleValue_ = nullptr;};
            inline string getExampleValue() const { DARABONBA_PTR_GET_DEFAULT(exampleValue_, "") };
            inline WizardRequestParameters& setExampleValue(string exampleValue) { DARABONBA_PTR_SET_VALUE(exampleValue_, exampleValue) };


            // isRequiredParameter Field Functions 
            bool hasIsRequiredParameter() const { return this->isRequiredParameter_ != nullptr;};
            void deleteIsRequiredParameter() { this->isRequiredParameter_ = nullptr;};
            inline bool getIsRequiredParameter() const { DARABONBA_PTR_GET_DEFAULT(isRequiredParameter_, false) };
            inline WizardRequestParameters& setIsRequiredParameter(bool isRequiredParameter) { DARABONBA_PTR_SET_VALUE(isRequiredParameter_, isRequiredParameter) };


            // parameterDataType Field Functions 
            bool hasParameterDataType() const { return this->parameterDataType_ != nullptr;};
            void deleteParameterDataType() { this->parameterDataType_ = nullptr;};
            inline int32_t getParameterDataType() const { DARABONBA_PTR_GET_DEFAULT(parameterDataType_, 0) };
            inline WizardRequestParameters& setParameterDataType(int32_t parameterDataType) { DARABONBA_PTR_SET_VALUE(parameterDataType_, parameterDataType) };


            // parameterDescription Field Functions 
            bool hasParameterDescription() const { return this->parameterDescription_ != nullptr;};
            void deleteParameterDescription() { this->parameterDescription_ = nullptr;};
            inline string getParameterDescription() const { DARABONBA_PTR_GET_DEFAULT(parameterDescription_, "") };
            inline WizardRequestParameters& setParameterDescription(string parameterDescription) { DARABONBA_PTR_SET_VALUE(parameterDescription_, parameterDescription) };


            // parameterName Field Functions 
            bool hasParameterName() const { return this->parameterName_ != nullptr;};
            void deleteParameterName() { this->parameterName_ = nullptr;};
            inline string getParameterName() const { DARABONBA_PTR_GET_DEFAULT(parameterName_, "") };
            inline WizardRequestParameters& setParameterName(string parameterName) { DARABONBA_PTR_SET_VALUE(parameterName_, parameterName) };


            // parameterOperator Field Functions 
            bool hasParameterOperator() const { return this->parameterOperator_ != nullptr;};
            void deleteParameterOperator() { this->parameterOperator_ = nullptr;};
            inline int32_t getParameterOperator() const { DARABONBA_PTR_GET_DEFAULT(parameterOperator_, 0) };
            inline WizardRequestParameters& setParameterOperator(int32_t parameterOperator) { DARABONBA_PTR_SET_VALUE(parameterOperator_, parameterOperator) };


            // parameterPosition Field Functions 
            bool hasParameterPosition() const { return this->parameterPosition_ != nullptr;};
            void deleteParameterPosition() { this->parameterPosition_ = nullptr;};
            inline int32_t getParameterPosition() const { DARABONBA_PTR_GET_DEFAULT(parameterPosition_, 0) };
            inline WizardRequestParameters& setParameterPosition(int32_t parameterPosition) { DARABONBA_PTR_SET_VALUE(parameterPosition_, parameterPosition) };


          protected:
            // The default value.
            shared_ptr<string> defaultValue_ {};
            // The sample value.
            shared_ptr<string> exampleValue_ {};
            // Indicates whether the request parameter is required.
            shared_ptr<bool> isRequiredParameter_ {};
            // The data type of the parameter. Valid values:
            // 
            // *   0: String
            // *   1: Int
            // *   2: Long
            // *   3: Float
            // *   4: Double
            // *   5: Boolean
            // *   6: StringList
            // *   7: IntList
            // *   8: LongList
            // *   9: FloatList
            // *   10: DoubleList
            // *   11: BooleanList
            shared_ptr<int32_t> parameterDataType_ {};
            // The description.
            shared_ptr<string> parameterDescription_ {};
            // The name of the parameter.
            shared_ptr<string> parameterName_ {};
            // The operator used for the value of the parameter. Valid values: 0, 1, 2, and 3. The value 0 indicates the Equal operator. The value 1 indicates the Like operator. The value 2 indicates the Const operator. The value 3 indicates the In operator. APIs generated in wizard mode support the Equal, Like, and In operators. APIs generated in script mode support the Equal operator. APIs generated by registration support the Equal and Const operators.
            shared_ptr<int32_t> parameterOperator_ {};
            // The position of the parameter. Valid values: 0, 1, 2, and 3. The value 0 indicates that the parameter is in the URL path of the request. The value 1 indicates that the parameter is in the Query parameter of the request URL. The value 2 indicates that the parameter is in the request header. The value 3 indicates that the parameter is in the request body. APIs generated in wizard or script mode support only the Query position. APIs generated by registration whose request method is GET or DELETE support the Query and Head positions. APIs generated by registration whose request method is PUT or POST support the Query, Head, and Body positions.
            shared_ptr<int32_t> parameterPosition_ {};
          };

          class WizardErrorCodes : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const WizardErrorCodes& obj) { 
              DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
              DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
              DARABONBA_PTR_TO_JSON(ErrorSolution, errorSolution_);
            };
            friend void from_json(const Darabonba::Json& j, WizardErrorCodes& obj) { 
              DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
              DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
              DARABONBA_PTR_FROM_JSON(ErrorSolution, errorSolution_);
            };
            WizardErrorCodes() = default ;
            WizardErrorCodes(const WizardErrorCodes &) = default ;
            WizardErrorCodes(WizardErrorCodes &&) = default ;
            WizardErrorCodes(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~WizardErrorCodes() = default ;
            WizardErrorCodes& operator=(const WizardErrorCodes &) = default ;
            WizardErrorCodes& operator=(WizardErrorCodes &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->errorSolution_ == nullptr; };
            // errorCode Field Functions 
            bool hasErrorCode() const { return this->errorCode_ != nullptr;};
            void deleteErrorCode() { this->errorCode_ = nullptr;};
            inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
            inline WizardErrorCodes& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


            // errorMessage Field Functions 
            bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
            void deleteErrorMessage() { this->errorMessage_ = nullptr;};
            inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
            inline WizardErrorCodes& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


            // errorSolution Field Functions 
            bool hasErrorSolution() const { return this->errorSolution_ != nullptr;};
            void deleteErrorSolution() { this->errorSolution_ = nullptr;};
            inline string getErrorSolution() const { DARABONBA_PTR_GET_DEFAULT(errorSolution_, "") };
            inline WizardErrorCodes& setErrorSolution(string errorSolution) { DARABONBA_PTR_SET_VALUE(errorSolution_, errorSolution) };


          protected:
            // The error code.
            shared_ptr<string> errorCode_ {};
            // The error message.
            shared_ptr<string> errorMessage_ {};
            // The solution used to fix the error.
            shared_ptr<string> errorSolution_ {};
          };

          class WizardConnection : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const WizardConnection& obj) { 
              DARABONBA_PTR_TO_JSON(ConnectionId, connectionId_);
              DARABONBA_PTR_TO_JSON(TableName, tableName_);
            };
            friend void from_json(const Darabonba::Json& j, WizardConnection& obj) { 
              DARABONBA_PTR_FROM_JSON(ConnectionId, connectionId_);
              DARABONBA_PTR_FROM_JSON(TableName, tableName_);
            };
            WizardConnection() = default ;
            WizardConnection(const WizardConnection &) = default ;
            WizardConnection(WizardConnection &&) = default ;
            WizardConnection(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~WizardConnection() = default ;
            WizardConnection& operator=(const WizardConnection &) = default ;
            WizardConnection& operator=(WizardConnection &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->connectionId_ == nullptr
        && this->tableName_ == nullptr; };
            // connectionId Field Functions 
            bool hasConnectionId() const { return this->connectionId_ != nullptr;};
            void deleteConnectionId() { this->connectionId_ = nullptr;};
            inline int64_t getConnectionId() const { DARABONBA_PTR_GET_DEFAULT(connectionId_, 0L) };
            inline WizardConnection& setConnectionId(int64_t connectionId) { DARABONBA_PTR_SET_VALUE(connectionId_, connectionId) };


            // tableName Field Functions 
            bool hasTableName() const { return this->tableName_ != nullptr;};
            void deleteTableName() { this->tableName_ = nullptr;};
            inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
            inline WizardConnection& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


          protected:
            // The ID of the data source.
            shared_ptr<int64_t> connectionId_ {};
            // The name of the table in the data source.
            shared_ptr<string> tableName_ {};
          };

          virtual bool empty() const override { return this->failedResultSample_ == nullptr
        && this->isPagedResponse_ == nullptr && this->successfulResultSample_ == nullptr && this->wizardConnection_ == nullptr && this->wizardErrorCodes_ == nullptr && this->wizardRequestParameters_ == nullptr
        && this->wizardResponseParameters_ == nullptr; };
          // failedResultSample Field Functions 
          bool hasFailedResultSample() const { return this->failedResultSample_ != nullptr;};
          void deleteFailedResultSample() { this->failedResultSample_ = nullptr;};
          inline string getFailedResultSample() const { DARABONBA_PTR_GET_DEFAULT(failedResultSample_, "") };
          inline WizardDetails& setFailedResultSample(string failedResultSample) { DARABONBA_PTR_SET_VALUE(failedResultSample_, failedResultSample) };


          // isPagedResponse Field Functions 
          bool hasIsPagedResponse() const { return this->isPagedResponse_ != nullptr;};
          void deleteIsPagedResponse() { this->isPagedResponse_ = nullptr;};
          inline bool getIsPagedResponse() const { DARABONBA_PTR_GET_DEFAULT(isPagedResponse_, false) };
          inline WizardDetails& setIsPagedResponse(bool isPagedResponse) { DARABONBA_PTR_SET_VALUE(isPagedResponse_, isPagedResponse) };


          // successfulResultSample Field Functions 
          bool hasSuccessfulResultSample() const { return this->successfulResultSample_ != nullptr;};
          void deleteSuccessfulResultSample() { this->successfulResultSample_ = nullptr;};
          inline string getSuccessfulResultSample() const { DARABONBA_PTR_GET_DEFAULT(successfulResultSample_, "") };
          inline WizardDetails& setSuccessfulResultSample(string successfulResultSample) { DARABONBA_PTR_SET_VALUE(successfulResultSample_, successfulResultSample) };


          // wizardConnection Field Functions 
          bool hasWizardConnection() const { return this->wizardConnection_ != nullptr;};
          void deleteWizardConnection() { this->wizardConnection_ = nullptr;};
          inline const WizardDetails::WizardConnection & getWizardConnection() const { DARABONBA_PTR_GET_CONST(wizardConnection_, WizardDetails::WizardConnection) };
          inline WizardDetails::WizardConnection getWizardConnection() { DARABONBA_PTR_GET(wizardConnection_, WizardDetails::WizardConnection) };
          inline WizardDetails& setWizardConnection(const WizardDetails::WizardConnection & wizardConnection) { DARABONBA_PTR_SET_VALUE(wizardConnection_, wizardConnection) };
          inline WizardDetails& setWizardConnection(WizardDetails::WizardConnection && wizardConnection) { DARABONBA_PTR_SET_RVALUE(wizardConnection_, wizardConnection) };


          // wizardErrorCodes Field Functions 
          bool hasWizardErrorCodes() const { return this->wizardErrorCodes_ != nullptr;};
          void deleteWizardErrorCodes() { this->wizardErrorCodes_ = nullptr;};
          inline const vector<WizardDetails::WizardErrorCodes> & getWizardErrorCodes() const { DARABONBA_PTR_GET_CONST(wizardErrorCodes_, vector<WizardDetails::WizardErrorCodes>) };
          inline vector<WizardDetails::WizardErrorCodes> getWizardErrorCodes() { DARABONBA_PTR_GET(wizardErrorCodes_, vector<WizardDetails::WizardErrorCodes>) };
          inline WizardDetails& setWizardErrorCodes(const vector<WizardDetails::WizardErrorCodes> & wizardErrorCodes) { DARABONBA_PTR_SET_VALUE(wizardErrorCodes_, wizardErrorCodes) };
          inline WizardDetails& setWizardErrorCodes(vector<WizardDetails::WizardErrorCodes> && wizardErrorCodes) { DARABONBA_PTR_SET_RVALUE(wizardErrorCodes_, wizardErrorCodes) };


          // wizardRequestParameters Field Functions 
          bool hasWizardRequestParameters() const { return this->wizardRequestParameters_ != nullptr;};
          void deleteWizardRequestParameters() { this->wizardRequestParameters_ = nullptr;};
          inline const vector<WizardDetails::WizardRequestParameters> & getWizardRequestParameters() const { DARABONBA_PTR_GET_CONST(wizardRequestParameters_, vector<WizardDetails::WizardRequestParameters>) };
          inline vector<WizardDetails::WizardRequestParameters> getWizardRequestParameters() { DARABONBA_PTR_GET(wizardRequestParameters_, vector<WizardDetails::WizardRequestParameters>) };
          inline WizardDetails& setWizardRequestParameters(const vector<WizardDetails::WizardRequestParameters> & wizardRequestParameters) { DARABONBA_PTR_SET_VALUE(wizardRequestParameters_, wizardRequestParameters) };
          inline WizardDetails& setWizardRequestParameters(vector<WizardDetails::WizardRequestParameters> && wizardRequestParameters) { DARABONBA_PTR_SET_RVALUE(wizardRequestParameters_, wizardRequestParameters) };


          // wizardResponseParameters Field Functions 
          bool hasWizardResponseParameters() const { return this->wizardResponseParameters_ != nullptr;};
          void deleteWizardResponseParameters() { this->wizardResponseParameters_ = nullptr;};
          inline const vector<WizardDetails::WizardResponseParameters> & getWizardResponseParameters() const { DARABONBA_PTR_GET_CONST(wizardResponseParameters_, vector<WizardDetails::WizardResponseParameters>) };
          inline vector<WizardDetails::WizardResponseParameters> getWizardResponseParameters() { DARABONBA_PTR_GET(wizardResponseParameters_, vector<WizardDetails::WizardResponseParameters>) };
          inline WizardDetails& setWizardResponseParameters(const vector<WizardDetails::WizardResponseParameters> & wizardResponseParameters) { DARABONBA_PTR_SET_VALUE(wizardResponseParameters_, wizardResponseParameters) };
          inline WizardDetails& setWizardResponseParameters(vector<WizardDetails::WizardResponseParameters> && wizardResponseParameters) { DARABONBA_PTR_SET_RVALUE(wizardResponseParameters_, wizardResponseParameters) };


        protected:
          // The sample error response of the API.
          shared_ptr<string> failedResultSample_ {};
          // Indicates whether the entries are returned by page.
          shared_ptr<bool> isPagedResponse_ {};
          // The sample success response of the API.
          shared_ptr<string> successfulResultSample_ {};
          // The data source information about the API generated in wizard mode.
          shared_ptr<WizardDetails::WizardConnection> wizardConnection_ {};
          // The error codes returned for the API generated in wizard mode.
          shared_ptr<vector<WizardDetails::WizardErrorCodes>> wizardErrorCodes_ {};
          // The request parameters of the API generated in wizard mode.
          shared_ptr<vector<WizardDetails::WizardRequestParameters>> wizardRequestParameters_ {};
          // The response parameters of the API generated in wizard mode.
          shared_ptr<vector<WizardDetails::WizardResponseParameters>> wizardResponseParameters_ {};
        };

        class ScriptDetails : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ScriptDetails& obj) { 
            DARABONBA_PTR_TO_JSON(FailedResultSample, failedResultSample_);
            DARABONBA_PTR_TO_JSON(IsPagedResponse, isPagedResponse_);
            DARABONBA_PTR_TO_JSON(Script, script_);
            DARABONBA_PTR_TO_JSON(ScriptConnection, scriptConnection_);
            DARABONBA_PTR_TO_JSON(ScriptErrorCodes, scriptErrorCodes_);
            DARABONBA_PTR_TO_JSON(ScriptRequestParameters, scriptRequestParameters_);
            DARABONBA_PTR_TO_JSON(ScriptResponseParameters, scriptResponseParameters_);
            DARABONBA_PTR_TO_JSON(SuccessfulResultSample, successfulResultSample_);
          };
          friend void from_json(const Darabonba::Json& j, ScriptDetails& obj) { 
            DARABONBA_PTR_FROM_JSON(FailedResultSample, failedResultSample_);
            DARABONBA_PTR_FROM_JSON(IsPagedResponse, isPagedResponse_);
            DARABONBA_PTR_FROM_JSON(Script, script_);
            DARABONBA_PTR_FROM_JSON(ScriptConnection, scriptConnection_);
            DARABONBA_PTR_FROM_JSON(ScriptErrorCodes, scriptErrorCodes_);
            DARABONBA_PTR_FROM_JSON(ScriptRequestParameters, scriptRequestParameters_);
            DARABONBA_PTR_FROM_JSON(ScriptResponseParameters, scriptResponseParameters_);
            DARABONBA_PTR_FROM_JSON(SuccessfulResultSample, successfulResultSample_);
          };
          ScriptDetails() = default ;
          ScriptDetails(const ScriptDetails &) = default ;
          ScriptDetails(ScriptDetails &&) = default ;
          ScriptDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ScriptDetails() = default ;
          ScriptDetails& operator=(const ScriptDetails &) = default ;
          ScriptDetails& operator=(ScriptDetails &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ScriptResponseParameters : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ScriptResponseParameters& obj) { 
              DARABONBA_PTR_TO_JSON(ExampleValue, exampleValue_);
              DARABONBA_PTR_TO_JSON(ParameterDataType, parameterDataType_);
              DARABONBA_PTR_TO_JSON(ParameterDescription, parameterDescription_);
              DARABONBA_PTR_TO_JSON(ParameterName, parameterName_);
            };
            friend void from_json(const Darabonba::Json& j, ScriptResponseParameters& obj) { 
              DARABONBA_PTR_FROM_JSON(ExampleValue, exampleValue_);
              DARABONBA_PTR_FROM_JSON(ParameterDataType, parameterDataType_);
              DARABONBA_PTR_FROM_JSON(ParameterDescription, parameterDescription_);
              DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
            };
            ScriptResponseParameters() = default ;
            ScriptResponseParameters(const ScriptResponseParameters &) = default ;
            ScriptResponseParameters(ScriptResponseParameters &&) = default ;
            ScriptResponseParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ScriptResponseParameters() = default ;
            ScriptResponseParameters& operator=(const ScriptResponseParameters &) = default ;
            ScriptResponseParameters& operator=(ScriptResponseParameters &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->exampleValue_ == nullptr
        && this->parameterDataType_ == nullptr && this->parameterDescription_ == nullptr && this->parameterName_ == nullptr; };
            // exampleValue Field Functions 
            bool hasExampleValue() const { return this->exampleValue_ != nullptr;};
            void deleteExampleValue() { this->exampleValue_ = nullptr;};
            inline string getExampleValue() const { DARABONBA_PTR_GET_DEFAULT(exampleValue_, "") };
            inline ScriptResponseParameters& setExampleValue(string exampleValue) { DARABONBA_PTR_SET_VALUE(exampleValue_, exampleValue) };


            // parameterDataType Field Functions 
            bool hasParameterDataType() const { return this->parameterDataType_ != nullptr;};
            void deleteParameterDataType() { this->parameterDataType_ = nullptr;};
            inline int32_t getParameterDataType() const { DARABONBA_PTR_GET_DEFAULT(parameterDataType_, 0) };
            inline ScriptResponseParameters& setParameterDataType(int32_t parameterDataType) { DARABONBA_PTR_SET_VALUE(parameterDataType_, parameterDataType) };


            // parameterDescription Field Functions 
            bool hasParameterDescription() const { return this->parameterDescription_ != nullptr;};
            void deleteParameterDescription() { this->parameterDescription_ = nullptr;};
            inline string getParameterDescription() const { DARABONBA_PTR_GET_DEFAULT(parameterDescription_, "") };
            inline ScriptResponseParameters& setParameterDescription(string parameterDescription) { DARABONBA_PTR_SET_VALUE(parameterDescription_, parameterDescription) };


            // parameterName Field Functions 
            bool hasParameterName() const { return this->parameterName_ != nullptr;};
            void deleteParameterName() { this->parameterName_ = nullptr;};
            inline string getParameterName() const { DARABONBA_PTR_GET_DEFAULT(parameterName_, "") };
            inline ScriptResponseParameters& setParameterName(string parameterName) { DARABONBA_PTR_SET_VALUE(parameterName_, parameterName) };


          protected:
            // The sample value.
            shared_ptr<string> exampleValue_ {};
            // The data type of the parameter. Valid values:
            // 
            // *   0: String
            // *   1: Int
            // *   2: Long
            // *   3: Float
            // *   4: Double
            // *   5: Boolean
            // *   6: StringList
            // *   7: IntList
            // *   8: LongList
            // *   9: FloatList
            // *   10: DoubleList
            // *   11: BooleanList
            shared_ptr<int32_t> parameterDataType_ {};
            // The description.
            shared_ptr<string> parameterDescription_ {};
            // The name of the parameter.
            shared_ptr<string> parameterName_ {};
          };

          class ScriptRequestParameters : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ScriptRequestParameters& obj) { 
              DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
              DARABONBA_PTR_TO_JSON(ExampleValue, exampleValue_);
              DARABONBA_PTR_TO_JSON(IsRequiredParameter, isRequiredParameter_);
              DARABONBA_PTR_TO_JSON(ParameterDataType, parameterDataType_);
              DARABONBA_PTR_TO_JSON(ParameterDescription, parameterDescription_);
              DARABONBA_PTR_TO_JSON(ParameterName, parameterName_);
              DARABONBA_PTR_TO_JSON(ParameterOperator, parameterOperator_);
              DARABONBA_PTR_TO_JSON(ParameterPosition, parameterPosition_);
            };
            friend void from_json(const Darabonba::Json& j, ScriptRequestParameters& obj) { 
              DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
              DARABONBA_PTR_FROM_JSON(ExampleValue, exampleValue_);
              DARABONBA_PTR_FROM_JSON(IsRequiredParameter, isRequiredParameter_);
              DARABONBA_PTR_FROM_JSON(ParameterDataType, parameterDataType_);
              DARABONBA_PTR_FROM_JSON(ParameterDescription, parameterDescription_);
              DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
              DARABONBA_PTR_FROM_JSON(ParameterOperator, parameterOperator_);
              DARABONBA_PTR_FROM_JSON(ParameterPosition, parameterPosition_);
            };
            ScriptRequestParameters() = default ;
            ScriptRequestParameters(const ScriptRequestParameters &) = default ;
            ScriptRequestParameters(ScriptRequestParameters &&) = default ;
            ScriptRequestParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ScriptRequestParameters() = default ;
            ScriptRequestParameters& operator=(const ScriptRequestParameters &) = default ;
            ScriptRequestParameters& operator=(ScriptRequestParameters &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->defaultValue_ == nullptr
        && this->exampleValue_ == nullptr && this->isRequiredParameter_ == nullptr && this->parameterDataType_ == nullptr && this->parameterDescription_ == nullptr && this->parameterName_ == nullptr
        && this->parameterOperator_ == nullptr && this->parameterPosition_ == nullptr; };
            // defaultValue Field Functions 
            bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
            void deleteDefaultValue() { this->defaultValue_ = nullptr;};
            inline string getDefaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
            inline ScriptRequestParameters& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


            // exampleValue Field Functions 
            bool hasExampleValue() const { return this->exampleValue_ != nullptr;};
            void deleteExampleValue() { this->exampleValue_ = nullptr;};
            inline string getExampleValue() const { DARABONBA_PTR_GET_DEFAULT(exampleValue_, "") };
            inline ScriptRequestParameters& setExampleValue(string exampleValue) { DARABONBA_PTR_SET_VALUE(exampleValue_, exampleValue) };


            // isRequiredParameter Field Functions 
            bool hasIsRequiredParameter() const { return this->isRequiredParameter_ != nullptr;};
            void deleteIsRequiredParameter() { this->isRequiredParameter_ = nullptr;};
            inline bool getIsRequiredParameter() const { DARABONBA_PTR_GET_DEFAULT(isRequiredParameter_, false) };
            inline ScriptRequestParameters& setIsRequiredParameter(bool isRequiredParameter) { DARABONBA_PTR_SET_VALUE(isRequiredParameter_, isRequiredParameter) };


            // parameterDataType Field Functions 
            bool hasParameterDataType() const { return this->parameterDataType_ != nullptr;};
            void deleteParameterDataType() { this->parameterDataType_ = nullptr;};
            inline int32_t getParameterDataType() const { DARABONBA_PTR_GET_DEFAULT(parameterDataType_, 0) };
            inline ScriptRequestParameters& setParameterDataType(int32_t parameterDataType) { DARABONBA_PTR_SET_VALUE(parameterDataType_, parameterDataType) };


            // parameterDescription Field Functions 
            bool hasParameterDescription() const { return this->parameterDescription_ != nullptr;};
            void deleteParameterDescription() { this->parameterDescription_ = nullptr;};
            inline string getParameterDescription() const { DARABONBA_PTR_GET_DEFAULT(parameterDescription_, "") };
            inline ScriptRequestParameters& setParameterDescription(string parameterDescription) { DARABONBA_PTR_SET_VALUE(parameterDescription_, parameterDescription) };


            // parameterName Field Functions 
            bool hasParameterName() const { return this->parameterName_ != nullptr;};
            void deleteParameterName() { this->parameterName_ = nullptr;};
            inline string getParameterName() const { DARABONBA_PTR_GET_DEFAULT(parameterName_, "") };
            inline ScriptRequestParameters& setParameterName(string parameterName) { DARABONBA_PTR_SET_VALUE(parameterName_, parameterName) };


            // parameterOperator Field Functions 
            bool hasParameterOperator() const { return this->parameterOperator_ != nullptr;};
            void deleteParameterOperator() { this->parameterOperator_ = nullptr;};
            inline int32_t getParameterOperator() const { DARABONBA_PTR_GET_DEFAULT(parameterOperator_, 0) };
            inline ScriptRequestParameters& setParameterOperator(int32_t parameterOperator) { DARABONBA_PTR_SET_VALUE(parameterOperator_, parameterOperator) };


            // parameterPosition Field Functions 
            bool hasParameterPosition() const { return this->parameterPosition_ != nullptr;};
            void deleteParameterPosition() { this->parameterPosition_ = nullptr;};
            inline int32_t getParameterPosition() const { DARABONBA_PTR_GET_DEFAULT(parameterPosition_, 0) };
            inline ScriptRequestParameters& setParameterPosition(int32_t parameterPosition) { DARABONBA_PTR_SET_VALUE(parameterPosition_, parameterPosition) };


          protected:
            // The default value.
            shared_ptr<string> defaultValue_ {};
            // The sample value.
            shared_ptr<string> exampleValue_ {};
            // Indicates whether the request parameter is required.
            shared_ptr<bool> isRequiredParameter_ {};
            // The data type of the parameter. Valid values:
            // 
            // *   0: String
            // *   1: Int
            // *   2: Long
            // *   3: Float
            // *   4: Double
            // *   5: Boolean
            // 
            // Advanced scripts also support the following data types:
            // 
            // *   6: StringList
            // *   7: IntList
            // *   8: LongList
            // *   9: FloatList
            // *   10: DoubleList
            // *   11: BooleanList
            shared_ptr<int32_t> parameterDataType_ {};
            // The description.
            shared_ptr<string> parameterDescription_ {};
            // The name of the parameter.
            shared_ptr<string> parameterName_ {};
            // The operator used for the value of the parameter. Valid values:
            // 
            // *   0: Equal
            // *   1: Like
            // *   2: Const
            // *   3: In
            // 
            // APIs generated in wizard mode support the Equal, Like, and In operators. APIs generated in script mode support the Equal operator. APIs generated by registration support the Equal and Const operators.
            shared_ptr<int32_t> parameterOperator_ {};
            // The position of the parameter. Valid values:
            // 
            // *   0: indicates that the parameter is in the URL path of the request.
            // *   1: indicates that the parameter is in the Query parameter of the request URL.
            // *   2: indicates that the parameter is in the request header.
            // *   3: indicates that the parameter is in the request body.
            // 
            // APIs generated in wizard or script mode support only the Query position. APIs generated by registration whose request method is GET or DELETE support the Query and Head positions. APIs generated by registration whose request method is PUT or POST support the Query, Head, and Body positions.
            shared_ptr<int32_t> parameterPosition_ {};
          };

          class ScriptErrorCodes : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ScriptErrorCodes& obj) { 
              DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
              DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
              DARABONBA_PTR_TO_JSON(ErrorSolution, errorSolution_);
            };
            friend void from_json(const Darabonba::Json& j, ScriptErrorCodes& obj) { 
              DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
              DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
              DARABONBA_PTR_FROM_JSON(ErrorSolution, errorSolution_);
            };
            ScriptErrorCodes() = default ;
            ScriptErrorCodes(const ScriptErrorCodes &) = default ;
            ScriptErrorCodes(ScriptErrorCodes &&) = default ;
            ScriptErrorCodes(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ScriptErrorCodes() = default ;
            ScriptErrorCodes& operator=(const ScriptErrorCodes &) = default ;
            ScriptErrorCodes& operator=(ScriptErrorCodes &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->errorSolution_ == nullptr; };
            // errorCode Field Functions 
            bool hasErrorCode() const { return this->errorCode_ != nullptr;};
            void deleteErrorCode() { this->errorCode_ = nullptr;};
            inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
            inline ScriptErrorCodes& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


            // errorMessage Field Functions 
            bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
            void deleteErrorMessage() { this->errorMessage_ = nullptr;};
            inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
            inline ScriptErrorCodes& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


            // errorSolution Field Functions 
            bool hasErrorSolution() const { return this->errorSolution_ != nullptr;};
            void deleteErrorSolution() { this->errorSolution_ = nullptr;};
            inline string getErrorSolution() const { DARABONBA_PTR_GET_DEFAULT(errorSolution_, "") };
            inline ScriptErrorCodes& setErrorSolution(string errorSolution) { DARABONBA_PTR_SET_VALUE(errorSolution_, errorSolution) };


          protected:
            // The error code.
            shared_ptr<string> errorCode_ {};
            // The error message.
            shared_ptr<string> errorMessage_ {};
            // The solution used to fix the error.
            shared_ptr<string> errorSolution_ {};
          };

          class ScriptConnection : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ScriptConnection& obj) { 
              DARABONBA_PTR_TO_JSON(ConnectionId, connectionId_);
              DARABONBA_PTR_TO_JSON(TableName, tableName_);
            };
            friend void from_json(const Darabonba::Json& j, ScriptConnection& obj) { 
              DARABONBA_PTR_FROM_JSON(ConnectionId, connectionId_);
              DARABONBA_PTR_FROM_JSON(TableName, tableName_);
            };
            ScriptConnection() = default ;
            ScriptConnection(const ScriptConnection &) = default ;
            ScriptConnection(ScriptConnection &&) = default ;
            ScriptConnection(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ScriptConnection() = default ;
            ScriptConnection& operator=(const ScriptConnection &) = default ;
            ScriptConnection& operator=(ScriptConnection &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->connectionId_ == nullptr
        && this->tableName_ == nullptr; };
            // connectionId Field Functions 
            bool hasConnectionId() const { return this->connectionId_ != nullptr;};
            void deleteConnectionId() { this->connectionId_ = nullptr;};
            inline int64_t getConnectionId() const { DARABONBA_PTR_GET_DEFAULT(connectionId_, 0L) };
            inline ScriptConnection& setConnectionId(int64_t connectionId) { DARABONBA_PTR_SET_VALUE(connectionId_, connectionId) };


            // tableName Field Functions 
            bool hasTableName() const { return this->tableName_ != nullptr;};
            void deleteTableName() { this->tableName_ = nullptr;};
            inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
            inline ScriptConnection& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


          protected:
            // The data source ID.
            shared_ptr<int64_t> connectionId_ {};
            // The name of the table in the data source.
            shared_ptr<string> tableName_ {};
          };

          virtual bool empty() const override { return this->failedResultSample_ == nullptr
        && this->isPagedResponse_ == nullptr && this->script_ == nullptr && this->scriptConnection_ == nullptr && this->scriptErrorCodes_ == nullptr && this->scriptRequestParameters_ == nullptr
        && this->scriptResponseParameters_ == nullptr && this->successfulResultSample_ == nullptr; };
          // failedResultSample Field Functions 
          bool hasFailedResultSample() const { return this->failedResultSample_ != nullptr;};
          void deleteFailedResultSample() { this->failedResultSample_ = nullptr;};
          inline string getFailedResultSample() const { DARABONBA_PTR_GET_DEFAULT(failedResultSample_, "") };
          inline ScriptDetails& setFailedResultSample(string failedResultSample) { DARABONBA_PTR_SET_VALUE(failedResultSample_, failedResultSample) };


          // isPagedResponse Field Functions 
          bool hasIsPagedResponse() const { return this->isPagedResponse_ != nullptr;};
          void deleteIsPagedResponse() { this->isPagedResponse_ = nullptr;};
          inline bool getIsPagedResponse() const { DARABONBA_PTR_GET_DEFAULT(isPagedResponse_, false) };
          inline ScriptDetails& setIsPagedResponse(bool isPagedResponse) { DARABONBA_PTR_SET_VALUE(isPagedResponse_, isPagedResponse) };


          // script Field Functions 
          bool hasScript() const { return this->script_ != nullptr;};
          void deleteScript() { this->script_ = nullptr;};
          inline string getScript() const { DARABONBA_PTR_GET_DEFAULT(script_, "") };
          inline ScriptDetails& setScript(string script) { DARABONBA_PTR_SET_VALUE(script_, script) };


          // scriptConnection Field Functions 
          bool hasScriptConnection() const { return this->scriptConnection_ != nullptr;};
          void deleteScriptConnection() { this->scriptConnection_ = nullptr;};
          inline const ScriptDetails::ScriptConnection & getScriptConnection() const { DARABONBA_PTR_GET_CONST(scriptConnection_, ScriptDetails::ScriptConnection) };
          inline ScriptDetails::ScriptConnection getScriptConnection() { DARABONBA_PTR_GET(scriptConnection_, ScriptDetails::ScriptConnection) };
          inline ScriptDetails& setScriptConnection(const ScriptDetails::ScriptConnection & scriptConnection) { DARABONBA_PTR_SET_VALUE(scriptConnection_, scriptConnection) };
          inline ScriptDetails& setScriptConnection(ScriptDetails::ScriptConnection && scriptConnection) { DARABONBA_PTR_SET_RVALUE(scriptConnection_, scriptConnection) };


          // scriptErrorCodes Field Functions 
          bool hasScriptErrorCodes() const { return this->scriptErrorCodes_ != nullptr;};
          void deleteScriptErrorCodes() { this->scriptErrorCodes_ = nullptr;};
          inline const vector<ScriptDetails::ScriptErrorCodes> & getScriptErrorCodes() const { DARABONBA_PTR_GET_CONST(scriptErrorCodes_, vector<ScriptDetails::ScriptErrorCodes>) };
          inline vector<ScriptDetails::ScriptErrorCodes> getScriptErrorCodes() { DARABONBA_PTR_GET(scriptErrorCodes_, vector<ScriptDetails::ScriptErrorCodes>) };
          inline ScriptDetails& setScriptErrorCodes(const vector<ScriptDetails::ScriptErrorCodes> & scriptErrorCodes) { DARABONBA_PTR_SET_VALUE(scriptErrorCodes_, scriptErrorCodes) };
          inline ScriptDetails& setScriptErrorCodes(vector<ScriptDetails::ScriptErrorCodes> && scriptErrorCodes) { DARABONBA_PTR_SET_RVALUE(scriptErrorCodes_, scriptErrorCodes) };


          // scriptRequestParameters Field Functions 
          bool hasScriptRequestParameters() const { return this->scriptRequestParameters_ != nullptr;};
          void deleteScriptRequestParameters() { this->scriptRequestParameters_ = nullptr;};
          inline const vector<ScriptDetails::ScriptRequestParameters> & getScriptRequestParameters() const { DARABONBA_PTR_GET_CONST(scriptRequestParameters_, vector<ScriptDetails::ScriptRequestParameters>) };
          inline vector<ScriptDetails::ScriptRequestParameters> getScriptRequestParameters() { DARABONBA_PTR_GET(scriptRequestParameters_, vector<ScriptDetails::ScriptRequestParameters>) };
          inline ScriptDetails& setScriptRequestParameters(const vector<ScriptDetails::ScriptRequestParameters> & scriptRequestParameters) { DARABONBA_PTR_SET_VALUE(scriptRequestParameters_, scriptRequestParameters) };
          inline ScriptDetails& setScriptRequestParameters(vector<ScriptDetails::ScriptRequestParameters> && scriptRequestParameters) { DARABONBA_PTR_SET_RVALUE(scriptRequestParameters_, scriptRequestParameters) };


          // scriptResponseParameters Field Functions 
          bool hasScriptResponseParameters() const { return this->scriptResponseParameters_ != nullptr;};
          void deleteScriptResponseParameters() { this->scriptResponseParameters_ = nullptr;};
          inline const vector<ScriptDetails::ScriptResponseParameters> & getScriptResponseParameters() const { DARABONBA_PTR_GET_CONST(scriptResponseParameters_, vector<ScriptDetails::ScriptResponseParameters>) };
          inline vector<ScriptDetails::ScriptResponseParameters> getScriptResponseParameters() { DARABONBA_PTR_GET(scriptResponseParameters_, vector<ScriptDetails::ScriptResponseParameters>) };
          inline ScriptDetails& setScriptResponseParameters(const vector<ScriptDetails::ScriptResponseParameters> & scriptResponseParameters) { DARABONBA_PTR_SET_VALUE(scriptResponseParameters_, scriptResponseParameters) };
          inline ScriptDetails& setScriptResponseParameters(vector<ScriptDetails::ScriptResponseParameters> && scriptResponseParameters) { DARABONBA_PTR_SET_RVALUE(scriptResponseParameters_, scriptResponseParameters) };


          // successfulResultSample Field Functions 
          bool hasSuccessfulResultSample() const { return this->successfulResultSample_ != nullptr;};
          void deleteSuccessfulResultSample() { this->successfulResultSample_ = nullptr;};
          inline string getSuccessfulResultSample() const { DARABONBA_PTR_GET_DEFAULT(successfulResultSample_, "") };
          inline ScriptDetails& setSuccessfulResultSample(string successfulResultSample) { DARABONBA_PTR_SET_VALUE(successfulResultSample_, successfulResultSample) };


        protected:
          // The sample error response of the API.
          shared_ptr<string> failedResultSample_ {};
          // Indicates whether the entries are returned by page.
          shared_ptr<bool> isPagedResponse_ {};
          // The SQL script.
          shared_ptr<string> script_ {};
          // The data source information about the API generated in script mode.
          shared_ptr<ScriptDetails::ScriptConnection> scriptConnection_ {};
          // The error codes returned for the API generated in script mode.
          shared_ptr<vector<ScriptDetails::ScriptErrorCodes>> scriptErrorCodes_ {};
          // The request parameters of the API generated in script mode.
          shared_ptr<vector<ScriptDetails::ScriptRequestParameters>> scriptRequestParameters_ {};
          // The response parameters of the API generated in script mode.
          shared_ptr<vector<ScriptDetails::ScriptResponseParameters>> scriptResponseParameters_ {};
          // The sample success response of the API.
          shared_ptr<string> successfulResultSample_ {};
        };

        class RegistrationDetails : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RegistrationDetails& obj) { 
            DARABONBA_PTR_TO_JSON(FailedResultSample, failedResultSample_);
            DARABONBA_PTR_TO_JSON(RegistrationErrorCodes, registrationErrorCodes_);
            DARABONBA_PTR_TO_JSON(RegistrationRequestParameters, registrationRequestParameters_);
            DARABONBA_PTR_TO_JSON(ServiceContentType, serviceContentType_);
            DARABONBA_PTR_TO_JSON(ServiceHost, serviceHost_);
            DARABONBA_PTR_TO_JSON(ServicePath, servicePath_);
            DARABONBA_PTR_TO_JSON(ServiceRequestBodyDescription, serviceRequestBodyDescription_);
            DARABONBA_PTR_TO_JSON(SuccessfulResultSample, successfulResultSample_);
          };
          friend void from_json(const Darabonba::Json& j, RegistrationDetails& obj) { 
            DARABONBA_PTR_FROM_JSON(FailedResultSample, failedResultSample_);
            DARABONBA_PTR_FROM_JSON(RegistrationErrorCodes, registrationErrorCodes_);
            DARABONBA_PTR_FROM_JSON(RegistrationRequestParameters, registrationRequestParameters_);
            DARABONBA_PTR_FROM_JSON(ServiceContentType, serviceContentType_);
            DARABONBA_PTR_FROM_JSON(ServiceHost, serviceHost_);
            DARABONBA_PTR_FROM_JSON(ServicePath, servicePath_);
            DARABONBA_PTR_FROM_JSON(ServiceRequestBodyDescription, serviceRequestBodyDescription_);
            DARABONBA_PTR_FROM_JSON(SuccessfulResultSample, successfulResultSample_);
          };
          RegistrationDetails() = default ;
          RegistrationDetails(const RegistrationDetails &) = default ;
          RegistrationDetails(RegistrationDetails &&) = default ;
          RegistrationDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RegistrationDetails() = default ;
          RegistrationDetails& operator=(const RegistrationDetails &) = default ;
          RegistrationDetails& operator=(RegistrationDetails &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class RegistrationRequestParameters : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const RegistrationRequestParameters& obj) { 
              DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
              DARABONBA_PTR_TO_JSON(ExampleValue, exampleValue_);
              DARABONBA_PTR_TO_JSON(IsRequiredParameter, isRequiredParameter_);
              DARABONBA_PTR_TO_JSON(ParameterDataType, parameterDataType_);
              DARABONBA_PTR_TO_JSON(ParameterDescription, parameterDescription_);
              DARABONBA_PTR_TO_JSON(ParameterName, parameterName_);
              DARABONBA_PTR_TO_JSON(ParameterOperator, parameterOperator_);
              DARABONBA_PTR_TO_JSON(ParameterPosition, parameterPosition_);
            };
            friend void from_json(const Darabonba::Json& j, RegistrationRequestParameters& obj) { 
              DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
              DARABONBA_PTR_FROM_JSON(ExampleValue, exampleValue_);
              DARABONBA_PTR_FROM_JSON(IsRequiredParameter, isRequiredParameter_);
              DARABONBA_PTR_FROM_JSON(ParameterDataType, parameterDataType_);
              DARABONBA_PTR_FROM_JSON(ParameterDescription, parameterDescription_);
              DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
              DARABONBA_PTR_FROM_JSON(ParameterOperator, parameterOperator_);
              DARABONBA_PTR_FROM_JSON(ParameterPosition, parameterPosition_);
            };
            RegistrationRequestParameters() = default ;
            RegistrationRequestParameters(const RegistrationRequestParameters &) = default ;
            RegistrationRequestParameters(RegistrationRequestParameters &&) = default ;
            RegistrationRequestParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~RegistrationRequestParameters() = default ;
            RegistrationRequestParameters& operator=(const RegistrationRequestParameters &) = default ;
            RegistrationRequestParameters& operator=(RegistrationRequestParameters &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->defaultValue_ == nullptr
        && this->exampleValue_ == nullptr && this->isRequiredParameter_ == nullptr && this->parameterDataType_ == nullptr && this->parameterDescription_ == nullptr && this->parameterName_ == nullptr
        && this->parameterOperator_ == nullptr && this->parameterPosition_ == nullptr; };
            // defaultValue Field Functions 
            bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
            void deleteDefaultValue() { this->defaultValue_ = nullptr;};
            inline string getDefaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
            inline RegistrationRequestParameters& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


            // exampleValue Field Functions 
            bool hasExampleValue() const { return this->exampleValue_ != nullptr;};
            void deleteExampleValue() { this->exampleValue_ = nullptr;};
            inline string getExampleValue() const { DARABONBA_PTR_GET_DEFAULT(exampleValue_, "") };
            inline RegistrationRequestParameters& setExampleValue(string exampleValue) { DARABONBA_PTR_SET_VALUE(exampleValue_, exampleValue) };


            // isRequiredParameter Field Functions 
            bool hasIsRequiredParameter() const { return this->isRequiredParameter_ != nullptr;};
            void deleteIsRequiredParameter() { this->isRequiredParameter_ = nullptr;};
            inline bool getIsRequiredParameter() const { DARABONBA_PTR_GET_DEFAULT(isRequiredParameter_, false) };
            inline RegistrationRequestParameters& setIsRequiredParameter(bool isRequiredParameter) { DARABONBA_PTR_SET_VALUE(isRequiredParameter_, isRequiredParameter) };


            // parameterDataType Field Functions 
            bool hasParameterDataType() const { return this->parameterDataType_ != nullptr;};
            void deleteParameterDataType() { this->parameterDataType_ = nullptr;};
            inline int32_t getParameterDataType() const { DARABONBA_PTR_GET_DEFAULT(parameterDataType_, 0) };
            inline RegistrationRequestParameters& setParameterDataType(int32_t parameterDataType) { DARABONBA_PTR_SET_VALUE(parameterDataType_, parameterDataType) };


            // parameterDescription Field Functions 
            bool hasParameterDescription() const { return this->parameterDescription_ != nullptr;};
            void deleteParameterDescription() { this->parameterDescription_ = nullptr;};
            inline string getParameterDescription() const { DARABONBA_PTR_GET_DEFAULT(parameterDescription_, "") };
            inline RegistrationRequestParameters& setParameterDescription(string parameterDescription) { DARABONBA_PTR_SET_VALUE(parameterDescription_, parameterDescription) };


            // parameterName Field Functions 
            bool hasParameterName() const { return this->parameterName_ != nullptr;};
            void deleteParameterName() { this->parameterName_ = nullptr;};
            inline string getParameterName() const { DARABONBA_PTR_GET_DEFAULT(parameterName_, "") };
            inline RegistrationRequestParameters& setParameterName(string parameterName) { DARABONBA_PTR_SET_VALUE(parameterName_, parameterName) };


            // parameterOperator Field Functions 
            bool hasParameterOperator() const { return this->parameterOperator_ != nullptr;};
            void deleteParameterOperator() { this->parameterOperator_ = nullptr;};
            inline int32_t getParameterOperator() const { DARABONBA_PTR_GET_DEFAULT(parameterOperator_, 0) };
            inline RegistrationRequestParameters& setParameterOperator(int32_t parameterOperator) { DARABONBA_PTR_SET_VALUE(parameterOperator_, parameterOperator) };


            // parameterPosition Field Functions 
            bool hasParameterPosition() const { return this->parameterPosition_ != nullptr;};
            void deleteParameterPosition() { this->parameterPosition_ = nullptr;};
            inline int32_t getParameterPosition() const { DARABONBA_PTR_GET_DEFAULT(parameterPosition_, 0) };
            inline RegistrationRequestParameters& setParameterPosition(int32_t parameterPosition) { DARABONBA_PTR_SET_VALUE(parameterPosition_, parameterPosition) };


          protected:
            // The default value.
            shared_ptr<string> defaultValue_ {};
            // The sample value.
            shared_ptr<string> exampleValue_ {};
            // Indicates whether the request parameter is required.
            shared_ptr<bool> isRequiredParameter_ {};
            // The data type of the parameter. Valid values:
            // 
            // *   0: String
            // *   1: Int
            // *   2: Long
            // *   3: Float
            // *   4: Double
            // *   5: Boolean
            // *   6: StringList
            // *   7: IntList
            // *   8: LongList
            // *   9: FloatList
            // *   10: DoubleList
            // *   11: BooleanList
            shared_ptr<int32_t> parameterDataType_ {};
            // The description.
            shared_ptr<string> parameterDescription_ {};
            // The name of the parameter.
            shared_ptr<string> parameterName_ {};
            // The operator used for the value of the parameter. Valid values:
            // 
            // *   0: Equal
            // *   1: Like
            // *   2: Const
            // *   3: In
            // 
            // APIs generated in wizard mode support the Equal, Like, and In operators. APIs generated in script mode support the Equal operator. APIs generated by registration support the Equal and Const operators.
            shared_ptr<int32_t> parameterOperator_ {};
            // The position of the parameter. Valid values:
            // 
            // *   0: indicates that the parameter is in the URL path of the request.
            // *   1: indicates that the parameter is in the Query parameter of the request URL.
            // *   2: indicates that the parameter is in the request header.
            // *   3: indicates that the parameter is in the request body.
            // 
            // APIs generated in wizard or script mode support only the Query position. APIs generated by registration whose request method is GET or DELETE support the Query and Head positions. APIs generated by registration whose request method is PUT or POST support the Query, Head, and Body positions.
            shared_ptr<int32_t> parameterPosition_ {};
          };

          class RegistrationErrorCodes : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const RegistrationErrorCodes& obj) { 
              DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
              DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
              DARABONBA_PTR_TO_JSON(ErrorSolution, errorSolution_);
            };
            friend void from_json(const Darabonba::Json& j, RegistrationErrorCodes& obj) { 
              DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
              DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
              DARABONBA_PTR_FROM_JSON(ErrorSolution, errorSolution_);
            };
            RegistrationErrorCodes() = default ;
            RegistrationErrorCodes(const RegistrationErrorCodes &) = default ;
            RegistrationErrorCodes(RegistrationErrorCodes &&) = default ;
            RegistrationErrorCodes(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~RegistrationErrorCodes() = default ;
            RegistrationErrorCodes& operator=(const RegistrationErrorCodes &) = default ;
            RegistrationErrorCodes& operator=(RegistrationErrorCodes &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->errorSolution_ == nullptr; };
            // errorCode Field Functions 
            bool hasErrorCode() const { return this->errorCode_ != nullptr;};
            void deleteErrorCode() { this->errorCode_ = nullptr;};
            inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
            inline RegistrationErrorCodes& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


            // errorMessage Field Functions 
            bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
            void deleteErrorMessage() { this->errorMessage_ = nullptr;};
            inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
            inline RegistrationErrorCodes& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


            // errorSolution Field Functions 
            bool hasErrorSolution() const { return this->errorSolution_ != nullptr;};
            void deleteErrorSolution() { this->errorSolution_ = nullptr;};
            inline string getErrorSolution() const { DARABONBA_PTR_GET_DEFAULT(errorSolution_, "") };
            inline RegistrationErrorCodes& setErrorSolution(string errorSolution) { DARABONBA_PTR_SET_VALUE(errorSolution_, errorSolution) };


          protected:
            // The error code.
            shared_ptr<string> errorCode_ {};
            // The error message.
            shared_ptr<string> errorMessage_ {};
            // The solution used to fix the error.
            shared_ptr<string> errorSolution_ {};
          };

          virtual bool empty() const override { return this->failedResultSample_ == nullptr
        && this->registrationErrorCodes_ == nullptr && this->registrationRequestParameters_ == nullptr && this->serviceContentType_ == nullptr && this->serviceHost_ == nullptr && this->servicePath_ == nullptr
        && this->serviceRequestBodyDescription_ == nullptr && this->successfulResultSample_ == nullptr; };
          // failedResultSample Field Functions 
          bool hasFailedResultSample() const { return this->failedResultSample_ != nullptr;};
          void deleteFailedResultSample() { this->failedResultSample_ = nullptr;};
          inline string getFailedResultSample() const { DARABONBA_PTR_GET_DEFAULT(failedResultSample_, "") };
          inline RegistrationDetails& setFailedResultSample(string failedResultSample) { DARABONBA_PTR_SET_VALUE(failedResultSample_, failedResultSample) };


          // registrationErrorCodes Field Functions 
          bool hasRegistrationErrorCodes() const { return this->registrationErrorCodes_ != nullptr;};
          void deleteRegistrationErrorCodes() { this->registrationErrorCodes_ = nullptr;};
          inline const vector<RegistrationDetails::RegistrationErrorCodes> & getRegistrationErrorCodes() const { DARABONBA_PTR_GET_CONST(registrationErrorCodes_, vector<RegistrationDetails::RegistrationErrorCodes>) };
          inline vector<RegistrationDetails::RegistrationErrorCodes> getRegistrationErrorCodes() { DARABONBA_PTR_GET(registrationErrorCodes_, vector<RegistrationDetails::RegistrationErrorCodes>) };
          inline RegistrationDetails& setRegistrationErrorCodes(const vector<RegistrationDetails::RegistrationErrorCodes> & registrationErrorCodes) { DARABONBA_PTR_SET_VALUE(registrationErrorCodes_, registrationErrorCodes) };
          inline RegistrationDetails& setRegistrationErrorCodes(vector<RegistrationDetails::RegistrationErrorCodes> && registrationErrorCodes) { DARABONBA_PTR_SET_RVALUE(registrationErrorCodes_, registrationErrorCodes) };


          // registrationRequestParameters Field Functions 
          bool hasRegistrationRequestParameters() const { return this->registrationRequestParameters_ != nullptr;};
          void deleteRegistrationRequestParameters() { this->registrationRequestParameters_ = nullptr;};
          inline const vector<RegistrationDetails::RegistrationRequestParameters> & getRegistrationRequestParameters() const { DARABONBA_PTR_GET_CONST(registrationRequestParameters_, vector<RegistrationDetails::RegistrationRequestParameters>) };
          inline vector<RegistrationDetails::RegistrationRequestParameters> getRegistrationRequestParameters() { DARABONBA_PTR_GET(registrationRequestParameters_, vector<RegistrationDetails::RegistrationRequestParameters>) };
          inline RegistrationDetails& setRegistrationRequestParameters(const vector<RegistrationDetails::RegistrationRequestParameters> & registrationRequestParameters) { DARABONBA_PTR_SET_VALUE(registrationRequestParameters_, registrationRequestParameters) };
          inline RegistrationDetails& setRegistrationRequestParameters(vector<RegistrationDetails::RegistrationRequestParameters> && registrationRequestParameters) { DARABONBA_PTR_SET_RVALUE(registrationRequestParameters_, registrationRequestParameters) };


          // serviceContentType Field Functions 
          bool hasServiceContentType() const { return this->serviceContentType_ != nullptr;};
          void deleteServiceContentType() { this->serviceContentType_ = nullptr;};
          inline int32_t getServiceContentType() const { DARABONBA_PTR_GET_DEFAULT(serviceContentType_, 0) };
          inline RegistrationDetails& setServiceContentType(int32_t serviceContentType) { DARABONBA_PTR_SET_VALUE(serviceContentType_, serviceContentType) };


          // serviceHost Field Functions 
          bool hasServiceHost() const { return this->serviceHost_ != nullptr;};
          void deleteServiceHost() { this->serviceHost_ = nullptr;};
          inline string getServiceHost() const { DARABONBA_PTR_GET_DEFAULT(serviceHost_, "") };
          inline RegistrationDetails& setServiceHost(string serviceHost) { DARABONBA_PTR_SET_VALUE(serviceHost_, serviceHost) };


          // servicePath Field Functions 
          bool hasServicePath() const { return this->servicePath_ != nullptr;};
          void deleteServicePath() { this->servicePath_ = nullptr;};
          inline string getServicePath() const { DARABONBA_PTR_GET_DEFAULT(servicePath_, "") };
          inline RegistrationDetails& setServicePath(string servicePath) { DARABONBA_PTR_SET_VALUE(servicePath_, servicePath) };


          // serviceRequestBodyDescription Field Functions 
          bool hasServiceRequestBodyDescription() const { return this->serviceRequestBodyDescription_ != nullptr;};
          void deleteServiceRequestBodyDescription() { this->serviceRequestBodyDescription_ = nullptr;};
          inline string getServiceRequestBodyDescription() const { DARABONBA_PTR_GET_DEFAULT(serviceRequestBodyDescription_, "") };
          inline RegistrationDetails& setServiceRequestBodyDescription(string serviceRequestBodyDescription) { DARABONBA_PTR_SET_VALUE(serviceRequestBodyDescription_, serviceRequestBodyDescription) };


          // successfulResultSample Field Functions 
          bool hasSuccessfulResultSample() const { return this->successfulResultSample_ != nullptr;};
          void deleteSuccessfulResultSample() { this->successfulResultSample_ = nullptr;};
          inline string getSuccessfulResultSample() const { DARABONBA_PTR_GET_DEFAULT(successfulResultSample_, "") };
          inline RegistrationDetails& setSuccessfulResultSample(string successfulResultSample) { DARABONBA_PTR_SET_VALUE(successfulResultSample_, successfulResultSample) };


        protected:
          // The sample error response of the API.
          shared_ptr<string> failedResultSample_ {};
          // The error codes returned for the API generated by registration.
          shared_ptr<vector<RegistrationDetails::RegistrationErrorCodes>> registrationErrorCodes_ {};
          // The request parameters of the API generated by registration.
          shared_ptr<vector<RegistrationDetails::RegistrationRequestParameters>> registrationRequestParameters_ {};
          // The format in which the response of the API request is returned. Valid values: 0 and 1. The value 0 indicates the JSON format. The value 1 indicates the XML format. APIs generated in wizard or script mode support the JSON format. APIs generated by registration support the JSON and XML formats.
          shared_ptr<int32_t> serviceContentType_ {};
          // The URL of the backend service.
          shared_ptr<string> serviceHost_ {};
          // The path of the backend service.
          shared_ptr<string> servicePath_ {};
          // The description of the request body initiated to call the backend service.
          shared_ptr<string> serviceRequestBodyDescription_ {};
          // The sample success response of the API.
          shared_ptr<string> successfulResultSample_ {};
        };

        virtual bool empty() const override { return this->apiId_ == nullptr
        && this->apiMode_ == nullptr && this->apiName_ == nullptr && this->apiPath_ == nullptr && this->createdTime_ == nullptr && this->creatorId_ == nullptr
        && this->description_ == nullptr && this->groupId_ == nullptr && this->modifiedTime_ == nullptr && this->operatorId_ == nullptr && this->projectId_ == nullptr
        && this->protocols_ == nullptr && this->registrationDetails_ == nullptr && this->requestMethod_ == nullptr && this->responseContentType_ == nullptr && this->scriptDetails_ == nullptr
        && this->sqlMode_ == nullptr && this->status_ == nullptr && this->tenantId_ == nullptr && this->timeout_ == nullptr && this->visibleRange_ == nullptr
        && this->wizardDetails_ == nullptr; };
        // apiId Field Functions 
        bool hasApiId() const { return this->apiId_ != nullptr;};
        void deleteApiId() { this->apiId_ = nullptr;};
        inline int64_t getApiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, 0L) };
        inline Apis& setApiId(int64_t apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


        // apiMode Field Functions 
        bool hasApiMode() const { return this->apiMode_ != nullptr;};
        void deleteApiMode() { this->apiMode_ = nullptr;};
        inline int32_t getApiMode() const { DARABONBA_PTR_GET_DEFAULT(apiMode_, 0) };
        inline Apis& setApiMode(int32_t apiMode) { DARABONBA_PTR_SET_VALUE(apiMode_, apiMode) };


        // apiName Field Functions 
        bool hasApiName() const { return this->apiName_ != nullptr;};
        void deleteApiName() { this->apiName_ = nullptr;};
        inline string getApiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
        inline Apis& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


        // apiPath Field Functions 
        bool hasApiPath() const { return this->apiPath_ != nullptr;};
        void deleteApiPath() { this->apiPath_ = nullptr;};
        inline string getApiPath() const { DARABONBA_PTR_GET_DEFAULT(apiPath_, "") };
        inline Apis& setApiPath(string apiPath) { DARABONBA_PTR_SET_VALUE(apiPath_, apiPath) };


        // createdTime Field Functions 
        bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
        void deleteCreatedTime() { this->createdTime_ = nullptr;};
        inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
        inline Apis& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


        // creatorId Field Functions 
        bool hasCreatorId() const { return this->creatorId_ != nullptr;};
        void deleteCreatorId() { this->creatorId_ = nullptr;};
        inline string getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
        inline Apis& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Apis& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline Apis& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // modifiedTime Field Functions 
        bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
        void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
        inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
        inline Apis& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


        // operatorId Field Functions 
        bool hasOperatorId() const { return this->operatorId_ != nullptr;};
        void deleteOperatorId() { this->operatorId_ = nullptr;};
        inline string getOperatorId() const { DARABONBA_PTR_GET_DEFAULT(operatorId_, "") };
        inline Apis& setOperatorId(string operatorId) { DARABONBA_PTR_SET_VALUE(operatorId_, operatorId) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline Apis& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // protocols Field Functions 
        bool hasProtocols() const { return this->protocols_ != nullptr;};
        void deleteProtocols() { this->protocols_ = nullptr;};
        inline const vector<int32_t> & getProtocols() const { DARABONBA_PTR_GET_CONST(protocols_, vector<int32_t>) };
        inline vector<int32_t> getProtocols() { DARABONBA_PTR_GET(protocols_, vector<int32_t>) };
        inline Apis& setProtocols(const vector<int32_t> & protocols) { DARABONBA_PTR_SET_VALUE(protocols_, protocols) };
        inline Apis& setProtocols(vector<int32_t> && protocols) { DARABONBA_PTR_SET_RVALUE(protocols_, protocols) };


        // registrationDetails Field Functions 
        bool hasRegistrationDetails() const { return this->registrationDetails_ != nullptr;};
        void deleteRegistrationDetails() { this->registrationDetails_ = nullptr;};
        inline const Apis::RegistrationDetails & getRegistrationDetails() const { DARABONBA_PTR_GET_CONST(registrationDetails_, Apis::RegistrationDetails) };
        inline Apis::RegistrationDetails getRegistrationDetails() { DARABONBA_PTR_GET(registrationDetails_, Apis::RegistrationDetails) };
        inline Apis& setRegistrationDetails(const Apis::RegistrationDetails & registrationDetails) { DARABONBA_PTR_SET_VALUE(registrationDetails_, registrationDetails) };
        inline Apis& setRegistrationDetails(Apis::RegistrationDetails && registrationDetails) { DARABONBA_PTR_SET_RVALUE(registrationDetails_, registrationDetails) };


        // requestMethod Field Functions 
        bool hasRequestMethod() const { return this->requestMethod_ != nullptr;};
        void deleteRequestMethod() { this->requestMethod_ = nullptr;};
        inline int32_t getRequestMethod() const { DARABONBA_PTR_GET_DEFAULT(requestMethod_, 0) };
        inline Apis& setRequestMethod(int32_t requestMethod) { DARABONBA_PTR_SET_VALUE(requestMethod_, requestMethod) };


        // responseContentType Field Functions 
        bool hasResponseContentType() const { return this->responseContentType_ != nullptr;};
        void deleteResponseContentType() { this->responseContentType_ = nullptr;};
        inline int32_t getResponseContentType() const { DARABONBA_PTR_GET_DEFAULT(responseContentType_, 0) };
        inline Apis& setResponseContentType(int32_t responseContentType) { DARABONBA_PTR_SET_VALUE(responseContentType_, responseContentType) };


        // scriptDetails Field Functions 
        bool hasScriptDetails() const { return this->scriptDetails_ != nullptr;};
        void deleteScriptDetails() { this->scriptDetails_ = nullptr;};
        inline const Apis::ScriptDetails & getScriptDetails() const { DARABONBA_PTR_GET_CONST(scriptDetails_, Apis::ScriptDetails) };
        inline Apis::ScriptDetails getScriptDetails() { DARABONBA_PTR_GET(scriptDetails_, Apis::ScriptDetails) };
        inline Apis& setScriptDetails(const Apis::ScriptDetails & scriptDetails) { DARABONBA_PTR_SET_VALUE(scriptDetails_, scriptDetails) };
        inline Apis& setScriptDetails(Apis::ScriptDetails && scriptDetails) { DARABONBA_PTR_SET_RVALUE(scriptDetails_, scriptDetails) };


        // sqlMode Field Functions 
        bool hasSqlMode() const { return this->sqlMode_ != nullptr;};
        void deleteSqlMode() { this->sqlMode_ = nullptr;};
        inline int32_t getSqlMode() const { DARABONBA_PTR_GET_DEFAULT(sqlMode_, 0) };
        inline Apis& setSqlMode(int32_t sqlMode) { DARABONBA_PTR_SET_VALUE(sqlMode_, sqlMode) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline Apis& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tenantId Field Functions 
        bool hasTenantId() const { return this->tenantId_ != nullptr;};
        void deleteTenantId() { this->tenantId_ = nullptr;};
        inline int64_t getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
        inline Apis& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


        // timeout Field Functions 
        bool hasTimeout() const { return this->timeout_ != nullptr;};
        void deleteTimeout() { this->timeout_ = nullptr;};
        inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
        inline Apis& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


        // visibleRange Field Functions 
        bool hasVisibleRange() const { return this->visibleRange_ != nullptr;};
        void deleteVisibleRange() { this->visibleRange_ = nullptr;};
        inline int32_t getVisibleRange() const { DARABONBA_PTR_GET_DEFAULT(visibleRange_, 0) };
        inline Apis& setVisibleRange(int32_t visibleRange) { DARABONBA_PTR_SET_VALUE(visibleRange_, visibleRange) };


        // wizardDetails Field Functions 
        bool hasWizardDetails() const { return this->wizardDetails_ != nullptr;};
        void deleteWizardDetails() { this->wizardDetails_ = nullptr;};
        inline const Apis::WizardDetails & getWizardDetails() const { DARABONBA_PTR_GET_CONST(wizardDetails_, Apis::WizardDetails) };
        inline Apis::WizardDetails getWizardDetails() { DARABONBA_PTR_GET(wizardDetails_, Apis::WizardDetails) };
        inline Apis& setWizardDetails(const Apis::WizardDetails & wizardDetails) { DARABONBA_PTR_SET_VALUE(wizardDetails_, wizardDetails) };
        inline Apis& setWizardDetails(Apis::WizardDetails && wizardDetails) { DARABONBA_PTR_SET_RVALUE(wizardDetails_, wizardDetails) };


      protected:
        // The API ID.
        shared_ptr<int64_t> apiId_ {};
        // The type of the API. Valid values: 0, 1, and 2. The value 0 indicates that the API is generated in wizard mode. The value 1 indicates that the API is generated in script mode. The value 2 indicates that the API is generated by registration.
        shared_ptr<int32_t> apiMode_ {};
        // The name of the API.
        shared_ptr<string> apiName_ {};
        // The path of the API.
        shared_ptr<string> apiPath_ {};
        // The time when the API was created.
        shared_ptr<string> createdTime_ {};
        // The ID of the Alibaba Cloud account used by the creator of the API.
        shared_ptr<string> creatorId_ {};
        // The description.
        shared_ptr<string> description_ {};
        // The group ID.
        shared_ptr<string> groupId_ {};
        // The time when the API was last modified.
        shared_ptr<string> modifiedTime_ {};
        // The ID of the Alibaba Cloud account used by the user who last modified the API.
        shared_ptr<string> operatorId_ {};
        // The workspace ID.
        shared_ptr<int64_t> projectId_ {};
        // The protocol used by the API. Valid values: 0 and 1. The value 0 indicates HTTP. The value 1 indicates HTTPS.
        shared_ptr<vector<int32_t>> protocols_ {};
        // The details of the API generated by registration. This parameter is returned only if the API is generated by registration.
        shared_ptr<Apis::RegistrationDetails> registrationDetails_ {};
        // The request method of the API. Valid values: 0, 1, 2, and 3. The value 0 indicates the GET method. The value 1 indicates the POST method. The value 2 indicates the PUT method. The value 3 indicates the DELETE method. APIs generated in wizard or script mode support the GET and POST methods. APIs generated by registration support the GET, POST, PUT, and DELETE methods.
        shared_ptr<int32_t> requestMethod_ {};
        // The format in which the response of the API request is returned. Valid values: 0 and 1. The value 0 indicates the JSON format. The value 1 indicates the XML format. APIs generated in wizard or script mode support the JSON format. APIs generated by registration support the JSON and XML formats.
        shared_ptr<int32_t> responseContentType_ {};
        // The details of the API generated in script mode. This parameter is returned only if the API is generated in script mode.
        shared_ptr<Apis::ScriptDetails> scriptDetails_ {};
        // SQL mode. 0: Basic SQL; 1: Advanced SQL.
        shared_ptr<int32_t> sqlMode_ {};
        // The status of the API. Valid values: 0 and 1. The value 0 indicates that the API is not published. The value 1 indicates that the API is published.
        shared_ptr<int32_t> status_ {};
        // The tenant ID.
        shared_ptr<int64_t> tenantId_ {};
        // The timeout period of the API request. Unit: milliseconds.
        shared_ptr<int32_t> timeout_ {};
        // The scope in which the API is visible. Valid values: 0 and 1. The value 0 indicates that the API is visible within the workspace. The value 1 indicates that the API is visible only to its owner.
        shared_ptr<int32_t> visibleRange_ {};
        // The details of the API generated in wizard mode. This parameter is returned only if the API is generated in wizard mode.
        shared_ptr<Apis::WizardDetails> wizardDetails_ {};
      };

      virtual bool empty() const override { return this->apis_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // apis Field Functions 
      bool hasApis() const { return this->apis_ != nullptr;};
      void deleteApis() { this->apis_ = nullptr;};
      inline const vector<Data::Apis> & getApis() const { DARABONBA_PTR_GET_CONST(apis_, vector<Data::Apis>) };
      inline vector<Data::Apis> getApis() { DARABONBA_PTR_GET(apis_, vector<Data::Apis>) };
      inline Data& setApis(const vector<Data::Apis> & apis) { DARABONBA_PTR_SET_VALUE(apis_, apis) };
      inline Data& setApis(vector<Data::Apis> && apis) { DARABONBA_PTR_SET_RVALUE(apis_, apis) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // Information about published APIs.
      shared_ptr<vector<Data::Apis>> apis_ {};
      // The page number. The value of this parameter is the same as that of the PageNumber parameter in the request.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page. Valid values: 1 to 100. Default value: 10.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListDataServicePublishedApisResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListDataServicePublishedApisResponseBody::Data) };
    inline ListDataServicePublishedApisResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListDataServicePublishedApisResponseBody::Data) };
    inline ListDataServicePublishedApisResponseBody& setData(const ListDataServicePublishedApisResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListDataServicePublishedApisResponseBody& setData(ListDataServicePublishedApisResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListDataServicePublishedApisResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListDataServicePublishedApisResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListDataServicePublishedApisResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataServicePublishedApisResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListDataServicePublishedApisResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The data returned.
    shared_ptr<ListDataServicePublishedApisResponseBody::Data> data_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMessage_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
