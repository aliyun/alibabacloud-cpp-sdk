// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPTSSCENERESPONSEBODYSCENEADVANCESETTINGDOMAINBINDINGLIST_HPP_
#define ALIBABACLOUD_MODELS_GETPTSSCENERESPONSEBODYSCENEADVANCESETTINGDOMAINBINDINGLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class GetPtsSceneResponseBodySceneAdvanceSettingDomainBindingList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPtsSceneResponseBodySceneAdvanceSettingDomainBindingList& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Ips, ips_);
    };
    friend void from_json(const Darabonba::Json& j, GetPtsSceneResponseBodySceneAdvanceSettingDomainBindingList& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Ips, ips_);
    };
    GetPtsSceneResponseBodySceneAdvanceSettingDomainBindingList() = default ;
    GetPtsSceneResponseBodySceneAdvanceSettingDomainBindingList(const GetPtsSceneResponseBodySceneAdvanceSettingDomainBindingList &) = default ;
    GetPtsSceneResponseBodySceneAdvanceSettingDomainBindingList(GetPtsSceneResponseBodySceneAdvanceSettingDomainBindingList &&) = default ;
    GetPtsSceneResponseBodySceneAdvanceSettingDomainBindingList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPtsSceneResponseBodySceneAdvanceSettingDomainBindingList() = default ;
    GetPtsSceneResponseBodySceneAdvanceSettingDomainBindingList& operator=(const GetPtsSceneResponseBodySceneAdvanceSettingDomainBindingList &) = default ;
    GetPtsSceneResponseBodySceneAdvanceSettingDomainBindingList& operator=(GetPtsSceneResponseBodySceneAdvanceSettingDomainBindingList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domain_ == nullptr
        && return this->ips_ == nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline GetPtsSceneResponseBodySceneAdvanceSettingDomainBindingList& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // ips Field Functions 
    bool hasIps() const { return this->ips_ != nullptr;};
    void deleteIps() { this->ips_ = nullptr;};
    inline const vector<string> & ips() const { DARABONBA_PTR_GET_CONST(ips_, vector<string>) };
    inline vector<string> ips() { DARABONBA_PTR_GET(ips_, vector<string>) };
    inline GetPtsSceneResponseBodySceneAdvanceSettingDomainBindingList& setIps(const vector<string> & ips) { DARABONBA_PTR_SET_VALUE(ips_, ips) };
    inline GetPtsSceneResponseBodySceneAdvanceSettingDomainBindingList& setIps(vector<string> && ips) { DARABONBA_PTR_SET_RVALUE(ips_, ips) };


  protected:
    // The domain name.
    std::shared_ptr<string> domain_ = nullptr;
    // The IPs bound to the domain name.
    std::shared_ptr<vector<string>> ips_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
