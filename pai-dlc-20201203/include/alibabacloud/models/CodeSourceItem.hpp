// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CODESOURCEITEM_HPP_
#define ALIBABACLOUD_MODELS_CODESOURCEITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class CodeSourceItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CodeSourceItem& obj) { 
      DARABONBA_PTR_TO_JSON(CodeBranch, codeBranch_);
      DARABONBA_PTR_TO_JSON(CodeCommit, codeCommit_);
      DARABONBA_PTR_TO_JSON(CodeRepo, codeRepo_);
      DARABONBA_PTR_TO_JSON(CodeRepoAccessToken, codeRepoAccessToken_);
      DARABONBA_PTR_TO_JSON(CodeRepoUserName, codeRepoUserName_);
      DARABONBA_PTR_TO_JSON(CodeSourceId, codeSourceId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModifyTime, gmtModifyTime_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, CodeSourceItem& obj) { 
      DARABONBA_PTR_FROM_JSON(CodeBranch, codeBranch_);
      DARABONBA_PTR_FROM_JSON(CodeCommit, codeCommit_);
      DARABONBA_PTR_FROM_JSON(CodeRepo, codeRepo_);
      DARABONBA_PTR_FROM_JSON(CodeRepoAccessToken, codeRepoAccessToken_);
      DARABONBA_PTR_FROM_JSON(CodeRepoUserName, codeRepoUserName_);
      DARABONBA_PTR_FROM_JSON(CodeSourceId, codeSourceId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifyTime, gmtModifyTime_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    CodeSourceItem() = default ;
    CodeSourceItem(const CodeSourceItem &) = default ;
    CodeSourceItem(CodeSourceItem &&) = default ;
    CodeSourceItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CodeSourceItem() = default ;
    CodeSourceItem& operator=(const CodeSourceItem &) = default ;
    CodeSourceItem& operator=(CodeSourceItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->codeBranch_ != nullptr
        && this->codeCommit_ != nullptr && this->codeRepo_ != nullptr && this->codeRepoAccessToken_ != nullptr && this->codeRepoUserName_ != nullptr && this->codeSourceId_ != nullptr
        && this->description_ != nullptr && this->displayName_ != nullptr && this->gmtCreateTime_ != nullptr && this->gmtModifyTime_ != nullptr && this->userId_ != nullptr; };
    // codeBranch Field Functions 
    bool hasCodeBranch() const { return this->codeBranch_ != nullptr;};
    void deleteCodeBranch() { this->codeBranch_ = nullptr;};
    inline string codeBranch() const { DARABONBA_PTR_GET_DEFAULT(codeBranch_, "") };
    inline CodeSourceItem& setCodeBranch(string codeBranch) { DARABONBA_PTR_SET_VALUE(codeBranch_, codeBranch) };


    // codeCommit Field Functions 
    bool hasCodeCommit() const { return this->codeCommit_ != nullptr;};
    void deleteCodeCommit() { this->codeCommit_ = nullptr;};
    inline string codeCommit() const { DARABONBA_PTR_GET_DEFAULT(codeCommit_, "") };
    inline CodeSourceItem& setCodeCommit(string codeCommit) { DARABONBA_PTR_SET_VALUE(codeCommit_, codeCommit) };


    // codeRepo Field Functions 
    bool hasCodeRepo() const { return this->codeRepo_ != nullptr;};
    void deleteCodeRepo() { this->codeRepo_ = nullptr;};
    inline string codeRepo() const { DARABONBA_PTR_GET_DEFAULT(codeRepo_, "") };
    inline CodeSourceItem& setCodeRepo(string codeRepo) { DARABONBA_PTR_SET_VALUE(codeRepo_, codeRepo) };


    // codeRepoAccessToken Field Functions 
    bool hasCodeRepoAccessToken() const { return this->codeRepoAccessToken_ != nullptr;};
    void deleteCodeRepoAccessToken() { this->codeRepoAccessToken_ = nullptr;};
    inline string codeRepoAccessToken() const { DARABONBA_PTR_GET_DEFAULT(codeRepoAccessToken_, "") };
    inline CodeSourceItem& setCodeRepoAccessToken(string codeRepoAccessToken) { DARABONBA_PTR_SET_VALUE(codeRepoAccessToken_, codeRepoAccessToken) };


    // codeRepoUserName Field Functions 
    bool hasCodeRepoUserName() const { return this->codeRepoUserName_ != nullptr;};
    void deleteCodeRepoUserName() { this->codeRepoUserName_ = nullptr;};
    inline string codeRepoUserName() const { DARABONBA_PTR_GET_DEFAULT(codeRepoUserName_, "") };
    inline CodeSourceItem& setCodeRepoUserName(string codeRepoUserName) { DARABONBA_PTR_SET_VALUE(codeRepoUserName_, codeRepoUserName) };


    // codeSourceId Field Functions 
    bool hasCodeSourceId() const { return this->codeSourceId_ != nullptr;};
    void deleteCodeSourceId() { this->codeSourceId_ = nullptr;};
    inline string codeSourceId() const { DARABONBA_PTR_GET_DEFAULT(codeSourceId_, "") };
    inline CodeSourceItem& setCodeSourceId(string codeSourceId) { DARABONBA_PTR_SET_VALUE(codeSourceId_, codeSourceId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CodeSourceItem& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline CodeSourceItem& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline CodeSourceItem& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifyTime Field Functions 
    bool hasGmtModifyTime() const { return this->gmtModifyTime_ != nullptr;};
    void deleteGmtModifyTime() { this->gmtModifyTime_ = nullptr;};
    inline string gmtModifyTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifyTime_, "") };
    inline CodeSourceItem& setGmtModifyTime(string gmtModifyTime) { DARABONBA_PTR_SET_VALUE(gmtModifyTime_, gmtModifyTime) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline CodeSourceItem& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> codeBranch_ = nullptr;
    std::shared_ptr<string> codeCommit_ = nullptr;
    std::shared_ptr<string> codeRepo_ = nullptr;
    std::shared_ptr<string> codeRepoAccessToken_ = nullptr;
    std::shared_ptr<string> codeRepoUserName_ = nullptr;
    std::shared_ptr<string> codeSourceId_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    std::shared_ptr<string> gmtModifyTime_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
