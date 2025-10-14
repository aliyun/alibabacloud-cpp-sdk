// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFORMCOMPONENTDEFINITIONLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFORMCOMPONENTDEFINITIONLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetFormComponentDefinitionListResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetFormComponentDefinitionListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFormComponentDefinitionListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, GetFormComponentDefinitionListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    GetFormComponentDefinitionListResponseBody() = default ;
    GetFormComponentDefinitionListResponseBody(const GetFormComponentDefinitionListResponseBody &) = default ;
    GetFormComponentDefinitionListResponseBody(GetFormComponentDefinitionListResponseBody &&) = default ;
    GetFormComponentDefinitionListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFormComponentDefinitionListResponseBody() = default ;
    GetFormComponentDefinitionListResponseBody& operator=(const GetFormComponentDefinitionListResponseBody &) = default ;
    GetFormComponentDefinitionListResponseBody& operator=(GetFormComponentDefinitionListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->result_ == nullptr
        && return this->requestId_ == nullptr && return this->vendorRequestId_ == nullptr && return this->vendorType_ == nullptr; };
    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<GetFormComponentDefinitionListResponseBodyResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<GetFormComponentDefinitionListResponseBodyResult>) };
    inline vector<GetFormComponentDefinitionListResponseBodyResult> result() { DARABONBA_PTR_GET(result_, vector<GetFormComponentDefinitionListResponseBodyResult>) };
    inline GetFormComponentDefinitionListResponseBody& setResult(const vector<GetFormComponentDefinitionListResponseBodyResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetFormComponentDefinitionListResponseBody& setResult(vector<GetFormComponentDefinitionListResponseBodyResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFormComponentDefinitionListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string vendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline GetFormComponentDefinitionListResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string vendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline GetFormComponentDefinitionListResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    std::shared_ptr<vector<GetFormComponentDefinitionListResponseBodyResult>> result_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> vendorRequestId_ = nullptr;
    std::shared_ptr<string> vendorType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
