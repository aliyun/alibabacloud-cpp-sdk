// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPRODUCTQUOTADIMENSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPRODUCTQUOTADIMENSIONRESPONSEBODY_HPP_
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
  class GetProductQuotaDimensionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProductQuotaDimensionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(QuotaDimension, quotaDimension_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetProductQuotaDimensionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(QuotaDimension, quotaDimension_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetProductQuotaDimensionResponseBody() = default ;
    GetProductQuotaDimensionResponseBody(const GetProductQuotaDimensionResponseBody &) = default ;
    GetProductQuotaDimensionResponseBody(GetProductQuotaDimensionResponseBody &&) = default ;
    GetProductQuotaDimensionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProductQuotaDimensionResponseBody() = default ;
    GetProductQuotaDimensionResponseBody& operator=(const GetProductQuotaDimensionResponseBody &) = default ;
    GetProductQuotaDimensionResponseBody& operator=(GetProductQuotaDimensionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class QuotaDimension : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QuotaDimension& obj) { 
        DARABONBA_PTR_TO_JSON(DependentDimensions, dependentDimensions_);
        DARABONBA_PTR_TO_JSON(DimensionKey, dimensionKey_);
        DARABONBA_PTR_TO_JSON(DimensionValueDetail, dimensionValueDetail_);
        DARABONBA_PTR_TO_JSON(DimensionValues, dimensionValues_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, QuotaDimension& obj) { 
        DARABONBA_PTR_FROM_JSON(DependentDimensions, dependentDimensions_);
        DARABONBA_PTR_FROM_JSON(DimensionKey, dimensionKey_);
        DARABONBA_PTR_FROM_JSON(DimensionValueDetail, dimensionValueDetail_);
        DARABONBA_PTR_FROM_JSON(DimensionValues, dimensionValues_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      QuotaDimension() = default ;
      QuotaDimension(const QuotaDimension &) = default ;
      QuotaDimension(QuotaDimension &&) = default ;
      QuotaDimension(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~QuotaDimension() = default ;
      QuotaDimension& operator=(const QuotaDimension &) = default ;
      QuotaDimension& operator=(QuotaDimension &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DimensionValueDetail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DimensionValueDetail& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, DimensionValueDetail& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        DimensionValueDetail() = default ;
        DimensionValueDetail(const DimensionValueDetail &) = default ;
        DimensionValueDetail(DimensionValueDetail &&) = default ;
        DimensionValueDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DimensionValueDetail() = default ;
        DimensionValueDetail& operator=(const DimensionValueDetail &) = default ;
        DimensionValueDetail& operator=(DimensionValueDetail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline DimensionValueDetail& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline DimensionValueDetail& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The name of the quota dimension value.
        shared_ptr<string> name_ {};
        // The value of the quota dimension.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->dependentDimensions_ == nullptr
        && this->dimensionKey_ == nullptr && this->dimensionValueDetail_ == nullptr && this->dimensionValues_ == nullptr && this->name_ == nullptr; };
      // dependentDimensions Field Functions 
      bool hasDependentDimensions() const { return this->dependentDimensions_ != nullptr;};
      void deleteDependentDimensions() { this->dependentDimensions_ = nullptr;};
      inline const vector<string> & getDependentDimensions() const { DARABONBA_PTR_GET_CONST(dependentDimensions_, vector<string>) };
      inline vector<string> getDependentDimensions() { DARABONBA_PTR_GET(dependentDimensions_, vector<string>) };
      inline QuotaDimension& setDependentDimensions(const vector<string> & dependentDimensions) { DARABONBA_PTR_SET_VALUE(dependentDimensions_, dependentDimensions) };
      inline QuotaDimension& setDependentDimensions(vector<string> && dependentDimensions) { DARABONBA_PTR_SET_RVALUE(dependentDimensions_, dependentDimensions) };


      // dimensionKey Field Functions 
      bool hasDimensionKey() const { return this->dimensionKey_ != nullptr;};
      void deleteDimensionKey() { this->dimensionKey_ = nullptr;};
      inline string getDimensionKey() const { DARABONBA_PTR_GET_DEFAULT(dimensionKey_, "") };
      inline QuotaDimension& setDimensionKey(string dimensionKey) { DARABONBA_PTR_SET_VALUE(dimensionKey_, dimensionKey) };


      // dimensionValueDetail Field Functions 
      bool hasDimensionValueDetail() const { return this->dimensionValueDetail_ != nullptr;};
      void deleteDimensionValueDetail() { this->dimensionValueDetail_ = nullptr;};
      inline const vector<QuotaDimension::DimensionValueDetail> & getDimensionValueDetail() const { DARABONBA_PTR_GET_CONST(dimensionValueDetail_, vector<QuotaDimension::DimensionValueDetail>) };
      inline vector<QuotaDimension::DimensionValueDetail> getDimensionValueDetail() { DARABONBA_PTR_GET(dimensionValueDetail_, vector<QuotaDimension::DimensionValueDetail>) };
      inline QuotaDimension& setDimensionValueDetail(const vector<QuotaDimension::DimensionValueDetail> & dimensionValueDetail) { DARABONBA_PTR_SET_VALUE(dimensionValueDetail_, dimensionValueDetail) };
      inline QuotaDimension& setDimensionValueDetail(vector<QuotaDimension::DimensionValueDetail> && dimensionValueDetail) { DARABONBA_PTR_SET_RVALUE(dimensionValueDetail_, dimensionValueDetail) };


      // dimensionValues Field Functions 
      bool hasDimensionValues() const { return this->dimensionValues_ != nullptr;};
      void deleteDimensionValues() { this->dimensionValues_ = nullptr;};
      inline const vector<string> & getDimensionValues() const { DARABONBA_PTR_GET_CONST(dimensionValues_, vector<string>) };
      inline vector<string> getDimensionValues() { DARABONBA_PTR_GET(dimensionValues_, vector<string>) };
      inline QuotaDimension& setDimensionValues(const vector<string> & dimensionValues) { DARABONBA_PTR_SET_VALUE(dimensionValues_, dimensionValues) };
      inline QuotaDimension& setDimensionValues(vector<string> && dimensionValues) { DARABONBA_PTR_SET_RVALUE(dimensionValues_, dimensionValues) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline QuotaDimension& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The quota dimensions of the cloud service on which the target quota depends.
      shared_ptr<vector<string>> dependentDimensions_ {};
      // The key of the quota dimension. Valid values:
      // - regionId: region
      // 
      // - zoneId: zone
      // 
      // - chargeType: billing method
      // 
      // - networkType: network type
      // 
      // - resourceType: resource type
      shared_ptr<string> dimensionKey_ {};
      // The details of the quota dimension value.
      shared_ptr<vector<QuotaDimension::DimensionValueDetail>> dimensionValueDetail_ {};
      // The list of quota dimension values.
      shared_ptr<vector<string>> dimensionValues_ {};
      // The name of the quota dimension.
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->quotaDimension_ == nullptr
        && this->requestId_ == nullptr; };
    // quotaDimension Field Functions 
    bool hasQuotaDimension() const { return this->quotaDimension_ != nullptr;};
    void deleteQuotaDimension() { this->quotaDimension_ = nullptr;};
    inline const GetProductQuotaDimensionResponseBody::QuotaDimension & getQuotaDimension() const { DARABONBA_PTR_GET_CONST(quotaDimension_, GetProductQuotaDimensionResponseBody::QuotaDimension) };
    inline GetProductQuotaDimensionResponseBody::QuotaDimension getQuotaDimension() { DARABONBA_PTR_GET(quotaDimension_, GetProductQuotaDimensionResponseBody::QuotaDimension) };
    inline GetProductQuotaDimensionResponseBody& setQuotaDimension(const GetProductQuotaDimensionResponseBody::QuotaDimension & quotaDimension) { DARABONBA_PTR_SET_VALUE(quotaDimension_, quotaDimension) };
    inline GetProductQuotaDimensionResponseBody& setQuotaDimension(GetProductQuotaDimensionResponseBody::QuotaDimension && quotaDimension) { DARABONBA_PTR_SET_RVALUE(quotaDimension_, quotaDimension) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetProductQuotaDimensionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the quota dimension.
    shared_ptr<GetProductQuotaDimensionResponseBody::QuotaDimension> quotaDimension_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
