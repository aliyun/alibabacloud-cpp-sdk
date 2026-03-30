// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADPCACERTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPLOADPCACERTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class UploadPCACertRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadPCACertRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Cert, cert_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PrivateKey, privateKey_);
      DARABONBA_PTR_TO_JSON(WarehouseId, warehouseId_);
    };
    friend void from_json(const Darabonba::Json& j, UploadPCACertRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Cert, cert_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PrivateKey, privateKey_);
      DARABONBA_PTR_FROM_JSON(WarehouseId, warehouseId_);
    };
    UploadPCACertRequest() = default ;
    UploadPCACertRequest(const UploadPCACertRequest &) = default ;
    UploadPCACertRequest(UploadPCACertRequest &&) = default ;
    UploadPCACertRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadPCACertRequest() = default ;
    UploadPCACertRequest& operator=(const UploadPCACertRequest &) = default ;
    UploadPCACertRequest& operator=(UploadPCACertRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cert_ == nullptr
        && this->name_ == nullptr && this->privateKey_ == nullptr && this->warehouseId_ == nullptr; };
    // cert Field Functions 
    bool hasCert() const { return this->cert_ != nullptr;};
    void deleteCert() { this->cert_ = nullptr;};
    inline string getCert() const { DARABONBA_PTR_GET_DEFAULT(cert_, "") };
    inline UploadPCACertRequest& setCert(string cert) { DARABONBA_PTR_SET_VALUE(cert_, cert) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UploadPCACertRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // privateKey Field Functions 
    bool hasPrivateKey() const { return this->privateKey_ != nullptr;};
    void deletePrivateKey() { this->privateKey_ = nullptr;};
    inline string getPrivateKey() const { DARABONBA_PTR_GET_DEFAULT(privateKey_, "") };
    inline UploadPCACertRequest& setPrivateKey(string privateKey) { DARABONBA_PTR_SET_VALUE(privateKey_, privateKey) };


    // warehouseId Field Functions 
    bool hasWarehouseId() const { return this->warehouseId_ != nullptr;};
    void deleteWarehouseId() { this->warehouseId_ = nullptr;};
    inline int64_t getWarehouseId() const { DARABONBA_PTR_GET_DEFAULT(warehouseId_, 0L) };
    inline UploadPCACertRequest& setWarehouseId(int64_t warehouseId) { DARABONBA_PTR_SET_VALUE(warehouseId_, warehouseId) };


  protected:
    // <UploadPCACertResponse>
    //     <RequestId>15C66C7B-671A-4297-9187-2C4477247A74</RequestId>
    // </UploadPCACertResponse>
    // 
    // This parameter is required.
    shared_ptr<string> cert_ {};
    // UploadPCACert
    shared_ptr<string> name_ {};
    // Uploads a private certificate to a certificate repository.
    shared_ptr<string> privateKey_ {};
    // The ID of the repository.
    // 
    // >  You can call the [ListCertWarehouse](https://help.aliyun.com/document_detail/455805.html) operation to query the ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> warehouseId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
