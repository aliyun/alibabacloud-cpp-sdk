// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROXYACCESSESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPROXYACCESSESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListProxyAccessesResponseBodyProxyAccessList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListProxyAccessesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProxyAccessesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(ProxyAccessList, proxyAccessList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListProxyAccessesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(ProxyAccessList, proxyAccessList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListProxyAccessesResponseBody() = default ;
    ListProxyAccessesResponseBody(const ListProxyAccessesResponseBody &) = default ;
    ListProxyAccessesResponseBody(ListProxyAccessesResponseBody &&) = default ;
    ListProxyAccessesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProxyAccessesResponseBody() = default ;
    ListProxyAccessesResponseBody& operator=(const ListProxyAccessesResponseBody &) = default ;
    ListProxyAccessesResponseBody& operator=(ListProxyAccessesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorCode_ != nullptr
        && this->errorMessage_ != nullptr && this->proxyAccessList_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListProxyAccessesResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListProxyAccessesResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // proxyAccessList Field Functions 
    bool hasProxyAccessList() const { return this->proxyAccessList_ != nullptr;};
    void deleteProxyAccessList() { this->proxyAccessList_ = nullptr;};
    inline const vector<ListProxyAccessesResponseBodyProxyAccessList> & proxyAccessList() const { DARABONBA_PTR_GET_CONST(proxyAccessList_, vector<ListProxyAccessesResponseBodyProxyAccessList>) };
    inline vector<ListProxyAccessesResponseBodyProxyAccessList> proxyAccessList() { DARABONBA_PTR_GET(proxyAccessList_, vector<ListProxyAccessesResponseBodyProxyAccessList>) };
    inline ListProxyAccessesResponseBody& setProxyAccessList(const vector<ListProxyAccessesResponseBodyProxyAccessList> & proxyAccessList) { DARABONBA_PTR_SET_VALUE(proxyAccessList_, proxyAccessList) };
    inline ListProxyAccessesResponseBody& setProxyAccessList(vector<ListProxyAccessesResponseBodyProxyAccessList> && proxyAccessList) { DARABONBA_PTR_SET_RVALUE(proxyAccessList_, proxyAccessList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListProxyAccessesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListProxyAccessesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The information about the users that are authorized to access the database instance by using the secure access proxy feature.
    std::shared_ptr<vector<ListProxyAccessesResponseBodyProxyAccessList>> proxyAccessList_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // - **true**: The request was successful.
    // - **false**: The request failed.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
