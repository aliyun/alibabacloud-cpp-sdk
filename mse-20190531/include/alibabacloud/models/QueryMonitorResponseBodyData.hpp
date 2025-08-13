// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMONITORRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYMONITORRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class QueryMonitorResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMonitorResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(clusterNamePrefix, clusterNamePrefix_);
      DARABONBA_PTR_TO_JSON(podName, podName_);
      DARABONBA_PTR_TO_JSON(values, values_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMonitorResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(clusterNamePrefix, clusterNamePrefix_);
      DARABONBA_PTR_FROM_JSON(podName, podName_);
      DARABONBA_PTR_FROM_JSON(values, values_);
    };
    QueryMonitorResponseBodyData() = default ;
    QueryMonitorResponseBodyData(const QueryMonitorResponseBodyData &) = default ;
    QueryMonitorResponseBodyData(QueryMonitorResponseBodyData &&) = default ;
    QueryMonitorResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMonitorResponseBodyData() = default ;
    QueryMonitorResponseBodyData& operator=(const QueryMonitorResponseBodyData &) = default ;
    QueryMonitorResponseBodyData& operator=(QueryMonitorResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterNamePrefix_ != nullptr
        && this->podName_ != nullptr && this->values_ != nullptr; };
    // clusterNamePrefix Field Functions 
    bool hasClusterNamePrefix() const { return this->clusterNamePrefix_ != nullptr;};
    void deleteClusterNamePrefix() { this->clusterNamePrefix_ = nullptr;};
    inline string clusterNamePrefix() const { DARABONBA_PTR_GET_DEFAULT(clusterNamePrefix_, "") };
    inline QueryMonitorResponseBodyData& setClusterNamePrefix(string clusterNamePrefix) { DARABONBA_PTR_SET_VALUE(clusterNamePrefix_, clusterNamePrefix) };


    // podName Field Functions 
    bool hasPodName() const { return this->podName_ != nullptr;};
    void deletePodName() { this->podName_ = nullptr;};
    inline string podName() const { DARABONBA_PTR_GET_DEFAULT(podName_, "") };
    inline QueryMonitorResponseBodyData& setPodName(string podName) { DARABONBA_PTR_SET_VALUE(podName_, podName) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<Darabonba::Json> & values() const { DARABONBA_PTR_GET_CONST(values_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> values() { DARABONBA_PTR_GET(values_, vector<Darabonba::Json>) };
    inline QueryMonitorResponseBodyData& setValues(const vector<Darabonba::Json> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline QueryMonitorResponseBodyData& setValues(vector<Darabonba::Json> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    // The prefix of the name.
    std::shared_ptr<string> clusterNamePrefix_ = nullptr;
    // The name of the pod.
    std::shared_ptr<string> podName_ = nullptr;
    // The details of the data.
    std::shared_ptr<vector<Darabonba::Json>> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
