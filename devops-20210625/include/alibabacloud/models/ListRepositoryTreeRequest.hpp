// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREPOSITORYTREEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTREPOSITORYTREEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListRepositoryTreeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRepositoryTreeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(accessToken, accessToken_);
      DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
      DARABONBA_PTR_TO_JSON(path, path_);
      DARABONBA_PTR_TO_JSON(refName, refName_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListRepositoryTreeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(accessToken, accessToken_);
      DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
      DARABONBA_PTR_FROM_JSON(path, path_);
      DARABONBA_PTR_FROM_JSON(refName, refName_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ListRepositoryTreeRequest() = default ;
    ListRepositoryTreeRequest(const ListRepositoryTreeRequest &) = default ;
    ListRepositoryTreeRequest(ListRepositoryTreeRequest &&) = default ;
    ListRepositoryTreeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRepositoryTreeRequest() = default ;
    ListRepositoryTreeRequest& operator=(const ListRepositoryTreeRequest &) = default ;
    ListRepositoryTreeRequest& operator=(ListRepositoryTreeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessToken_ == nullptr
        && return this->organizationId_ == nullptr && return this->path_ == nullptr && return this->refName_ == nullptr && return this->type_ == nullptr; };
    // accessToken Field Functions 
    bool hasAccessToken() const { return this->accessToken_ != nullptr;};
    void deleteAccessToken() { this->accessToken_ = nullptr;};
    inline string accessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
    inline ListRepositoryTreeRequest& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline ListRepositoryTreeRequest& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline ListRepositoryTreeRequest& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // refName Field Functions 
    bool hasRefName() const { return this->refName_ != nullptr;};
    void deleteRefName() { this->refName_ = nullptr;};
    inline string refName() const { DARABONBA_PTR_GET_DEFAULT(refName_, "") };
    inline ListRepositoryTreeRequest& setRefName(string refName) { DARABONBA_PTR_SET_VALUE(refName_, refName) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListRepositoryTreeRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> accessToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> organizationId_ = nullptr;
    std::shared_ptr<string> path_ = nullptr;
    std::shared_ptr<string> refName_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
