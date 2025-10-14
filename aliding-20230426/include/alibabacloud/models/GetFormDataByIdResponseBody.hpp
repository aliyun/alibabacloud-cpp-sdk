// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFORMDATABYIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFORMDATABYIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetFormDataByIDResponseBodyOriginator.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetFormDataByIDResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFormDataByIDResponseBody& obj) { 
      DARABONBA_ANY_TO_JSON(formData, formData_);
      DARABONBA_PTR_TO_JSON(formInstId, formInstId_);
      DARABONBA_PTR_TO_JSON(modifiedTimeGMT, modifiedTimeGMT_);
      DARABONBA_PTR_TO_JSON(originator, originator_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, GetFormDataByIDResponseBody& obj) { 
      DARABONBA_ANY_FROM_JSON(formData, formData_);
      DARABONBA_PTR_FROM_JSON(formInstId, formInstId_);
      DARABONBA_PTR_FROM_JSON(modifiedTimeGMT, modifiedTimeGMT_);
      DARABONBA_PTR_FROM_JSON(originator, originator_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    GetFormDataByIDResponseBody() = default ;
    GetFormDataByIDResponseBody(const GetFormDataByIDResponseBody &) = default ;
    GetFormDataByIDResponseBody(GetFormDataByIDResponseBody &&) = default ;
    GetFormDataByIDResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFormDataByIDResponseBody() = default ;
    GetFormDataByIDResponseBody& operator=(const GetFormDataByIDResponseBody &) = default ;
    GetFormDataByIDResponseBody& operator=(GetFormDataByIDResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->formData_ == nullptr
        && return this->formInstId_ == nullptr && return this->modifiedTimeGMT_ == nullptr && return this->originator_ == nullptr && return this->requestId_ == nullptr && return this->vendorRequestId_ == nullptr
        && return this->vendorType_ == nullptr; };
    // formData Field Functions 
    bool hasFormData() const { return this->formData_ != nullptr;};
    void deleteFormData() { this->formData_ = nullptr;};
    inline     const Darabonba::Json & formData() const { DARABONBA_GET(formData_) };
    Darabonba::Json & formData() { DARABONBA_GET(formData_) };
    inline GetFormDataByIDResponseBody& setFormData(const Darabonba::Json & formData) { DARABONBA_SET_VALUE(formData_, formData) };
    inline GetFormDataByIDResponseBody& setFormData(Darabonba::Json & formData) { DARABONBA_SET_RVALUE(formData_, formData) };


    // formInstId Field Functions 
    bool hasFormInstId() const { return this->formInstId_ != nullptr;};
    void deleteFormInstId() { this->formInstId_ = nullptr;};
    inline string formInstId() const { DARABONBA_PTR_GET_DEFAULT(formInstId_, "") };
    inline GetFormDataByIDResponseBody& setFormInstId(string formInstId) { DARABONBA_PTR_SET_VALUE(formInstId_, formInstId) };


    // modifiedTimeGMT Field Functions 
    bool hasModifiedTimeGMT() const { return this->modifiedTimeGMT_ != nullptr;};
    void deleteModifiedTimeGMT() { this->modifiedTimeGMT_ = nullptr;};
    inline string modifiedTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(modifiedTimeGMT_, "") };
    inline GetFormDataByIDResponseBody& setModifiedTimeGMT(string modifiedTimeGMT) { DARABONBA_PTR_SET_VALUE(modifiedTimeGMT_, modifiedTimeGMT) };


    // originator Field Functions 
    bool hasOriginator() const { return this->originator_ != nullptr;};
    void deleteOriginator() { this->originator_ = nullptr;};
    inline const GetFormDataByIDResponseBodyOriginator & originator() const { DARABONBA_PTR_GET_CONST(originator_, GetFormDataByIDResponseBodyOriginator) };
    inline GetFormDataByIDResponseBodyOriginator originator() { DARABONBA_PTR_GET(originator_, GetFormDataByIDResponseBodyOriginator) };
    inline GetFormDataByIDResponseBody& setOriginator(const GetFormDataByIDResponseBodyOriginator & originator) { DARABONBA_PTR_SET_VALUE(originator_, originator) };
    inline GetFormDataByIDResponseBody& setOriginator(GetFormDataByIDResponseBodyOriginator && originator) { DARABONBA_PTR_SET_RVALUE(originator_, originator) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFormDataByIDResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string vendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline GetFormDataByIDResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string vendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline GetFormDataByIDResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    Darabonba::Json formData_ = nullptr;
    std::shared_ptr<string> formInstId_ = nullptr;
    std::shared_ptr<string> modifiedTimeGMT_ = nullptr;
    std::shared_ptr<GetFormDataByIDResponseBodyOriginator> originator_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> vendorRequestId_ = nullptr;
    std::shared_ptr<string> vendorType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
