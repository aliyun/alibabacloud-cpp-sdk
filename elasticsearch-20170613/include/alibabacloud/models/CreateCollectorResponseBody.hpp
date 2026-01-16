// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOLLECTORRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECOLLECTORRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class CreateCollectorResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCollectorResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCollectorResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    CreateCollectorResponseBody() = default ;
    CreateCollectorResponseBody(const CreateCollectorResponseBody &) = default ;
    CreateCollectorResponseBody(CreateCollectorResponseBody &&) = default ;
    CreateCollectorResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCollectorResponseBody() = default ;
    CreateCollectorResponseBody& operator=(const CreateCollectorResponseBody &) = default ;
    CreateCollectorResponseBody& operator=(CreateCollectorResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(resId, resId_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(resId, resId_);
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
      virtual bool empty() const override { return this->resId_ == nullptr; };
      // resId Field Functions 
      bool hasResId() const { return this->resId_ != nullptr;};
      void deleteResId() { this->resId_ = nullptr;};
      inline string getResId() const { DARABONBA_PTR_GET_DEFAULT(resId_, "") };
      inline Result& setResId(string resId) { DARABONBA_PTR_SET_VALUE(resId_, resId) };


    protected:
      shared_ptr<string> resId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateCollectorResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const CreateCollectorResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, CreateCollectorResponseBody::Result) };
    inline CreateCollectorResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, CreateCollectorResponseBody::Result) };
    inline CreateCollectorResponseBody& setResult(const CreateCollectorResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline CreateCollectorResponseBody& setResult(CreateCollectorResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<CreateCollectorResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
