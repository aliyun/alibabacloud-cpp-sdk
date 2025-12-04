// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVCCFLOWINFOSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTVCCFLOWINFOSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class ListVccFlowInfosRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVccFlowInfosRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(To, to_);
      DARABONBA_PTR_TO_JSON(VccId, vccId_);
    };
    friend void from_json(const Darabonba::Json& j, ListVccFlowInfosRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(To, to_);
      DARABONBA_PTR_FROM_JSON(VccId, vccId_);
    };
    ListVccFlowInfosRequest() = default ;
    ListVccFlowInfosRequest(const ListVccFlowInfosRequest &) = default ;
    ListVccFlowInfosRequest(ListVccFlowInfosRequest &&) = default ;
    ListVccFlowInfosRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVccFlowInfosRequest() = default ;
    ListVccFlowInfosRequest& operator=(const ListVccFlowInfosRequest &) = default ;
    ListVccFlowInfosRequest& operator=(ListVccFlowInfosRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->direction_ == nullptr
        && return this->from_ == nullptr && return this->metricName_ == nullptr && return this->regionId_ == nullptr && return this->to_ == nullptr && return this->vccId_ == nullptr; };
    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string direction() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline ListVccFlowInfosRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline int64_t from() const { DARABONBA_PTR_GET_DEFAULT(from_, 0L) };
    inline ListVccFlowInfosRequest& setFrom(int64_t from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline ListVccFlowInfosRequest& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListVccFlowInfosRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // to Field Functions 
    bool hasTo() const { return this->to_ != nullptr;};
    void deleteTo() { this->to_ = nullptr;};
    inline int64_t to() const { DARABONBA_PTR_GET_DEFAULT(to_, 0L) };
    inline ListVccFlowInfosRequest& setTo(int64_t to) { DARABONBA_PTR_SET_VALUE(to_, to) };


    // vccId Field Functions 
    bool hasVccId() const { return this->vccId_ != nullptr;};
    void deleteVccId() { this->vccId_ = nullptr;};
    inline string vccId() const { DARABONBA_PTR_GET_DEFAULT(vccId_, "") };
    inline ListVccFlowInfosRequest& setVccId(string vccId) { DARABONBA_PTR_SET_VALUE(vccId_, vccId) };


  protected:
    // Direction
    // 
    // Valid value:
    // 
    // *   IN: inbound.
    // *   OUT: the outbound.
    std::shared_ptr<string> direction_ = nullptr;
    // The start time. The default value is 5 minutes ago.
    std::shared_ptr<int64_t> from_ = nullptr;
    // Metric
    // 
    // Valid value:
    // 
    // *   totalPacketsRate: Total Packet Rate.
    // *   dropBytesRate: the of the stream drop rate.
    // *   dropPacketsRate: Dropped Packet Rate.
    // *   totalBytesRate: the total streaming rate.
    // *   passBytesRate: by stream rate.
    // *   passPacketsRate: by packet rate.
    std::shared_ptr<string> metricName_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The end time. The default time is the current time.
    std::shared_ptr<int64_t> to_ = nullptr;
    // Lingjun Connection ID
    std::shared_ptr<string> vccId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
