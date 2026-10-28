// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDEPENDENTQUOTASRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDEPENDENTQUOTASRESPONSEBODY_HPP_
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
  class ListDependentQuotasResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDependentQuotasResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Quotas, quotas_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDependentQuotasResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Quotas, quotas_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDependentQuotasResponseBody() = default ;
    ListDependentQuotasResponseBody(const ListDependentQuotasResponseBody &) = default ;
    ListDependentQuotasResponseBody(ListDependentQuotasResponseBody &&) = default ;
    ListDependentQuotasResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDependentQuotasResponseBody() = default ;
    ListDependentQuotasResponseBody& operator=(const ListDependentQuotasResponseBody &) = default ;
    ListDependentQuotasResponseBody& operator=(ListDependentQuotasResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Quotas : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Quotas& obj) { 
        DARABONBA_PTR_TO_JSON(Dimensions, dimensions_);
        DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
        DARABONBA_PTR_TO_JSON(QuotaActionCode, quotaActionCode_);
        DARABONBA_PTR_TO_JSON(Scale, scale_);
      };
      friend void from_json(const Darabonba::Json& j, Quotas& obj) { 
        DARABONBA_PTR_FROM_JSON(Dimensions, dimensions_);
        DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
        DARABONBA_PTR_FROM_JSON(QuotaActionCode, quotaActionCode_);
        DARABONBA_PTR_FROM_JSON(Scale, scale_);
      };
      Quotas() = default ;
      Quotas(const Quotas &) = default ;
      Quotas(Quotas &&) = default ;
      Quotas(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Quotas() = default ;
      Quotas& operator=(const Quotas &) = default ;
      Quotas& operator=(Quotas &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Dimensions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Dimensions& obj) { 
          DARABONBA_PTR_TO_JSON(DependentDimension, dependentDimension_);
          DARABONBA_PTR_TO_JSON(DimensionKey, dimensionKey_);
          DARABONBA_PTR_TO_JSON(DimensionValues, dimensionValues_);
        };
        friend void from_json(const Darabonba::Json& j, Dimensions& obj) { 
          DARABONBA_PTR_FROM_JSON(DependentDimension, dependentDimension_);
          DARABONBA_PTR_FROM_JSON(DimensionKey, dimensionKey_);
          DARABONBA_PTR_FROM_JSON(DimensionValues, dimensionValues_);
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
        virtual bool empty() const override { return this->dependentDimension_ == nullptr
        && this->dimensionKey_ == nullptr && this->dimensionValues_ == nullptr; };
        // dependentDimension Field Functions 
        bool hasDependentDimension() const { return this->dependentDimension_ != nullptr;};
        void deleteDependentDimension() { this->dependentDimension_ = nullptr;};
        inline const vector<string> & getDependentDimension() const { DARABONBA_PTR_GET_CONST(dependentDimension_, vector<string>) };
        inline vector<string> getDependentDimension() { DARABONBA_PTR_GET(dependentDimension_, vector<string>) };
        inline Dimensions& setDependentDimension(const vector<string> & dependentDimension) { DARABONBA_PTR_SET_VALUE(dependentDimension_, dependentDimension) };
        inline Dimensions& setDependentDimension(vector<string> && dependentDimension) { DARABONBA_PTR_SET_RVALUE(dependentDimension_, dependentDimension) };


        // dimensionKey Field Functions 
        bool hasDimensionKey() const { return this->dimensionKey_ != nullptr;};
        void deleteDimensionKey() { this->dimensionKey_ = nullptr;};
        inline string getDimensionKey() const { DARABONBA_PTR_GET_DEFAULT(dimensionKey_, "") };
        inline Dimensions& setDimensionKey(string dimensionKey) { DARABONBA_PTR_SET_VALUE(dimensionKey_, dimensionKey) };


        // dimensionValues Field Functions 
        bool hasDimensionValues() const { return this->dimensionValues_ != nullptr;};
        void deleteDimensionValues() { this->dimensionValues_ = nullptr;};
        inline const vector<string> & getDimensionValues() const { DARABONBA_PTR_GET_CONST(dimensionValues_, vector<string>) };
        inline vector<string> getDimensionValues() { DARABONBA_PTR_GET(dimensionValues_, vector<string>) };
        inline Dimensions& setDimensionValues(const vector<string> & dimensionValues) { DARABONBA_PTR_SET_VALUE(dimensionValues_, dimensionValues) };
        inline Dimensions& setDimensionValues(vector<string> && dimensionValues) { DARABONBA_PTR_SET_RVALUE(dimensionValues_, dimensionValues) };


      protected:
        // The quota dimension on which the dependent dimension of the target quota depends.
        shared_ptr<vector<string>> dependentDimension_ {};
        // The key of the quota dimension on which the target quota depends.
        shared_ptr<string> dimensionKey_ {};
        // The value of the quota dimension on which the dependent dimension of the target quota depends.
        shared_ptr<vector<string>> dimensionValues_ {};
      };

      virtual bool empty() const override { return this->dimensions_ == nullptr
        && this->productCode_ == nullptr && this->quotaActionCode_ == nullptr && this->scale_ == nullptr; };
      // dimensions Field Functions 
      bool hasDimensions() const { return this->dimensions_ != nullptr;};
      void deleteDimensions() { this->dimensions_ = nullptr;};
      inline const vector<Quotas::Dimensions> & getDimensions() const { DARABONBA_PTR_GET_CONST(dimensions_, vector<Quotas::Dimensions>) };
      inline vector<Quotas::Dimensions> getDimensions() { DARABONBA_PTR_GET(dimensions_, vector<Quotas::Dimensions>) };
      inline Quotas& setDimensions(const vector<Quotas::Dimensions> & dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };
      inline Quotas& setDimensions(vector<Quotas::Dimensions> && dimensions) { DARABONBA_PTR_SET_RVALUE(dimensions_, dimensions) };


      // productCode Field Functions 
      bool hasProductCode() const { return this->productCode_ != nullptr;};
      void deleteProductCode() { this->productCode_ = nullptr;};
      inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
      inline Quotas& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


      // quotaActionCode Field Functions 
      bool hasQuotaActionCode() const { return this->quotaActionCode_ != nullptr;};
      void deleteQuotaActionCode() { this->quotaActionCode_ = nullptr;};
      inline string getQuotaActionCode() const { DARABONBA_PTR_GET_DEFAULT(quotaActionCode_, "") };
      inline Quotas& setQuotaActionCode(string quotaActionCode) { DARABONBA_PTR_SET_VALUE(quotaActionCode_, quotaActionCode) };


      // scale Field Functions 
      bool hasScale() const { return this->scale_ != nullptr;};
      void deleteScale() { this->scale_ = nullptr;};
      inline float getScale() const { DARABONBA_PTR_GET_DEFAULT(scale_, 0.0) };
      inline Quotas& setScale(float scale) { DARABONBA_PTR_SET_VALUE(scale_, scale) };


    protected:
      // The quota dimensions on which the target quota depends.
      shared_ptr<vector<Quotas::Dimensions>> dimensions_ {};
      // The abbreviated name of the cloud service.
      shared_ptr<string> productCode_ {};
      // The ID of the quota on which the target quota depends.
      shared_ptr<string> quotaActionCode_ {};
      // The ratio between the target quota and the dependent quota.
      shared_ptr<float> scale_ {};
    };

    virtual bool empty() const override { return this->quotas_ == nullptr
        && this->requestId_ == nullptr; };
    // quotas Field Functions 
    bool hasQuotas() const { return this->quotas_ != nullptr;};
    void deleteQuotas() { this->quotas_ = nullptr;};
    inline const vector<ListDependentQuotasResponseBody::Quotas> & getQuotas() const { DARABONBA_PTR_GET_CONST(quotas_, vector<ListDependentQuotasResponseBody::Quotas>) };
    inline vector<ListDependentQuotasResponseBody::Quotas> getQuotas() { DARABONBA_PTR_GET(quotas_, vector<ListDependentQuotasResponseBody::Quotas>) };
    inline ListDependentQuotasResponseBody& setQuotas(const vector<ListDependentQuotasResponseBody::Quotas> & quotas) { DARABONBA_PTR_SET_VALUE(quotas_, quotas) };
    inline ListDependentQuotasResponseBody& setQuotas(vector<ListDependentQuotasResponseBody::Quotas> && quotas) { DARABONBA_PTR_SET_RVALUE(quotas_, quotas) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDependentQuotasResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of quotas on which the target quota depends.
    shared_ptr<vector<ListDependentQuotasResponseBody::Quotas>> quotas_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
