// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOINEDORGANIZATIONSRESPONSEBODYORGANIZATIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTJOINEDORGANIZATIONSRESPONSEBODYORGANIZATIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListJoinedOrganizationsResponseBodyOrganizations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJoinedOrganizationsResponseBodyOrganizations& obj) { 
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(isOrgAdmin, isOrgAdmin_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ListJoinedOrganizationsResponseBodyOrganizations& obj) { 
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(isOrgAdmin, isOrgAdmin_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    ListJoinedOrganizationsResponseBodyOrganizations() = default ;
    ListJoinedOrganizationsResponseBodyOrganizations(const ListJoinedOrganizationsResponseBodyOrganizations &) = default ;
    ListJoinedOrganizationsResponseBodyOrganizations(ListJoinedOrganizationsResponseBodyOrganizations &&) = default ;
    ListJoinedOrganizationsResponseBodyOrganizations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJoinedOrganizationsResponseBodyOrganizations() = default ;
    ListJoinedOrganizationsResponseBodyOrganizations& operator=(const ListJoinedOrganizationsResponseBodyOrganizations &) = default ;
    ListJoinedOrganizationsResponseBodyOrganizations& operator=(ListJoinedOrganizationsResponseBodyOrganizations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->isOrgAdmin_ == nullptr && return this->name_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListJoinedOrganizationsResponseBodyOrganizations& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // isOrgAdmin Field Functions 
    bool hasIsOrgAdmin() const { return this->isOrgAdmin_ != nullptr;};
    void deleteIsOrgAdmin() { this->isOrgAdmin_ = nullptr;};
    inline bool isOrgAdmin() const { DARABONBA_PTR_GET_DEFAULT(isOrgAdmin_, false) };
    inline ListJoinedOrganizationsResponseBodyOrganizations& setIsOrgAdmin(bool isOrgAdmin) { DARABONBA_PTR_SET_VALUE(isOrgAdmin_, isOrgAdmin) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListJoinedOrganizationsResponseBodyOrganizations& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<bool> isOrgAdmin_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
