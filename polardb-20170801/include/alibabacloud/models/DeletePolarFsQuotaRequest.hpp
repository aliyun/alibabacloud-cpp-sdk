// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPOLARFSQUOTAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPOLARFSQUOTAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Quotas : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Quotas& obj) { 
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, Quotas& obj) { 
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      Quotas() = default ;
      Quotas(const Quotas &) = default ;
      Quotas(Quotas &&) = default ;
      Quotas(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Quotas() = default ;
      Quotas& operator=(const Quotas &) = default ;
      Quotas& operator=(Quotas &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Quotas& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Quotas& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // This parameter is required.
      shared_ptr<string> id_ {};
      // This parameter is required.
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->polarFsInstanceId_ == nullptr && this->quotas_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DeletePolarFsQuotaRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // polarFsInstanceId Field Functions 
    bool hasPolarFsInstanceId() const { return this->polarFsInstanceId_ != nullptr;};
    void deletePolarFsInstanceId() { this->polarFsInstanceId_ = nullptr;};
    inline string getPolarFsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(polarFsInstanceId_, "") };
    inline DeletePolarFsQuotaRequest& setPolarFsInstanceId(string polarFsInstanceId) { DARABONBA_PTR_SET_VALUE(polarFsInstanceId_, polarFsInstanceId) };


    // quotas Field Functions 
    bool hasQuotas() const { return this->quotas_ != nullptr;};
    void deleteQuotas() { this->quotas_ = nullptr;};
    inline const vector<DeletePolarFsQuotaRequest::Quotas> & getQuotas() const { DARABONBA_PTR_GET_CONST(quotas_, vector<DeletePolarFsQuotaRequest::Quotas>) };
    inline vector<DeletePolarFsQuotaRequest::Quotas> getQuotas() { DARABONBA_PTR_GET(quotas_, vector<DeletePolarFsQuotaRequest::Quotas>) };
    inline DeletePolarFsQuotaRequest& setQuotas(const vector<DeletePolarFsQuotaRequest::Quotas> & quotas) { DARABONBA_PTR_SET_VALUE(quotas_, quotas) };
    inline DeletePolarFsQuotaRequest& setQuotas(vector<DeletePolarFsQuotaRequest::Quotas> && quotas) { DARABONBA_PTR_SET_RVALUE(quotas_, quotas) };


  protected:
    shared_ptr<string> DBClusterId_ {};
    // This parameter is required.
    shared_ptr<string> polarFsInstanceId_ {};
    // This parameter is required.
    shared_ptr<vector<DeletePolarFsQuotaRequest::Quotas>> quotas_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
