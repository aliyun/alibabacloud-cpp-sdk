// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIJOBMETRICSRESPONSEBODYPAGINGINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTDIJOBMETRICSRESPONSEBODYPAGINGINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDIJobMetricsResponseBodyPagingInfoJobMetrics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDIJobMetricsResponseBodyPagingInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDIJobMetricsResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_TO_JSON(JobMetrics, jobMetrics_);
    };
    friend void from_json(const Darabonba::Json& j, ListDIJobMetricsResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(JobMetrics, jobMetrics_);
    };
    ListDIJobMetricsResponseBodyPagingInfo() = default ;
    ListDIJobMetricsResponseBodyPagingInfo(const ListDIJobMetricsResponseBodyPagingInfo &) = default ;
    ListDIJobMetricsResponseBodyPagingInfo(ListDIJobMetricsResponseBodyPagingInfo &&) = default ;
    ListDIJobMetricsResponseBodyPagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDIJobMetricsResponseBodyPagingInfo() = default ;
    ListDIJobMetricsResponseBodyPagingInfo& operator=(const ListDIJobMetricsResponseBodyPagingInfo &) = default ;
    ListDIJobMetricsResponseBodyPagingInfo& operator=(ListDIJobMetricsResponseBodyPagingInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->jobMetrics_ != nullptr; };
    // jobMetrics Field Functions 
    bool hasJobMetrics() const { return this->jobMetrics_ != nullptr;};
    void deleteJobMetrics() { this->jobMetrics_ = nullptr;};
    inline const vector<Models::ListDIJobMetricsResponseBodyPagingInfoJobMetrics> & jobMetrics() const { DARABONBA_PTR_GET_CONST(jobMetrics_, vector<Models::ListDIJobMetricsResponseBodyPagingInfoJobMetrics>) };
    inline vector<Models::ListDIJobMetricsResponseBodyPagingInfoJobMetrics> jobMetrics() { DARABONBA_PTR_GET(jobMetrics_, vector<Models::ListDIJobMetricsResponseBodyPagingInfoJobMetrics>) };
    inline ListDIJobMetricsResponseBodyPagingInfo& setJobMetrics(const vector<Models::ListDIJobMetricsResponseBodyPagingInfoJobMetrics> & jobMetrics) { DARABONBA_PTR_SET_VALUE(jobMetrics_, jobMetrics) };
    inline ListDIJobMetricsResponseBodyPagingInfo& setJobMetrics(vector<Models::ListDIJobMetricsResponseBodyPagingInfoJobMetrics> && jobMetrics) { DARABONBA_PTR_SET_RVALUE(jobMetrics_, jobMetrics) };


  protected:
    // The metrics returned.
    std::shared_ptr<vector<Models::ListDIJobMetricsResponseBodyPagingInfoJobMetrics>> jobMetrics_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
