// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERDOCUMENTPERMISSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUSERDOCUMENTPERMISSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetUserDocumentPermissionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserDocumentPermissionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(authLevel, authLevel_);
      DARABONBA_PTR_TO_JSON(hasPermission, hasPermission_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserDocumentPermissionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(authLevel, authLevel_);
      DARABONBA_PTR_FROM_JSON(hasPermission, hasPermission_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    GetUserDocumentPermissionResponseBody() = default ;
    GetUserDocumentPermissionResponseBody(const GetUserDocumentPermissionResponseBody &) = default ;
    GetUserDocumentPermissionResponseBody(GetUserDocumentPermissionResponseBody &&) = default ;
    GetUserDocumentPermissionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserDocumentPermissionResponseBody() = default ;
    GetUserDocumentPermissionResponseBody& operator=(const GetUserDocumentPermissionResponseBody &) = default ;
    GetUserDocumentPermissionResponseBody& operator=(GetUserDocumentPermissionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authLevel_ == nullptr
        && this->hasPermission_ == nullptr && this->requestId_ == nullptr && this->vendorRequestId_ == nullptr && this->vendorType_ == nullptr; };
    // authLevel Field Functions 
    bool hasAuthLevel() const { return this->authLevel_ != nullptr;};
    void deleteAuthLevel() { this->authLevel_ = nullptr;};
    inline int64_t getAuthLevel() const { DARABONBA_PTR_GET_DEFAULT(authLevel_, 0L) };
    inline GetUserDocumentPermissionResponseBody& setAuthLevel(int64_t authLevel) { DARABONBA_PTR_SET_VALUE(authLevel_, authLevel) };


    // hasPermission Field Functions 
    bool hasHasPermission() const { return this->hasPermission_ != nullptr;};
    void deleteHasPermission() { this->hasPermission_ = nullptr;};
    inline bool getHasPermission() const { DARABONBA_PTR_GET_DEFAULT(hasPermission_, false) };
    inline GetUserDocumentPermissionResponseBody& setHasPermission(bool hasPermission) { DARABONBA_PTR_SET_VALUE(hasPermission_, hasPermission) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUserDocumentPermissionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string getVendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline GetUserDocumentPermissionResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string getVendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline GetUserDocumentPermissionResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    shared_ptr<int64_t> authLevel_ {};
    shared_ptr<bool> hasPermission_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> vendorRequestId_ {};
    shared_ptr<string> vendorType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
