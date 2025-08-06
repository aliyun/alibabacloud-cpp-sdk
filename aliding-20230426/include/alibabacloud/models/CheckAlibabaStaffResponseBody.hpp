// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKALIBABASTAFFRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKALIBABASTAFFRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CheckAlibabaStaffResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckAlibabaStaffResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(isAlibabaStaff, isAlibabaStaff_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, CheckAlibabaStaffResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(isAlibabaStaff, isAlibabaStaff_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    CheckAlibabaStaffResponseBody() = default ;
    CheckAlibabaStaffResponseBody(const CheckAlibabaStaffResponseBody &) = default ;
    CheckAlibabaStaffResponseBody(CheckAlibabaStaffResponseBody &&) = default ;
    CheckAlibabaStaffResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckAlibabaStaffResponseBody() = default ;
    CheckAlibabaStaffResponseBody& operator=(const CheckAlibabaStaffResponseBody &) = default ;
    CheckAlibabaStaffResponseBody& operator=(CheckAlibabaStaffResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isAlibabaStaff_ != nullptr
        && this->requestId_ != nullptr && this->vendorRequestId_ != nullptr && this->vendorType_ != nullptr; };
    // isAlibabaStaff Field Functions 
    bool hasIsAlibabaStaff() const { return this->isAlibabaStaff_ != nullptr;};
    void deleteIsAlibabaStaff() { this->isAlibabaStaff_ = nullptr;};
    inline bool isAlibabaStaff() const { DARABONBA_PTR_GET_DEFAULT(isAlibabaStaff_, false) };
    inline CheckAlibabaStaffResponseBody& setIsAlibabaStaff(bool isAlibabaStaff) { DARABONBA_PTR_SET_VALUE(isAlibabaStaff_, isAlibabaStaff) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckAlibabaStaffResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string vendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline CheckAlibabaStaffResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string vendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline CheckAlibabaStaffResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    std::shared_ptr<bool> isAlibabaStaff_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> vendorRequestId_ = nullptr;
    std::shared_ptr<string> vendorType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
