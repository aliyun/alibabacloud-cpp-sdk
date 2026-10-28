// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPRODUCTQUOTADIMENSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPRODUCTQUOTADIMENSIONREQUEST_HPP_
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
  class GetProductQuotaDimensionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProductQuotaDimensionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DependentDimensions, dependentDimensions_);
      DARABONBA_PTR_TO_JSON(DimensionKey, dimensionKey_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
    };
    friend void from_json(const Darabonba::Json& j, GetProductQuotaDimensionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DependentDimensions, dependentDimensions_);
      DARABONBA_PTR_FROM_JSON(DimensionKey, dimensionKey_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
    };
    GetProductQuotaDimensionRequest() = default ;
    GetProductQuotaDimensionRequest(const GetProductQuotaDimensionRequest &) = default ;
    GetProductQuotaDimensionRequest(GetProductQuotaDimensionRequest &&) = default ;
    GetProductQuotaDimensionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProductQuotaDimensionRequest() = default ;
    GetProductQuotaDimensionRequest& operator=(const GetProductQuotaDimensionRequest &) = default ;
    GetProductQuotaDimensionRequest& operator=(GetProductQuotaDimensionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DependentDimensions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DependentDimensions& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, DependentDimensions& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      DependentDimensions() = default ;
      DependentDimensions(const DependentDimensions &) = default ;
      DependentDimensions(DependentDimensions &&) = default ;
      DependentDimensions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DependentDimensions() = default ;
      DependentDimensions& operator=(const DependentDimensions &) = default ;
      DependentDimensions& operator=(DependentDimensions &&) = default ;
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
      inline DependentDimensions& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline DependentDimensions& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The key of the quota dimension on which the target quota dimension depends.
      // 
      // > - The value of N depends on the number of quota dimensions on which the target quota dimension depends.
      // > - You must specify the key and value of a dependent quota dimension at the same time.
      shared_ptr<string> key_ {};
      // The value of the quota dimension on which the target quota dimension depends.
      // 
      // > - The value of N depends on the number of quota dimensions on which the target quota dimension depends.
      // > - You must specify the key and value of a dependent quota dimension at the same time.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->dependentDimensions_ == nullptr
        && this->dimensionKey_ == nullptr && this->productCode_ == nullptr; };
    // dependentDimensions Field Functions 
    bool hasDependentDimensions() const { return this->dependentDimensions_ != nullptr;};
    void deleteDependentDimensions() { this->dependentDimensions_ = nullptr;};
    inline const vector<GetProductQuotaDimensionRequest::DependentDimensions> & getDependentDimensions() const { DARABONBA_PTR_GET_CONST(dependentDimensions_, vector<GetProductQuotaDimensionRequest::DependentDimensions>) };
    inline vector<GetProductQuotaDimensionRequest::DependentDimensions> getDependentDimensions() { DARABONBA_PTR_GET(dependentDimensions_, vector<GetProductQuotaDimensionRequest::DependentDimensions>) };
    inline GetProductQuotaDimensionRequest& setDependentDimensions(const vector<GetProductQuotaDimensionRequest::DependentDimensions> & dependentDimensions) { DARABONBA_PTR_SET_VALUE(dependentDimensions_, dependentDimensions) };
    inline GetProductQuotaDimensionRequest& setDependentDimensions(vector<GetProductQuotaDimensionRequest::DependentDimensions> && dependentDimensions) { DARABONBA_PTR_SET_RVALUE(dependentDimensions_, dependentDimensions) };


    // dimensionKey Field Functions 
    bool hasDimensionKey() const { return this->dimensionKey_ != nullptr;};
    void deleteDimensionKey() { this->dimensionKey_ = nullptr;};
    inline string getDimensionKey() const { DARABONBA_PTR_GET_DEFAULT(dimensionKey_, "") };
    inline GetProductQuotaDimensionRequest& setDimensionKey(string dimensionKey) { DARABONBA_PTR_SET_VALUE(dimensionKey_, dimensionKey) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline GetProductQuotaDimensionRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


  protected:
    // The quota dimensions on which the target quota dimension depends.
    shared_ptr<vector<GetProductQuotaDimensionRequest::DependentDimensions>> dependentDimensions_ {};
    // The key of the target quota dimension.
    // 
    // > If the target quota dimension has dependent quota dimensions, you must specify the keys and values of the dependent quota dimensions at the same time.
    shared_ptr<string> dimensionKey_ {};
    // The abbreviation of the cloud service.
    // 
    // > For more information about how to obtain the abbreviation of a cloud service, see the ProductCode parameter in [ListProducts](https://help.aliyun.com/document_detail/440555.html).
    // 
    // This parameter is required.
    shared_ptr<string> productCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
