// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCECOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCECOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListInstanceCountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceCountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(MseVersion, mseVersion_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestPars, requestPars_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceCountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(MseVersion, mseVersion_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestPars, requestPars_);
    };
    ListInstanceCountRequest() = default ;
    ListInstanceCountRequest(const ListInstanceCountRequest &) = default ;
    ListInstanceCountRequest(ListInstanceCountRequest &&) = default ;
    ListInstanceCountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceCountRequest() = default ;
    ListInstanceCountRequest& operator=(const ListInstanceCountRequest &) = default ;
    ListInstanceCountRequest& operator=(ListInstanceCountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->clusterType_ == nullptr && return this->mseVersion_ == nullptr && return this->regionId_ == nullptr && return this->requestPars_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline ListInstanceCountRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string clusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline ListInstanceCountRequest& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // mseVersion Field Functions 
    bool hasMseVersion() const { return this->mseVersion_ != nullptr;};
    void deleteMseVersion() { this->mseVersion_ = nullptr;};
    inline string mseVersion() const { DARABONBA_PTR_GET_DEFAULT(mseVersion_, "") };
    inline ListInstanceCountRequest& setMseVersion(string mseVersion) { DARABONBA_PTR_SET_VALUE(mseVersion_, mseVersion) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListInstanceCountRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestPars Field Functions 
    bool hasRequestPars() const { return this->requestPars_ != nullptr;};
    void deleteRequestPars() { this->requestPars_ = nullptr;};
    inline string requestPars() const { DARABONBA_PTR_GET_DEFAULT(requestPars_, "") };
    inline ListInstanceCountRequest& setRequestPars(string requestPars) { DARABONBA_PTR_SET_VALUE(requestPars_, requestPars) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The type of the instance. Valid values: ZooKeeper and Nacos-Ans.
    std::shared_ptr<string> clusterType_ = nullptr;
    // The edition type of the instance. Valid values:
    // 
    // *   `mse_dev`: Developer Edition
    // *   `mse_pro`: Professional Edition
    std::shared_ptr<string> mseVersion_ = nullptr;
    // The ID of the region where the instance resides. Examples:
    // 
    // *   cn-hangzhou: China (Hangzhou)
    // *   cn-beijing: China (Beijing)
    // *   cn-shanghai: China (Shanghai)
    // *   cn-zhangjiakou: China (Zhangjiakou)
    // *   cn-shenzhen: China (Shenzhen)
    std::shared_ptr<string> regionId_ = nullptr;
    // The extended request parameters in the JSON format.
    std::shared_ptr<string> requestPars_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
