// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRODUCTQUOTADIMENSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPRODUCTQUOTADIMENSIONSRESPONSEBODY_HPP_
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
  class ListProductQuotaDimensionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProductQuotaDimensionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(QuotaDimensions, quotaDimensions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListProductQuotaDimensionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(QuotaDimensions, quotaDimensions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListProductQuotaDimensionsResponseBody() = default ;
    ListProductQuotaDimensionsResponseBody(const ListProductQuotaDimensionsResponseBody &) = default ;
    ListProductQuotaDimensionsResponseBody(ListProductQuotaDimensionsResponseBody &&) = default ;
    ListProductQuotaDimensionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProductQuotaDimensionsResponseBody() = default ;
    ListProductQuotaDimensionsResponseBody& operator=(const ListProductQuotaDimensionsResponseBody &) = default ;
    ListProductQuotaDimensionsResponseBody& operator=(ListProductQuotaDimensionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class QuotaDimensions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QuotaDimensions& obj) { 
        DARABONBA_PTR_TO_JSON(DependentDimensions, dependentDimensions_);
        DARABONBA_PTR_TO_JSON(DimensionKey, dimensionKey_);
        DARABONBA_PTR_TO_JSON(DimensionValueDetail, dimensionValueDetail_);
        DARABONBA_PTR_TO_JSON(DimensionValues, dimensionValues_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Requisite, requisite_);
      };
      friend void from_json(const Darabonba::Json& j, QuotaDimensions& obj) { 
        DARABONBA_PTR_FROM_JSON(DependentDimensions, dependentDimensions_);
        DARABONBA_PTR_FROM_JSON(DimensionKey, dimensionKey_);
        DARABONBA_PTR_FROM_JSON(DimensionValueDetail, dimensionValueDetail_);
        DARABONBA_PTR_FROM_JSON(DimensionValues, dimensionValues_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Requisite, requisite_);
      };
      QuotaDimensions() = default ;
      QuotaDimensions(const QuotaDimensions &) = default ;
      QuotaDimensions(QuotaDimensions &&) = default ;
      QuotaDimensions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~QuotaDimensions() = default ;
      QuotaDimensions& operator=(const QuotaDimensions &) = default ;
      QuotaDimensions& operator=(QuotaDimensions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DimensionValueDetail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DimensionValueDetail& obj) { 
          DARABONBA_PTR_TO_JSON(DependentDimensions, dependentDimensions_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, DimensionValueDetail& obj) { 
          DARABONBA_PTR_FROM_JSON(DependentDimensions, dependentDimensions_);
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
          shared_ptr<string> key_ {};
          // The value of the quota dimension on which the target quota dimension depends.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->dependentDimensions_ == nullptr
        && this->name_ == nullptr && this->value_ == nullptr; };
        // dependentDimensions Field Functions 
        bool hasDependentDimensions() const { return this->dependentDimensions_ != nullptr;};
        void deleteDependentDimensions() { this->dependentDimensions_ = nullptr;};
        inline const vector<DimensionValueDetail::DependentDimensions> & getDependentDimensions() const { DARABONBA_PTR_GET_CONST(dependentDimensions_, vector<DimensionValueDetail::DependentDimensions>) };
        inline vector<DimensionValueDetail::DependentDimensions> getDependentDimensions() { DARABONBA_PTR_GET(dependentDimensions_, vector<DimensionValueDetail::DependentDimensions>) };
        inline DimensionValueDetail& setDependentDimensions(const vector<DimensionValueDetail::DependentDimensions> & dependentDimensions) { DARABONBA_PTR_SET_VALUE(dependentDimensions_, dependentDimensions) };
        inline DimensionValueDetail& setDependentDimensions(vector<DimensionValueDetail::DependentDimensions> && dependentDimensions) { DARABONBA_PTR_SET_RVALUE(dependentDimensions_, dependentDimensions) };


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
        // The quota dimensions on which the target quota dimension depends.
        shared_ptr<vector<DimensionValueDetail::DependentDimensions>> dependentDimensions_ {};
        // The name of the quota dimension value.
        shared_ptr<string> name_ {};
        // The value of the quota dimension.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->dependentDimensions_ == nullptr
        && this->dimensionKey_ == nullptr && this->dimensionValueDetail_ == nullptr && this->dimensionValues_ == nullptr && this->name_ == nullptr && this->requisite_ == nullptr; };
      // dependentDimensions Field Functions 
      bool hasDependentDimensions() const { return this->dependentDimensions_ != nullptr;};
      void deleteDependentDimensions() { this->dependentDimensions_ = nullptr;};
      inline const vector<string> & getDependentDimensions() const { DARABONBA_PTR_GET_CONST(dependentDimensions_, vector<string>) };
      inline vector<string> getDependentDimensions() { DARABONBA_PTR_GET(dependentDimensions_, vector<string>) };
      inline QuotaDimensions& setDependentDimensions(const vector<string> & dependentDimensions) { DARABONBA_PTR_SET_VALUE(dependentDimensions_, dependentDimensions) };
      inline QuotaDimensions& setDependentDimensions(vector<string> && dependentDimensions) { DARABONBA_PTR_SET_RVALUE(dependentDimensions_, dependentDimensions) };


      // dimensionKey Field Functions 
      bool hasDimensionKey() const { return this->dimensionKey_ != nullptr;};
      void deleteDimensionKey() { this->dimensionKey_ = nullptr;};
      inline string getDimensionKey() const { DARABONBA_PTR_GET_DEFAULT(dimensionKey_, "") };
      inline QuotaDimensions& setDimensionKey(string dimensionKey) { DARABONBA_PTR_SET_VALUE(dimensionKey_, dimensionKey) };


      // dimensionValueDetail Field Functions 
      bool hasDimensionValueDetail() const { return this->dimensionValueDetail_ != nullptr;};
      void deleteDimensionValueDetail() { this->dimensionValueDetail_ = nullptr;};
      inline const vector<QuotaDimensions::DimensionValueDetail> & getDimensionValueDetail() const { DARABONBA_PTR_GET_CONST(dimensionValueDetail_, vector<QuotaDimensions::DimensionValueDetail>) };
      inline vector<QuotaDimensions::DimensionValueDetail> getDimensionValueDetail() { DARABONBA_PTR_GET(dimensionValueDetail_, vector<QuotaDimensions::DimensionValueDetail>) };
      inline QuotaDimensions& setDimensionValueDetail(const vector<QuotaDimensions::DimensionValueDetail> & dimensionValueDetail) { DARABONBA_PTR_SET_VALUE(dimensionValueDetail_, dimensionValueDetail) };
      inline QuotaDimensions& setDimensionValueDetail(vector<QuotaDimensions::DimensionValueDetail> && dimensionValueDetail) { DARABONBA_PTR_SET_RVALUE(dimensionValueDetail_, dimensionValueDetail) };


      // dimensionValues Field Functions 
      bool hasDimensionValues() const { return this->dimensionValues_ != nullptr;};
      void deleteDimensionValues() { this->dimensionValues_ = nullptr;};
      inline const vector<string> & getDimensionValues() const { DARABONBA_PTR_GET_CONST(dimensionValues_, vector<string>) };
      inline vector<string> getDimensionValues() { DARABONBA_PTR_GET(dimensionValues_, vector<string>) };
      inline QuotaDimensions& setDimensionValues(const vector<string> & dimensionValues) { DARABONBA_PTR_SET_VALUE(dimensionValues_, dimensionValues) };
      inline QuotaDimensions& setDimensionValues(vector<string> && dimensionValues) { DARABONBA_PTR_SET_RVALUE(dimensionValues_, dimensionValues) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline QuotaDimensions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // requisite Field Functions 
      bool hasRequisite() const { return this->requisite_ != nullptr;};
      void deleteRequisite() { this->requisite_ = nullptr;};
      inline bool getRequisite() const { DARABONBA_PTR_GET_DEFAULT(requisite_, false) };
      inline QuotaDimensions& setRequisite(bool requisite) { DARABONBA_PTR_SET_VALUE(requisite_, requisite) };


    protected:
      // The quota dimensions on which the target quota dimension depends.
      shared_ptr<vector<string>> dependentDimensions_ {};
      // The key of the quota dimension. Valid values:
      // 
      // - regionId: the region ID.
      // 
      // - zoneId: the zone ID.
      // 
      // - chargeType: the billing method.
      // 
      // - networkType: the network type.
      // 
      // - resourceType: the resource type.
      shared_ptr<string> dimensionKey_ {};
      // The details of the quota dimension value.
      shared_ptr<vector<QuotaDimensions::DimensionValueDetail>> dimensionValueDetail_ {};
      // The list of quota dimension values.
      shared_ptr<vector<string>> dimensionValues_ {};
      // The name of the quota dimension.
      shared_ptr<string> name_ {};
      // Specifies whether the quota dimension is required when you query quota dimensions. Valid values:
      // 
      // - true: The quota dimension is required.
      // 
      // - false: The quota dimension is optional.
      shared_ptr<bool> requisite_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->quotaDimensions_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListProductQuotaDimensionsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListProductQuotaDimensionsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // quotaDimensions Field Functions 
    bool hasQuotaDimensions() const { return this->quotaDimensions_ != nullptr;};
    void deleteQuotaDimensions() { this->quotaDimensions_ = nullptr;};
    inline const vector<ListProductQuotaDimensionsResponseBody::QuotaDimensions> & getQuotaDimensions() const { DARABONBA_PTR_GET_CONST(quotaDimensions_, vector<ListProductQuotaDimensionsResponseBody::QuotaDimensions>) };
    inline vector<ListProductQuotaDimensionsResponseBody::QuotaDimensions> getQuotaDimensions() { DARABONBA_PTR_GET(quotaDimensions_, vector<ListProductQuotaDimensionsResponseBody::QuotaDimensions>) };
    inline ListProductQuotaDimensionsResponseBody& setQuotaDimensions(const vector<ListProductQuotaDimensionsResponseBody::QuotaDimensions> & quotaDimensions) { DARABONBA_PTR_SET_VALUE(quotaDimensions_, quotaDimensions) };
    inline ListProductQuotaDimensionsResponseBody& setQuotaDimensions(vector<ListProductQuotaDimensionsResponseBody::QuotaDimensions> && quotaDimensions) { DARABONBA_PTR_SET_RVALUE(quotaDimensions_, quotaDimensions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListProductQuotaDimensionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListProductQuotaDimensionsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The maximum number of entries returned for this query.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token that indicates the position of the returned data. If this parameter is not returned, it indicates that all data has been queried.
    shared_ptr<string> nextToken_ {};
    // The quota dimensions.
    shared_ptr<vector<ListProductQuotaDimensionsResponseBody::QuotaDimensions>> quotaDimensions_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned for this request.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
