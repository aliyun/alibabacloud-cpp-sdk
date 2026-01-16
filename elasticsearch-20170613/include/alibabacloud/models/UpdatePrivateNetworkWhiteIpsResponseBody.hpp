// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPRIVATENETWORKWHITEIPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPRIVATENETWORKWHITEIPSRESPONSEBODY_HPP_
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
  class UpdatePrivateNetworkWhiteIpsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePrivateNetworkWhiteIpsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePrivateNetworkWhiteIpsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    UpdatePrivateNetworkWhiteIpsResponseBody() = default ;
    UpdatePrivateNetworkWhiteIpsResponseBody(const UpdatePrivateNetworkWhiteIpsResponseBody &) = default ;
    UpdatePrivateNetworkWhiteIpsResponseBody(UpdatePrivateNetworkWhiteIpsResponseBody &&) = default ;
    UpdatePrivateNetworkWhiteIpsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePrivateNetworkWhiteIpsResponseBody() = default ;
    UpdatePrivateNetworkWhiteIpsResponseBody& operator=(const UpdatePrivateNetworkWhiteIpsResponseBody &) = default ;
    UpdatePrivateNetworkWhiteIpsResponseBody& operator=(UpdatePrivateNetworkWhiteIpsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(privateNetworkIpWhiteList, privateNetworkIpWhiteList_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(privateNetworkIpWhiteList, privateNetworkIpWhiteList_);
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
      virtual bool empty() const override { return this->privateNetworkIpWhiteList_ == nullptr; };
      // privateNetworkIpWhiteList Field Functions 
      bool hasPrivateNetworkIpWhiteList() const { return this->privateNetworkIpWhiteList_ != nullptr;};
      void deletePrivateNetworkIpWhiteList() { this->privateNetworkIpWhiteList_ = nullptr;};
      inline const vector<string> & getPrivateNetworkIpWhiteList() const { DARABONBA_PTR_GET_CONST(privateNetworkIpWhiteList_, vector<string>) };
      inline vector<string> getPrivateNetworkIpWhiteList() { DARABONBA_PTR_GET(privateNetworkIpWhiteList_, vector<string>) };
      inline Result& setPrivateNetworkIpWhiteList(const vector<string> & privateNetworkIpWhiteList) { DARABONBA_PTR_SET_VALUE(privateNetworkIpWhiteList_, privateNetworkIpWhiteList) };
      inline Result& setPrivateNetworkIpWhiteList(vector<string> && privateNetworkIpWhiteList) { DARABONBA_PTR_SET_RVALUE(privateNetworkIpWhiteList_, privateNetworkIpWhiteList) };


    protected:
      shared_ptr<vector<string>> privateNetworkIpWhiteList_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdatePrivateNetworkWhiteIpsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const UpdatePrivateNetworkWhiteIpsResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, UpdatePrivateNetworkWhiteIpsResponseBody::Result) };
    inline UpdatePrivateNetworkWhiteIpsResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, UpdatePrivateNetworkWhiteIpsResponseBody::Result) };
    inline UpdatePrivateNetworkWhiteIpsResponseBody& setResult(const UpdatePrivateNetworkWhiteIpsResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline UpdatePrivateNetworkWhiteIpsResponseBody& setResult(UpdatePrivateNetworkWhiteIpsResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<UpdatePrivateNetworkWhiteIpsResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
