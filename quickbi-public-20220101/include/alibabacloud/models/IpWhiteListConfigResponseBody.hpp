// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IPWHITELISTCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_IPWHITELISTCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class IpWhiteListConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IpWhiteListConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, IpWhiteListConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    IpWhiteListConfigResponseBody() = default ;
    IpWhiteListConfigResponseBody(const IpWhiteListConfigResponseBody &) = default ;
    IpWhiteListConfigResponseBody(IpWhiteListConfigResponseBody &&) = default ;
    IpWhiteListConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IpWhiteListConfigResponseBody() = default ;
    IpWhiteListConfigResponseBody& operator=(const IpWhiteListConfigResponseBody &) = default ;
    IpWhiteListConfigResponseBody& operator=(IpWhiteListConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(IpWhiteList, ipWhiteList_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(IpWhiteList, ipWhiteList_);
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
      virtual bool empty() const override { return this->ipWhiteList_ == nullptr; };
      // ipWhiteList Field Functions 
      bool hasIpWhiteList() const { return this->ipWhiteList_ != nullptr;};
      void deleteIpWhiteList() { this->ipWhiteList_ = nullptr;};
      inline const vector<string> & getIpWhiteList() const { DARABONBA_PTR_GET_CONST(ipWhiteList_, vector<string>) };
      inline vector<string> getIpWhiteList() { DARABONBA_PTR_GET(ipWhiteList_, vector<string>) };
      inline Result& setIpWhiteList(const vector<string> & ipWhiteList) { DARABONBA_PTR_SET_VALUE(ipWhiteList_, ipWhiteList) };
      inline Result& setIpWhiteList(vector<string> && ipWhiteList) { DARABONBA_PTR_SET_RVALUE(ipWhiteList_, ipWhiteList) };


    protected:
      // The IP address whitelist array.
      shared_ptr<vector<string>> ipWhiteList_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline IpWhiteListConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const IpWhiteListConfigResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, IpWhiteListConfigResponseBody::Result) };
    inline IpWhiteListConfigResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, IpWhiteListConfigResponseBody::Result) };
    inline IpWhiteListConfigResponseBody& setResult(const IpWhiteListConfigResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline IpWhiteListConfigResponseBody& setResult(IpWhiteListConfigResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline IpWhiteListConfigResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The IP address whitelist.
    shared_ptr<IpWhiteListConfigResponseBody::Result> result_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
