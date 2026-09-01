// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINTERCEPTIONSUMMARYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETINTERCEPTIONSUMMARYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetInterceptionSummaryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInterceptionSummaryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ExcludeClusterTypes, excludeClusterTypes_);
    };
    friend void from_json(const Darabonba::Json& j, GetInterceptionSummaryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ExcludeClusterTypes, excludeClusterTypes_);
    };
    GetInterceptionSummaryRequest() = default ;
    GetInterceptionSummaryRequest(const GetInterceptionSummaryRequest &) = default ;
    GetInterceptionSummaryRequest(GetInterceptionSummaryRequest &&) = default ;
    GetInterceptionSummaryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInterceptionSummaryRequest() = default ;
    GetInterceptionSummaryRequest& operator=(const GetInterceptionSummaryRequest &) = default ;
    GetInterceptionSummaryRequest& operator=(GetInterceptionSummaryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->excludeClusterTypes_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GetInterceptionSummaryRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // excludeClusterTypes Field Functions 
    bool hasExcludeClusterTypes() const { return this->excludeClusterTypes_ != nullptr;};
    void deleteExcludeClusterTypes() { this->excludeClusterTypes_ = nullptr;};
    inline const vector<string> & getExcludeClusterTypes() const { DARABONBA_PTR_GET_CONST(excludeClusterTypes_, vector<string>) };
    inline vector<string> getExcludeClusterTypes() { DARABONBA_PTR_GET(excludeClusterTypes_, vector<string>) };
    inline GetInterceptionSummaryRequest& setExcludeClusterTypes(const vector<string> & excludeClusterTypes) { DARABONBA_PTR_SET_VALUE(excludeClusterTypes_, excludeClusterTypes) };
    inline GetInterceptionSummaryRequest& setExcludeClusterTypes(vector<string> && excludeClusterTypes) { DARABONBA_PTR_SET_RVALUE(excludeClusterTypes_, excludeClusterTypes) };


  protected:
    // The ID of the cluster to query. This parameter takes effect only on the InterceptionCountInDays response parameter.
    // > You can call the [DescribeGroupedContainerInstances](~~DescribeGroupedContainerInstances~~) operation to obtain this parameter.
    shared_ptr<string> clusterId_ {};
    // The list of cluster types to exclude.
    shared_ptr<vector<string>> excludeClusterTypes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
