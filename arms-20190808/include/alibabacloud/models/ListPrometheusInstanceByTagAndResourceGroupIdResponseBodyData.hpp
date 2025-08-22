// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROMETHEUSINSTANCEBYTAGANDRESOURCEGROUPIDRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTPROMETHEUSINSTANCEBYTAGANDRESOURCEGROUPIDRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyDataPrometheusInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(PrometheusInstances, prometheusInstances_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(PrometheusInstances, prometheusInstances_);
    };
    ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyData() = default ;
    ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyData(const ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyData &) = default ;
    ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyData(ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyData &&) = default ;
    ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyData() = default ;
    ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyData& operator=(const ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyData &) = default ;
    ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyData& operator=(ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->prometheusInstances_ != nullptr; };
    // prometheusInstances Field Functions 
    bool hasPrometheusInstances() const { return this->prometheusInstances_ != nullptr;};
    void deletePrometheusInstances() { this->prometheusInstances_ = nullptr;};
    inline const vector<Models::ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyDataPrometheusInstances> & prometheusInstances() const { DARABONBA_PTR_GET_CONST(prometheusInstances_, vector<Models::ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyDataPrometheusInstances>) };
    inline vector<Models::ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyDataPrometheusInstances> prometheusInstances() { DARABONBA_PTR_GET(prometheusInstances_, vector<Models::ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyDataPrometheusInstances>) };
    inline ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyData& setPrometheusInstances(const vector<Models::ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyDataPrometheusInstances> & prometheusInstances) { DARABONBA_PTR_SET_VALUE(prometheusInstances_, prometheusInstances) };
    inline ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyData& setPrometheusInstances(vector<Models::ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyDataPrometheusInstances> && prometheusInstances) { DARABONBA_PTR_SET_RVALUE(prometheusInstances_, prometheusInstances) };


  protected:
    // The queried Prometheus instances.
    std::shared_ptr<vector<Models::ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyDataPrometheusInstances>> prometheusInstances_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
