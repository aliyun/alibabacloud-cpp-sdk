// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILELASTCOMMITREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETFILELASTCOMMITREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetFileLastCommitRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFileLastCommitRequest& obj) { 
      DARABONBA_PTR_TO_JSON(accessToken, accessToken_);
      DARABONBA_PTR_TO_JSON(filePath, filePath_);
      DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
      DARABONBA_PTR_TO_JSON(sha, sha_);
      DARABONBA_PTR_TO_JSON(showSignature, showSignature_);
    };
    friend void from_json(const Darabonba::Json& j, GetFileLastCommitRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(accessToken, accessToken_);
      DARABONBA_PTR_FROM_JSON(filePath, filePath_);
      DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
      DARABONBA_PTR_FROM_JSON(sha, sha_);
      DARABONBA_PTR_FROM_JSON(showSignature, showSignature_);
    };
    GetFileLastCommitRequest() = default ;
    GetFileLastCommitRequest(const GetFileLastCommitRequest &) = default ;
    GetFileLastCommitRequest(GetFileLastCommitRequest &&) = default ;
    GetFileLastCommitRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFileLastCommitRequest() = default ;
    GetFileLastCommitRequest& operator=(const GetFileLastCommitRequest &) = default ;
    GetFileLastCommitRequest& operator=(GetFileLastCommitRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessToken_ == nullptr
        && return this->filePath_ == nullptr && return this->organizationId_ == nullptr && return this->sha_ == nullptr && return this->showSignature_ == nullptr; };
    // accessToken Field Functions 
    bool hasAccessToken() const { return this->accessToken_ != nullptr;};
    void deleteAccessToken() { this->accessToken_ = nullptr;};
    inline string accessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
    inline GetFileLastCommitRequest& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


    // filePath Field Functions 
    bool hasFilePath() const { return this->filePath_ != nullptr;};
    void deleteFilePath() { this->filePath_ = nullptr;};
    inline string filePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
    inline GetFileLastCommitRequest& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline GetFileLastCommitRequest& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


    // sha Field Functions 
    bool hasSha() const { return this->sha_ != nullptr;};
    void deleteSha() { this->sha_ = nullptr;};
    inline string sha() const { DARABONBA_PTR_GET_DEFAULT(sha_, "") };
    inline GetFileLastCommitRequest& setSha(string sha) { DARABONBA_PTR_SET_VALUE(sha_, sha) };


    // showSignature Field Functions 
    bool hasShowSignature() const { return this->showSignature_ != nullptr;};
    void deleteShowSignature() { this->showSignature_ = nullptr;};
    inline bool showSignature() const { DARABONBA_PTR_GET_DEFAULT(showSignature_, false) };
    inline GetFileLastCommitRequest& setShowSignature(bool showSignature) { DARABONBA_PTR_SET_VALUE(showSignature_, showSignature) };


  protected:
    std::shared_ptr<string> accessToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> filePath_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> organizationId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sha_ = nullptr;
    std::shared_ptr<bool> showSignature_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
