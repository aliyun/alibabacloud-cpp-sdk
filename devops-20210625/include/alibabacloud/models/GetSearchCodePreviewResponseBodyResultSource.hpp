// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSEARCHCODEPREVIEWRESPONSEBODYRESULTSOURCE_HPP_
#define ALIBABACLOUD_MODELS_GETSEARCHCODEPREVIEWRESPONSEBODYRESULTSOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetSearchCodePreviewResponseBodyResultSource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSearchCodePreviewResponseBodyResultSource& obj) { 
      DARABONBA_PTR_TO_JSON(branch, branch_);
      DARABONBA_PTR_TO_JSON(checkinDate, checkinDate_);
      DARABONBA_PTR_TO_JSON(fileName, fileName_);
      DARABONBA_PTR_TO_JSON(filePath, filePath_);
      DARABONBA_PTR_TO_JSON(language, language_);
      DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
      DARABONBA_PTR_TO_JSON(repoPath, repoPath_);
    };
    friend void from_json(const Darabonba::Json& j, GetSearchCodePreviewResponseBodyResultSource& obj) { 
      DARABONBA_PTR_FROM_JSON(branch, branch_);
      DARABONBA_PTR_FROM_JSON(checkinDate, checkinDate_);
      DARABONBA_PTR_FROM_JSON(fileName, fileName_);
      DARABONBA_PTR_FROM_JSON(filePath, filePath_);
      DARABONBA_PTR_FROM_JSON(language, language_);
      DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
      DARABONBA_PTR_FROM_JSON(repoPath, repoPath_);
    };
    GetSearchCodePreviewResponseBodyResultSource() = default ;
    GetSearchCodePreviewResponseBodyResultSource(const GetSearchCodePreviewResponseBodyResultSource &) = default ;
    GetSearchCodePreviewResponseBodyResultSource(GetSearchCodePreviewResponseBodyResultSource &&) = default ;
    GetSearchCodePreviewResponseBodyResultSource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSearchCodePreviewResponseBodyResultSource() = default ;
    GetSearchCodePreviewResponseBodyResultSource& operator=(const GetSearchCodePreviewResponseBodyResultSource &) = default ;
    GetSearchCodePreviewResponseBodyResultSource& operator=(GetSearchCodePreviewResponseBodyResultSource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->branch_ == nullptr
        && return this->checkinDate_ == nullptr && return this->fileName_ == nullptr && return this->filePath_ == nullptr && return this->language_ == nullptr && return this->organizationId_ == nullptr
        && return this->repoPath_ == nullptr; };
    // branch Field Functions 
    bool hasBranch() const { return this->branch_ != nullptr;};
    void deleteBranch() { this->branch_ = nullptr;};
    inline string branch() const { DARABONBA_PTR_GET_DEFAULT(branch_, "") };
    inline GetSearchCodePreviewResponseBodyResultSource& setBranch(string branch) { DARABONBA_PTR_SET_VALUE(branch_, branch) };


    // checkinDate Field Functions 
    bool hasCheckinDate() const { return this->checkinDate_ != nullptr;};
    void deleteCheckinDate() { this->checkinDate_ = nullptr;};
    inline string checkinDate() const { DARABONBA_PTR_GET_DEFAULT(checkinDate_, "") };
    inline GetSearchCodePreviewResponseBodyResultSource& setCheckinDate(string checkinDate) { DARABONBA_PTR_SET_VALUE(checkinDate_, checkinDate) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline GetSearchCodePreviewResponseBodyResultSource& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // filePath Field Functions 
    bool hasFilePath() const { return this->filePath_ != nullptr;};
    void deleteFilePath() { this->filePath_ = nullptr;};
    inline string filePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
    inline GetSearchCodePreviewResponseBodyResultSource& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline GetSearchCodePreviewResponseBodyResultSource& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline GetSearchCodePreviewResponseBodyResultSource& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


    // repoPath Field Functions 
    bool hasRepoPath() const { return this->repoPath_ != nullptr;};
    void deleteRepoPath() { this->repoPath_ = nullptr;};
    inline string repoPath() const { DARABONBA_PTR_GET_DEFAULT(repoPath_, "") };
    inline GetSearchCodePreviewResponseBodyResultSource& setRepoPath(string repoPath) { DARABONBA_PTR_SET_VALUE(repoPath_, repoPath) };


  protected:
    std::shared_ptr<string> branch_ = nullptr;
    std::shared_ptr<string> checkinDate_ = nullptr;
    std::shared_ptr<string> fileName_ = nullptr;
    std::shared_ptr<string> filePath_ = nullptr;
    std::shared_ptr<string> language_ = nullptr;
    std::shared_ptr<string> organizationId_ = nullptr;
    std::shared_ptr<string> repoPath_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
