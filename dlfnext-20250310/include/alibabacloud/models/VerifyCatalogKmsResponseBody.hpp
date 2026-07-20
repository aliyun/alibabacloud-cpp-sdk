// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYCATALOGKMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_VERIFYCATALOGKMSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class VerifyCatalogKmsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyCatalogKmsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(hint, hint_);
      DARABONBA_PTR_TO_JSON(kmsKeyId, kmsKeyId_);
      DARABONBA_PTR_TO_JSON(serverSideEncryption, serverSideEncryption_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyCatalogKmsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(hint, hint_);
      DARABONBA_PTR_FROM_JSON(kmsKeyId, kmsKeyId_);
      DARABONBA_PTR_FROM_JSON(serverSideEncryption, serverSideEncryption_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    VerifyCatalogKmsResponseBody() = default ;
    VerifyCatalogKmsResponseBody(const VerifyCatalogKmsResponseBody &) = default ;
    VerifyCatalogKmsResponseBody(VerifyCatalogKmsResponseBody &&) = default ;
    VerifyCatalogKmsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyCatalogKmsResponseBody() = default ;
    VerifyCatalogKmsResponseBody& operator=(const VerifyCatalogKmsResponseBody &) = default ;
    VerifyCatalogKmsResponseBody& operator=(VerifyCatalogKmsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->hint_ == nullptr && this->kmsKeyId_ == nullptr && this->serverSideEncryption_ == nullptr && this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline VerifyCatalogKmsResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // hint Field Functions 
    bool hasHint() const { return this->hint_ != nullptr;};
    void deleteHint() { this->hint_ = nullptr;};
    inline string getHint() const { DARABONBA_PTR_GET_DEFAULT(hint_, "") };
    inline VerifyCatalogKmsResponseBody& setHint(string hint) { DARABONBA_PTR_SET_VALUE(hint_, hint) };


    // kmsKeyId Field Functions 
    bool hasKmsKeyId() const { return this->kmsKeyId_ != nullptr;};
    void deleteKmsKeyId() { this->kmsKeyId_ = nullptr;};
    inline string getKmsKeyId() const { DARABONBA_PTR_GET_DEFAULT(kmsKeyId_, "") };
    inline VerifyCatalogKmsResponseBody& setKmsKeyId(string kmsKeyId) { DARABONBA_PTR_SET_VALUE(kmsKeyId_, kmsKeyId) };


    // serverSideEncryption Field Functions 
    bool hasServerSideEncryption() const { return this->serverSideEncryption_ != nullptr;};
    void deleteServerSideEncryption() { this->serverSideEncryption_ = nullptr;};
    inline string getServerSideEncryption() const { DARABONBA_PTR_GET_DEFAULT(serverSideEncryption_, "") };
    inline VerifyCatalogKmsResponseBody& setServerSideEncryption(string serverSideEncryption) { DARABONBA_PTR_SET_VALUE(serverSideEncryption_, serverSideEncryption) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline VerifyCatalogKmsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> hint_ {};
    shared_ptr<string> kmsKeyId_ {};
    shared_ptr<string> serverSideEncryption_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
