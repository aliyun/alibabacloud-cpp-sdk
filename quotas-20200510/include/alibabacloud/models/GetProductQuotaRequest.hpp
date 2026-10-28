// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPRODUCTQUOTAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPRODUCTQUOTAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
namespace Models
{
  class GetProductQuotaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProductQuotaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(QuotaActionCode, quotaActionCode_);
    };
    friend void from_json(const Darabonba::Json& j, GetProductQuotaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(QuotaActionCode, quotaActionCode_);
    };
    GetProductQuotaRequest() = default ;
    GetProductQuotaRequest(const GetProductQuotaRequest &) = default ;
    GetProductQuotaRequest(GetProductQuotaRequest &&) = default ;
    GetProductQuotaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProductQuotaRequest() = default ;
    GetProductQuotaRequest& operator=(const GetProductQuotaRequest &) = default ;
    GetProductQuotaRequest& operator=(GetProductQuotaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Dimensions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Dimensions& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Dimensions& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Dimensions() = default ;
      Dimensions(const Dimensions &) = default ;
      Dimensions(Dimensions &&) = default ;
      Dimensions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Dimensions() = default ;
      Dimensions& operator=(const Dimensions &) = default ;
      Dimensions& operator=(Dimensions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Dimensions& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Dimensions& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The key of the quota dimension.
      // 
      // > You must specify both Dimensions.N.Key and Dimensions.N.Value. The value range of N depends on the number of dimensions supported by the cloud service. You can call the [ListProductQuotaDimensions](~~ListProductQuotaDimensions~~) operation to query the quota dimensions supported by the cloud service. The length of the returned array is the maximum value of N.
      shared_ptr<string> key_ {};
      // The value of the quota dimension.
      // 
      // > You must specify both Dimensions.N.Key and Dimensions.N.Value. The value range of N depends on the number of dimensions supported by the cloud service. You can call the [ListProductQuotaDimensions](~~ListProductQuotaDimensions~~) operation to query the quota dimensions supported by the cloud service. The length of the returned array is the maximum value of N.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->dimensions_ == nullptr
        && this->productCode_ == nullptr && this->quotaActionCode_ == nullptr; };
    // dimensions Field Functions 
    bool hasDimensions() const { return this->dimensions_ != nullptr;};
    void deleteDimensions() { this->dimensions_ = nullptr;};
    inline const vector<GetProductQuotaRequest::Dimensions> & getDimensions() const { DARABONBA_PTR_GET_CONST(dimensions_, vector<GetProductQuotaRequest::Dimensions>) };
    inline vector<GetProductQuotaRequest::Dimensions> getDimensions() { DARABONBA_PTR_GET(dimensions_, vector<GetProductQuotaRequest::Dimensions>) };
    inline GetProductQuotaRequest& setDimensions(const vector<GetProductQuotaRequest::Dimensions> & dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };
    inline GetProductQuotaRequest& setDimensions(vector<GetProductQuotaRequest::Dimensions> && dimensions) { DARABONBA_PTR_SET_RVALUE(dimensions_, dimensions) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline GetProductQuotaRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // quotaActionCode Field Functions 
    bool hasQuotaActionCode() const { return this->quotaActionCode_ != nullptr;};
    void deleteQuotaActionCode() { this->quotaActionCode_ = nullptr;};
    inline string getQuotaActionCode() const { DARABONBA_PTR_GET_DEFAULT(quotaActionCode_, "") };
    inline GetProductQuotaRequest& setQuotaActionCode(string quotaActionCode) { DARABONBA_PTR_SET_VALUE(quotaActionCode_, quotaActionCode) };


  protected:
    // The quota dimensions.
    // The properties of the quota item. The combination of dimensions and QuotaActionCode determines a unique quota item.
    // > Dimensions are required for some cloud services. You can call the [ListProductQuotaDimensions](~~ListProductQuotaDimensions~~) operation to query the quota dimensions of a cloud service and check whether a dimension is required. The Requisite response parameter indicates whether the dimension is required.
    shared_ptr<vector<GetProductQuotaRequest::Dimensions>> dimensions_ {};
    // The abbreviated name of the cloud service.
    // 
    // > For more information about how to obtain the abbreviated name of a cloud service, see the ProductCode parameter in [ListProducts](https://help.aliyun.com/document_detail/440555.html).
    // 
    // This parameter is required.
    shared_ptr<string> productCode_ {};
    // The quota ID.
    // 
    // > For more information about how to obtain the quota ID of a specified cloud service, see the QuotaActionCode parameter in [ListProductQuotas](https://help.aliyun.com/document_detail/440554.html).
    // 
    // This parameter is required.
    shared_ptr<string> quotaActionCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
