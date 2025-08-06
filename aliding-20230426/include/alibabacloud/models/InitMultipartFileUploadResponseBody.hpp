// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INITMULTIPARTFILEUPLOADRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_INITMULTIPARTFILEUPLOADRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class InitMultipartFileUploadResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InitMultipartFileUploadResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(storageDriver, storageDriver_);
      DARABONBA_PTR_TO_JSON(uploadKey, uploadKey_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, InitMultipartFileUploadResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(storageDriver, storageDriver_);
      DARABONBA_PTR_FROM_JSON(uploadKey, uploadKey_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    InitMultipartFileUploadResponseBody() = default ;
    InitMultipartFileUploadResponseBody(const InitMultipartFileUploadResponseBody &) = default ;
    InitMultipartFileUploadResponseBody(InitMultipartFileUploadResponseBody &&) = default ;
    InitMultipartFileUploadResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InitMultipartFileUploadResponseBody() = default ;
    InitMultipartFileUploadResponseBody& operator=(const InitMultipartFileUploadResponseBody &) = default ;
    InitMultipartFileUploadResponseBody& operator=(InitMultipartFileUploadResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->storageDriver_ != nullptr && this->uploadKey_ != nullptr && this->vendorRequestId_ != nullptr && this->vendorType_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline InitMultipartFileUploadResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // storageDriver Field Functions 
    bool hasStorageDriver() const { return this->storageDriver_ != nullptr;};
    void deleteStorageDriver() { this->storageDriver_ = nullptr;};
    inline string storageDriver() const { DARABONBA_PTR_GET_DEFAULT(storageDriver_, "") };
    inline InitMultipartFileUploadResponseBody& setStorageDriver(string storageDriver) { DARABONBA_PTR_SET_VALUE(storageDriver_, storageDriver) };


    // uploadKey Field Functions 
    bool hasUploadKey() const { return this->uploadKey_ != nullptr;};
    void deleteUploadKey() { this->uploadKey_ = nullptr;};
    inline string uploadKey() const { DARABONBA_PTR_GET_DEFAULT(uploadKey_, "") };
    inline InitMultipartFileUploadResponseBody& setUploadKey(string uploadKey) { DARABONBA_PTR_SET_VALUE(uploadKey_, uploadKey) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string vendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline InitMultipartFileUploadResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string vendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline InitMultipartFileUploadResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> storageDriver_ = nullptr;
    std::shared_ptr<string> uploadKey_ = nullptr;
    std::shared_ptr<string> vendorRequestId_ = nullptr;
    std::shared_ptr<string> vendorType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
