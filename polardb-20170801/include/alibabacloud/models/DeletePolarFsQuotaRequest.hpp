// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPOLARFSQUOTAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPOLARFSQUOTAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DeletePolarFsQuotaRequestQuotas.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DeletePolarFsQuotaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeletePolarFsQuotaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(PolarFsInstanceId, polarFsInstanceId_);
      DARABONBA_PTR_TO_JSON(Quotas, quotas_);
    };
    friend void from_json(const Darabonba::Json& j, DeletePolarFsQuotaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(PolarFsInstanceId, polarFsInstanceId_);
      DARABONBA_PTR_FROM_JSON(Quotas, quotas_);
    };
    DeletePolarFsQuotaRequest() = default ;
    DeletePolarFsQuotaRequest(const DeletePolarFsQuotaRequest &) = default ;
    DeletePolarFsQuotaRequest(DeletePolarFsQuotaRequest &&) = default ;
    DeletePolarFsQuotaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeletePolarFsQuotaRequest() = default ;
    DeletePolarFsQuotaRequest& operator=(const DeletePolarFsQuotaRequest &) = default ;
    DeletePolarFsQuotaRequest& operator=(DeletePolarFsQuotaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && return this->polarFsInstanceId_ == nullptr && return this->quotas_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DeletePolarFsQuotaRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // polarFsInstanceId Field Functions 
    bool hasPolarFsInstanceId() const { return this->polarFsInstanceId_ != nullptr;};
    void deletePolarFsInstanceId() { this->polarFsInstanceId_ = nullptr;};
    inline string polarFsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(polarFsInstanceId_, "") };
    inline DeletePolarFsQuotaRequest& setPolarFsInstanceId(string polarFsInstanceId) { DARABONBA_PTR_SET_VALUE(polarFsInstanceId_, polarFsInstanceId) };


    // quotas Field Functions 
    bool hasQuotas() const { return this->quotas_ != nullptr;};
    void deleteQuotas() { this->quotas_ = nullptr;};
    inline const vector<DeletePolarFsQuotaRequestQuotas> & quotas() const { DARABONBA_PTR_GET_CONST(quotas_, vector<DeletePolarFsQuotaRequestQuotas>) };
    inline vector<DeletePolarFsQuotaRequestQuotas> quotas() { DARABONBA_PTR_GET(quotas_, vector<DeletePolarFsQuotaRequestQuotas>) };
    inline DeletePolarFsQuotaRequest& setQuotas(const vector<DeletePolarFsQuotaRequestQuotas> & quotas) { DARABONBA_PTR_SET_VALUE(quotas_, quotas) };
    inline DeletePolarFsQuotaRequest& setQuotas(vector<DeletePolarFsQuotaRequestQuotas> && quotas) { DARABONBA_PTR_SET_RVALUE(quotas_, quotas) };


  protected:
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> polarFsInstanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<DeletePolarFsQuotaRequestQuotas>> quotas_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
