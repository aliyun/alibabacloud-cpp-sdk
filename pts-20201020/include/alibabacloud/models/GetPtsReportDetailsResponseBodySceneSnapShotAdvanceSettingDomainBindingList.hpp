// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPTSREPORTDETAILSRESPONSEBODYSCENESNAPSHOTADVANCESETTINGDOMAINBINDINGLIST_HPP_
#define ALIBABACLOUD_MODELS_GETPTSREPORTDETAILSRESPONSEBODYSCENESNAPSHOTADVANCESETTINGDOMAINBINDINGLIST_HPP_
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
  class GetPtsReportDetailsResponseBodySceneSnapShotAdvanceSettingDomainBindingList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPtsReportDetailsResponseBodySceneSnapShotAdvanceSettingDomainBindingList& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Ips, ips_);
    };
    friend void from_json(const Darabonba::Json& j, GetPtsReportDetailsResponseBodySceneSnapShotAdvanceSettingDomainBindingList& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Ips, ips_);
    };
    GetPtsReportDetailsResponseBodySceneSnapShotAdvanceSettingDomainBindingList() = default ;
    GetPtsReportDetailsResponseBodySceneSnapShotAdvanceSettingDomainBindingList(const GetPtsReportDetailsResponseBodySceneSnapShotAdvanceSettingDomainBindingList &) = default ;
    GetPtsReportDetailsResponseBodySceneSnapShotAdvanceSettingDomainBindingList(GetPtsReportDetailsResponseBodySceneSnapShotAdvanceSettingDomainBindingList &&) = default ;
    GetPtsReportDetailsResponseBodySceneSnapShotAdvanceSettingDomainBindingList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPtsReportDetailsResponseBodySceneSnapShotAdvanceSettingDomainBindingList() = default ;
    GetPtsReportDetailsResponseBodySceneSnapShotAdvanceSettingDomainBindingList& operator=(const GetPtsReportDetailsResponseBodySceneSnapShotAdvanceSettingDomainBindingList &) = default ;
    GetPtsReportDetailsResponseBodySceneSnapShotAdvanceSettingDomainBindingList& operator=(GetPtsReportDetailsResponseBodySceneSnapShotAdvanceSettingDomainBindingList &&) = default ;
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
    inline GetPtsReportDetailsResponseBodySceneSnapShotAdvanceSettingDomainBindingList& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // ips Field Functions 
    bool hasIps() const { return this->ips_ != nullptr;};
    void deleteIps() { this->ips_ = nullptr;};
    inline const vector<string> & ips() const { DARABONBA_PTR_GET_CONST(ips_, vector<string>) };
    inline vector<string> ips() { DARABONBA_PTR_GET(ips_, vector<string>) };
    inline GetPtsReportDetailsResponseBodySceneSnapShotAdvanceSettingDomainBindingList& setIps(const vector<string> & ips) { DARABONBA_PTR_SET_VALUE(ips_, ips) };
    inline GetPtsReportDetailsResponseBodySceneSnapShotAdvanceSettingDomainBindingList& setIps(vector<string> && ips) { DARABONBA_PTR_SET_RVALUE(ips_, ips) };


  protected:
    // The domain name.
    std::shared_ptr<string> domain_ = nullptr;
    // The IP addresses bound to the domain name.
    std::shared_ptr<vector<string>> ips_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
