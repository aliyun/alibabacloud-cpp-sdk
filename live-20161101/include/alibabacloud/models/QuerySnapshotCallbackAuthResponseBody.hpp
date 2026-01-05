// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSNAPSHOTCALLBACKAUTHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSNAPSHOTCALLBACKAUTHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class QuerySnapshotCallbackAuthResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySnapshotCallbackAuthResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CallbackAuthKey, callbackAuthKey_);
      DARABONBA_PTR_TO_JSON(CallbackReqAuth, callbackReqAuth_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySnapshotCallbackAuthResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CallbackAuthKey, callbackAuthKey_);
      DARABONBA_PTR_FROM_JSON(CallbackReqAuth, callbackReqAuth_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QuerySnapshotCallbackAuthResponseBody() = default ;
    QuerySnapshotCallbackAuthResponseBody(const QuerySnapshotCallbackAuthResponseBody &) = default ;
    QuerySnapshotCallbackAuthResponseBody(QuerySnapshotCallbackAuthResponseBody &&) = default ;
    QuerySnapshotCallbackAuthResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySnapshotCallbackAuthResponseBody() = default ;
    QuerySnapshotCallbackAuthResponseBody& operator=(const QuerySnapshotCallbackAuthResponseBody &) = default ;
    QuerySnapshotCallbackAuthResponseBody& operator=(QuerySnapshotCallbackAuthResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callbackAuthKey_ == nullptr
        && this->callbackReqAuth_ == nullptr && this->domainName_ == nullptr && this->requestId_ == nullptr; };
    // callbackAuthKey Field Functions 
    bool hasCallbackAuthKey() const { return this->callbackAuthKey_ != nullptr;};
    void deleteCallbackAuthKey() { this->callbackAuthKey_ = nullptr;};
    inline string getCallbackAuthKey() const { DARABONBA_PTR_GET_DEFAULT(callbackAuthKey_, "") };
    inline QuerySnapshotCallbackAuthResponseBody& setCallbackAuthKey(string callbackAuthKey) { DARABONBA_PTR_SET_VALUE(callbackAuthKey_, callbackAuthKey) };


    // callbackReqAuth Field Functions 
    bool hasCallbackReqAuth() const { return this->callbackReqAuth_ != nullptr;};
    void deleteCallbackReqAuth() { this->callbackReqAuth_ = nullptr;};
    inline string getCallbackReqAuth() const { DARABONBA_PTR_GET_DEFAULT(callbackReqAuth_, "") };
    inline QuerySnapshotCallbackAuthResponseBody& setCallbackReqAuth(string callbackReqAuth) { DARABONBA_PTR_SET_VALUE(callbackReqAuth_, callbackReqAuth) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline QuerySnapshotCallbackAuthResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QuerySnapshotCallbackAuthResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The callback authentication key.
    shared_ptr<string> callbackAuthKey_ {};
    // Indicates whether callback authentication is enabled. Valid values:
    // 
    // *   **yes**: Callback authentication is enabled.
    // *   **no**: Callback authentication is disabled.
    shared_ptr<string> callbackReqAuth_ {};
    // The main streaming domain.
    shared_ptr<string> domainName_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
