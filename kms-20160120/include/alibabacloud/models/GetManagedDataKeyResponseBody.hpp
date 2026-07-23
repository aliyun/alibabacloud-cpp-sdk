// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMANAGEDDATAKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMANAGEDDATAKEYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class GetManagedDataKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetManagedDataKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataKeyName, dataKeyName_);
      DARABONBA_PTR_TO_JSON(DataKeyVersionId, dataKeyVersionId_);
      DARABONBA_PTR_TO_JSON(DataKeyVersionName, dataKeyVersionName_);
      DARABONBA_PTR_TO_JSON(Plaintext, plaintext_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetManagedDataKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataKeyName, dataKeyName_);
      DARABONBA_PTR_FROM_JSON(DataKeyVersionId, dataKeyVersionId_);
      DARABONBA_PTR_FROM_JSON(DataKeyVersionName, dataKeyVersionName_);
      DARABONBA_PTR_FROM_JSON(Plaintext, plaintext_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetManagedDataKeyResponseBody() = default ;
    GetManagedDataKeyResponseBody(const GetManagedDataKeyResponseBody &) = default ;
    GetManagedDataKeyResponseBody(GetManagedDataKeyResponseBody &&) = default ;
    GetManagedDataKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetManagedDataKeyResponseBody() = default ;
    GetManagedDataKeyResponseBody& operator=(const GetManagedDataKeyResponseBody &) = default ;
    GetManagedDataKeyResponseBody& operator=(GetManagedDataKeyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataKeyName_ == nullptr
        && this->dataKeyVersionId_ == nullptr && this->dataKeyVersionName_ == nullptr && this->plaintext_ == nullptr && this->requestId_ == nullptr; };
    // dataKeyName Field Functions 
    bool hasDataKeyName() const { return this->dataKeyName_ != nullptr;};
    void deleteDataKeyName() { this->dataKeyName_ = nullptr;};
    inline string getDataKeyName() const { DARABONBA_PTR_GET_DEFAULT(dataKeyName_, "") };
    inline GetManagedDataKeyResponseBody& setDataKeyName(string dataKeyName) { DARABONBA_PTR_SET_VALUE(dataKeyName_, dataKeyName) };


    // dataKeyVersionId Field Functions 
    bool hasDataKeyVersionId() const { return this->dataKeyVersionId_ != nullptr;};
    void deleteDataKeyVersionId() { this->dataKeyVersionId_ = nullptr;};
    inline string getDataKeyVersionId() const { DARABONBA_PTR_GET_DEFAULT(dataKeyVersionId_, "") };
    inline GetManagedDataKeyResponseBody& setDataKeyVersionId(string dataKeyVersionId) { DARABONBA_PTR_SET_VALUE(dataKeyVersionId_, dataKeyVersionId) };


    // dataKeyVersionName Field Functions 
    bool hasDataKeyVersionName() const { return this->dataKeyVersionName_ != nullptr;};
    void deleteDataKeyVersionName() { this->dataKeyVersionName_ = nullptr;};
    inline string getDataKeyVersionName() const { DARABONBA_PTR_GET_DEFAULT(dataKeyVersionName_, "") };
    inline GetManagedDataKeyResponseBody& setDataKeyVersionName(string dataKeyVersionName) { DARABONBA_PTR_SET_VALUE(dataKeyVersionName_, dataKeyVersionName) };


    // plaintext Field Functions 
    bool hasPlaintext() const { return this->plaintext_ != nullptr;};
    void deletePlaintext() { this->plaintext_ = nullptr;};
    inline string getPlaintext() const { DARABONBA_PTR_GET_DEFAULT(plaintext_, "") };
    inline GetManagedDataKeyResponseBody& setPlaintext(string plaintext) { DARABONBA_PTR_SET_VALUE(plaintext_, plaintext) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetManagedDataKeyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The name of the managed data key (DK).
    shared_ptr<string> dataKeyName_ {};
    // The version number of the returned managed data key (DK).
    shared_ptr<string> dataKeyVersionId_ {};
    // The credential name that stores the key material of the returned managed data key (DK) version.
    shared_ptr<string> dataKeyVersionName_ {};
    // The Base64-encoding plaintext value of the data key (DK).
    shared_ptr<string> plaintext_ {};
    // The request ID. Alibaba Cloud generates a unique identifier for each request. You can use the request ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
