// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTORGANIZATIONMEMBERSRESPONSEBODYMEMBERSIDENTITIES_HPP_
#define ALIBABACLOUD_MODELS_LISTORGANIZATIONMEMBERSRESPONSEBODYMEMBERSIDENTITIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListOrganizationMembersResponseBodyMembersIdentities : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOrganizationMembersResponseBodyMembersIdentities& obj) { 
      DARABONBA_PTR_TO_JSON(externUid, externUid_);
      DARABONBA_PTR_TO_JSON(provider, provider_);
    };
    friend void from_json(const Darabonba::Json& j, ListOrganizationMembersResponseBodyMembersIdentities& obj) { 
      DARABONBA_PTR_FROM_JSON(externUid, externUid_);
      DARABONBA_PTR_FROM_JSON(provider, provider_);
    };
    ListOrganizationMembersResponseBodyMembersIdentities() = default ;
    ListOrganizationMembersResponseBodyMembersIdentities(const ListOrganizationMembersResponseBodyMembersIdentities &) = default ;
    ListOrganizationMembersResponseBodyMembersIdentities(ListOrganizationMembersResponseBodyMembersIdentities &&) = default ;
    ListOrganizationMembersResponseBodyMembersIdentities(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOrganizationMembersResponseBodyMembersIdentities() = default ;
    ListOrganizationMembersResponseBodyMembersIdentities& operator=(const ListOrganizationMembersResponseBodyMembersIdentities &) = default ;
    ListOrganizationMembersResponseBodyMembersIdentities& operator=(ListOrganizationMembersResponseBodyMembersIdentities &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->externUid_ == nullptr
        && return this->provider_ == nullptr; };
    // externUid Field Functions 
    bool hasExternUid() const { return this->externUid_ != nullptr;};
    void deleteExternUid() { this->externUid_ = nullptr;};
    inline string externUid() const { DARABONBA_PTR_GET_DEFAULT(externUid_, "") };
    inline ListOrganizationMembersResponseBodyMembersIdentities& setExternUid(string externUid) { DARABONBA_PTR_SET_VALUE(externUid_, externUid) };


    // provider Field Functions 
    bool hasProvider() const { return this->provider_ != nullptr;};
    void deleteProvider() { this->provider_ = nullptr;};
    inline string provider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
    inline ListOrganizationMembersResponseBodyMembersIdentities& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


  protected:
    std::shared_ptr<string> externUid_ = nullptr;
    std::shared_ptr<string> provider_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
