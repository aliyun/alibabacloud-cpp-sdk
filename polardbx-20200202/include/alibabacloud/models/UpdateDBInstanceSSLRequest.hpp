// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDBINSTANCESSLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDBINSTANCESSLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class UpdateDBInstanceSSLRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDBInstanceSSLRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CertCommonName, certCommonName_);
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(EnableSSL, enableSSL_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDBInstanceSSLRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CertCommonName, certCommonName_);
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(EnableSSL, enableSSL_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    UpdateDBInstanceSSLRequest() = default ;
    UpdateDBInstanceSSLRequest(const UpdateDBInstanceSSLRequest &) = default ;
    UpdateDBInstanceSSLRequest(UpdateDBInstanceSSLRequest &&) = default ;
    UpdateDBInstanceSSLRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDBInstanceSSLRequest() = default ;
    UpdateDBInstanceSSLRequest& operator=(const UpdateDBInstanceSSLRequest &) = default ;
    UpdateDBInstanceSSLRequest& operator=(UpdateDBInstanceSSLRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certCommonName_ == nullptr
        && this->DBInstanceName_ == nullptr && this->enableSSL_ == nullptr && this->regionId_ == nullptr; };
    // certCommonName Field Functions 
    bool hasCertCommonName() const { return this->certCommonName_ != nullptr;};
    void deleteCertCommonName() { this->certCommonName_ = nullptr;};
    inline string getCertCommonName() const { DARABONBA_PTR_GET_DEFAULT(certCommonName_, "") };
    inline UpdateDBInstanceSSLRequest& setCertCommonName(string certCommonName) { DARABONBA_PTR_SET_VALUE(certCommonName_, certCommonName) };


    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline UpdateDBInstanceSSLRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // enableSSL Field Functions 
    bool hasEnableSSL() const { return this->enableSSL_ != nullptr;};
    void deleteEnableSSL() { this->enableSSL_ = nullptr;};
    inline bool getEnableSSL() const { DARABONBA_PTR_GET_DEFAULT(enableSSL_, false) };
    inline UpdateDBInstanceSSLRequest& setEnableSSL(bool enableSSL) { DARABONBA_PTR_SET_VALUE(enableSSL_, enableSSL) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateDBInstanceSSLRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    shared_ptr<string> certCommonName_ {};
    // This parameter is required.
    shared_ptr<string> DBInstanceName_ {};
    // This parameter is required.
    shared_ptr<bool> enableSSL_ {};
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
