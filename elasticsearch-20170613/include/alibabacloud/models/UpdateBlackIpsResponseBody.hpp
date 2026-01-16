// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEBLACKIPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEBLACKIPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class UpdateBlackIpsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateBlackIpsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateBlackIpsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    UpdateBlackIpsResponseBody() = default ;
    UpdateBlackIpsResponseBody(const UpdateBlackIpsResponseBody &) = default ;
    UpdateBlackIpsResponseBody(UpdateBlackIpsResponseBody &&) = default ;
    UpdateBlackIpsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateBlackIpsResponseBody() = default ;
    UpdateBlackIpsResponseBody& operator=(const UpdateBlackIpsResponseBody &) = default ;
    UpdateBlackIpsResponseBody& operator=(UpdateBlackIpsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(esIPBlacklist, esIPBlacklist_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(esIPBlacklist, esIPBlacklist_);
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
      virtual bool empty() const override { return this->esIPBlacklist_ == nullptr; };
      // esIPBlacklist Field Functions 
      bool hasEsIPBlacklist() const { return this->esIPBlacklist_ != nullptr;};
      void deleteEsIPBlacklist() { this->esIPBlacklist_ = nullptr;};
      inline const vector<string> & getEsIPBlacklist() const { DARABONBA_PTR_GET_CONST(esIPBlacklist_, vector<string>) };
      inline vector<string> getEsIPBlacklist() { DARABONBA_PTR_GET(esIPBlacklist_, vector<string>) };
      inline Result& setEsIPBlacklist(const vector<string> & esIPBlacklist) { DARABONBA_PTR_SET_VALUE(esIPBlacklist_, esIPBlacklist) };
      inline Result& setEsIPBlacklist(vector<string> && esIPBlacklist) { DARABONBA_PTR_SET_RVALUE(esIPBlacklist_, esIPBlacklist) };


    protected:
      shared_ptr<vector<string>> esIPBlacklist_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateBlackIpsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const UpdateBlackIpsResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, UpdateBlackIpsResponseBody::Result) };
    inline UpdateBlackIpsResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, UpdateBlackIpsResponseBody::Result) };
    inline UpdateBlackIpsResponseBody& setResult(const UpdateBlackIpsResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline UpdateBlackIpsResponseBody& setResult(UpdateBlackIpsResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<UpdateBlackIpsResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
