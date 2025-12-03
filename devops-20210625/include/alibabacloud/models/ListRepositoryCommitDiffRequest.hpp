// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREPOSITORYCOMMITDIFFREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTREPOSITORYCOMMITDIFFREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListRepositoryCommitDiffRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRepositoryCommitDiffRequest& obj) { 
      DARABONBA_PTR_TO_JSON(accessToken, accessToken_);
      DARABONBA_PTR_TO_JSON(contextLine, contextLine_);
      DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRepositoryCommitDiffRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(accessToken, accessToken_);
      DARABONBA_PTR_FROM_JSON(contextLine, contextLine_);
      DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
    };
    ListRepositoryCommitDiffRequest() = default ;
    ListRepositoryCommitDiffRequest(const ListRepositoryCommitDiffRequest &) = default ;
    ListRepositoryCommitDiffRequest(ListRepositoryCommitDiffRequest &&) = default ;
    ListRepositoryCommitDiffRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRepositoryCommitDiffRequest() = default ;
    ListRepositoryCommitDiffRequest& operator=(const ListRepositoryCommitDiffRequest &) = default ;
    ListRepositoryCommitDiffRequest& operator=(ListRepositoryCommitDiffRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessToken_ == nullptr
        && return this->contextLine_ == nullptr && return this->organizationId_ == nullptr; };
    // accessToken Field Functions 
    bool hasAccessToken() const { return this->accessToken_ != nullptr;};
    void deleteAccessToken() { this->accessToken_ = nullptr;};
    inline string accessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
    inline ListRepositoryCommitDiffRequest& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


    // contextLine Field Functions 
    bool hasContextLine() const { return this->contextLine_ != nullptr;};
    void deleteContextLine() { this->contextLine_ = nullptr;};
    inline int32_t contextLine() const { DARABONBA_PTR_GET_DEFAULT(contextLine_, 0) };
    inline ListRepositoryCommitDiffRequest& setContextLine(int32_t contextLine) { DARABONBA_PTR_SET_VALUE(contextLine_, contextLine) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline ListRepositoryCommitDiffRequest& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


  protected:
    // accessToken
    std::shared_ptr<string> accessToken_ = nullptr;
    std::shared_ptr<int32_t> contextLine_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> organizationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
