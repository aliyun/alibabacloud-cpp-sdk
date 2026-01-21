// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDMONITORDATALISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDMONITORDATALISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeHybridMonitorDataListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridMonitorDataListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(End, end_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PromSQL, promSQL_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Start, start_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridMonitorDataListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(End, end_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PromSQL, promSQL_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Start, start_);
    };
    DescribeHybridMonitorDataListRequest() = default ;
    DescribeHybridMonitorDataListRequest(const DescribeHybridMonitorDataListRequest &) = default ;
    DescribeHybridMonitorDataListRequest(DescribeHybridMonitorDataListRequest &&) = default ;
    DescribeHybridMonitorDataListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridMonitorDataListRequest() = default ;
    DescribeHybridMonitorDataListRequest& operator=(const DescribeHybridMonitorDataListRequest &) = default ;
    DescribeHybridMonitorDataListRequest& operator=(DescribeHybridMonitorDataListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->end_ == nullptr
        && this->namespace_ == nullptr && this->period_ == nullptr && this->promSQL_ == nullptr && this->regionId_ == nullptr && this->start_ == nullptr; };
    // end Field Functions 
    bool hasEnd() const { return this->end_ != nullptr;};
    void deleteEnd() { this->end_ = nullptr;};
    inline int64_t getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, 0L) };
    inline DescribeHybridMonitorDataListRequest& setEnd(int64_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeHybridMonitorDataListRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline DescribeHybridMonitorDataListRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // promSQL Field Functions 
    bool hasPromSQL() const { return this->promSQL_ != nullptr;};
    void deletePromSQL() { this->promSQL_ = nullptr;};
    inline string getPromSQL() const { DARABONBA_PTR_GET_DEFAULT(promSQL_, "") };
    inline DescribeHybridMonitorDataListRequest& setPromSQL(string promSQL) { DARABONBA_PTR_SET_VALUE(promSQL_, promSQL) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeHybridMonitorDataListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline int64_t getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, 0L) };
    inline DescribeHybridMonitorDataListRequest& setStart(int64_t start) { DARABONBA_PTR_SET_VALUE(start_, start) };


  protected:
    // The end of the time range to query.
    // 
    // Unit: seconds.
    // 
    // This parameter is required.
    shared_ptr<int64_t> end_ {};
    // The name of the namespace.
    // 
    // For more information about how to query the names of namespaces, see [DescribeHybridMonitorNamespaceList](https://help.aliyun.com/document_detail/428880.html).
    // 
    // This parameter is required.
    shared_ptr<string> namespace_ {};
    // The statistical period of the monitoring data.
    // 
    // Unit: seconds.
    shared_ptr<string> period_ {};
    // The metric name.
    // 
    // >  PromQL statements are supported.
    // 
    // This parameter is required.
    shared_ptr<string> promSQL_ {};
    shared_ptr<string> regionId_ {};
    // The start of the time range to query.
    // 
    // Unit: seconds.
    // 
    // This parameter is required.
    shared_ptr<int64_t> start_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
