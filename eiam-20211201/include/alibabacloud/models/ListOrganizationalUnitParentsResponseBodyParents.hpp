// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTORGANIZATIONALUNITPARENTSRESPONSEBODYPARENTS_HPP_
#define ALIBABACLOUD_MODELS_LISTORGANIZATIONALUNITPARENTSRESPONSEBODYPARENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListOrganizationalUnitParentsResponseBodyParents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOrganizationalUnitParentsResponseBodyParents& obj) { 
      DARABONBA_PTR_TO_JSON(OrganizationalUnitId, organizationalUnitId_);
      DARABONBA_PTR_TO_JSON(ParentId, parentId_);
    };
    friend void from_json(const Darabonba::Json& j, ListOrganizationalUnitParentsResponseBodyParents& obj) { 
      DARABONBA_PTR_FROM_JSON(OrganizationalUnitId, organizationalUnitId_);
      DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
    };
    ListOrganizationalUnitParentsResponseBodyParents() = default ;
    ListOrganizationalUnitParentsResponseBodyParents(const ListOrganizationalUnitParentsResponseBodyParents &) = default ;
    ListOrganizationalUnitParentsResponseBodyParents(ListOrganizationalUnitParentsResponseBodyParents &&) = default ;
    ListOrganizationalUnitParentsResponseBodyParents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOrganizationalUnitParentsResponseBodyParents() = default ;
    ListOrganizationalUnitParentsResponseBodyParents& operator=(const ListOrganizationalUnitParentsResponseBodyParents &) = default ;
    ListOrganizationalUnitParentsResponseBodyParents& operator=(ListOrganizationalUnitParentsResponseBodyParents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->organizationalUnitId_ == nullptr
        && return this->parentId_ == nullptr; };
    // organizationalUnitId Field Functions 
    bool hasOrganizationalUnitId() const { return this->organizationalUnitId_ != nullptr;};
    void deleteOrganizationalUnitId() { this->organizationalUnitId_ = nullptr;};
    inline string organizationalUnitId() const { DARABONBA_PTR_GET_DEFAULT(organizationalUnitId_, "") };
    inline ListOrganizationalUnitParentsResponseBodyParents& setOrganizationalUnitId(string organizationalUnitId) { DARABONBA_PTR_SET_VALUE(organizationalUnitId_, organizationalUnitId) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline string parentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
    inline ListOrganizationalUnitParentsResponseBodyParents& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


  protected:
    // The organization ID.
    std::shared_ptr<string> organizationalUnitId_ = nullptr;
    // The parent organization ID.
    std::shared_ptr<string> parentId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
