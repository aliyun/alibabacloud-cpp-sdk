// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETRICMETALISTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETRICMETALISTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class DescribeMetricMetaListShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetricMetaListShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(labels, labelsShrink_);
      DARABONBA_PTR_TO_JSON(metaFormat, metaFormat_);
      DARABONBA_PTR_TO_JSON(metricName, metricName_);
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetricMetaListShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(labels, labelsShrink_);
      DARABONBA_PTR_FROM_JSON(metaFormat, metaFormat_);
      DARABONBA_PTR_FROM_JSON(metricName, metricName_);
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
    };
    DescribeMetricMetaListShrinkRequest() = default ;
    DescribeMetricMetaListShrinkRequest(const DescribeMetricMetaListShrinkRequest &) = default ;
    DescribeMetricMetaListShrinkRequest(DescribeMetricMetaListShrinkRequest &&) = default ;
    DescribeMetricMetaListShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetricMetaListShrinkRequest() = default ;
    DescribeMetricMetaListShrinkRequest& operator=(const DescribeMetricMetaListShrinkRequest &) = default ;
    DescribeMetricMetaListShrinkRequest& operator=(DescribeMetricMetaListShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->labelsShrink_ == nullptr
        && this->metaFormat_ == nullptr && this->metricName_ == nullptr && this->namespace_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr; };
    // labelsShrink Field Functions 
    bool hasLabelsShrink() const { return this->labelsShrink_ != nullptr;};
    void deleteLabelsShrink() { this->labelsShrink_ = nullptr;};
    inline string getLabelsShrink() const { DARABONBA_PTR_GET_DEFAULT(labelsShrink_, "") };
    inline DescribeMetricMetaListShrinkRequest& setLabelsShrink(string labelsShrink) { DARABONBA_PTR_SET_VALUE(labelsShrink_, labelsShrink) };


    // metaFormat Field Functions 
    bool hasMetaFormat() const { return this->metaFormat_ != nullptr;};
    void deleteMetaFormat() { this->metaFormat_ = nullptr;};
    inline string getMetaFormat() const { DARABONBA_PTR_GET_DEFAULT(metaFormat_, "") };
    inline DescribeMetricMetaListShrinkRequest& setMetaFormat(string metaFormat) { DARABONBA_PTR_SET_VALUE(metaFormat_, metaFormat) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline DescribeMetricMetaListShrinkRequest& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeMetricMetaListShrinkRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeMetricMetaListShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeMetricMetaListShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    shared_ptr<string> labelsShrink_ {};
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
