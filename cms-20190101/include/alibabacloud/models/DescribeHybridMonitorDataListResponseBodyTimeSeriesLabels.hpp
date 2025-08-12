// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDMONITORDATALISTRESPONSEBODYTIMESERIESLABELS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDMONITORDATALISTRESPONSEBODYTIMESERIESLABELS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeHybridMonitorDataListResponseBodyTimeSeriesLabels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridMonitorDataListResponseBodyTimeSeriesLabels& obj) { 
      DARABONBA_PTR_TO_JSON(K, k_);
      DARABONBA_PTR_TO_JSON(V, v_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridMonitorDataListResponseBodyTimeSeriesLabels& obj) { 
      DARABONBA_PTR_FROM_JSON(K, k_);
      DARABONBA_PTR_FROM_JSON(V, v_);
    };
    DescribeHybridMonitorDataListResponseBodyTimeSeriesLabels() = default ;
    DescribeHybridMonitorDataListResponseBodyTimeSeriesLabels(const DescribeHybridMonitorDataListResponseBodyTimeSeriesLabels &) = default ;
    DescribeHybridMonitorDataListResponseBodyTimeSeriesLabels(DescribeHybridMonitorDataListResponseBodyTimeSeriesLabels &&) = default ;
    DescribeHybridMonitorDataListResponseBodyTimeSeriesLabels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridMonitorDataListResponseBodyTimeSeriesLabels() = default ;
    DescribeHybridMonitorDataListResponseBodyTimeSeriesLabels& operator=(const DescribeHybridMonitorDataListResponseBodyTimeSeriesLabels &) = default ;
    DescribeHybridMonitorDataListResponseBodyTimeSeriesLabels& operator=(DescribeHybridMonitorDataListResponseBodyTimeSeriesLabels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->k_ != nullptr
        && this->v_ != nullptr; };
    // k Field Functions 
    bool hasK() const { return this->k_ != nullptr;};
    void deleteK() { this->k_ = nullptr;};
    inline string k() const { DARABONBA_PTR_GET_DEFAULT(k_, "") };
    inline DescribeHybridMonitorDataListResponseBodyTimeSeriesLabels& setK(string k) { DARABONBA_PTR_SET_VALUE(k_, k) };


    // v Field Functions 
    bool hasV() const { return this->v_ != nullptr;};
    void deleteV() { this->v_ = nullptr;};
    inline string v() const { DARABONBA_PTR_GET_DEFAULT(v_, "") };
    inline DescribeHybridMonitorDataListResponseBodyTimeSeriesLabels& setV(string v) { DARABONBA_PTR_SET_VALUE(v_, v) };


  protected:
    // The tag key.
    std::shared_ptr<string> k_ = nullptr;
    // The tag value.
    std::shared_ptr<string> v_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
