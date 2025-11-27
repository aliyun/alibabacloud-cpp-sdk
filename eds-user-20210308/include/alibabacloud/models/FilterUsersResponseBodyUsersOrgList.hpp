// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FILTERUSERSRESPONSEBODYUSERSORGLIST_HPP_
#define ALIBABACLOUD_MODELS_FILTERUSERSRESPONSEBODYUSERSORGLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class FilterUsersResponseBodyUsersOrgList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FilterUsersResponseBodyUsersOrgList& obj) { 
      DARABONBA_PTR_TO_JSON(OrgId, orgId_);
      DARABONBA_PTR_TO_JSON(OrgName, orgName_);
      DARABONBA_PTR_TO_JSON(OrgNamePath, orgNamePath_);
    };
    friend void from_json(const Darabonba::Json& j, FilterUsersResponseBodyUsersOrgList& obj) { 
      DARABONBA_PTR_FROM_JSON(OrgId, orgId_);
      DARABONBA_PTR_FROM_JSON(OrgName, orgName_);
      DARABONBA_PTR_FROM_JSON(OrgNamePath, orgNamePath_);
    };
    FilterUsersResponseBodyUsersOrgList() = default ;
    FilterUsersResponseBodyUsersOrgList(const FilterUsersResponseBodyUsersOrgList &) = default ;
    FilterUsersResponseBodyUsersOrgList(FilterUsersResponseBodyUsersOrgList &&) = default ;
    FilterUsersResponseBodyUsersOrgList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FilterUsersResponseBodyUsersOrgList() = default ;
    FilterUsersResponseBodyUsersOrgList& operator=(const FilterUsersResponseBodyUsersOrgList &) = default ;
    FilterUsersResponseBodyUsersOrgList& operator=(FilterUsersResponseBodyUsersOrgList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->orgId_ == nullptr
        && return this->orgName_ == nullptr && return this->orgNamePath_ == nullptr; };
    // orgId Field Functions 
    bool hasOrgId() const { return this->orgId_ != nullptr;};
    void deleteOrgId() { this->orgId_ = nullptr;};
    inline string orgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, "") };
    inline FilterUsersResponseBodyUsersOrgList& setOrgId(string orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


    // orgName Field Functions 
    bool hasOrgName() const { return this->orgName_ != nullptr;};
    void deleteOrgName() { this->orgName_ = nullptr;};
    inline string orgName() const { DARABONBA_PTR_GET_DEFAULT(orgName_, "") };
    inline FilterUsersResponseBodyUsersOrgList& setOrgName(string orgName) { DARABONBA_PTR_SET_VALUE(orgName_, orgName) };


    // orgNamePath Field Functions 
    bool hasOrgNamePath() const { return this->orgNamePath_ != nullptr;};
    void deleteOrgNamePath() { this->orgNamePath_ = nullptr;};
    inline string orgNamePath() const { DARABONBA_PTR_GET_DEFAULT(orgNamePath_, "") };
    inline FilterUsersResponseBodyUsersOrgList& setOrgNamePath(string orgNamePath) { DARABONBA_PTR_SET_VALUE(orgNamePath_, orgNamePath) };


  protected:
    // The organization ID.
    std::shared_ptr<string> orgId_ = nullptr;
    // The organization name.
    std::shared_ptr<string> orgName_ = nullptr;
    // The organization name path.
    std::shared_ptr<string> orgNamePath_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
