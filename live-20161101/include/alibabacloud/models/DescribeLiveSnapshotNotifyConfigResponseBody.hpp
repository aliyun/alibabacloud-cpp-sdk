// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESNAPSHOTNOTIFYCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESNAPSHOTNOTIFYCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveSnapshotNotifyConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveSnapshotNotifyConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(NotifyAuthKey, notifyAuthKey_);
      DARABONBA_PTR_TO_JSON(NotifyReqAuth, notifyReqAuth_);
      DARABONBA_PTR_TO_JSON(NotifyUrl, notifyUrl_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveSnapshotNotifyConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(NotifyAuthKey, notifyAuthKey_);
      DARABONBA_PTR_FROM_JSON(NotifyReqAuth, notifyReqAuth_);
      DARABONBA_PTR_FROM_JSON(NotifyUrl, notifyUrl_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLiveSnapshotNotifyConfigResponseBody() = default ;
    DescribeLiveSnapshotNotifyConfigResponseBody(const DescribeLiveSnapshotNotifyConfigResponseBody &) = default ;
    DescribeLiveSnapshotNotifyConfigResponseBody(DescribeLiveSnapshotNotifyConfigResponseBody &&) = default ;
    DescribeLiveSnapshotNotifyConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveSnapshotNotifyConfigResponseBody() = default ;
    DescribeLiveSnapshotNotifyConfigResponseBody& operator=(const DescribeLiveSnapshotNotifyConfigResponseBody &) = default ;
    DescribeLiveSnapshotNotifyConfigResponseBody& operator=(DescribeLiveSnapshotNotifyConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && this->notifyAuthKey_ == nullptr && this->notifyReqAuth_ == nullptr && this->notifyUrl_ == nullptr && this->requestId_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeLiveSnapshotNotifyConfigResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // notifyAuthKey Field Functions 
    bool hasNotifyAuthKey() const { return this->notifyAuthKey_ != nullptr;};
    void deleteNotifyAuthKey() { this->notifyAuthKey_ = nullptr;};
    inline string getNotifyAuthKey() const { DARABONBA_PTR_GET_DEFAULT(notifyAuthKey_, "") };
    inline DescribeLiveSnapshotNotifyConfigResponseBody& setNotifyAuthKey(string notifyAuthKey) { DARABONBA_PTR_SET_VALUE(notifyAuthKey_, notifyAuthKey) };


    // notifyReqAuth Field Functions 
    bool hasNotifyReqAuth() const { return this->notifyReqAuth_ != nullptr;};
    void deleteNotifyReqAuth() { this->notifyReqAuth_ = nullptr;};
    inline string getNotifyReqAuth() const { DARABONBA_PTR_GET_DEFAULT(notifyReqAuth_, "") };
    inline DescribeLiveSnapshotNotifyConfigResponseBody& setNotifyReqAuth(string notifyReqAuth) { DARABONBA_PTR_SET_VALUE(notifyReqAuth_, notifyReqAuth) };


    // notifyUrl Field Functions 
    bool hasNotifyUrl() const { return this->notifyUrl_ != nullptr;};
    void deleteNotifyUrl() { this->notifyUrl_ = nullptr;};
    inline string getNotifyUrl() const { DARABONBA_PTR_GET_DEFAULT(notifyUrl_, "") };
    inline DescribeLiveSnapshotNotifyConfigResponseBody& setNotifyUrl(string notifyUrl) { DARABONBA_PTR_SET_VALUE(notifyUrl_, notifyUrl) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveSnapshotNotifyConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The main streaming domain.
    shared_ptr<string> domainName_ {};
    // The callback authentication key.
    shared_ptr<string> notifyAuthKey_ {};
    // Indicates whether callback authentication is enabled. Valid values:
    // 
    // *   **yes**: Callback authentication is enabled.
    // *   **no**: Callback authentication is disabled.
    shared_ptr<string> notifyReqAuth_ {};
    // The callback URL.
    shared_ptr<string> notifyUrl_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
