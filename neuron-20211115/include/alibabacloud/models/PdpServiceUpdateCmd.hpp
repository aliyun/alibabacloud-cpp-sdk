// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PDPSERVICEUPDATECMD_HPP_
#define ALIBABACLOUD_MODELS_PDPSERVICEUPDATECMD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class PdpServiceUpdateCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PdpServiceUpdateCmd& obj) { 
      DARABONBA_PTR_TO_JSON(alias, alias_);
      DARABONBA_PTR_TO_JSON(codeBranch, codeBranch_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(extraInfo, extraInfo_);
      DARABONBA_PTR_TO_JSON(gitRepo, gitRepo_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(jumpUrl, jumpUrl_);
    };
    friend void from_json(const Darabonba::Json& j, PdpServiceUpdateCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(alias, alias_);
      DARABONBA_PTR_FROM_JSON(codeBranch, codeBranch_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(extraInfo, extraInfo_);
      DARABONBA_PTR_FROM_JSON(gitRepo, gitRepo_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(jumpUrl, jumpUrl_);
    };
    PdpServiceUpdateCmd() = default ;
    PdpServiceUpdateCmd(const PdpServiceUpdateCmd &) = default ;
    PdpServiceUpdateCmd(PdpServiceUpdateCmd &&) = default ;
    PdpServiceUpdateCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PdpServiceUpdateCmd() = default ;
    PdpServiceUpdateCmd& operator=(const PdpServiceUpdateCmd &) = default ;
    PdpServiceUpdateCmd& operator=(PdpServiceUpdateCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alias_ == nullptr
        && this->codeBranch_ == nullptr && this->description_ == nullptr && this->extraInfo_ == nullptr && this->gitRepo_ == nullptr && this->id_ == nullptr
        && this->jumpUrl_ == nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline PdpServiceUpdateCmd& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // codeBranch Field Functions 
    bool hasCodeBranch() const { return this->codeBranch_ != nullptr;};
    void deleteCodeBranch() { this->codeBranch_ = nullptr;};
    inline string getCodeBranch() const { DARABONBA_PTR_GET_DEFAULT(codeBranch_, "") };
    inline PdpServiceUpdateCmd& setCodeBranch(string codeBranch) { DARABONBA_PTR_SET_VALUE(codeBranch_, codeBranch) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline PdpServiceUpdateCmd& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // extraInfo Field Functions 
    bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
    void deleteExtraInfo() { this->extraInfo_ = nullptr;};
    inline string getExtraInfo() const { DARABONBA_PTR_GET_DEFAULT(extraInfo_, "") };
    inline PdpServiceUpdateCmd& setExtraInfo(string extraInfo) { DARABONBA_PTR_SET_VALUE(extraInfo_, extraInfo) };


    // gitRepo Field Functions 
    bool hasGitRepo() const { return this->gitRepo_ != nullptr;};
    void deleteGitRepo() { this->gitRepo_ = nullptr;};
    inline string getGitRepo() const { DARABONBA_PTR_GET_DEFAULT(gitRepo_, "") };
    inline PdpServiceUpdateCmd& setGitRepo(string gitRepo) { DARABONBA_PTR_SET_VALUE(gitRepo_, gitRepo) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline PdpServiceUpdateCmd& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // jumpUrl Field Functions 
    bool hasJumpUrl() const { return this->jumpUrl_ != nullptr;};
    void deleteJumpUrl() { this->jumpUrl_ = nullptr;};
    inline string getJumpUrl() const { DARABONBA_PTR_GET_DEFAULT(jumpUrl_, "") };
    inline PdpServiceUpdateCmd& setJumpUrl(string jumpUrl) { DARABONBA_PTR_SET_VALUE(jumpUrl_, jumpUrl) };


  protected:
    shared_ptr<string> alias_ {};
    shared_ptr<string> codeBranch_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> extraInfo_ {};
    shared_ptr<string> gitRepo_ {};
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
    shared_ptr<string> jumpUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
