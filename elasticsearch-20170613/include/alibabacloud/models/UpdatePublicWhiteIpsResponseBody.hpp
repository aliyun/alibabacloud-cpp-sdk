// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPUBLICWHITEIPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPUBLICWHITEIPSRESPONSEBODY_HPP_
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
  class UpdatePublicWhiteIpsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePublicWhiteIpsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePublicWhiteIpsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    UpdatePublicWhiteIpsResponseBody() = default ;
    UpdatePublicWhiteIpsResponseBody(const UpdatePublicWhiteIpsResponseBody &) = default ;
    UpdatePublicWhiteIpsResponseBody(UpdatePublicWhiteIpsResponseBody &&) = default ;
    UpdatePublicWhiteIpsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePublicWhiteIpsResponseBody() = default ;
    UpdatePublicWhiteIpsResponseBody& operator=(const UpdatePublicWhiteIpsResponseBody &) = default ;
    UpdatePublicWhiteIpsResponseBody& operator=(UpdatePublicWhiteIpsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(publicIpWhitelist, publicIpWhitelist_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(publicIpWhitelist, publicIpWhitelist_);
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
      virtual bool empty() const override { return this->publicIpWhitelist_ == nullptr; };
      // publicIpWhitelist Field Functions 
      bool hasPublicIpWhitelist() const { return this->publicIpWhitelist_ != nullptr;};
      void deletePublicIpWhitelist() { this->publicIpWhitelist_ = nullptr;};
      inline const vector<string> & getPublicIpWhitelist() const { DARABONBA_PTR_GET_CONST(publicIpWhitelist_, vector<string>) };
      inline vector<string> getPublicIpWhitelist() { DARABONBA_PTR_GET(publicIpWhitelist_, vector<string>) };
      inline Result& setPublicIpWhitelist(const vector<string> & publicIpWhitelist) { DARABONBA_PTR_SET_VALUE(publicIpWhitelist_, publicIpWhitelist) };
      inline Result& setPublicIpWhitelist(vector<string> && publicIpWhitelist) { DARABONBA_PTR_SET_RVALUE(publicIpWhitelist_, publicIpWhitelist) };


    protected:
      shared_ptr<vector<string>> publicIpWhitelist_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdatePublicWhiteIpsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const UpdatePublicWhiteIpsResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, UpdatePublicWhiteIpsResponseBody::Result) };
    inline UpdatePublicWhiteIpsResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, UpdatePublicWhiteIpsResponseBody::Result) };
    inline UpdatePublicWhiteIpsResponseBody& setResult(const UpdatePublicWhiteIpsResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline UpdatePublicWhiteIpsResponseBody& setResult(UpdatePublicWhiteIpsResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<UpdatePublicWhiteIpsResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
