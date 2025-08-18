// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWAFUSAGEOFRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTWAFUSAGEOFRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListWafUsageOfRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWafUsageOfRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Phase, phase_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, ListWafUsageOfRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Phase, phase_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    ListWafUsageOfRulesRequest() = default ;
    ListWafUsageOfRulesRequest(const ListWafUsageOfRulesRequest &) = default ;
    ListWafUsageOfRulesRequest(ListWafUsageOfRulesRequest &&) = default ;
    ListWafUsageOfRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWafUsageOfRulesRequest() = default ;
    ListWafUsageOfRulesRequest& operator=(const ListWafUsageOfRulesRequest &) = default ;
    ListWafUsageOfRulesRequest& operator=(ListWafUsageOfRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->phase_ != nullptr
        && this->siteId_ != nullptr; };
    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline string phase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
    inline ListWafUsageOfRulesRequest& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline ListWafUsageOfRulesRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // Name of the WAF operation phase.
    std::shared_ptr<string> phase_ = nullptr;
    // Site ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) interface.
    std::shared_ptr<int64_t> siteId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
