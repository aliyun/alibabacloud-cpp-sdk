// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTORGANIZATIONSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTORGANIZATIONSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListOrganizationsResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOrganizationsResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(accessLevel, accessLevel_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(namespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(organizationAlias, organizationAlias_);
      DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
      DARABONBA_PTR_TO_JSON(organizationName, organizationName_);
      DARABONBA_PTR_TO_JSON(organizationRole, organizationRole_);
    };
    friend void from_json(const Darabonba::Json& j, ListOrganizationsResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(accessLevel, accessLevel_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(namespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(organizationAlias, organizationAlias_);
      DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
      DARABONBA_PTR_FROM_JSON(organizationName, organizationName_);
      DARABONBA_PTR_FROM_JSON(organizationRole, organizationRole_);
    };
    ListOrganizationsResponseBodyResult() = default ;
    ListOrganizationsResponseBodyResult(const ListOrganizationsResponseBodyResult &) = default ;
    ListOrganizationsResponseBodyResult(ListOrganizationsResponseBodyResult &&) = default ;
    ListOrganizationsResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOrganizationsResponseBodyResult() = default ;
    ListOrganizationsResponseBodyResult& operator=(const ListOrganizationsResponseBodyResult &) = default ;
    ListOrganizationsResponseBodyResult& operator=(ListOrganizationsResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessLevel_ == nullptr
        && return this->id_ == nullptr && return this->namespaceId_ == nullptr && return this->organizationAlias_ == nullptr && return this->organizationId_ == nullptr && return this->organizationName_ == nullptr
        && return this->organizationRole_ == nullptr; };
    // accessLevel Field Functions 
    bool hasAccessLevel() const { return this->accessLevel_ != nullptr;};
    void deleteAccessLevel() { this->accessLevel_ = nullptr;};
    inline int32_t accessLevel() const { DARABONBA_PTR_GET_DEFAULT(accessLevel_, 0) };
    inline ListOrganizationsResponseBodyResult& setAccessLevel(int32_t accessLevel) { DARABONBA_PTR_SET_VALUE(accessLevel_, accessLevel) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListOrganizationsResponseBodyResult& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline ListOrganizationsResponseBodyResult& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // organizationAlias Field Functions 
    bool hasOrganizationAlias() const { return this->organizationAlias_ != nullptr;};
    void deleteOrganizationAlias() { this->organizationAlias_ = nullptr;};
    inline string organizationAlias() const { DARABONBA_PTR_GET_DEFAULT(organizationAlias_, "") };
    inline ListOrganizationsResponseBodyResult& setOrganizationAlias(string organizationAlias) { DARABONBA_PTR_SET_VALUE(organizationAlias_, organizationAlias) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline ListOrganizationsResponseBodyResult& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


    // organizationName Field Functions 
    bool hasOrganizationName() const { return this->organizationName_ != nullptr;};
    void deleteOrganizationName() { this->organizationName_ = nullptr;};
    inline string organizationName() const { DARABONBA_PTR_GET_DEFAULT(organizationName_, "") };
    inline ListOrganizationsResponseBodyResult& setOrganizationName(string organizationName) { DARABONBA_PTR_SET_VALUE(organizationName_, organizationName) };


    // organizationRole Field Functions 
    bool hasOrganizationRole() const { return this->organizationRole_ != nullptr;};
    void deleteOrganizationRole() { this->organizationRole_ = nullptr;};
    inline string organizationRole() const { DARABONBA_PTR_GET_DEFAULT(organizationRole_, "") };
    inline ListOrganizationsResponseBodyResult& setOrganizationRole(string organizationRole) { DARABONBA_PTR_SET_VALUE(organizationRole_, organizationRole) };


  protected:
    std::shared_ptr<int32_t> accessLevel_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> namespaceId_ = nullptr;
    std::shared_ptr<string> organizationAlias_ = nullptr;
    std::shared_ptr<string> organizationId_ = nullptr;
    std::shared_ptr<string> organizationName_ = nullptr;
    std::shared_ptr<string> organizationRole_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
