// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESITEMONITORATTRIBUTERESPONSEBODYSITEMONITORSOPTIONJSONQUICTARGET_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESITEMONITORATTRIBUTERESPONSEBODYSITEMONITORSOPTIONJSONQUICTARGET_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonQuicTarget : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonQuicTarget& obj) { 
      DARABONBA_PTR_TO_JSON(quic_target, quicTarget_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonQuicTarget& obj) { 
      DARABONBA_PTR_FROM_JSON(quic_target, quicTarget_);
    };
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonQuicTarget() = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonQuicTarget(const DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonQuicTarget &) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonQuicTarget(DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonQuicTarget &&) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonQuicTarget(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonQuicTarget() = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonQuicTarget& operator=(const DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonQuicTarget &) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonQuicTarget& operator=(DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonQuicTarget &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->quicTarget_ == nullptr; };
    // quicTarget Field Functions 
    bool hasQuicTarget() const { return this->quicTarget_ != nullptr;};
    void deleteQuicTarget() { this->quicTarget_ = nullptr;};
    inline const vector<string> & quicTarget() const { DARABONBA_PTR_GET_CONST(quicTarget_, vector<string>) };
    inline vector<string> quicTarget() { DARABONBA_PTR_GET(quicTarget_, vector<string>) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonQuicTarget& setQuicTarget(const vector<string> & quicTarget) { DARABONBA_PTR_SET_VALUE(quicTarget_, quicTarget) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonQuicTarget& setQuicTarget(vector<string> && quicTarget) { DARABONBA_PTR_SET_RVALUE(quicTarget_, quicTarget) };


  protected:
    std::shared_ptr<vector<string>> quicTarget_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
