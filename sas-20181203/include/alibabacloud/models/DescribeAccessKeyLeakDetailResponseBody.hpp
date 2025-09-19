// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCESSKEYLEAKDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCESSKEYLEAKDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeAccessKeyLeakDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccessKeyLeakDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccesskeyId, accesskeyId_);
      DARABONBA_PTR_TO_JSON(Asset, asset_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DealTime, dealTime_);
      DARABONBA_PTR_TO_JSON(DealType, dealType_);
      DARABONBA_PTR_TO_JSON(GithubFileName, githubFileName_);
      DARABONBA_PTR_TO_JSON(GithubFileType, githubFileType_);
      DARABONBA_PTR_TO_JSON(GithubFileUpdateTime, githubFileUpdateTime_);
      DARABONBA_PTR_TO_JSON(GithubFileUrl, githubFileUrl_);
      DARABONBA_PTR_TO_JSON(GithubRepoName, githubRepoName_);
      DARABONBA_PTR_TO_JSON(GithubRepoUrl, githubRepoUrl_);
      DARABONBA_PTR_TO_JSON(GithubUser, githubUser_);
      DARABONBA_PTR_TO_JSON(GithubUserPicUrl, githubUserPicUrl_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(TokenValid, tokenValid_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(WhitelistStatus, whitelistStatus_);
      DARABONBA_PTR_TO_JSON(WhitelistTime, whitelistTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccessKeyLeakDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccesskeyId, accesskeyId_);
      DARABONBA_PTR_FROM_JSON(Asset, asset_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DealTime, dealTime_);
      DARABONBA_PTR_FROM_JSON(DealType, dealType_);
      DARABONBA_PTR_FROM_JSON(GithubFileName, githubFileName_);
      DARABONBA_PTR_FROM_JSON(GithubFileType, githubFileType_);
      DARABONBA_PTR_FROM_JSON(GithubFileUpdateTime, githubFileUpdateTime_);
      DARABONBA_PTR_FROM_JSON(GithubFileUrl, githubFileUrl_);
      DARABONBA_PTR_FROM_JSON(GithubRepoName, githubRepoName_);
      DARABONBA_PTR_FROM_JSON(GithubRepoUrl, githubRepoUrl_);
      DARABONBA_PTR_FROM_JSON(GithubUser, githubUser_);
      DARABONBA_PTR_FROM_JSON(GithubUserPicUrl, githubUserPicUrl_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(TokenValid, tokenValid_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(WhitelistStatus, whitelistStatus_);
      DARABONBA_PTR_FROM_JSON(WhitelistTime, whitelistTime_);
    };
    DescribeAccessKeyLeakDetailResponseBody() = default ;
    DescribeAccessKeyLeakDetailResponseBody(const DescribeAccessKeyLeakDetailResponseBody &) = default ;
    DescribeAccessKeyLeakDetailResponseBody(DescribeAccessKeyLeakDetailResponseBody &&) = default ;
    DescribeAccessKeyLeakDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccessKeyLeakDetailResponseBody() = default ;
    DescribeAccessKeyLeakDetailResponseBody& operator=(const DescribeAccessKeyLeakDetailResponseBody &) = default ;
    DescribeAccessKeyLeakDetailResponseBody& operator=(DescribeAccessKeyLeakDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accesskeyId_ != nullptr
        && this->asset_ != nullptr && this->code_ != nullptr && this->dealTime_ != nullptr && this->dealType_ != nullptr && this->githubFileName_ != nullptr
        && this->githubFileType_ != nullptr && this->githubFileUpdateTime_ != nullptr && this->githubFileUrl_ != nullptr && this->githubRepoName_ != nullptr && this->githubRepoUrl_ != nullptr
        && this->githubUser_ != nullptr && this->githubUserPicUrl_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->remark_ != nullptr
        && this->requestId_ != nullptr && this->source_ != nullptr && this->tokenValid_ != nullptr && this->type_ != nullptr && this->whitelistStatus_ != nullptr
        && this->whitelistTime_ != nullptr; };
    // accesskeyId Field Functions 
    bool hasAccesskeyId() const { return this->accesskeyId_ != nullptr;};
    void deleteAccesskeyId() { this->accesskeyId_ = nullptr;};
    inline string accesskeyId() const { DARABONBA_PTR_GET_DEFAULT(accesskeyId_, "") };
    inline DescribeAccessKeyLeakDetailResponseBody& setAccesskeyId(string accesskeyId) { DARABONBA_PTR_SET_VALUE(accesskeyId_, accesskeyId) };


    // asset Field Functions 
    bool hasAsset() const { return this->asset_ != nullptr;};
    void deleteAsset() { this->asset_ = nullptr;};
    inline string asset() const { DARABONBA_PTR_GET_DEFAULT(asset_, "") };
    inline DescribeAccessKeyLeakDetailResponseBody& setAsset(string asset) { DARABONBA_PTR_SET_VALUE(asset_, asset) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeAccessKeyLeakDetailResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // dealTime Field Functions 
    bool hasDealTime() const { return this->dealTime_ != nullptr;};
    void deleteDealTime() { this->dealTime_ = nullptr;};
    inline string dealTime() const { DARABONBA_PTR_GET_DEFAULT(dealTime_, "") };
    inline DescribeAccessKeyLeakDetailResponseBody& setDealTime(string dealTime) { DARABONBA_PTR_SET_VALUE(dealTime_, dealTime) };


    // dealType Field Functions 
    bool hasDealType() const { return this->dealType_ != nullptr;};
    void deleteDealType() { this->dealType_ = nullptr;};
    inline string dealType() const { DARABONBA_PTR_GET_DEFAULT(dealType_, "") };
    inline DescribeAccessKeyLeakDetailResponseBody& setDealType(string dealType) { DARABONBA_PTR_SET_VALUE(dealType_, dealType) };


    // githubFileName Field Functions 
    bool hasGithubFileName() const { return this->githubFileName_ != nullptr;};
    void deleteGithubFileName() { this->githubFileName_ = nullptr;};
    inline string githubFileName() const { DARABONBA_PTR_GET_DEFAULT(githubFileName_, "") };
    inline DescribeAccessKeyLeakDetailResponseBody& setGithubFileName(string githubFileName) { DARABONBA_PTR_SET_VALUE(githubFileName_, githubFileName) };


    // githubFileType Field Functions 
    bool hasGithubFileType() const { return this->githubFileType_ != nullptr;};
    void deleteGithubFileType() { this->githubFileType_ = nullptr;};
    inline string githubFileType() const { DARABONBA_PTR_GET_DEFAULT(githubFileType_, "") };
    inline DescribeAccessKeyLeakDetailResponseBody& setGithubFileType(string githubFileType) { DARABONBA_PTR_SET_VALUE(githubFileType_, githubFileType) };


    // githubFileUpdateTime Field Functions 
    bool hasGithubFileUpdateTime() const { return this->githubFileUpdateTime_ != nullptr;};
    void deleteGithubFileUpdateTime() { this->githubFileUpdateTime_ = nullptr;};
    inline string githubFileUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(githubFileUpdateTime_, "") };
    inline DescribeAccessKeyLeakDetailResponseBody& setGithubFileUpdateTime(string githubFileUpdateTime) { DARABONBA_PTR_SET_VALUE(githubFileUpdateTime_, githubFileUpdateTime) };


    // githubFileUrl Field Functions 
    bool hasGithubFileUrl() const { return this->githubFileUrl_ != nullptr;};
    void deleteGithubFileUrl() { this->githubFileUrl_ = nullptr;};
    inline string githubFileUrl() const { DARABONBA_PTR_GET_DEFAULT(githubFileUrl_, "") };
    inline DescribeAccessKeyLeakDetailResponseBody& setGithubFileUrl(string githubFileUrl) { DARABONBA_PTR_SET_VALUE(githubFileUrl_, githubFileUrl) };


    // githubRepoName Field Functions 
    bool hasGithubRepoName() const { return this->githubRepoName_ != nullptr;};
    void deleteGithubRepoName() { this->githubRepoName_ = nullptr;};
    inline string githubRepoName() const { DARABONBA_PTR_GET_DEFAULT(githubRepoName_, "") };
    inline DescribeAccessKeyLeakDetailResponseBody& setGithubRepoName(string githubRepoName) { DARABONBA_PTR_SET_VALUE(githubRepoName_, githubRepoName) };


    // githubRepoUrl Field Functions 
    bool hasGithubRepoUrl() const { return this->githubRepoUrl_ != nullptr;};
    void deleteGithubRepoUrl() { this->githubRepoUrl_ = nullptr;};
    inline string githubRepoUrl() const { DARABONBA_PTR_GET_DEFAULT(githubRepoUrl_, "") };
    inline DescribeAccessKeyLeakDetailResponseBody& setGithubRepoUrl(string githubRepoUrl) { DARABONBA_PTR_SET_VALUE(githubRepoUrl_, githubRepoUrl) };


    // githubUser Field Functions 
    bool hasGithubUser() const { return this->githubUser_ != nullptr;};
    void deleteGithubUser() { this->githubUser_ = nullptr;};
    inline string githubUser() const { DARABONBA_PTR_GET_DEFAULT(githubUser_, "") };
    inline DescribeAccessKeyLeakDetailResponseBody& setGithubUser(string githubUser) { DARABONBA_PTR_SET_VALUE(githubUser_, githubUser) };


    // githubUserPicUrl Field Functions 
    bool hasGithubUserPicUrl() const { return this->githubUserPicUrl_ != nullptr;};
    void deleteGithubUserPicUrl() { this->githubUserPicUrl_ = nullptr;};
    inline string githubUserPicUrl() const { DARABONBA_PTR_GET_DEFAULT(githubUserPicUrl_, "") };
    inline DescribeAccessKeyLeakDetailResponseBody& setGithubUserPicUrl(string githubUserPicUrl) { DARABONBA_PTR_SET_VALUE(githubUserPicUrl_, githubUserPicUrl) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline DescribeAccessKeyLeakDetailResponseBody& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeAccessKeyLeakDetailResponseBody& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DescribeAccessKeyLeakDetailResponseBody& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAccessKeyLeakDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline DescribeAccessKeyLeakDetailResponseBody& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // tokenValid Field Functions 
    bool hasTokenValid() const { return this->tokenValid_ != nullptr;};
    void deleteTokenValid() { this->tokenValid_ = nullptr;};
    inline int32_t tokenValid() const { DARABONBA_PTR_GET_DEFAULT(tokenValid_, 0) };
    inline DescribeAccessKeyLeakDetailResponseBody& setTokenValid(int32_t tokenValid) { DARABONBA_PTR_SET_VALUE(tokenValid_, tokenValid) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeAccessKeyLeakDetailResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // whitelistStatus Field Functions 
    bool hasWhitelistStatus() const { return this->whitelistStatus_ != nullptr;};
    void deleteWhitelistStatus() { this->whitelistStatus_ = nullptr;};
    inline string whitelistStatus() const { DARABONBA_PTR_GET_DEFAULT(whitelistStatus_, "") };
    inline DescribeAccessKeyLeakDetailResponseBody& setWhitelistStatus(string whitelistStatus) { DARABONBA_PTR_SET_VALUE(whitelistStatus_, whitelistStatus) };


    // whitelistTime Field Functions 
    bool hasWhitelistTime() const { return this->whitelistTime_ != nullptr;};
    void deleteWhitelistTime() { this->whitelistTime_ = nullptr;};
    inline int64_t whitelistTime() const { DARABONBA_PTR_GET_DEFAULT(whitelistTime_, 0L) };
    inline DescribeAccessKeyLeakDetailResponseBody& setWhitelistTime(int64_t whitelistTime) { DARABONBA_PTR_SET_VALUE(whitelistTime_, whitelistTime) };


  protected:
    // The ID of the AccessKey pair that is leaked.
    std::shared_ptr<string> accesskeyId_ = nullptr;
    // The platform to which the asset belongs. The value is fixed as **Cloud platform**.
    std::shared_ptr<string> asset_ = nullptr;
    // The code snippet that is leaked.
    std::shared_ptr<string> code_ = nullptr;
    // The time when the AccessKey pair leak was handled.
    std::shared_ptr<string> dealTime_ = nullptr;
    // The solution to the AccessKey pair leak. Valid values:
    // 
    // *   **manual**: manually deleted
    // *   **disable**: manually disabled
    // *   **add-whitelist**: added to the whitelist
    // *   **pending**: unhandled
    std::shared_ptr<string> dealType_ = nullptr;
    // The name of the GitHub file.
    std::shared_ptr<string> githubFileName_ = nullptr;
    // The type of the GitHub file. Valid values:
    // 
    // *   Python
    // *   XML
    // *   GO
    // *   Javascript
    // *   INI
    // *   JSON
    // *   C++
    std::shared_ptr<string> githubFileType_ = nullptr;
    // The time when the GitHub file was updated.
    std::shared_ptr<string> githubFileUpdateTime_ = nullptr;
    // The URL of the GitHub file.
    std::shared_ptr<string> githubFileUrl_ = nullptr;
    // The name of the GitHub repository.
    std::shared_ptr<string> githubRepoName_ = nullptr;
    // The URL of the GitHub repository.
    std::shared_ptr<string> githubRepoUrl_ = nullptr;
    // The username of the GitHub user.
    std::shared_ptr<string> githubUser_ = nullptr;
    // The URL of the profile picture for the GitHub user.
    std::shared_ptr<string> githubUserPicUrl_ = nullptr;
    // The first time when the AccessKey pair leak was detected.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The last time when the AccessKey pair leak was detected.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The remarks of the AccessKey pair leak.
    std::shared_ptr<string> remark_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The platform on which the AccessKey pair leak is detected.
    std::shared_ptr<string> source_ = nullptr;
    // The validity of the key that is associated with the AccessKey pair. Valid values:
    // 
    // *   **0**: to be confirmed.
    // *   **1**: valid.
    // *   **2**: invalid.
    std::shared_ptr<int32_t> tokenValid_ = nullptr;
    // The type of the leak. The value is fixed as **AccessKey**.
    std::shared_ptr<string> type_ = nullptr;
    // Indicates whether the AccessKey pair leak is added to the whitelist. Valid values:
    // 
    // *   **no**: no
    // *   **yes**: yes
    std::shared_ptr<string> whitelistStatus_ = nullptr;
    // The time when the AccessKey pair was added to the whitelist. Unit: milliseconds.
    std::shared_ptr<int64_t> whitelistTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
