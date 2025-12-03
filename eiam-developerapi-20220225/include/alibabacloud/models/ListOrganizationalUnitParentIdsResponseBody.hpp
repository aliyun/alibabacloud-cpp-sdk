// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTORGANIZATIONALUNITPARENTIDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTORGANIZATIONALUNITPARENTIDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EiamDeveloperapi20220225
{
namespace Models
{
  class ListOrganizationalUnitParentIdsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOrganizationalUnitParentIdsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(parentIds, parentIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListOrganizationalUnitParentIdsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(parentIds, parentIds_);
    };
    ListOrganizationalUnitParentIdsResponseBody() = default ;
    ListOrganizationalUnitParentIdsResponseBody(const ListOrganizationalUnitParentIdsResponseBody &) = default ;
    ListOrganizationalUnitParentIdsResponseBody(ListOrganizationalUnitParentIdsResponseBody &&) = default ;
    ListOrganizationalUnitParentIdsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOrganizationalUnitParentIdsResponseBody() = default ;
    ListOrganizationalUnitParentIdsResponseBody& operator=(const ListOrganizationalUnitParentIdsResponseBody &) = default ;
    ListOrganizationalUnitParentIdsResponseBody& operator=(ListOrganizationalUnitParentIdsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->parentIds_ == nullptr; };
    // parentIds Field Functions 
    bool hasParentIds() const { return this->parentIds_ != nullptr;};
    void deleteParentIds() { this->parentIds_ = nullptr;};
    inline const vector<string> & parentIds() const { DARABONBA_PTR_GET_CONST(parentIds_, vector<string>) };
    inline vector<string> parentIds() { DARABONBA_PTR_GET(parentIds_, vector<string>) };
    inline ListOrganizationalUnitParentIdsResponseBody& setParentIds(const vector<string> & parentIds) { DARABONBA_PTR_SET_VALUE(parentIds_, parentIds) };
    inline ListOrganizationalUnitParentIdsResponseBody& setParentIds(vector<string> && parentIds) { DARABONBA_PTR_SET_RVALUE(parentIds_, parentIds) };


  protected:
    // The IDs of the parent organizational units. The IDs of the organizational unit are ordered based on their levels from high to low. Only the IDs of the organizational units within the authorization scope are displayed.
    std::shared_ptr<vector<string>> parentIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
