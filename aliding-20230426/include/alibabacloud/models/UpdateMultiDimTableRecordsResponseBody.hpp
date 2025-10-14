// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMULTIDIMTABLERECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMULTIDIMTABLERECORDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateMultiDimTableRecordsResponseBodyValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class UpdateMultiDimTableRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMultiDimTableRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Value, value_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMultiDimTableRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Value, value_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    UpdateMultiDimTableRecordsResponseBody() = default ;
    UpdateMultiDimTableRecordsResponseBody(const UpdateMultiDimTableRecordsResponseBody &) = default ;
    UpdateMultiDimTableRecordsResponseBody(UpdateMultiDimTableRecordsResponseBody &&) = default ;
    UpdateMultiDimTableRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMultiDimTableRecordsResponseBody() = default ;
    UpdateMultiDimTableRecordsResponseBody& operator=(const UpdateMultiDimTableRecordsResponseBody &) = default ;
    UpdateMultiDimTableRecordsResponseBody& operator=(UpdateMultiDimTableRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->value_ == nullptr
        && return this->requestId_ == nullptr && return this->vendorRequestId_ == nullptr && return this->vendorType_ == nullptr; };
    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline const vector<UpdateMultiDimTableRecordsResponseBodyValue> & value() const { DARABONBA_PTR_GET_CONST(value_, vector<UpdateMultiDimTableRecordsResponseBodyValue>) };
    inline vector<UpdateMultiDimTableRecordsResponseBodyValue> value() { DARABONBA_PTR_GET(value_, vector<UpdateMultiDimTableRecordsResponseBodyValue>) };
    inline UpdateMultiDimTableRecordsResponseBody& setValue(const vector<UpdateMultiDimTableRecordsResponseBodyValue> & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
    inline UpdateMultiDimTableRecordsResponseBody& setValue(vector<UpdateMultiDimTableRecordsResponseBodyValue> && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateMultiDimTableRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string vendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline UpdateMultiDimTableRecordsResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string vendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline UpdateMultiDimTableRecordsResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    std::shared_ptr<vector<UpdateMultiDimTableRecordsResponseBodyValue>> value_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> vendorRequestId_ = nullptr;
    std::shared_ptr<string> vendorType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
