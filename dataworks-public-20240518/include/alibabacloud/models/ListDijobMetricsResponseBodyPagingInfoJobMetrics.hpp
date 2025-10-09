// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIJOBMETRICSRESPONSEBODYPAGINGINFOJOBMETRICS_HPP_
#define ALIBABACLOUD_MODELS_LISTDIJOBMETRICSRESPONSEBODYPAGINGINFOJOBMETRICS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDIJobMetricsResponseBodyPagingInfoJobMetricsSeriesList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDIJobMetricsResponseBodyPagingInfoJobMetrics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDIJobMetricsResponseBodyPagingInfoJobMetrics& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SeriesList, seriesList_);
    };
    friend void from_json(const Darabonba::Json& j, ListDIJobMetricsResponseBodyPagingInfoJobMetrics& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SeriesList, seriesList_);
    };
    ListDIJobMetricsResponseBodyPagingInfoJobMetrics() = default ;
    ListDIJobMetricsResponseBodyPagingInfoJobMetrics(const ListDIJobMetricsResponseBodyPagingInfoJobMetrics &) = default ;
    ListDIJobMetricsResponseBodyPagingInfoJobMetrics(ListDIJobMetricsResponseBodyPagingInfoJobMetrics &&) = default ;
    ListDIJobMetricsResponseBodyPagingInfoJobMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDIJobMetricsResponseBodyPagingInfoJobMetrics() = default ;
    ListDIJobMetricsResponseBodyPagingInfoJobMetrics& operator=(const ListDIJobMetricsResponseBodyPagingInfoJobMetrics &) = default ;
    ListDIJobMetricsResponseBodyPagingInfoJobMetrics& operator=(ListDIJobMetricsResponseBodyPagingInfoJobMetrics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->seriesList_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListDIJobMetricsResponseBodyPagingInfoJobMetrics& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // seriesList Field Functions 
    bool hasSeriesList() const { return this->seriesList_ != nullptr;};
    void deleteSeriesList() { this->seriesList_ = nullptr;};
    inline const vector<Models::ListDIJobMetricsResponseBodyPagingInfoJobMetricsSeriesList> & seriesList() const { DARABONBA_PTR_GET_CONST(seriesList_, vector<Models::ListDIJobMetricsResponseBodyPagingInfoJobMetricsSeriesList>) };
    inline vector<Models::ListDIJobMetricsResponseBodyPagingInfoJobMetricsSeriesList> seriesList() { DARABONBA_PTR_GET(seriesList_, vector<Models::ListDIJobMetricsResponseBodyPagingInfoJobMetricsSeriesList>) };
    inline ListDIJobMetricsResponseBodyPagingInfoJobMetrics& setSeriesList(const vector<Models::ListDIJobMetricsResponseBodyPagingInfoJobMetricsSeriesList> & seriesList) { DARABONBA_PTR_SET_VALUE(seriesList_, seriesList) };
    inline ListDIJobMetricsResponseBodyPagingInfoJobMetrics& setSeriesList(vector<Models::ListDIJobMetricsResponseBodyPagingInfoJobMetricsSeriesList> && seriesList) { DARABONBA_PTR_SET_RVALUE(seriesList_, seriesList) };


  protected:
    // The name of the metric.
    std::shared_ptr<string> name_ = nullptr;
    // The metric data.
    std::shared_ptr<vector<Models::ListDIJobMetricsResponseBodyPagingInfoJobMetricsSeriesList>> seriesList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
