// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGEDOMAINDKIMRECORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHANGEDOMAINDKIMRECORDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class ChangeDomainDkimRecordResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeDomainDkimRecordResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Changed, changed_);
      DARABONBA_PTR_TO_JSON(DkimPublicKey, dkimPublicKey_);
      DARABONBA_PTR_TO_JSON(DkimRsaLength, dkimRsaLength_);
      DARABONBA_PTR_TO_JSON(Hostname, hostname_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeDomainDkimRecordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Changed, changed_);
      DARABONBA_PTR_FROM_JSON(DkimPublicKey, dkimPublicKey_);
      DARABONBA_PTR_FROM_JSON(DkimRsaLength, dkimRsaLength_);
      DARABONBA_PTR_FROM_JSON(Hostname, hostname_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ChangeDomainDkimRecordResponseBody() = default ;
    ChangeDomainDkimRecordResponseBody(const ChangeDomainDkimRecordResponseBody &) = default ;
    ChangeDomainDkimRecordResponseBody(ChangeDomainDkimRecordResponseBody &&) = default ;
    ChangeDomainDkimRecordResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeDomainDkimRecordResponseBody() = default ;
    ChangeDomainDkimRecordResponseBody& operator=(const ChangeDomainDkimRecordResponseBody &) = default ;
    ChangeDomainDkimRecordResponseBody& operator=(ChangeDomainDkimRecordResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->changed_ == nullptr
        && this->dkimPublicKey_ == nullptr && this->dkimRsaLength_ == nullptr && this->hostname_ == nullptr && this->requestId_ == nullptr; };
    // changed Field Functions 
    bool hasChanged() const { return this->changed_ != nullptr;};
    void deleteChanged() { this->changed_ = nullptr;};
    inline bool getChanged() const { DARABONBA_PTR_GET_DEFAULT(changed_, false) };
    inline ChangeDomainDkimRecordResponseBody& setChanged(bool changed) { DARABONBA_PTR_SET_VALUE(changed_, changed) };


    // dkimPublicKey Field Functions 
    bool hasDkimPublicKey() const { return this->dkimPublicKey_ != nullptr;};
    void deleteDkimPublicKey() { this->dkimPublicKey_ = nullptr;};
    inline string getDkimPublicKey() const { DARABONBA_PTR_GET_DEFAULT(dkimPublicKey_, "") };
    inline ChangeDomainDkimRecordResponseBody& setDkimPublicKey(string dkimPublicKey) { DARABONBA_PTR_SET_VALUE(dkimPublicKey_, dkimPublicKey) };


    // dkimRsaLength Field Functions 
    bool hasDkimRsaLength() const { return this->dkimRsaLength_ != nullptr;};
    void deleteDkimRsaLength() { this->dkimRsaLength_ = nullptr;};
    inline int32_t getDkimRsaLength() const { DARABONBA_PTR_GET_DEFAULT(dkimRsaLength_, 0) };
    inline ChangeDomainDkimRecordResponseBody& setDkimRsaLength(int32_t dkimRsaLength) { DARABONBA_PTR_SET_VALUE(dkimRsaLength_, dkimRsaLength) };


    // hostname Field Functions 
    bool hasHostname() const { return this->hostname_ != nullptr;};
    void deleteHostname() { this->hostname_ = nullptr;};
    inline string getHostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
    inline ChangeDomainDkimRecordResponseBody& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ChangeDomainDkimRecordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<bool> changed_ {};
    shared_ptr<string> dkimPublicKey_ {};
    shared_ptr<int32_t> dkimRsaLength_ {};
    shared_ptr<string> hostname_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
