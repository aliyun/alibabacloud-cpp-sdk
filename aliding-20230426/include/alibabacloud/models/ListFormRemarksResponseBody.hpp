// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFORMREMARKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFORMREMARKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListFormRemarksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFormRemarksResponseBody& obj) { 
      DARABONBA_ANY_TO_JSON(formRemarkVoMap, formRemarkVoMap_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, ListFormRemarksResponseBody& obj) { 
      DARABONBA_ANY_FROM_JSON(formRemarkVoMap, formRemarkVoMap_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    ListFormRemarksResponseBody() = default ;
    ListFormRemarksResponseBody(const ListFormRemarksResponseBody &) = default ;
    ListFormRemarksResponseBody(ListFormRemarksResponseBody &&) = default ;
    ListFormRemarksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFormRemarksResponseBody() = default ;
    ListFormRemarksResponseBody& operator=(const ListFormRemarksResponseBody &) = default ;
    ListFormRemarksResponseBody& operator=(ListFormRemarksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->formRemarkVoMap_ != nullptr
        && this->requestId_ != nullptr && this->vendorRequestId_ != nullptr && this->vendorType_ != nullptr; };
    // formRemarkVoMap Field Functions 
    bool hasFormRemarkVoMap() const { return this->formRemarkVoMap_ != nullptr;};
    void deleteFormRemarkVoMap() { this->formRemarkVoMap_ = nullptr;};
    inline     const Darabonba::Json & formRemarkVoMap() const { DARABONBA_GET(formRemarkVoMap_) };
    Darabonba::Json & formRemarkVoMap() { DARABONBA_GET(formRemarkVoMap_) };
    inline ListFormRemarksResponseBody& setFormRemarkVoMap(const Darabonba::Json & formRemarkVoMap) { DARABONBA_SET_VALUE(formRemarkVoMap_, formRemarkVoMap) };
    inline ListFormRemarksResponseBody& setFormRemarkVoMap(Darabonba::Json & formRemarkVoMap) { DARABONBA_SET_RVALUE(formRemarkVoMap_, formRemarkVoMap) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFormRemarksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string vendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline ListFormRemarksResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string vendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline ListFormRemarksResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    Darabonba::Json formRemarkVoMap_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> vendorRequestId_ = nullptr;
    std::shared_ptr<string> vendorType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
