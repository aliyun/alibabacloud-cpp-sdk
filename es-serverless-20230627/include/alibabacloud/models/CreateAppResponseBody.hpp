// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EsServerless20230627
{
namespace Models
{
  class CreateAppResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    CreateAppResponseBody() = default ;
    CreateAppResponseBody(const CreateAppResponseBody &) = default ;
    CreateAppResponseBody(CreateAppResponseBody &&) = default ;
    CreateAppResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppResponseBody() = default ;
    CreateAppResponseBody& operator=(const CreateAppResponseBody &) = default ;
    CreateAppResponseBody& operator=(CreateAppResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(appId, appId_);
        DARABONBA_PTR_TO_JSON(instaneId, instaneId_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(appId, appId_);
        DARABONBA_PTR_FROM_JSON(instaneId, instaneId_);
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
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->instaneId_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline Result& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // instaneId Field Functions 
      bool hasInstaneId() const { return this->instaneId_ != nullptr;};
      void deleteInstaneId() { this->instaneId_ = nullptr;};
      inline string getInstaneId() const { DARABONBA_PTR_GET_DEFAULT(instaneId_, "") };
      inline Result& setInstaneId(string instaneId) { DARABONBA_PTR_SET_VALUE(instaneId_, instaneId) };


    protected:
      shared_ptr<string> appId_ {};
      shared_ptr<string> instaneId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAppResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const CreateAppResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, CreateAppResponseBody::Result) };
    inline CreateAppResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, CreateAppResponseBody::Result) };
    inline CreateAppResponseBody& setResult(const CreateAppResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline CreateAppResponseBody& setResult(CreateAppResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<CreateAppResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EsServerless20230627
#endif
