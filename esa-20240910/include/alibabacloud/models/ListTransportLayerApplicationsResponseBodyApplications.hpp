// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSPORTLAYERAPPLICATIONSRESPONSEBODYAPPLICATIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSPORTLAYERAPPLICATIONSRESPONSEBODYAPPLICATIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTransportLayerApplicationsResponseBodyApplicationsRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListTransportLayerApplicationsResponseBodyApplications : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransportLayerApplicationsResponseBodyApplications& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Cname, cname_);
      DARABONBA_PTR_TO_JSON(CrossBorderOptimization, crossBorderOptimization_);
      DARABONBA_PTR_TO_JSON(IpAccessRule, ipAccessRule_);
      DARABONBA_PTR_TO_JSON(Ipv6, ipv6_);
      DARABONBA_PTR_TO_JSON(RecordName, recordName_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
      DARABONBA_PTR_TO_JSON(RulesCount, rulesCount_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListTransportLayerApplicationsResponseBodyApplications& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Cname, cname_);
      DARABONBA_PTR_FROM_JSON(CrossBorderOptimization, crossBorderOptimization_);
      DARABONBA_PTR_FROM_JSON(IpAccessRule, ipAccessRule_);
      DARABONBA_PTR_FROM_JSON(Ipv6, ipv6_);
      DARABONBA_PTR_FROM_JSON(RecordName, recordName_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
      DARABONBA_PTR_FROM_JSON(RulesCount, rulesCount_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListTransportLayerApplicationsResponseBodyApplications() = default ;
    ListTransportLayerApplicationsResponseBodyApplications(const ListTransportLayerApplicationsResponseBodyApplications &) = default ;
    ListTransportLayerApplicationsResponseBodyApplications(ListTransportLayerApplicationsResponseBodyApplications &&) = default ;
    ListTransportLayerApplicationsResponseBodyApplications(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransportLayerApplicationsResponseBodyApplications() = default ;
    ListTransportLayerApplicationsResponseBodyApplications& operator=(const ListTransportLayerApplicationsResponseBodyApplications &) = default ;
    ListTransportLayerApplicationsResponseBodyApplications& operator=(ListTransportLayerApplicationsResponseBodyApplications &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicationId_ != nullptr
        && this->cname_ != nullptr && this->crossBorderOptimization_ != nullptr && this->ipAccessRule_ != nullptr && this->ipv6_ != nullptr && this->recordName_ != nullptr
        && this->rules_ != nullptr && this->rulesCount_ != nullptr && this->siteId_ != nullptr && this->status_ != nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline int64_t applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, 0L) };
    inline ListTransportLayerApplicationsResponseBodyApplications& setApplicationId(int64_t applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // cname Field Functions 
    bool hasCname() const { return this->cname_ != nullptr;};
    void deleteCname() { this->cname_ = nullptr;};
    inline string cname() const { DARABONBA_PTR_GET_DEFAULT(cname_, "") };
    inline ListTransportLayerApplicationsResponseBodyApplications& setCname(string cname) { DARABONBA_PTR_SET_VALUE(cname_, cname) };


    // crossBorderOptimization Field Functions 
    bool hasCrossBorderOptimization() const { return this->crossBorderOptimization_ != nullptr;};
    void deleteCrossBorderOptimization() { this->crossBorderOptimization_ = nullptr;};
    inline string crossBorderOptimization() const { DARABONBA_PTR_GET_DEFAULT(crossBorderOptimization_, "") };
    inline ListTransportLayerApplicationsResponseBodyApplications& setCrossBorderOptimization(string crossBorderOptimization) { DARABONBA_PTR_SET_VALUE(crossBorderOptimization_, crossBorderOptimization) };


    // ipAccessRule Field Functions 
    bool hasIpAccessRule() const { return this->ipAccessRule_ != nullptr;};
    void deleteIpAccessRule() { this->ipAccessRule_ = nullptr;};
    inline string ipAccessRule() const { DARABONBA_PTR_GET_DEFAULT(ipAccessRule_, "") };
    inline ListTransportLayerApplicationsResponseBodyApplications& setIpAccessRule(string ipAccessRule) { DARABONBA_PTR_SET_VALUE(ipAccessRule_, ipAccessRule) };


    // ipv6 Field Functions 
    bool hasIpv6() const { return this->ipv6_ != nullptr;};
    void deleteIpv6() { this->ipv6_ = nullptr;};
    inline string ipv6() const { DARABONBA_PTR_GET_DEFAULT(ipv6_, "") };
    inline ListTransportLayerApplicationsResponseBodyApplications& setIpv6(string ipv6) { DARABONBA_PTR_SET_VALUE(ipv6_, ipv6) };


    // recordName Field Functions 
    bool hasRecordName() const { return this->recordName_ != nullptr;};
    void deleteRecordName() { this->recordName_ = nullptr;};
    inline string recordName() const { DARABONBA_PTR_GET_DEFAULT(recordName_, "") };
    inline ListTransportLayerApplicationsResponseBodyApplications& setRecordName(string recordName) { DARABONBA_PTR_SET_VALUE(recordName_, recordName) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<Models::ListTransportLayerApplicationsResponseBodyApplicationsRules> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Models::ListTransportLayerApplicationsResponseBodyApplicationsRules>) };
    inline vector<Models::ListTransportLayerApplicationsResponseBodyApplicationsRules> rules() { DARABONBA_PTR_GET(rules_, vector<Models::ListTransportLayerApplicationsResponseBodyApplicationsRules>) };
    inline ListTransportLayerApplicationsResponseBodyApplications& setRules(const vector<Models::ListTransportLayerApplicationsResponseBodyApplicationsRules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline ListTransportLayerApplicationsResponseBodyApplications& setRules(vector<Models::ListTransportLayerApplicationsResponseBodyApplicationsRules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    // rulesCount Field Functions 
    bool hasRulesCount() const { return this->rulesCount_ != nullptr;};
    void deleteRulesCount() { this->rulesCount_ = nullptr;};
    inline int32_t rulesCount() const { DARABONBA_PTR_GET_DEFAULT(rulesCount_, 0) };
    inline ListTransportLayerApplicationsResponseBodyApplications& setRulesCount(int32_t rulesCount) { DARABONBA_PTR_SET_VALUE(rulesCount_, rulesCount) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline ListTransportLayerApplicationsResponseBodyApplications& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListTransportLayerApplicationsResponseBodyApplications& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<int64_t> applicationId_ = nullptr;
    std::shared_ptr<string> cname_ = nullptr;
    std::shared_ptr<string> crossBorderOptimization_ = nullptr;
    std::shared_ptr<string> ipAccessRule_ = nullptr;
    std::shared_ptr<string> ipv6_ = nullptr;
    std::shared_ptr<string> recordName_ = nullptr;
    std::shared_ptr<vector<Models::ListTransportLayerApplicationsResponseBodyApplicationsRules>> rules_ = nullptr;
    std::shared_ptr<int32_t> rulesCount_ = nullptr;
    std::shared_ptr<int64_t> siteId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
