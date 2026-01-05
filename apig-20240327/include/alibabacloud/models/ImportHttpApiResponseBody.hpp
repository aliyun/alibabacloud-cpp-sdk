// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTHTTPAPIRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_IMPORTHTTPAPIRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/HttpApiApiInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ImportHttpApiResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportHttpApiResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ImportHttpApiResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ImportHttpApiResponseBody() = default ;
    ImportHttpApiResponseBody(const ImportHttpApiResponseBody &) = default ;
    ImportHttpApiResponseBody(ImportHttpApiResponseBody &&) = default ;
    ImportHttpApiResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportHttpApiResponseBody() = default ;
    ImportHttpApiResponseBody& operator=(const ImportHttpApiResponseBody &) = default ;
    ImportHttpApiResponseBody& operator=(ImportHttpApiResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(dryRunInfo, dryRunInfo_);
        DARABONBA_PTR_TO_JSON(httpApiId, httpApiId_);
        DARABONBA_PTR_TO_JSON(name, name_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(dryRunInfo, dryRunInfo_);
        DARABONBA_PTR_FROM_JSON(httpApiId, httpApiId_);
        DARABONBA_PTR_FROM_JSON(name, name_);
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
      class DryRunInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DryRunInfo& obj) { 
          DARABONBA_PTR_TO_JSON(errorMessages, errorMessages_);
          DARABONBA_PTR_TO_JSON(existHttpApiInfo, existHttpApiInfo_);
          DARABONBA_PTR_TO_JSON(failureComponents, failureComponents_);
          DARABONBA_PTR_TO_JSON(failureOperations, failureOperations_);
          DARABONBA_PTR_TO_JSON(successComponents, successComponents_);
          DARABONBA_PTR_TO_JSON(successOperations, successOperations_);
          DARABONBA_PTR_TO_JSON(warningMessages, warningMessages_);
        };
        friend void from_json(const Darabonba::Json& j, DryRunInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(errorMessages, errorMessages_);
          DARABONBA_PTR_FROM_JSON(existHttpApiInfo, existHttpApiInfo_);
          DARABONBA_PTR_FROM_JSON(failureComponents, failureComponents_);
          DARABONBA_PTR_FROM_JSON(failureOperations, failureOperations_);
          DARABONBA_PTR_FROM_JSON(successComponents, successComponents_);
          DARABONBA_PTR_FROM_JSON(successOperations, successOperations_);
          DARABONBA_PTR_FROM_JSON(warningMessages, warningMessages_);
        };
        DryRunInfo() = default ;
        DryRunInfo(const DryRunInfo &) = default ;
        DryRunInfo(DryRunInfo &&) = default ;
        DryRunInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DryRunInfo() = default ;
        DryRunInfo& operator=(const DryRunInfo &) = default ;
        DryRunInfo& operator=(DryRunInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SuccessOperations : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SuccessOperations& obj) { 
            DARABONBA_PTR_TO_JSON(action, action_);
            DARABONBA_PTR_TO_JSON(method, method_);
            DARABONBA_PTR_TO_JSON(name, name_);
            DARABONBA_PTR_TO_JSON(path, path_);
          };
          friend void from_json(const Darabonba::Json& j, SuccessOperations& obj) { 
            DARABONBA_PTR_FROM_JSON(action, action_);
            DARABONBA_PTR_FROM_JSON(method, method_);
            DARABONBA_PTR_FROM_JSON(name, name_);
            DARABONBA_PTR_FROM_JSON(path, path_);
          };
          SuccessOperations() = default ;
          SuccessOperations(const SuccessOperations &) = default ;
          SuccessOperations(SuccessOperations &&) = default ;
          SuccessOperations(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SuccessOperations() = default ;
          SuccessOperations& operator=(const SuccessOperations &) = default ;
          SuccessOperations& operator=(SuccessOperations &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->action_ == nullptr
        && this->method_ == nullptr && this->name_ == nullptr && this->path_ == nullptr; };
          // action Field Functions 
          bool hasAction() const { return this->action_ != nullptr;};
          void deleteAction() { this->action_ = nullptr;};
          inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
          inline SuccessOperations& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


          // method Field Functions 
          bool hasMethod() const { return this->method_ != nullptr;};
          void deleteMethod() { this->method_ = nullptr;};
          inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
          inline SuccessOperations& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline SuccessOperations& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // path Field Functions 
          bool hasPath() const { return this->path_ != nullptr;};
          void deletePath() { this->path_ = nullptr;};
          inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
          inline SuccessOperations& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


        protected:
          // The action that will be performed for the operation after the dry run.
          // 
          // *   Create: The operation is created.
          // *   Update: The operation is updated.
          shared_ptr<string> action_ {};
          // The HTTP method of the operation.
          shared_ptr<string> method_ {};
          // The operation name.
          shared_ptr<string> name_ {};
          // The operation path.
          shared_ptr<string> path_ {};
        };

        class SuccessComponents : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SuccessComponents& obj) { 
            DARABONBA_PTR_TO_JSON(action, action_);
            DARABONBA_PTR_TO_JSON(name, name_);
          };
          friend void from_json(const Darabonba::Json& j, SuccessComponents& obj) { 
            DARABONBA_PTR_FROM_JSON(action, action_);
            DARABONBA_PTR_FROM_JSON(name, name_);
          };
          SuccessComponents() = default ;
          SuccessComponents(const SuccessComponents &) = default ;
          SuccessComponents(SuccessComponents &&) = default ;
          SuccessComponents(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SuccessComponents() = default ;
          SuccessComponents& operator=(const SuccessComponents &) = default ;
          SuccessComponents& operator=(SuccessComponents &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->action_ == nullptr
        && this->name_ == nullptr; };
          // action Field Functions 
          bool hasAction() const { return this->action_ != nullptr;};
          void deleteAction() { this->action_ = nullptr;};
          inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
          inline SuccessComponents& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline SuccessComponents& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          // The action that will be performed for the data struct after the dry run.
          // 
          // *   Create: The data struct is created.
          // *   Update: The data struct is updated.
          shared_ptr<string> action_ {};
          // The data struct name.
          shared_ptr<string> name_ {};
        };

        class FailureOperations : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FailureOperations& obj) { 
            DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
            DARABONBA_PTR_TO_JSON(method, method_);
            DARABONBA_PTR_TO_JSON(path, path_);
          };
          friend void from_json(const Darabonba::Json& j, FailureOperations& obj) { 
            DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
            DARABONBA_PTR_FROM_JSON(method, method_);
            DARABONBA_PTR_FROM_JSON(path, path_);
          };
          FailureOperations() = default ;
          FailureOperations(const FailureOperations &) = default ;
          FailureOperations(FailureOperations &&) = default ;
          FailureOperations(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FailureOperations() = default ;
          FailureOperations& operator=(const FailureOperations &) = default ;
          FailureOperations& operator=(FailureOperations &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->method_ == nullptr && this->path_ == nullptr; };
          // errorMessage Field Functions 
          bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
          void deleteErrorMessage() { this->errorMessage_ = nullptr;};
          inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
          inline FailureOperations& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


          // method Field Functions 
          bool hasMethod() const { return this->method_ != nullptr;};
          void deleteMethod() { this->method_ = nullptr;};
          inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
          inline FailureOperations& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


          // path Field Functions 
          bool hasPath() const { return this->path_ != nullptr;};
          void deletePath() { this->path_ = nullptr;};
          inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
          inline FailureOperations& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


        protected:
          // The error message.
          shared_ptr<string> errorMessage_ {};
          // The HTTP method of the operation.
          shared_ptr<string> method_ {};
          // The operation path.
          shared_ptr<string> path_ {};
        };

        class FailureComponents : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FailureComponents& obj) { 
            DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
            DARABONBA_PTR_TO_JSON(name, name_);
          };
          friend void from_json(const Darabonba::Json& j, FailureComponents& obj) { 
            DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
            DARABONBA_PTR_FROM_JSON(name, name_);
          };
          FailureComponents() = default ;
          FailureComponents(const FailureComponents &) = default ;
          FailureComponents(FailureComponents &&) = default ;
          FailureComponents(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FailureComponents() = default ;
          FailureComponents& operator=(const FailureComponents &) = default ;
          FailureComponents& operator=(FailureComponents &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->name_ == nullptr; };
          // errorMessage Field Functions 
          bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
          void deleteErrorMessage() { this->errorMessage_ = nullptr;};
          inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
          inline FailureComponents& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline FailureComponents& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          // The error message.
          shared_ptr<string> errorMessage_ {};
          // The data struct name.
          shared_ptr<string> name_ {};
        };

        virtual bool empty() const override { return this->errorMessages_ == nullptr
        && this->existHttpApiInfo_ == nullptr && this->failureComponents_ == nullptr && this->failureOperations_ == nullptr && this->successComponents_ == nullptr && this->successOperations_ == nullptr
        && this->warningMessages_ == nullptr; };
        // errorMessages Field Functions 
        bool hasErrorMessages() const { return this->errorMessages_ != nullptr;};
        void deleteErrorMessages() { this->errorMessages_ = nullptr;};
        inline const vector<string> & getErrorMessages() const { DARABONBA_PTR_GET_CONST(errorMessages_, vector<string>) };
        inline vector<string> getErrorMessages() { DARABONBA_PTR_GET(errorMessages_, vector<string>) };
        inline DryRunInfo& setErrorMessages(const vector<string> & errorMessages) { DARABONBA_PTR_SET_VALUE(errorMessages_, errorMessages) };
        inline DryRunInfo& setErrorMessages(vector<string> && errorMessages) { DARABONBA_PTR_SET_RVALUE(errorMessages_, errorMessages) };


        // existHttpApiInfo Field Functions 
        bool hasExistHttpApiInfo() const { return this->existHttpApiInfo_ != nullptr;};
        void deleteExistHttpApiInfo() { this->existHttpApiInfo_ = nullptr;};
        inline const HttpApiApiInfo & getExistHttpApiInfo() const { DARABONBA_PTR_GET_CONST(existHttpApiInfo_, HttpApiApiInfo) };
        inline HttpApiApiInfo getExistHttpApiInfo() { DARABONBA_PTR_GET(existHttpApiInfo_, HttpApiApiInfo) };
        inline DryRunInfo& setExistHttpApiInfo(const HttpApiApiInfo & existHttpApiInfo) { DARABONBA_PTR_SET_VALUE(existHttpApiInfo_, existHttpApiInfo) };
        inline DryRunInfo& setExistHttpApiInfo(HttpApiApiInfo && existHttpApiInfo) { DARABONBA_PTR_SET_RVALUE(existHttpApiInfo_, existHttpApiInfo) };


        // failureComponents Field Functions 
        bool hasFailureComponents() const { return this->failureComponents_ != nullptr;};
        void deleteFailureComponents() { this->failureComponents_ = nullptr;};
        inline const vector<DryRunInfo::FailureComponents> & getFailureComponents() const { DARABONBA_PTR_GET_CONST(failureComponents_, vector<DryRunInfo::FailureComponents>) };
        inline vector<DryRunInfo::FailureComponents> getFailureComponents() { DARABONBA_PTR_GET(failureComponents_, vector<DryRunInfo::FailureComponents>) };
        inline DryRunInfo& setFailureComponents(const vector<DryRunInfo::FailureComponents> & failureComponents) { DARABONBA_PTR_SET_VALUE(failureComponents_, failureComponents) };
        inline DryRunInfo& setFailureComponents(vector<DryRunInfo::FailureComponents> && failureComponents) { DARABONBA_PTR_SET_RVALUE(failureComponents_, failureComponents) };


        // failureOperations Field Functions 
        bool hasFailureOperations() const { return this->failureOperations_ != nullptr;};
        void deleteFailureOperations() { this->failureOperations_ = nullptr;};
        inline const vector<DryRunInfo::FailureOperations> & getFailureOperations() const { DARABONBA_PTR_GET_CONST(failureOperations_, vector<DryRunInfo::FailureOperations>) };
        inline vector<DryRunInfo::FailureOperations> getFailureOperations() { DARABONBA_PTR_GET(failureOperations_, vector<DryRunInfo::FailureOperations>) };
        inline DryRunInfo& setFailureOperations(const vector<DryRunInfo::FailureOperations> & failureOperations) { DARABONBA_PTR_SET_VALUE(failureOperations_, failureOperations) };
        inline DryRunInfo& setFailureOperations(vector<DryRunInfo::FailureOperations> && failureOperations) { DARABONBA_PTR_SET_RVALUE(failureOperations_, failureOperations) };


        // successComponents Field Functions 
        bool hasSuccessComponents() const { return this->successComponents_ != nullptr;};
        void deleteSuccessComponents() { this->successComponents_ = nullptr;};
        inline const vector<DryRunInfo::SuccessComponents> & getSuccessComponents() const { DARABONBA_PTR_GET_CONST(successComponents_, vector<DryRunInfo::SuccessComponents>) };
        inline vector<DryRunInfo::SuccessComponents> getSuccessComponents() { DARABONBA_PTR_GET(successComponents_, vector<DryRunInfo::SuccessComponents>) };
        inline DryRunInfo& setSuccessComponents(const vector<DryRunInfo::SuccessComponents> & successComponents) { DARABONBA_PTR_SET_VALUE(successComponents_, successComponents) };
        inline DryRunInfo& setSuccessComponents(vector<DryRunInfo::SuccessComponents> && successComponents) { DARABONBA_PTR_SET_RVALUE(successComponents_, successComponents) };


        // successOperations Field Functions 
        bool hasSuccessOperations() const { return this->successOperations_ != nullptr;};
        void deleteSuccessOperations() { this->successOperations_ = nullptr;};
        inline const vector<DryRunInfo::SuccessOperations> & getSuccessOperations() const { DARABONBA_PTR_GET_CONST(successOperations_, vector<DryRunInfo::SuccessOperations>) };
        inline vector<DryRunInfo::SuccessOperations> getSuccessOperations() { DARABONBA_PTR_GET(successOperations_, vector<DryRunInfo::SuccessOperations>) };
        inline DryRunInfo& setSuccessOperations(const vector<DryRunInfo::SuccessOperations> & successOperations) { DARABONBA_PTR_SET_VALUE(successOperations_, successOperations) };
        inline DryRunInfo& setSuccessOperations(vector<DryRunInfo::SuccessOperations> && successOperations) { DARABONBA_PTR_SET_RVALUE(successOperations_, successOperations) };


        // warningMessages Field Functions 
        bool hasWarningMessages() const { return this->warningMessages_ != nullptr;};
        void deleteWarningMessages() { this->warningMessages_ = nullptr;};
        inline const vector<string> & getWarningMessages() const { DARABONBA_PTR_GET_CONST(warningMessages_, vector<string>) };
        inline vector<string> getWarningMessages() { DARABONBA_PTR_GET(warningMessages_, vector<string>) };
        inline DryRunInfo& setWarningMessages(const vector<string> & warningMessages) { DARABONBA_PTR_SET_VALUE(warningMessages_, warningMessages) };
        inline DryRunInfo& setWarningMessages(vector<string> && warningMessages) { DARABONBA_PTR_SET_RVALUE(warningMessages_, warningMessages) };


      protected:
        // The error messages. If an error message is returned, the API fails to be imported.
        shared_ptr<vector<string>> errorMessages_ {};
        // The existing APIs. If an existing API is returned, the import updates the existing API.
        shared_ptr<HttpApiApiInfo> existHttpApiInfo_ {};
        // The data structs that fail the dry run.
        shared_ptr<vector<DryRunInfo::FailureComponents>> failureComponents_ {};
        // The operations that fail the dry run.
        shared_ptr<vector<DryRunInfo::FailureOperations>> failureOperations_ {};
        // The data structs that pass the dry run.
        shared_ptr<vector<DryRunInfo::SuccessComponents>> successComponents_ {};
        // The operations that pass the dry run.
        shared_ptr<vector<DryRunInfo::SuccessOperations>> successOperations_ {};
        // The alerts. If an alert is returned, specific operations or structs may fail to be imported.
        shared_ptr<vector<string>> warningMessages_ {};
      };

      virtual bool empty() const override { return this->dryRunInfo_ == nullptr
        && this->httpApiId_ == nullptr && this->name_ == nullptr; };
      // dryRunInfo Field Functions 
      bool hasDryRunInfo() const { return this->dryRunInfo_ != nullptr;};
      void deleteDryRunInfo() { this->dryRunInfo_ = nullptr;};
      inline const Data::DryRunInfo & getDryRunInfo() const { DARABONBA_PTR_GET_CONST(dryRunInfo_, Data::DryRunInfo) };
      inline Data::DryRunInfo getDryRunInfo() { DARABONBA_PTR_GET(dryRunInfo_, Data::DryRunInfo) };
      inline Data& setDryRunInfo(const Data::DryRunInfo & dryRunInfo) { DARABONBA_PTR_SET_VALUE(dryRunInfo_, dryRunInfo) };
      inline Data& setDryRunInfo(Data::DryRunInfo && dryRunInfo) { DARABONBA_PTR_SET_RVALUE(dryRunInfo_, dryRunInfo) };


      // httpApiId Field Functions 
      bool hasHttpApiId() const { return this->httpApiId_ != nullptr;};
      void deleteHttpApiId() { this->httpApiId_ = nullptr;};
      inline string getHttpApiId() const { DARABONBA_PTR_GET_DEFAULT(httpApiId_, "") };
      inline Data& setHttpApiId(string httpApiId) { DARABONBA_PTR_SET_VALUE(httpApiId_, httpApiId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The dry run result.
      shared_ptr<Data::DryRunInfo> dryRunInfo_ {};
      // The API ID.
      shared_ptr<string> httpApiId_ {};
      // The API name.
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ImportHttpApiResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ImportHttpApiResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ImportHttpApiResponseBody::Data) };
    inline ImportHttpApiResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ImportHttpApiResponseBody::Data) };
    inline ImportHttpApiResponseBody& setData(const ImportHttpApiResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ImportHttpApiResponseBody& setData(ImportHttpApiResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ImportHttpApiResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ImportHttpApiResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The API information.
    shared_ptr<ImportHttpApiResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
