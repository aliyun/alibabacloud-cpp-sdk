// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDPOLARFSQUOTAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDPOLARFSQUOTAREQUEST_HPP_
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
  class AddPolarFsQuotaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddPolarFsQuotaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(PolarFsInstanceId, polarFsInstanceId_);
      DARABONBA_PTR_TO_JSON(Quotas, quotas_);
    };
    friend void from_json(const Darabonba::Json& j, AddPolarFsQuotaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(PolarFsInstanceId, polarFsInstanceId_);
      DARABONBA_PTR_FROM_JSON(Quotas, quotas_);
    };
    AddPolarFsQuotaRequest() = default ;
    AddPolarFsQuotaRequest(const AddPolarFsQuotaRequest &) = default ;
    AddPolarFsQuotaRequest(AddPolarFsQuotaRequest &&) = default ;
    AddPolarFsQuotaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddPolarFsQuotaRequest() = default ;
    AddPolarFsQuotaRequest& operator=(const AddPolarFsQuotaRequest &) = default ;
    AddPolarFsQuotaRequest& operator=(AddPolarFsQuotaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Quotas : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Quotas& obj) { 
        DARABONBA_PTR_TO_JSON(AccessTTL, accessTTL_);
        DARABONBA_PTR_TO_JSON(ChangeTTL, changeTTL_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Enabled, enabled_);
        DARABONBA_PTR_TO_JSON(Exclude, exclude_);
        DARABONBA_PTR_TO_JSON(FileCountLimit, fileCountLimit_);
        DARABONBA_PTR_TO_JSON(Include, include_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(SizeLimit, sizeLimit_);
      };
      friend void from_json(const Darabonba::Json& j, Quotas& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessTTL, accessTTL_);
        DARABONBA_PTR_FROM_JSON(ChangeTTL, changeTTL_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(Exclude, exclude_);
        DARABONBA_PTR_FROM_JSON(FileCountLimit, fileCountLimit_);
        DARABONBA_PTR_FROM_JSON(Include, include_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(SizeLimit, sizeLimit_);
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
      virtual bool empty() const override { return this->accessTTL_ == nullptr
        && this->changeTTL_ == nullptr && this->description_ == nullptr && this->enabled_ == nullptr && this->exclude_ == nullptr && this->fileCountLimit_ == nullptr
        && this->include_ == nullptr && this->name_ == nullptr && this->priority_ == nullptr && this->sizeLimit_ == nullptr; };
      // accessTTL Field Functions 
      bool hasAccessTTL() const { return this->accessTTL_ != nullptr;};
      void deleteAccessTTL() { this->accessTTL_ = nullptr;};
      inline int64_t getAccessTTL() const { DARABONBA_PTR_GET_DEFAULT(accessTTL_, 0L) };
      inline Quotas& setAccessTTL(int64_t accessTTL) { DARABONBA_PTR_SET_VALUE(accessTTL_, accessTTL) };


      // changeTTL Field Functions 
      bool hasChangeTTL() const { return this->changeTTL_ != nullptr;};
      void deleteChangeTTL() { this->changeTTL_ = nullptr;};
      inline int64_t getChangeTTL() const { DARABONBA_PTR_GET_DEFAULT(changeTTL_, 0L) };
      inline Quotas& setChangeTTL(int64_t changeTTL) { DARABONBA_PTR_SET_VALUE(changeTTL_, changeTTL) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Quotas& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline Quotas& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // exclude Field Functions 
      bool hasExclude() const { return this->exclude_ != nullptr;};
      void deleteExclude() { this->exclude_ = nullptr;};
      inline string getExclude() const { DARABONBA_PTR_GET_DEFAULT(exclude_, "") };
      inline Quotas& setExclude(string exclude) { DARABONBA_PTR_SET_VALUE(exclude_, exclude) };


      // fileCountLimit Field Functions 
      bool hasFileCountLimit() const { return this->fileCountLimit_ != nullptr;};
      void deleteFileCountLimit() { this->fileCountLimit_ = nullptr;};
      inline int64_t getFileCountLimit() const { DARABONBA_PTR_GET_DEFAULT(fileCountLimit_, 0L) };
      inline Quotas& setFileCountLimit(int64_t fileCountLimit) { DARABONBA_PTR_SET_VALUE(fileCountLimit_, fileCountLimit) };


      // include Field Functions 
      bool hasInclude() const { return this->include_ != nullptr;};
      void deleteInclude() { this->include_ = nullptr;};
      inline string getInclude() const { DARABONBA_PTR_GET_DEFAULT(include_, "") };
      inline Quotas& setInclude(string include) { DARABONBA_PTR_SET_VALUE(include_, include) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Quotas& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
      inline Quotas& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // sizeLimit Field Functions 
      bool hasSizeLimit() const { return this->sizeLimit_ != nullptr;};
      void deleteSizeLimit() { this->sizeLimit_ = nullptr;};
      inline int64_t getSizeLimit() const { DARABONBA_PTR_GET_DEFAULT(sizeLimit_, 0L) };
      inline Quotas& setSizeLimit(int64_t sizeLimit) { DARABONBA_PTR_SET_VALUE(sizeLimit_, sizeLimit) };


    protected:
      shared_ptr<int64_t> accessTTL_ {};
      shared_ptr<int64_t> changeTTL_ {};
      shared_ptr<string> description_ {};
      shared_ptr<bool> enabled_ {};
      shared_ptr<string> exclude_ {};
      shared_ptr<int64_t> fileCountLimit_ {};
      // This parameter is required.
      shared_ptr<string> include_ {};
      // This parameter is required.
      shared_ptr<string> name_ {};
      shared_ptr<int32_t> priority_ {};
      shared_ptr<int64_t> sizeLimit_ {};
    };

    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->polarFsInstanceId_ == nullptr && this->quotas_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline AddPolarFsQuotaRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // polarFsInstanceId Field Functions 
    bool hasPolarFsInstanceId() const { return this->polarFsInstanceId_ != nullptr;};
    void deletePolarFsInstanceId() { this->polarFsInstanceId_ = nullptr;};
    inline string getPolarFsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(polarFsInstanceId_, "") };
    inline AddPolarFsQuotaRequest& setPolarFsInstanceId(string polarFsInstanceId) { DARABONBA_PTR_SET_VALUE(polarFsInstanceId_, polarFsInstanceId) };


    // quotas Field Functions 
    bool hasQuotas() const { return this->quotas_ != nullptr;};
    void deleteQuotas() { this->quotas_ = nullptr;};
    inline const vector<AddPolarFsQuotaRequest::Quotas> & getQuotas() const { DARABONBA_PTR_GET_CONST(quotas_, vector<AddPolarFsQuotaRequest::Quotas>) };
    inline vector<AddPolarFsQuotaRequest::Quotas> getQuotas() { DARABONBA_PTR_GET(quotas_, vector<AddPolarFsQuotaRequest::Quotas>) };
    inline AddPolarFsQuotaRequest& setQuotas(const vector<AddPolarFsQuotaRequest::Quotas> & quotas) { DARABONBA_PTR_SET_VALUE(quotas_, quotas) };
    inline AddPolarFsQuotaRequest& setQuotas(vector<AddPolarFsQuotaRequest::Quotas> && quotas) { DARABONBA_PTR_SET_RVALUE(quotas_, quotas) };


  protected:
    shared_ptr<string> DBClusterId_ {};
    // This parameter is required.
    shared_ptr<string> polarFsInstanceId_ {};
    // This parameter is required.
    shared_ptr<vector<AddPolarFsQuotaRequest::Quotas>> quotas_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
