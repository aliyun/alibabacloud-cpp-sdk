// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCAINSTANCECRLADDRESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCAINSTANCECRLADDRESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200630
{
namespace Models
{
  class GetCaInstanceCrlAddressResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCaInstanceCrlAddressResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CaInstanceStatus, caInstanceStatus_);
      DARABONBA_PTR_TO_JSON(CrlUrl, crlUrl_);
      DARABONBA_PTR_TO_JSON(HashCode, hashCode_);
      DARABONBA_PTR_TO_JSON(NextUpdateTime, nextUpdateTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCaInstanceCrlAddressResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CaInstanceStatus, caInstanceStatus_);
      DARABONBA_PTR_FROM_JSON(CrlUrl, crlUrl_);
      DARABONBA_PTR_FROM_JSON(HashCode, hashCode_);
      DARABONBA_PTR_FROM_JSON(NextUpdateTime, nextUpdateTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetCaInstanceCrlAddressResponseBody() = default ;
    GetCaInstanceCrlAddressResponseBody(const GetCaInstanceCrlAddressResponseBody &) = default ;
    GetCaInstanceCrlAddressResponseBody(GetCaInstanceCrlAddressResponseBody &&) = default ;
    GetCaInstanceCrlAddressResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCaInstanceCrlAddressResponseBody() = default ;
    GetCaInstanceCrlAddressResponseBody& operator=(const GetCaInstanceCrlAddressResponseBody &) = default ;
    GetCaInstanceCrlAddressResponseBody& operator=(GetCaInstanceCrlAddressResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->caInstanceStatus_ == nullptr
        && this->crlUrl_ == nullptr && this->hashCode_ == nullptr && this->nextUpdateTime_ == nullptr && this->requestId_ == nullptr; };
    // caInstanceStatus Field Functions 
    bool hasCaInstanceStatus() const { return this->caInstanceStatus_ != nullptr;};
    void deleteCaInstanceStatus() { this->caInstanceStatus_ = nullptr;};
    inline string getCaInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(caInstanceStatus_, "") };
    inline GetCaInstanceCrlAddressResponseBody& setCaInstanceStatus(string caInstanceStatus) { DARABONBA_PTR_SET_VALUE(caInstanceStatus_, caInstanceStatus) };


    // crlUrl Field Functions 
    bool hasCrlUrl() const { return this->crlUrl_ != nullptr;};
    void deleteCrlUrl() { this->crlUrl_ = nullptr;};
    inline string getCrlUrl() const { DARABONBA_PTR_GET_DEFAULT(crlUrl_, "") };
    inline GetCaInstanceCrlAddressResponseBody& setCrlUrl(string crlUrl) { DARABONBA_PTR_SET_VALUE(crlUrl_, crlUrl) };


    // hashCode Field Functions 
    bool hasHashCode() const { return this->hashCode_ != nullptr;};
    void deleteHashCode() { this->hashCode_ = nullptr;};
    inline string getHashCode() const { DARABONBA_PTR_GET_DEFAULT(hashCode_, "") };
    inline GetCaInstanceCrlAddressResponseBody& setHashCode(string hashCode) { DARABONBA_PTR_SET_VALUE(hashCode_, hashCode) };


    // nextUpdateTime Field Functions 
    bool hasNextUpdateTime() const { return this->nextUpdateTime_ != nullptr;};
    void deleteNextUpdateTime() { this->nextUpdateTime_ = nullptr;};
    inline string getNextUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(nextUpdateTime_, "") };
    inline GetCaInstanceCrlAddressResponseBody& setNextUpdateTime(string nextUpdateTime) { DARABONBA_PTR_SET_VALUE(nextUpdateTime_, nextUpdateTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCaInstanceCrlAddressResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status of the CA instance.
    shared_ptr<string> caInstanceStatus_ {};
    // The cron expression.
    shared_ptr<string> crlUrl_ {};
    // Used to identify whether there are new revoked certificates in the revocation list.
    shared_ptr<string> hashCode_ {};
    // The next update time of the revocation list.
    shared_ptr<string> nextUpdateTime_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif
