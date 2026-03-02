// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PDPSERVICE_HPP_
#define ALIBABACLOUD_MODELS_PDPSERVICE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class PdpService : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PdpService& obj) { 
      DARABONBA_PTR_TO_JSON(accountId, accountId_);
      DARABONBA_PTR_TO_JSON(alias, alias_);
      DARABONBA_PTR_TO_JSON(codeBranch, codeBranch_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(enterpriseId, enterpriseId_);
      DARABONBA_PTR_TO_JSON(extraInfo, extraInfo_);
      DARABONBA_PTR_TO_JSON(gitRepo, gitRepo_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(jumpUrl, jumpUrl_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(orgType, orgType_);
      DARABONBA_PTR_TO_JSON(pbcId, pbcId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, PdpService& obj) { 
      DARABONBA_PTR_FROM_JSON(accountId, accountId_);
      DARABONBA_PTR_FROM_JSON(alias, alias_);
      DARABONBA_PTR_FROM_JSON(codeBranch, codeBranch_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(enterpriseId, enterpriseId_);
      DARABONBA_PTR_FROM_JSON(extraInfo, extraInfo_);
      DARABONBA_PTR_FROM_JSON(gitRepo, gitRepo_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(jumpUrl, jumpUrl_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(orgType, orgType_);
      DARABONBA_PTR_FROM_JSON(pbcId, pbcId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    PdpService() = default ;
    PdpService(const PdpService &) = default ;
    PdpService(PdpService &&) = default ;
    PdpService(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PdpService() = default ;
    PdpService& operator=(const PdpService &) = default ;
    PdpService& operator=(PdpService &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && this->alias_ == nullptr && this->codeBranch_ == nullptr && this->description_ == nullptr && this->enterpriseId_ == nullptr && this->extraInfo_ == nullptr
        && this->gitRepo_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->jumpUrl_ == nullptr
        && this->name_ == nullptr && this->orgType_ == nullptr && this->pbcId_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr
        && this->type_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline PdpService& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline PdpService& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // codeBranch Field Functions 
    bool hasCodeBranch() const { return this->codeBranch_ != nullptr;};
    void deleteCodeBranch() { this->codeBranch_ = nullptr;};
    inline string getCodeBranch() const { DARABONBA_PTR_GET_DEFAULT(codeBranch_, "") };
    inline PdpService& setCodeBranch(string codeBranch) { DARABONBA_PTR_SET_VALUE(codeBranch_, codeBranch) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline PdpService& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enterpriseId Field Functions 
    bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
    void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
    inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
    inline PdpService& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


    // extraInfo Field Functions 
    bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
    void deleteExtraInfo() { this->extraInfo_ = nullptr;};
    inline string getExtraInfo() const { DARABONBA_PTR_GET_DEFAULT(extraInfo_, "") };
    inline PdpService& setExtraInfo(string extraInfo) { DARABONBA_PTR_SET_VALUE(extraInfo_, extraInfo) };


    // gitRepo Field Functions 
    bool hasGitRepo() const { return this->gitRepo_ != nullptr;};
    void deleteGitRepo() { this->gitRepo_ = nullptr;};
    inline string getGitRepo() const { DARABONBA_PTR_GET_DEFAULT(gitRepo_, "") };
    inline PdpService& setGitRepo(string gitRepo) { DARABONBA_PTR_SET_VALUE(gitRepo_, gitRepo) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline PdpService& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline PdpService& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline PdpService& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // jumpUrl Field Functions 
    bool hasJumpUrl() const { return this->jumpUrl_ != nullptr;};
    void deleteJumpUrl() { this->jumpUrl_ = nullptr;};
    inline string getJumpUrl() const { DARABONBA_PTR_GET_DEFAULT(jumpUrl_, "") };
    inline PdpService& setJumpUrl(string jumpUrl) { DARABONBA_PTR_SET_VALUE(jumpUrl_, jumpUrl) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline PdpService& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // orgType Field Functions 
    bool hasOrgType() const { return this->orgType_ != nullptr;};
    void deleteOrgType() { this->orgType_ = nullptr;};
    inline string getOrgType() const { DARABONBA_PTR_GET_DEFAULT(orgType_, "") };
    inline PdpService& setOrgType(string orgType) { DARABONBA_PTR_SET_VALUE(orgType_, orgType) };


    // pbcId Field Functions 
    bool hasPbcId() const { return this->pbcId_ != nullptr;};
    void deletePbcId() { this->pbcId_ = nullptr;};
    inline int64_t getPbcId() const { DARABONBA_PTR_GET_DEFAULT(pbcId_, 0L) };
    inline PdpService& setPbcId(int64_t pbcId) { DARABONBA_PTR_SET_VALUE(pbcId_, pbcId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PdpService& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline PdpService& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline PdpService& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<string> accountId_ {};
    // This parameter is required.
    shared_ptr<string> alias_ {};
    shared_ptr<string> codeBranch_ {};
    shared_ptr<string> description_ {};
    shared_ptr<int64_t> enterpriseId_ {};
    shared_ptr<string> extraInfo_ {};
    shared_ptr<string> gitRepo_ {};
    shared_ptr<string> gmtCreate_ {};
    shared_ptr<string> gmtModified_ {};
    shared_ptr<int64_t> id_ {};
    shared_ptr<string> jumpUrl_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    shared_ptr<string> orgType_ {};
    // This parameter is required.
    shared_ptr<int64_t> pbcId_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> status_ {};
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
