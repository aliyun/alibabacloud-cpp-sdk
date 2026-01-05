// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISKENCRYPTIONBYDEFAULTSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISKENCRYPTIONBYDEFAULTSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeDiskEncryptionByDefaultStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiskEncryptionByDefaultStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Encrypted, encrypted_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiskEncryptionByDefaultStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Encrypted, encrypted_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDiskEncryptionByDefaultStatusResponseBody() = default ;
    DescribeDiskEncryptionByDefaultStatusResponseBody(const DescribeDiskEncryptionByDefaultStatusResponseBody &) = default ;
    DescribeDiskEncryptionByDefaultStatusResponseBody(DescribeDiskEncryptionByDefaultStatusResponseBody &&) = default ;
    DescribeDiskEncryptionByDefaultStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiskEncryptionByDefaultStatusResponseBody() = default ;
    DescribeDiskEncryptionByDefaultStatusResponseBody& operator=(const DescribeDiskEncryptionByDefaultStatusResponseBody &) = default ;
    DescribeDiskEncryptionByDefaultStatusResponseBody& operator=(DescribeDiskEncryptionByDefaultStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->encrypted_ == nullptr
        && this->requestId_ == nullptr; };
    // encrypted Field Functions 
    bool hasEncrypted() const { return this->encrypted_ != nullptr;};
    void deleteEncrypted() { this->encrypted_ = nullptr;};
    inline bool getEncrypted() const { DARABONBA_PTR_GET_DEFAULT(encrypted_, false) };
    inline DescribeDiskEncryptionByDefaultStatusResponseBody& setEncrypted(bool encrypted) { DARABONBA_PTR_SET_VALUE(encrypted_, encrypted) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDiskEncryptionByDefaultStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether account-level default encryption of EBS resources is enabled in the region. Valid values:
    // 
    // *   true
    // *   false
    // 
    // Default value: false.
    shared_ptr<bool> encrypted_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
