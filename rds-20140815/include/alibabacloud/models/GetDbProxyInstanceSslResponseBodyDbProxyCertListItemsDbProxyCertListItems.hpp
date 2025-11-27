// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDBPROXYINSTANCESSLRESPONSEBODYDBPROXYCERTLISTITEMSDBPROXYCERTLISTITEMS_HPP_
#define ALIBABACLOUD_MODELS_GETDBPROXYINSTANCESSLRESPONSEBODYDBPROXYCERTLISTITEMSDBPROXYCERTLISTITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class GetDbProxyInstanceSslResponseBodyDbProxyCertListItemsDbProxyCertListItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDbProxyInstanceSslResponseBodyDbProxyCertListItemsDbProxyCertListItems& obj) { 
      DARABONBA_PTR_TO_JSON(CertCommonName, certCommonName_);
      DARABONBA_PTR_TO_JSON(DbInstanceName, dbInstanceName_);
      DARABONBA_PTR_TO_JSON(EndpointName, endpointName_);
      DARABONBA_PTR_TO_JSON(EndpointType, endpointType_);
      DARABONBA_PTR_TO_JSON(SslExpiredTime, sslExpiredTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetDbProxyInstanceSslResponseBodyDbProxyCertListItemsDbProxyCertListItems& obj) { 
      DARABONBA_PTR_FROM_JSON(CertCommonName, certCommonName_);
      DARABONBA_PTR_FROM_JSON(DbInstanceName, dbInstanceName_);
      DARABONBA_PTR_FROM_JSON(EndpointName, endpointName_);
      DARABONBA_PTR_FROM_JSON(EndpointType, endpointType_);
      DARABONBA_PTR_FROM_JSON(SslExpiredTime, sslExpiredTime_);
    };
    GetDbProxyInstanceSslResponseBodyDbProxyCertListItemsDbProxyCertListItems() = default ;
    GetDbProxyInstanceSslResponseBodyDbProxyCertListItemsDbProxyCertListItems(const GetDbProxyInstanceSslResponseBodyDbProxyCertListItemsDbProxyCertListItems &) = default ;
    GetDbProxyInstanceSslResponseBodyDbProxyCertListItemsDbProxyCertListItems(GetDbProxyInstanceSslResponseBodyDbProxyCertListItemsDbProxyCertListItems &&) = default ;
    GetDbProxyInstanceSslResponseBodyDbProxyCertListItemsDbProxyCertListItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDbProxyInstanceSslResponseBodyDbProxyCertListItemsDbProxyCertListItems() = default ;
    GetDbProxyInstanceSslResponseBodyDbProxyCertListItemsDbProxyCertListItems& operator=(const GetDbProxyInstanceSslResponseBodyDbProxyCertListItemsDbProxyCertListItems &) = default ;
    GetDbProxyInstanceSslResponseBodyDbProxyCertListItemsDbProxyCertListItems& operator=(GetDbProxyInstanceSslResponseBodyDbProxyCertListItemsDbProxyCertListItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certCommonName_ == nullptr
        && return this->dbInstanceName_ == nullptr && return this->endpointName_ == nullptr && return this->endpointType_ == nullptr && return this->sslExpiredTime_ == nullptr; };
    // certCommonName Field Functions 
    bool hasCertCommonName() const { return this->certCommonName_ != nullptr;};
    void deleteCertCommonName() { this->certCommonName_ = nullptr;};
    inline string certCommonName() const { DARABONBA_PTR_GET_DEFAULT(certCommonName_, "") };
    inline GetDbProxyInstanceSslResponseBodyDbProxyCertListItemsDbProxyCertListItems& setCertCommonName(string certCommonName) { DARABONBA_PTR_SET_VALUE(certCommonName_, certCommonName) };


    // dbInstanceName Field Functions 
    bool hasDbInstanceName() const { return this->dbInstanceName_ != nullptr;};
    void deleteDbInstanceName() { this->dbInstanceName_ = nullptr;};
    inline string dbInstanceName() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceName_, "") };
    inline GetDbProxyInstanceSslResponseBodyDbProxyCertListItemsDbProxyCertListItems& setDbInstanceName(string dbInstanceName) { DARABONBA_PTR_SET_VALUE(dbInstanceName_, dbInstanceName) };


    // endpointName Field Functions 
    bool hasEndpointName() const { return this->endpointName_ != nullptr;};
    void deleteEndpointName() { this->endpointName_ = nullptr;};
    inline string endpointName() const { DARABONBA_PTR_GET_DEFAULT(endpointName_, "") };
    inline GetDbProxyInstanceSslResponseBodyDbProxyCertListItemsDbProxyCertListItems& setEndpointName(string endpointName) { DARABONBA_PTR_SET_VALUE(endpointName_, endpointName) };


    // endpointType Field Functions 
    bool hasEndpointType() const { return this->endpointType_ != nullptr;};
    void deleteEndpointType() { this->endpointType_ = nullptr;};
    inline string endpointType() const { DARABONBA_PTR_GET_DEFAULT(endpointType_, "") };
    inline GetDbProxyInstanceSslResponseBodyDbProxyCertListItemsDbProxyCertListItems& setEndpointType(string endpointType) { DARABONBA_PTR_SET_VALUE(endpointType_, endpointType) };


    // sslExpiredTime Field Functions 
    bool hasSslExpiredTime() const { return this->sslExpiredTime_ != nullptr;};
    void deleteSslExpiredTime() { this->sslExpiredTime_ = nullptr;};
    inline string sslExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(sslExpiredTime_, "") };
    inline GetDbProxyInstanceSslResponseBodyDbProxyCertListItemsDbProxyCertListItems& setSslExpiredTime(string sslExpiredTime) { DARABONBA_PTR_SET_VALUE(sslExpiredTime_, sslExpiredTime) };


  protected:
    // The dedicated proxy endpoint for which SSL encryption is enabled.
    std::shared_ptr<string> certCommonName_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> dbInstanceName_ = nullptr;
    // The ID of the dedicated proxy endpoint.
    std::shared_ptr<string> endpointName_ = nullptr;
    // The default identifier of the dedicated proxy endpoint. The value is fixed as **RWSplit**.
    std::shared_ptr<string> endpointType_ = nullptr;
    // The time at which the certificate expires.
    std::shared_ptr<string> sslExpiredTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
