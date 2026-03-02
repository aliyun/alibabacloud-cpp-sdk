// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NEURONBRIEFAPPVERSION_HPP_
#define ALIBABACLOUD_MODELS_NEURONBRIEFAPPVERSION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class NeuronBriefAppVersion : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NeuronBriefAppVersion& obj) { 
      DARABONBA_PTR_TO_JSON(accountId, accountId_);
      DARABONBA_PTR_TO_JSON(appId, appId_);
      DARABONBA_PTR_TO_JSON(enterpriseId, enterpriseId_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(manageType, manageType_);
      DARABONBA_PTR_TO_JSON(mobiCommitId, mobiCommitId_);
      DARABONBA_PTR_TO_JSON(mobiId, mobiId_);
      DARABONBA_PTR_TO_JSON(mobiModuleId, mobiModuleId_);
      DARABONBA_PTR_TO_JSON(mobiUrl, mobiUrl_);
      DARABONBA_PTR_TO_JSON(productId, productId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, NeuronBriefAppVersion& obj) { 
      DARABONBA_PTR_FROM_JSON(accountId, accountId_);
      DARABONBA_PTR_FROM_JSON(appId, appId_);
      DARABONBA_PTR_FROM_JSON(enterpriseId, enterpriseId_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(manageType, manageType_);
      DARABONBA_PTR_FROM_JSON(mobiCommitId, mobiCommitId_);
      DARABONBA_PTR_FROM_JSON(mobiId, mobiId_);
      DARABONBA_PTR_FROM_JSON(mobiModuleId, mobiModuleId_);
      DARABONBA_PTR_FROM_JSON(mobiUrl, mobiUrl_);
      DARABONBA_PTR_FROM_JSON(productId, productId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    NeuronBriefAppVersion() = default ;
    NeuronBriefAppVersion(const NeuronBriefAppVersion &) = default ;
    NeuronBriefAppVersion(NeuronBriefAppVersion &&) = default ;
    NeuronBriefAppVersion(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NeuronBriefAppVersion() = default ;
    NeuronBriefAppVersion& operator=(const NeuronBriefAppVersion &) = default ;
    NeuronBriefAppVersion& operator=(NeuronBriefAppVersion &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && this->appId_ == nullptr && this->enterpriseId_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr
        && this->manageType_ == nullptr && this->mobiCommitId_ == nullptr && this->mobiId_ == nullptr && this->mobiModuleId_ == nullptr && this->mobiUrl_ == nullptr
        && this->productId_ == nullptr && this->status_ == nullptr && this->version_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline NeuronBriefAppVersion& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline int64_t getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0L) };
    inline NeuronBriefAppVersion& setAppId(int64_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // enterpriseId Field Functions 
    bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
    void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
    inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
    inline NeuronBriefAppVersion& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline NeuronBriefAppVersion& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline NeuronBriefAppVersion& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline NeuronBriefAppVersion& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // manageType Field Functions 
    bool hasManageType() const { return this->manageType_ != nullptr;};
    void deleteManageType() { this->manageType_ = nullptr;};
    inline string getManageType() const { DARABONBA_PTR_GET_DEFAULT(manageType_, "") };
    inline NeuronBriefAppVersion& setManageType(string manageType) { DARABONBA_PTR_SET_VALUE(manageType_, manageType) };


    // mobiCommitId Field Functions 
    bool hasMobiCommitId() const { return this->mobiCommitId_ != nullptr;};
    void deleteMobiCommitId() { this->mobiCommitId_ = nullptr;};
    inline string getMobiCommitId() const { DARABONBA_PTR_GET_DEFAULT(mobiCommitId_, "") };
    inline NeuronBriefAppVersion& setMobiCommitId(string mobiCommitId) { DARABONBA_PTR_SET_VALUE(mobiCommitId_, mobiCommitId) };


    // mobiId Field Functions 
    bool hasMobiId() const { return this->mobiId_ != nullptr;};
    void deleteMobiId() { this->mobiId_ = nullptr;};
    inline int64_t getMobiId() const { DARABONBA_PTR_GET_DEFAULT(mobiId_, 0L) };
    inline NeuronBriefAppVersion& setMobiId(int64_t mobiId) { DARABONBA_PTR_SET_VALUE(mobiId_, mobiId) };


    // mobiModuleId Field Functions 
    bool hasMobiModuleId() const { return this->mobiModuleId_ != nullptr;};
    void deleteMobiModuleId() { this->mobiModuleId_ = nullptr;};
    inline string getMobiModuleId() const { DARABONBA_PTR_GET_DEFAULT(mobiModuleId_, "") };
    inline NeuronBriefAppVersion& setMobiModuleId(string mobiModuleId) { DARABONBA_PTR_SET_VALUE(mobiModuleId_, mobiModuleId) };


    // mobiUrl Field Functions 
    bool hasMobiUrl() const { return this->mobiUrl_ != nullptr;};
    void deleteMobiUrl() { this->mobiUrl_ = nullptr;};
    inline string getMobiUrl() const { DARABONBA_PTR_GET_DEFAULT(mobiUrl_, "") };
    inline NeuronBriefAppVersion& setMobiUrl(string mobiUrl) { DARABONBA_PTR_SET_VALUE(mobiUrl_, mobiUrl) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline int64_t getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, 0L) };
    inline NeuronBriefAppVersion& setProductId(int64_t productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline NeuronBriefAppVersion& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline NeuronBriefAppVersion& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    shared_ptr<string> accountId_ {};
    // This parameter is required.
    shared_ptr<int64_t> appId_ {};
    shared_ptr<int64_t> enterpriseId_ {};
    shared_ptr<string> gmtCreate_ {};
    shared_ptr<string> gmtModified_ {};
    shared_ptr<int64_t> id_ {};
    shared_ptr<string> manageType_ {};
    shared_ptr<string> mobiCommitId_ {};
    shared_ptr<int64_t> mobiId_ {};
    shared_ptr<string> mobiModuleId_ {};
    shared_ptr<string> mobiUrl_ {};
    shared_ptr<int64_t> productId_ {};
    shared_ptr<string> status_ {};
    // This parameter is required.
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
