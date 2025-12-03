// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRANSFERREPOSITORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRANSFERREPOSITORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class TransferRepositoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TransferRepositoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(accessToken, accessToken_);
      DARABONBA_PTR_TO_JSON(groupId, groupId_);
      DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
      DARABONBA_PTR_TO_JSON(repositoryId, repositoryId_);
    };
    friend void from_json(const Darabonba::Json& j, TransferRepositoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(accessToken, accessToken_);
      DARABONBA_PTR_FROM_JSON(groupId, groupId_);
      DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
      DARABONBA_PTR_FROM_JSON(repositoryId, repositoryId_);
    };
    TransferRepositoryRequest() = default ;
    TransferRepositoryRequest(const TransferRepositoryRequest &) = default ;
    TransferRepositoryRequest(TransferRepositoryRequest &&) = default ;
    TransferRepositoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TransferRepositoryRequest() = default ;
    TransferRepositoryRequest& operator=(const TransferRepositoryRequest &) = default ;
    TransferRepositoryRequest& operator=(TransferRepositoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessToken_ == nullptr
        && return this->groupId_ == nullptr && return this->organizationId_ == nullptr && return this->repositoryId_ == nullptr; };
    // accessToken Field Functions 
    bool hasAccessToken() const { return this->accessToken_ != nullptr;};
    void deleteAccessToken() { this->accessToken_ = nullptr;};
    inline string accessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
    inline TransferRepositoryRequest& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline TransferRepositoryRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline TransferRepositoryRequest& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


    // repositoryId Field Functions 
    bool hasRepositoryId() const { return this->repositoryId_ != nullptr;};
    void deleteRepositoryId() { this->repositoryId_ = nullptr;};
    inline string repositoryId() const { DARABONBA_PTR_GET_DEFAULT(repositoryId_, "") };
    inline TransferRepositoryRequest& setRepositoryId(string repositoryId) { DARABONBA_PTR_SET_VALUE(repositoryId_, repositoryId) };


  protected:
    std::shared_ptr<string> accessToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> groupId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> organizationId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> repositoryId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
