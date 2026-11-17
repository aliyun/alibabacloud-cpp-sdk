// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PREVIEWLOGICALMODELUPDATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PREVIEWLOGICALMODELUPDATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class PreviewLogicalModelUpdateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreviewLogicalModelUpdateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, PreviewLogicalModelUpdateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    PreviewLogicalModelUpdateResponseBody() = default ;
    PreviewLogicalModelUpdateResponseBody(const PreviewLogicalModelUpdateResponseBody &) = default ;
    PreviewLogicalModelUpdateResponseBody(PreviewLogicalModelUpdateResponseBody &&) = default ;
    PreviewLogicalModelUpdateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreviewLogicalModelUpdateResponseBody() = default ;
    PreviewLogicalModelUpdateResponseBody& operator=(const PreviewLogicalModelUpdateResponseBody &) = default ;
    PreviewLogicalModelUpdateResponseBody& operator=(PreviewLogicalModelUpdateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(apis, apis_);
        DARABONBA_PTR_TO_JSON(confirmationToken, confirmationToken_);
        DARABONBA_PTR_TO_JSON(revision, revision_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(apis, apis_);
        DARABONBA_PTR_FROM_JSON(confirmationToken, confirmationToken_);
        DARABONBA_PTR_FROM_JSON(revision, revision_);
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
          DARABONBA_PTR_TO_JSON(configuration, configuration_);
          DARABONBA_PTR_TO_JSON(environmentId, environmentId_);
          DARABONBA_PTR_TO_JSON(errors, errors_);
          DARABONBA_PTR_TO_JSON(httpApiId, httpApiId_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(revision, revision_);
        };
        friend void from_json(const Darabonba::Json& j, Apis& obj) { 
          DARABONBA_PTR_FROM_JSON(configuration, configuration_);
          DARABONBA_PTR_FROM_JSON(environmentId, environmentId_);
          DARABONBA_PTR_FROM_JSON(errors, errors_);
          DARABONBA_PTR_FROM_JSON(httpApiId, httpApiId_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(revision, revision_);
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
        virtual bool empty() const override { return this->configuration_ == nullptr
        && this->environmentId_ == nullptr && this->errors_ == nullptr && this->httpApiId_ == nullptr && this->name_ == nullptr && this->revision_ == nullptr; };
        // configuration Field Functions 
        bool hasConfiguration() const { return this->configuration_ != nullptr;};
        void deleteConfiguration() { this->configuration_ = nullptr;};
        inline string getConfiguration() const { DARABONBA_PTR_GET_DEFAULT(configuration_, "") };
        inline Apis& setConfiguration(string configuration) { DARABONBA_PTR_SET_VALUE(configuration_, configuration) };


        // environmentId Field Functions 
        bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
        void deleteEnvironmentId() { this->environmentId_ = nullptr;};
        inline string getEnvironmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
        inline Apis& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


        // errors Field Functions 
        bool hasErrors() const { return this->errors_ != nullptr;};
        void deleteErrors() { this->errors_ = nullptr;};
        inline const vector<string> & getErrors() const { DARABONBA_PTR_GET_CONST(errors_, vector<string>) };
        inline vector<string> getErrors() { DARABONBA_PTR_GET(errors_, vector<string>) };
        inline Apis& setErrors(const vector<string> & errors) { DARABONBA_PTR_SET_VALUE(errors_, errors) };
        inline Apis& setErrors(vector<string> && errors) { DARABONBA_PTR_SET_RVALUE(errors_, errors) };


        // httpApiId Field Functions 
        bool hasHttpApiId() const { return this->httpApiId_ != nullptr;};
        void deleteHttpApiId() { this->httpApiId_ = nullptr;};
        inline string getHttpApiId() const { DARABONBA_PTR_GET_DEFAULT(httpApiId_, "") };
        inline Apis& setHttpApiId(string httpApiId) { DARABONBA_PTR_SET_VALUE(httpApiId_, httpApiId) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Apis& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // revision Field Functions 
        bool hasRevision() const { return this->revision_ != nullptr;};
        void deleteRevision() { this->revision_ = nullptr;};
        inline string getRevision() const { DARABONBA_PTR_GET_DEFAULT(revision_, "") };
        inline Apis& setRevision(string revision) { DARABONBA_PTR_SET_VALUE(revision_, revision) };


      protected:
        // The configuration status. Valid values: Draft and Published.
        shared_ptr<string> configuration_ {};
        // The referenced environment.
        shared_ptr<string> environmentId_ {};
        // The blocking reasons, excluding the API publishing results.
        shared_ptr<vector<string>> errors_ {};
        // The referenced API.
        shared_ptr<string> httpApiId_ {};
        // The name of the API.
        shared_ptr<string> name_ {};
        // The revision of the successfully published reference.
        shared_ptr<string> revision_ {};
      };

      virtual bool empty() const override { return this->apis_ == nullptr
        && this->confirmationToken_ == nullptr && this->revision_ == nullptr; };
      // apis Field Functions 
      bool hasApis() const { return this->apis_ != nullptr;};
      void deleteApis() { this->apis_ = nullptr;};
      inline const vector<Data::Apis> & getApis() const { DARABONBA_PTR_GET_CONST(apis_, vector<Data::Apis>) };
      inline vector<Data::Apis> getApis() { DARABONBA_PTR_GET(apis_, vector<Data::Apis>) };
      inline Data& setApis(const vector<Data::Apis> & apis) { DARABONBA_PTR_SET_VALUE(apis_, apis) };
      inline Data& setApis(vector<Data::Apis> && apis) { DARABONBA_PTR_SET_RVALUE(apis_, apis) };


      // confirmationToken Field Functions 
      bool hasConfirmationToken() const { return this->confirmationToken_ != nullptr;};
      void deleteConfirmationToken() { this->confirmationToken_ = nullptr;};
      inline string getConfirmationToken() const { DARABONBA_PTR_GET_DEFAULT(confirmationToken_, "") };
      inline Data& setConfirmationToken(string confirmationToken) { DARABONBA_PTR_SET_VALUE(confirmationToken_, confirmationToken) };


      // revision Field Functions 
      bool hasRevision() const { return this->revision_ != nullptr;};
      void deleteRevision() { this->revision_ = nullptr;};
      inline int64_t getRevision() const { DARABONBA_PTR_GET_DEFAULT(revision_, 0L) };
      inline Data& setRevision(int64_t revision) { DARABONBA_PTR_SET_VALUE(revision_, revision) };


    protected:
      // The list of impacted items, not the delivery result.
      shared_ptr<vector<Data::Apis>> apis_ {};
      // A one-time confirmation token that is bound to the configuration and its dependencies or references. If any changes occur, a new preview is required.
      shared_ptr<string> confirmationToken_ {};
      // The object revision used for the final conditional write.
      shared_ptr<int64_t> revision_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline PreviewLogicalModelUpdateResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const PreviewLogicalModelUpdateResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, PreviewLogicalModelUpdateResponseBody::Data) };
    inline PreviewLogicalModelUpdateResponseBody::Data getData() { DARABONBA_PTR_GET(data_, PreviewLogicalModelUpdateResponseBody::Data) };
    inline PreviewLogicalModelUpdateResponseBody& setData(const PreviewLogicalModelUpdateResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline PreviewLogicalModelUpdateResponseBody& setData(PreviewLogicalModelUpdateResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline PreviewLogicalModelUpdateResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PreviewLogicalModelUpdateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response status code. Ok is returned for successful requests, and a specific business error code is returned for failed requests.
    shared_ptr<string> code_ {};
    // The business result returned by the logical model operation.
    shared_ptr<PreviewLogicalModelUpdateResponseBody::Data> data_ {};
    // The response message, which describes the result of the request.
    shared_ptr<string> message_ {};
    // The request ID, which is generated by the system to trace the call.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
