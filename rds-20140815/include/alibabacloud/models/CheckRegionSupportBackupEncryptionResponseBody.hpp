// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKREGIONSUPPORTBACKUPENCRYPTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKREGIONSUPPORTBACKUPENCRYPTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class CheckRegionSupportBackupEncryptionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckRegionSupportBackupEncryptionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SupportBackupEncryption, supportBackupEncryption_);
    };
    friend void from_json(const Darabonba::Json& j, CheckRegionSupportBackupEncryptionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SupportBackupEncryption, supportBackupEncryption_);
    };
    CheckRegionSupportBackupEncryptionResponseBody() = default ;
    CheckRegionSupportBackupEncryptionResponseBody(const CheckRegionSupportBackupEncryptionResponseBody &) = default ;
    CheckRegionSupportBackupEncryptionResponseBody(CheckRegionSupportBackupEncryptionResponseBody &&) = default ;
    CheckRegionSupportBackupEncryptionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckRegionSupportBackupEncryptionResponseBody() = default ;
    CheckRegionSupportBackupEncryptionResponseBody& operator=(const CheckRegionSupportBackupEncryptionResponseBody &) = default ;
    CheckRegionSupportBackupEncryptionResponseBody& operator=(CheckRegionSupportBackupEncryptionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->supportBackupEncryption_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckRegionSupportBackupEncryptionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // supportBackupEncryption Field Functions 
    bool hasSupportBackupEncryption() const { return this->supportBackupEncryption_ != nullptr;};
    void deleteSupportBackupEncryption() { this->supportBackupEncryption_ = nullptr;};
    inline bool getSupportBackupEncryption() const { DARABONBA_PTR_GET_DEFAULT(supportBackupEncryption_, false) };
    inline CheckRegionSupportBackupEncryptionResponseBody& setSupportBackupEncryption(bool supportBackupEncryption) { DARABONBA_PTR_SET_VALUE(supportBackupEncryption_, supportBackupEncryption) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> supportBackupEncryption_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
