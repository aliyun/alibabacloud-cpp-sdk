// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLUSTERRUNTIMEINFORESPONSEBODYRESULTQUERYNODE_HPP_
#define ALIBABACLOUD_MODELS_GETCLUSTERRUNTIMEINFORESPONSEBODYRESULTQUERYNODE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetClusterRunTimeInfoResponseBodyResultQueryNodeConfigStatusList.hpp>
#include <alibabacloud/models/GetClusterRunTimeInfoResponseBodyResultQueryNodeServiceStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class GetClusterRunTimeInfoResponseBodyResultQueryNode : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClusterRunTimeInfoResponseBodyResultQueryNode& obj) { 
      DARABONBA_PTR_TO_JSON(configStatusList, configStatusList_);
      DARABONBA_PTR_TO_JSON(serviceStatus, serviceStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetClusterRunTimeInfoResponseBodyResultQueryNode& obj) { 
      DARABONBA_PTR_FROM_JSON(configStatusList, configStatusList_);
      DARABONBA_PTR_FROM_JSON(serviceStatus, serviceStatus_);
    };
    GetClusterRunTimeInfoResponseBodyResultQueryNode() = default ;
    GetClusterRunTimeInfoResponseBodyResultQueryNode(const GetClusterRunTimeInfoResponseBodyResultQueryNode &) = default ;
    GetClusterRunTimeInfoResponseBodyResultQueryNode(GetClusterRunTimeInfoResponseBodyResultQueryNode &&) = default ;
    GetClusterRunTimeInfoResponseBodyResultQueryNode(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClusterRunTimeInfoResponseBodyResultQueryNode() = default ;
    GetClusterRunTimeInfoResponseBodyResultQueryNode& operator=(const GetClusterRunTimeInfoResponseBodyResultQueryNode &) = default ;
    GetClusterRunTimeInfoResponseBodyResultQueryNode& operator=(GetClusterRunTimeInfoResponseBodyResultQueryNode &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configStatusList_ != nullptr
        && this->serviceStatus_ != nullptr; };
    // configStatusList Field Functions 
    bool hasConfigStatusList() const { return this->configStatusList_ != nullptr;};
    void deleteConfigStatusList() { this->configStatusList_ = nullptr;};
    inline const vector<Models::GetClusterRunTimeInfoResponseBodyResultQueryNodeConfigStatusList> & configStatusList() const { DARABONBA_PTR_GET_CONST(configStatusList_, vector<Models::GetClusterRunTimeInfoResponseBodyResultQueryNodeConfigStatusList>) };
    inline vector<Models::GetClusterRunTimeInfoResponseBodyResultQueryNodeConfigStatusList> configStatusList() { DARABONBA_PTR_GET(configStatusList_, vector<Models::GetClusterRunTimeInfoResponseBodyResultQueryNodeConfigStatusList>) };
    inline GetClusterRunTimeInfoResponseBodyResultQueryNode& setConfigStatusList(const vector<Models::GetClusterRunTimeInfoResponseBodyResultQueryNodeConfigStatusList> & configStatusList) { DARABONBA_PTR_SET_VALUE(configStatusList_, configStatusList) };
    inline GetClusterRunTimeInfoResponseBodyResultQueryNode& setConfigStatusList(vector<Models::GetClusterRunTimeInfoResponseBodyResultQueryNodeConfigStatusList> && configStatusList) { DARABONBA_PTR_SET_RVALUE(configStatusList_, configStatusList) };


    // serviceStatus Field Functions 
    bool hasServiceStatus() const { return this->serviceStatus_ != nullptr;};
    void deleteServiceStatus() { this->serviceStatus_ = nullptr;};
    inline const Models::GetClusterRunTimeInfoResponseBodyResultQueryNodeServiceStatus & serviceStatus() const { DARABONBA_PTR_GET_CONST(serviceStatus_, Models::GetClusterRunTimeInfoResponseBodyResultQueryNodeServiceStatus) };
    inline Models::GetClusterRunTimeInfoResponseBodyResultQueryNodeServiceStatus serviceStatus() { DARABONBA_PTR_GET(serviceStatus_, Models::GetClusterRunTimeInfoResponseBodyResultQueryNodeServiceStatus) };
    inline GetClusterRunTimeInfoResponseBodyResultQueryNode& setServiceStatus(const Models::GetClusterRunTimeInfoResponseBodyResultQueryNodeServiceStatus & serviceStatus) { DARABONBA_PTR_SET_VALUE(serviceStatus_, serviceStatus) };
    inline GetClusterRunTimeInfoResponseBodyResultQueryNode& setServiceStatus(Models::GetClusterRunTimeInfoResponseBodyResultQueryNodeServiceStatus && serviceStatus) { DARABONBA_PTR_SET_RVALUE(serviceStatus_, serviceStatus) };


  protected:
    // The configuration status.
    std::shared_ptr<vector<Models::GetClusterRunTimeInfoResponseBodyResultQueryNodeConfigStatusList>> configStatusList_ = nullptr;
    // The service status of the QRS worker.
    std::shared_ptr<Models::GetClusterRunTimeInfoResponseBodyResultQueryNodeServiceStatus> serviceStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
