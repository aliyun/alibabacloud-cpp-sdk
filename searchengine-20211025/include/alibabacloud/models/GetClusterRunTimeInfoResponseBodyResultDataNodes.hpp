// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLUSTERRUNTIMEINFORESPONSEBODYRESULTDATANODES_HPP_
#define ALIBABACLOUD_MODELS_GETCLUSTERRUNTIMEINFORESPONSEBODYRESULTDATANODES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetClusterRunTimeInfoResponseBodyResultDataNodesConfigStatusList.hpp>
#include <alibabacloud/models/GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusList.hpp>
#include <alibabacloud/models/GetClusterRunTimeInfoResponseBodyResultDataNodesServiceStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class GetClusterRunTimeInfoResponseBodyResultDataNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClusterRunTimeInfoResponseBodyResultDataNodes& obj) { 
      DARABONBA_PTR_TO_JSON(configStatusList, configStatusList_);
      DARABONBA_PTR_TO_JSON(dataStatusList, dataStatusList_);
      DARABONBA_PTR_TO_JSON(serviceStatus, serviceStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetClusterRunTimeInfoResponseBodyResultDataNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(configStatusList, configStatusList_);
      DARABONBA_PTR_FROM_JSON(dataStatusList, dataStatusList_);
      DARABONBA_PTR_FROM_JSON(serviceStatus, serviceStatus_);
    };
    GetClusterRunTimeInfoResponseBodyResultDataNodes() = default ;
    GetClusterRunTimeInfoResponseBodyResultDataNodes(const GetClusterRunTimeInfoResponseBodyResultDataNodes &) = default ;
    GetClusterRunTimeInfoResponseBodyResultDataNodes(GetClusterRunTimeInfoResponseBodyResultDataNodes &&) = default ;
    GetClusterRunTimeInfoResponseBodyResultDataNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClusterRunTimeInfoResponseBodyResultDataNodes() = default ;
    GetClusterRunTimeInfoResponseBodyResultDataNodes& operator=(const GetClusterRunTimeInfoResponseBodyResultDataNodes &) = default ;
    GetClusterRunTimeInfoResponseBodyResultDataNodes& operator=(GetClusterRunTimeInfoResponseBodyResultDataNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configStatusList_ != nullptr
        && this->dataStatusList_ != nullptr && this->serviceStatus_ != nullptr; };
    // configStatusList Field Functions 
    bool hasConfigStatusList() const { return this->configStatusList_ != nullptr;};
    void deleteConfigStatusList() { this->configStatusList_ = nullptr;};
    inline const vector<Models::GetClusterRunTimeInfoResponseBodyResultDataNodesConfigStatusList> & configStatusList() const { DARABONBA_PTR_GET_CONST(configStatusList_, vector<Models::GetClusterRunTimeInfoResponseBodyResultDataNodesConfigStatusList>) };
    inline vector<Models::GetClusterRunTimeInfoResponseBodyResultDataNodesConfigStatusList> configStatusList() { DARABONBA_PTR_GET(configStatusList_, vector<Models::GetClusterRunTimeInfoResponseBodyResultDataNodesConfigStatusList>) };
    inline GetClusterRunTimeInfoResponseBodyResultDataNodes& setConfigStatusList(const vector<Models::GetClusterRunTimeInfoResponseBodyResultDataNodesConfigStatusList> & configStatusList) { DARABONBA_PTR_SET_VALUE(configStatusList_, configStatusList) };
    inline GetClusterRunTimeInfoResponseBodyResultDataNodes& setConfigStatusList(vector<Models::GetClusterRunTimeInfoResponseBodyResultDataNodesConfigStatusList> && configStatusList) { DARABONBA_PTR_SET_RVALUE(configStatusList_, configStatusList) };


    // dataStatusList Field Functions 
    bool hasDataStatusList() const { return this->dataStatusList_ != nullptr;};
    void deleteDataStatusList() { this->dataStatusList_ = nullptr;};
    inline const vector<Models::GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusList> & dataStatusList() const { DARABONBA_PTR_GET_CONST(dataStatusList_, vector<Models::GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusList>) };
    inline vector<Models::GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusList> dataStatusList() { DARABONBA_PTR_GET(dataStatusList_, vector<Models::GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusList>) };
    inline GetClusterRunTimeInfoResponseBodyResultDataNodes& setDataStatusList(const vector<Models::GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusList> & dataStatusList) { DARABONBA_PTR_SET_VALUE(dataStatusList_, dataStatusList) };
    inline GetClusterRunTimeInfoResponseBodyResultDataNodes& setDataStatusList(vector<Models::GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusList> && dataStatusList) { DARABONBA_PTR_SET_RVALUE(dataStatusList_, dataStatusList) };


    // serviceStatus Field Functions 
    bool hasServiceStatus() const { return this->serviceStatus_ != nullptr;};
    void deleteServiceStatus() { this->serviceStatus_ = nullptr;};
    inline const Models::GetClusterRunTimeInfoResponseBodyResultDataNodesServiceStatus & serviceStatus() const { DARABONBA_PTR_GET_CONST(serviceStatus_, Models::GetClusterRunTimeInfoResponseBodyResultDataNodesServiceStatus) };
    inline Models::GetClusterRunTimeInfoResponseBodyResultDataNodesServiceStatus serviceStatus() { DARABONBA_PTR_GET(serviceStatus_, Models::GetClusterRunTimeInfoResponseBodyResultDataNodesServiceStatus) };
    inline GetClusterRunTimeInfoResponseBodyResultDataNodes& setServiceStatus(const Models::GetClusterRunTimeInfoResponseBodyResultDataNodesServiceStatus & serviceStatus) { DARABONBA_PTR_SET_VALUE(serviceStatus_, serviceStatus) };
    inline GetClusterRunTimeInfoResponseBodyResultDataNodes& setServiceStatus(Models::GetClusterRunTimeInfoResponseBodyResultDataNodesServiceStatus && serviceStatus) { DARABONBA_PTR_SET_RVALUE(serviceStatus_, serviceStatus) };


  protected:
    // The configuration status.
    std::shared_ptr<vector<Models::GetClusterRunTimeInfoResponseBodyResultDataNodesConfigStatusList>> configStatusList_ = nullptr;
    // The data of the Searcher worker.
    std::shared_ptr<vector<Models::GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusList>> dataStatusList_ = nullptr;
    // The service status of the QRS worker.
    std::shared_ptr<Models::GetClusterRunTimeInfoResponseBodyResultDataNodesServiceStatus> serviceStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
