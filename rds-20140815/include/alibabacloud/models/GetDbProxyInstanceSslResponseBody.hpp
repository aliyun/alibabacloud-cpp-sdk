// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDBPROXYINSTANCESSLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDBPROXYINSTANCESSLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class GetDbProxyInstanceSslResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDbProxyInstanceSslResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DbProxyCertListItems, dbProxyCertListItems_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDbProxyInstanceSslResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DbProxyCertListItems, dbProxyCertListItems_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDbProxyInstanceSslResponseBody() = default ;
    GetDbProxyInstanceSslResponseBody(const GetDbProxyInstanceSslResponseBody &) = default ;
    GetDbProxyInstanceSslResponseBody(GetDbProxyInstanceSslResponseBody &&) = default ;
    GetDbProxyInstanceSslResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDbProxyInstanceSslResponseBody() = default ;
    GetDbProxyInstanceSslResponseBody& operator=(const GetDbProxyInstanceSslResponseBody &) = default ;
    GetDbProxyInstanceSslResponseBody& operator=(GetDbProxyInstanceSslResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DbProxyCertListItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DbProxyCertListItems& obj) { 
        DARABONBA_PTR_TO_JSON(DbProxyCertListItems, dbProxyCertListItems_);
      };
      friend void from_json(const Darabonba::Json& j, DbProxyCertListItems& obj) { 
        DARABONBA_PTR_FROM_JSON(DbProxyCertListItems, dbProxyCertListItems_);
      };
      DbProxyCertListItems() = default ;
      DbProxyCertListItems(const DbProxyCertListItems &) = default ;
      DbProxyCertListItems(DbProxyCertListItems &&) = default ;
      DbProxyCertListItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DbProxyCertListItems() = default ;
      DbProxyCertListItems& operator=(const DbProxyCertListItems &) = default ;
      DbProxyCertListItems& operator=(DbProxyCertListItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DbProxyCertListItemsItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DbProxyCertListItemsItem& obj) { 
          DARABONBA_PTR_TO_JSON(CertCommonName, certCommonName_);
          DARABONBA_PTR_TO_JSON(DbInstanceName, dbInstanceName_);
          DARABONBA_PTR_TO_JSON(EndpointName, endpointName_);
          DARABONBA_PTR_TO_JSON(EndpointType, endpointType_);
          DARABONBA_PTR_TO_JSON(SslExpiredTime, sslExpiredTime_);
        };
        friend void from_json(const Darabonba::Json& j, DbProxyCertListItemsItem& obj) { 
          DARABONBA_PTR_FROM_JSON(CertCommonName, certCommonName_);
          DARABONBA_PTR_FROM_JSON(DbInstanceName, dbInstanceName_);
          DARABONBA_PTR_FROM_JSON(EndpointName, endpointName_);
          DARABONBA_PTR_FROM_JSON(EndpointType, endpointType_);
          DARABONBA_PTR_FROM_JSON(SslExpiredTime, sslExpiredTime_);
        };
        DbProxyCertListItemsItem() = default ;
        DbProxyCertListItemsItem(const DbProxyCertListItemsItem &) = default ;
        DbProxyCertListItemsItem(DbProxyCertListItemsItem &&) = default ;
        DbProxyCertListItemsItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DbProxyCertListItemsItem() = default ;
        DbProxyCertListItemsItem& operator=(const DbProxyCertListItemsItem &) = default ;
        DbProxyCertListItemsItem& operator=(DbProxyCertListItemsItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->certCommonName_ == nullptr
        && this->dbInstanceName_ == nullptr && this->endpointName_ == nullptr && this->endpointType_ == nullptr && this->sslExpiredTime_ == nullptr; };
        // certCommonName Field Functions 
        bool hasCertCommonName() const { return this->certCommonName_ != nullptr;};
        void deleteCertCommonName() { this->certCommonName_ = nullptr;};
        inline string getCertCommonName() const { DARABONBA_PTR_GET_DEFAULT(certCommonName_, "") };
        inline DbProxyCertListItemsItem& setCertCommonName(string certCommonName) { DARABONBA_PTR_SET_VALUE(certCommonName_, certCommonName) };


        // dbInstanceName Field Functions 
        bool hasDbInstanceName() const { return this->dbInstanceName_ != nullptr;};
        void deleteDbInstanceName() { this->dbInstanceName_ = nullptr;};
        inline string getDbInstanceName() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceName_, "") };
        inline DbProxyCertListItemsItem& setDbInstanceName(string dbInstanceName) { DARABONBA_PTR_SET_VALUE(dbInstanceName_, dbInstanceName) };


        // endpointName Field Functions 
        bool hasEndpointName() const { return this->endpointName_ != nullptr;};
        void deleteEndpointName() { this->endpointName_ = nullptr;};
        inline string getEndpointName() const { DARABONBA_PTR_GET_DEFAULT(endpointName_, "") };
        inline DbProxyCertListItemsItem& setEndpointName(string endpointName) { DARABONBA_PTR_SET_VALUE(endpointName_, endpointName) };


        // endpointType Field Functions 
        bool hasEndpointType() const { return this->endpointType_ != nullptr;};
        void deleteEndpointType() { this->endpointType_ = nullptr;};
        inline string getEndpointType() const { DARABONBA_PTR_GET_DEFAULT(endpointType_, "") };
        inline DbProxyCertListItemsItem& setEndpointType(string endpointType) { DARABONBA_PTR_SET_VALUE(endpointType_, endpointType) };


        // sslExpiredTime Field Functions 
        bool hasSslExpiredTime() const { return this->sslExpiredTime_ != nullptr;};
        void deleteSslExpiredTime() { this->sslExpiredTime_ = nullptr;};
        inline string getSslExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(sslExpiredTime_, "") };
        inline DbProxyCertListItemsItem& setSslExpiredTime(string sslExpiredTime) { DARABONBA_PTR_SET_VALUE(sslExpiredTime_, sslExpiredTime) };


      protected:
        // The dedicated proxy endpoint for which SSL encryption is enabled.
        shared_ptr<string> certCommonName_ {};
        // The instance ID.
        shared_ptr<string> dbInstanceName_ {};
        // The ID of the dedicated proxy endpoint.
        shared_ptr<string> endpointName_ {};
        // The default identifier of the dedicated proxy endpoint. The value is fixed as **RWSplit**.
        shared_ptr<string> endpointType_ {};
        // The time at which the certificate expires.
        shared_ptr<string> sslExpiredTime_ {};
      };

      virtual bool empty() const override { return this->dbProxyCertListItems_ == nullptr; };
      // dbProxyCertListItems Field Functions 
      bool hasDbProxyCertListItems() const { return this->dbProxyCertListItems_ != nullptr;};
      void deleteDbProxyCertListItems() { this->dbProxyCertListItems_ = nullptr;};
      inline const vector<DbProxyCertListItems::DbProxyCertListItemsItem> & getDbProxyCertListItems() const { DARABONBA_PTR_GET_CONST(dbProxyCertListItems_, vector<DbProxyCertListItems::DbProxyCertListItemsItem>) };
      inline vector<DbProxyCertListItems::DbProxyCertListItemsItem> getDbProxyCertListItems() { DARABONBA_PTR_GET(dbProxyCertListItems_, vector<DbProxyCertListItems::DbProxyCertListItemsItem>) };
      inline DbProxyCertListItems& setDbProxyCertListItems(const vector<DbProxyCertListItems::DbProxyCertListItemsItem> & dbProxyCertListItems) { DARABONBA_PTR_SET_VALUE(dbProxyCertListItems_, dbProxyCertListItems) };
      inline DbProxyCertListItems& setDbProxyCertListItems(vector<DbProxyCertListItems::DbProxyCertListItemsItem> && dbProxyCertListItems) { DARABONBA_PTR_SET_RVALUE(dbProxyCertListItems_, dbProxyCertListItems) };


    protected:
      shared_ptr<vector<DbProxyCertListItems::DbProxyCertListItemsItem>> dbProxyCertListItems_ {};
    };

    virtual bool empty() const override { return this->dbProxyCertListItems_ == nullptr
        && this->requestId_ == nullptr; };
    // dbProxyCertListItems Field Functions 
    bool hasDbProxyCertListItems() const { return this->dbProxyCertListItems_ != nullptr;};
    void deleteDbProxyCertListItems() { this->dbProxyCertListItems_ = nullptr;};
    inline const GetDbProxyInstanceSslResponseBody::DbProxyCertListItems & getDbProxyCertListItems() const { DARABONBA_PTR_GET_CONST(dbProxyCertListItems_, GetDbProxyInstanceSslResponseBody::DbProxyCertListItems) };
    inline GetDbProxyInstanceSslResponseBody::DbProxyCertListItems getDbProxyCertListItems() { DARABONBA_PTR_GET(dbProxyCertListItems_, GetDbProxyInstanceSslResponseBody::DbProxyCertListItems) };
    inline GetDbProxyInstanceSslResponseBody& setDbProxyCertListItems(const GetDbProxyInstanceSslResponseBody::DbProxyCertListItems & dbProxyCertListItems) { DARABONBA_PTR_SET_VALUE(dbProxyCertListItems_, dbProxyCertListItems) };
    inline GetDbProxyInstanceSslResponseBody& setDbProxyCertListItems(GetDbProxyInstanceSslResponseBody::DbProxyCertListItems && dbProxyCertListItems) { DARABONBA_PTR_SET_RVALUE(dbProxyCertListItems_, dbProxyCertListItems) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDbProxyInstanceSslResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of SSL encryption settings.
    shared_ptr<GetDbProxyInstanceSslResponseBody::DbProxyCertListItems> dbProxyCertListItems_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
