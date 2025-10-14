// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEUSERAVATARRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEUSERAVATARRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class UpdateUserAvatarResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateUserAvatarResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(errcode, errcode_);
      DARABONBA_PTR_TO_JSON(errmsg, errmsg_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateUserAvatarResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(errcode, errcode_);
      DARABONBA_PTR_FROM_JSON(errmsg, errmsg_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    UpdateUserAvatarResponseBody() = default ;
    UpdateUserAvatarResponseBody(const UpdateUserAvatarResponseBody &) = default ;
    UpdateUserAvatarResponseBody(UpdateUserAvatarResponseBody &&) = default ;
    UpdateUserAvatarResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateUserAvatarResponseBody() = default ;
    UpdateUserAvatarResponseBody& operator=(const UpdateUserAvatarResponseBody &) = default ;
    UpdateUserAvatarResponseBody& operator=(UpdateUserAvatarResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errcode_ == nullptr
        && return this->errmsg_ == nullptr && return this->requestId_ == nullptr && return this->vendorRequestId_ == nullptr && return this->vendorType_ == nullptr; };
    // errcode Field Functions 
    bool hasErrcode() const { return this->errcode_ != nullptr;};
    void deleteErrcode() { this->errcode_ = nullptr;};
    inline string errcode() const { DARABONBA_PTR_GET_DEFAULT(errcode_, "") };
    inline UpdateUserAvatarResponseBody& setErrcode(string errcode) { DARABONBA_PTR_SET_VALUE(errcode_, errcode) };


    // errmsg Field Functions 
    bool hasErrmsg() const { return this->errmsg_ != nullptr;};
    void deleteErrmsg() { this->errmsg_ = nullptr;};
    inline string errmsg() const { DARABONBA_PTR_GET_DEFAULT(errmsg_, "") };
    inline UpdateUserAvatarResponseBody& setErrmsg(string errmsg) { DARABONBA_PTR_SET_VALUE(errmsg_, errmsg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateUserAvatarResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string vendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline UpdateUserAvatarResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string vendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline UpdateUserAvatarResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    std::shared_ptr<string> errcode_ = nullptr;
    std::shared_ptr<string> errmsg_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> vendorRequestId_ = nullptr;
    std::shared_ptr<string> vendorType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
