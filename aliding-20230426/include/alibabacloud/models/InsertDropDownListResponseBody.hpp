// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSERTDROPDOWNLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_INSERTDROPDOWNLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class InsertDropDownListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsertDropDownListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(a1Notation, a1Notation_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, InsertDropDownListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(a1Notation, a1Notation_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    InsertDropDownListResponseBody() = default ;
    InsertDropDownListResponseBody(const InsertDropDownListResponseBody &) = default ;
    InsertDropDownListResponseBody(InsertDropDownListResponseBody &&) = default ;
    InsertDropDownListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsertDropDownListResponseBody() = default ;
    InsertDropDownListResponseBody& operator=(const InsertDropDownListResponseBody &) = default ;
    InsertDropDownListResponseBody& operator=(InsertDropDownListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->a1Notation_ == nullptr
        && return this->requestId_ == nullptr && return this->vendorRequestId_ == nullptr && return this->vendorType_ == nullptr; };
    // a1Notation Field Functions 
    bool hasA1Notation() const { return this->a1Notation_ != nullptr;};
    void deleteA1Notation() { this->a1Notation_ = nullptr;};
    inline string a1Notation() const { DARABONBA_PTR_GET_DEFAULT(a1Notation_, "") };
    inline InsertDropDownListResponseBody& setA1Notation(string a1Notation) { DARABONBA_PTR_SET_VALUE(a1Notation_, a1Notation) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline InsertDropDownListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string vendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline InsertDropDownListResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string vendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline InsertDropDownListResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    std::shared_ptr<string> a1Notation_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> vendorRequestId_ = nullptr;
    std::shared_ptr<string> vendorType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
