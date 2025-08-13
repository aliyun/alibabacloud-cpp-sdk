// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERTYPESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERTYPESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListClusterTypesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClusterTypesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(ConnectType, connectType_);
      DARABONBA_PTR_TO_JSON(MseVersion, mseVersion_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListClusterTypesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(ConnectType, connectType_);
      DARABONBA_PTR_FROM_JSON(MseVersion, mseVersion_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ListClusterTypesRequest() = default ;
    ListClusterTypesRequest(const ListClusterTypesRequest &) = default ;
    ListClusterTypesRequest(ListClusterTypesRequest &&) = default ;
    ListClusterTypesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClusterTypesRequest() = default ;
    ListClusterTypesRequest& operator=(const ListClusterTypesRequest &) = default ;
    ListClusterTypesRequest& operator=(ListClusterTypesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acceptLanguage_ != nullptr
        && this->connectType_ != nullptr && this->mseVersion_ != nullptr && this->regionId_ != nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline ListClusterTypesRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // connectType Field Functions 
    bool hasConnectType() const { return this->connectType_ != nullptr;};
    void deleteConnectType() { this->connectType_ = nullptr;};
    inline string connectType() const { DARABONBA_PTR_GET_DEFAULT(connectType_, "") };
    inline ListClusterTypesRequest& setConnectType(string connectType) { DARABONBA_PTR_SET_VALUE(connectType_, connectType) };


    // mseVersion Field Functions 
    bool hasMseVersion() const { return this->mseVersion_ != nullptr;};
    void deleteMseVersion() { this->mseVersion_ = nullptr;};
    inline string mseVersion() const { DARABONBA_PTR_GET_DEFAULT(mseVersion_, "") };
    inline ListClusterTypesRequest& setMseVersion(string mseVersion) { DARABONBA_PTR_SET_VALUE(mseVersion_, mseVersion) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListClusterTypesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The network type. Valid values:
    // 
    // *   slb
    // *   eni
    std::shared_ptr<string> connectType_ = nullptr;
    // The edition of the MSE instance that you want to purchase.
    // 
    // *   mse_pro: Professional Edition
    // *   mse_dev: Developer Edition
    std::shared_ptr<string> mseVersion_ = nullptr;
    // The ID of the region in which the instance resides. The region is supported by Microservices Engine (MSE).
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
