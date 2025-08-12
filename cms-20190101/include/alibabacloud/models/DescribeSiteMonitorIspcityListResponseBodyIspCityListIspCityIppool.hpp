// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESITEMONITORISPCITYLISTRESPONSEBODYISPCITYLISTISPCITYIPPOOL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESITEMONITORISPCITYLISTRESPONSEBODYISPCITYLISTISPCITYIPPOOL_HPP_
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
  class DescribeSiteMonitorISPCityListResponseBodyIspCityListIspCityIPPool : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSiteMonitorISPCityListResponseBodyIspCityListIspCityIPPool& obj) { 
      DARABONBA_PTR_TO_JSON(IPPool, IPPool_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSiteMonitorISPCityListResponseBodyIspCityListIspCityIPPool& obj) { 
      DARABONBA_PTR_FROM_JSON(IPPool, IPPool_);
    };
    DescribeSiteMonitorISPCityListResponseBodyIspCityListIspCityIPPool() = default ;
    DescribeSiteMonitorISPCityListResponseBodyIspCityListIspCityIPPool(const DescribeSiteMonitorISPCityListResponseBodyIspCityListIspCityIPPool &) = default ;
    DescribeSiteMonitorISPCityListResponseBodyIspCityListIspCityIPPool(DescribeSiteMonitorISPCityListResponseBodyIspCityListIspCityIPPool &&) = default ;
    DescribeSiteMonitorISPCityListResponseBodyIspCityListIspCityIPPool(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSiteMonitorISPCityListResponseBodyIspCityListIspCityIPPool() = default ;
    DescribeSiteMonitorISPCityListResponseBodyIspCityListIspCityIPPool& operator=(const DescribeSiteMonitorISPCityListResponseBodyIspCityListIspCityIPPool &) = default ;
    DescribeSiteMonitorISPCityListResponseBodyIspCityListIspCityIPPool& operator=(DescribeSiteMonitorISPCityListResponseBodyIspCityListIspCityIPPool &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->IPPool_ != nullptr; };
    // IPPool Field Functions 
    bool hasIPPool() const { return this->IPPool_ != nullptr;};
    void deleteIPPool() { this->IPPool_ = nullptr;};
    inline const vector<string> & IPPool() const { DARABONBA_PTR_GET_CONST(IPPool_, vector<string>) };
    inline vector<string> IPPool() { DARABONBA_PTR_GET(IPPool_, vector<string>) };
    inline DescribeSiteMonitorISPCityListResponseBodyIspCityListIspCityIPPool& setIPPool(const vector<string> & IPPool) { DARABONBA_PTR_SET_VALUE(IPPool_, IPPool) };
    inline DescribeSiteMonitorISPCityListResponseBodyIspCityListIspCityIPPool& setIPPool(vector<string> && IPPool) { DARABONBA_PTR_SET_RVALUE(IPPool_, IPPool) };


  protected:
    std::shared_ptr<vector<string>> IPPool_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
