// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETRICMETALISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETRICMETALISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class DescribeMetricMetaListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetricMetaListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(labels, labels_);
      DARABONBA_PTR_TO_JSON(metaFormat, metaFormat_);
      DARABONBA_PTR_TO_JSON(metricName, metricName_);
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetricMetaListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(labels, labels_);
      DARABONBA_PTR_FROM_JSON(metaFormat, metaFormat_);
      DARABONBA_PTR_FROM_JSON(metricName, metricName_);
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
    };
    DescribeMetricMetaListRequest() = default ;
    DescribeMetricMetaListRequest(const DescribeMetricMetaListRequest &) = default ;
    DescribeMetricMetaListRequest(DescribeMetricMetaListRequest &&) = default ;
    DescribeMetricMetaListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetricMetaListRequest() = default ;
    DescribeMetricMetaListRequest& operator=(const DescribeMetricMetaListRequest &) = default ;
    DescribeMetricMetaListRequest& operator=(DescribeMetricMetaListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Labels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Labels& obj) { 
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Labels& obj) { 
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(value, value_);
      };
      Labels() = default ;
      Labels(const Labels &) = default ;
      Labels(Labels &&) = default ;
      Labels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Labels() = default ;
      Labels& operator=(const Labels &) = default ;
      Labels& operator=(Labels &&) = default ;
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
      inline Labels& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Labels& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> name_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->labels_ == nullptr
        && this->metaFormat_ == nullptr && this->metricName_ == nullptr && this->namespace_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr; };
    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<DescribeMetricMetaListRequest::Labels> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<DescribeMetricMetaListRequest::Labels>) };
    inline vector<DescribeMetricMetaListRequest::Labels> getLabels() { DARABONBA_PTR_GET(labels_, vector<DescribeMetricMetaListRequest::Labels>) };
    inline DescribeMetricMetaListRequest& setLabels(const vector<DescribeMetricMetaListRequest::Labels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline DescribeMetricMetaListRequest& setLabels(vector<DescribeMetricMetaListRequest::Labels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // metaFormat Field Functions 
    bool hasMetaFormat() const { return this->metaFormat_ != nullptr;};
    void deleteMetaFormat() { this->metaFormat_ = nullptr;};
    inline string getMetaFormat() const { DARABONBA_PTR_GET_DEFAULT(metaFormat_, "") };
    inline DescribeMetricMetaListRequest& setMetaFormat(string metaFormat) { DARABONBA_PTR_SET_VALUE(metaFormat_, metaFormat) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline DescribeMetricMetaListRequest& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeMetricMetaListRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeMetricMetaListRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeMetricMetaListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    shared_ptr<vector<DescribeMetricMetaListRequest::Labels>> labels_ {};
    shared_ptr<string> metaFormat_ {};
    shared_ptr<string> metricName_ {};
    shared_ptr<string> namespace_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
