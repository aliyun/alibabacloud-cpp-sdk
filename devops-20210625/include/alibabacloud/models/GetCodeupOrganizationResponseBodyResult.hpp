// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCODEUPORGANIZATIONRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETCODEUPORGANIZATIONRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetCodeupOrganizationResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCodeupOrganizationResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(namespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
      DARABONBA_PTR_TO_JSON(path, path_);
      DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
      DARABONBA_PTR_TO_JSON(userRole, userRole_);
    };
    friend void from_json(const Darabonba::Json& j, GetCodeupOrganizationResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(namespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
      DARABONBA_PTR_FROM_JSON(path, path_);
      DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
      DARABONBA_PTR_FROM_JSON(userRole, userRole_);
    };
    GetCodeupOrganizationResponseBodyResult() = default ;
    GetCodeupOrganizationResponseBodyResult(const GetCodeupOrganizationResponseBodyResult &) = default ;
    GetCodeupOrganizationResponseBodyResult(GetCodeupOrganizationResponseBodyResult &&) = default ;
    GetCodeupOrganizationResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCodeupOrganizationResponseBodyResult() = default ;
    GetCodeupOrganizationResponseBodyResult& operator=(const GetCodeupOrganizationResponseBodyResult &) = default ;
    GetCodeupOrganizationResponseBodyResult& operator=(GetCodeupOrganizationResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createdAt_ == nullptr
        && return this->id_ == nullptr && return this->namespaceId_ == nullptr && return this->organizationId_ == nullptr && return this->path_ == nullptr && return this->updatedAt_ == nullptr
        && return this->userRole_ == nullptr; };
    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string createdAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline GetCodeupOrganizationResponseBodyResult& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetCodeupOrganizationResponseBodyResult& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline int64_t namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, 0L) };
    inline GetCodeupOrganizationResponseBodyResult& setNamespaceId(int64_t namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline GetCodeupOrganizationResponseBodyResult& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline GetCodeupOrganizationResponseBodyResult& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline string updatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
    inline GetCodeupOrganizationResponseBodyResult& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


    // userRole Field Functions 
    bool hasUserRole() const { return this->userRole_ != nullptr;};
    void deleteUserRole() { this->userRole_ = nullptr;};
    inline string userRole() const { DARABONBA_PTR_GET_DEFAULT(userRole_, "") };
    inline GetCodeupOrganizationResponseBodyResult& setUserRole(string userRole) { DARABONBA_PTR_SET_VALUE(userRole_, userRole) };


  protected:
    std::shared_ptr<string> createdAt_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<int64_t> namespaceId_ = nullptr;
    std::shared_ptr<string> organizationId_ = nullptr;
    std::shared_ptr<string> path_ = nullptr;
    std::shared_ptr<string> updatedAt_ = nullptr;
    std::shared_ptr<string> userRole_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
