// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMULTIDIMTABLEALLFIELDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMULTIDIMTABLEALLFIELDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetMultiDimTableAllFieldsResponseBodyValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetMultiDimTableAllFieldsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMultiDimTableAllFieldsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(value, value_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, GetMultiDimTableAllFieldsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(value, value_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    GetMultiDimTableAllFieldsResponseBody() = default ;
    GetMultiDimTableAllFieldsResponseBody(const GetMultiDimTableAllFieldsResponseBody &) = default ;
    GetMultiDimTableAllFieldsResponseBody(GetMultiDimTableAllFieldsResponseBody &&) = default ;
    GetMultiDimTableAllFieldsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMultiDimTableAllFieldsResponseBody() = default ;
    GetMultiDimTableAllFieldsResponseBody& operator=(const GetMultiDimTableAllFieldsResponseBody &) = default ;
    GetMultiDimTableAllFieldsResponseBody& operator=(GetMultiDimTableAllFieldsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->value_ != nullptr && this->vendorRequestId_ != nullptr && this->vendorType_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMultiDimTableAllFieldsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline const vector<GetMultiDimTableAllFieldsResponseBodyValue> & value() const { DARABONBA_PTR_GET_CONST(value_, vector<GetMultiDimTableAllFieldsResponseBodyValue>) };
    inline vector<GetMultiDimTableAllFieldsResponseBodyValue> value() { DARABONBA_PTR_GET(value_, vector<GetMultiDimTableAllFieldsResponseBodyValue>) };
    inline GetMultiDimTableAllFieldsResponseBody& setValue(const vector<GetMultiDimTableAllFieldsResponseBodyValue> & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
    inline GetMultiDimTableAllFieldsResponseBody& setValue(vector<GetMultiDimTableAllFieldsResponseBodyValue> && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string vendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline GetMultiDimTableAllFieldsResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string vendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline GetMultiDimTableAllFieldsResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<GetMultiDimTableAllFieldsResponseBodyValue>> value_ = nullptr;
    std::shared_ptr<string> vendorRequestId_ = nullptr;
    std::shared_ptr<string> vendorType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
