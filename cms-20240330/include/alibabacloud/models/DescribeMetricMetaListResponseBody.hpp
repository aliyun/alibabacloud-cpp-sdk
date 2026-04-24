// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETRICMETALISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETRICMETALISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class DescribeMetricMetaListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetricMetaListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(resources, resources_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetricMetaListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resources, resources_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    DescribeMetricMetaListResponseBody() = default ;
    DescribeMetricMetaListResponseBody(const DescribeMetricMetaListResponseBody &) = default ;
    DescribeMetricMetaListResponseBody(DescribeMetricMetaListResponseBody &&) = default ;
    DescribeMetricMetaListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetricMetaListResponseBody() = default ;
    DescribeMetricMetaListResponseBody& operator=(const DescribeMetricMetaListResponseBody &) = default ;
    DescribeMetricMetaListResponseBody& operator=(DescribeMetricMetaListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Resources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Resources& obj) { 
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(dimensionDescription, dimensionDescription_);
        DARABONBA_PTR_TO_JSON(dimensions, dimensions_);
        DARABONBA_PTR_TO_JSON(labels, labels_);
        DARABONBA_PTR_TO_JSON(metricName, metricName_);
        DARABONBA_PTR_TO_JSON(namespace, namespace_);
        DARABONBA_PTR_TO_JSON(periods, periods_);
        DARABONBA_PTR_TO_JSON(statistics, statistics_);
        DARABONBA_PTR_TO_JSON(type, type_);
        DARABONBA_PTR_TO_JSON(unit, unit_);
      };
      friend void from_json(const Darabonba::Json& j, Resources& obj) { 
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(dimensionDescription, dimensionDescription_);
        DARABONBA_PTR_FROM_JSON(dimensions, dimensions_);
        DARABONBA_PTR_FROM_JSON(labels, labels_);
        DARABONBA_PTR_FROM_JSON(metricName, metricName_);
        DARABONBA_PTR_FROM_JSON(namespace, namespace_);
        DARABONBA_PTR_FROM_JSON(periods, periods_);
        DARABONBA_PTR_FROM_JSON(statistics, statistics_);
        DARABONBA_PTR_FROM_JSON(type, type_);
        DARABONBA_PTR_FROM_JSON(unit, unit_);
      };
      Resources() = default ;
      Resources(const Resources &) = default ;
      Resources(Resources &&) = default ;
      Resources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Resources() = default ;
      Resources& operator=(const Resources &) = default ;
      Resources& operator=(Resources &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DimensionDescription : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DimensionDescription& obj) { 
          DARABONBA_PTR_TO_JSON(name, name_);
        };
        friend void from_json(const Darabonba::Json& j, DimensionDescription& obj) { 
          DARABONBA_PTR_FROM_JSON(name, name_);
        };
        DimensionDescription() = default ;
        DimensionDescription(const DimensionDescription &) = default ;
        DimensionDescription(DimensionDescription &&) = default ;
        DimensionDescription(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DimensionDescription() = default ;
        DimensionDescription& operator=(const DimensionDescription &) = default ;
        DimensionDescription& operator=(DimensionDescription &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline DimensionDescription& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->description_ == nullptr
        && this->dimensionDescription_ == nullptr && this->dimensions_ == nullptr && this->labels_ == nullptr && this->metricName_ == nullptr && this->namespace_ == nullptr
        && this->periods_ == nullptr && this->statistics_ == nullptr && this->type_ == nullptr && this->unit_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Resources& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // dimensionDescription Field Functions 
      bool hasDimensionDescription() const { return this->dimensionDescription_ != nullptr;};
      void deleteDimensionDescription() { this->dimensionDescription_ = nullptr;};
      inline const vector<Resources::DimensionDescription> & getDimensionDescription() const { DARABONBA_PTR_GET_CONST(dimensionDescription_, vector<Resources::DimensionDescription>) };
      inline vector<Resources::DimensionDescription> getDimensionDescription() { DARABONBA_PTR_GET(dimensionDescription_, vector<Resources::DimensionDescription>) };
      inline Resources& setDimensionDescription(const vector<Resources::DimensionDescription> & dimensionDescription) { DARABONBA_PTR_SET_VALUE(dimensionDescription_, dimensionDescription) };
      inline Resources& setDimensionDescription(vector<Resources::DimensionDescription> && dimensionDescription) { DARABONBA_PTR_SET_RVALUE(dimensionDescription_, dimensionDescription) };


      // dimensions Field Functions 
      bool hasDimensions() const { return this->dimensions_ != nullptr;};
      void deleteDimensions() { this->dimensions_ = nullptr;};
      inline const vector<string> & getDimensions() const { DARABONBA_PTR_GET_CONST(dimensions_, vector<string>) };
      inline vector<string> getDimensions() { DARABONBA_PTR_GET(dimensions_, vector<string>) };
      inline Resources& setDimensions(const vector<string> & dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };
      inline Resources& setDimensions(vector<string> && dimensions) { DARABONBA_PTR_SET_RVALUE(dimensions_, dimensions) };


      // labels Field Functions 
      bool hasLabels() const { return this->labels_ != nullptr;};
      void deleteLabels() { this->labels_ = nullptr;};
      inline const map<string, string> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, map<string, string>) };
      inline map<string, string> getLabels() { DARABONBA_PTR_GET(labels_, map<string, string>) };
      inline Resources& setLabels(const map<string, string> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
      inline Resources& setLabels(map<string, string> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


      // metricName Field Functions 
      bool hasMetricName() const { return this->metricName_ != nullptr;};
      void deleteMetricName() { this->metricName_ = nullptr;};
      inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
      inline Resources& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline Resources& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      // periods Field Functions 
      bool hasPeriods() const { return this->periods_ != nullptr;};
      void deletePeriods() { this->periods_ = nullptr;};
      inline string getPeriods() const { DARABONBA_PTR_GET_DEFAULT(periods_, "") };
      inline Resources& setPeriods(string periods) { DARABONBA_PTR_SET_VALUE(periods_, periods) };


      // statistics Field Functions 
      bool hasStatistics() const { return this->statistics_ != nullptr;};
      void deleteStatistics() { this->statistics_ = nullptr;};
      inline string getStatistics() const { DARABONBA_PTR_GET_DEFAULT(statistics_, "") };
      inline Resources& setStatistics(string statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Resources& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // unit Field Functions 
      bool hasUnit() const { return this->unit_ != nullptr;};
      void deleteUnit() { this->unit_ = nullptr;};
      inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
      inline Resources& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


    protected:
      shared_ptr<string> description_ {};
      shared_ptr<vector<Resources::DimensionDescription>> dimensionDescription_ {};
      shared_ptr<vector<string>> dimensions_ {};
      shared_ptr<map<string, string>> labels_ {};
      shared_ptr<string> metricName_ {};
      shared_ptr<string> namespace_ {};
      shared_ptr<string> periods_ {};
      shared_ptr<string> statistics_ {};
      shared_ptr<string> type_ {};
      shared_ptr<string> unit_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->resources_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeMetricMetaListResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeMetricMetaListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMetricMetaListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const vector<DescribeMetricMetaListResponseBody::Resources> & getResources() const { DARABONBA_PTR_GET_CONST(resources_, vector<DescribeMetricMetaListResponseBody::Resources>) };
    inline vector<DescribeMetricMetaListResponseBody::Resources> getResources() { DARABONBA_PTR_GET(resources_, vector<DescribeMetricMetaListResponseBody::Resources>) };
    inline DescribeMetricMetaListResponseBody& setResources(const vector<DescribeMetricMetaListResponseBody::Resources> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline DescribeMetricMetaListResponseBody& setResources(vector<DescribeMetricMetaListResponseBody::Resources> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeMetricMetaListResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeMetricMetaListResponseBody::Resources>> resources_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
