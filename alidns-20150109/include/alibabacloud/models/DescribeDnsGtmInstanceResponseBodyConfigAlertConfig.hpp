// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSGTMINSTANCERESPONSEBODYCONFIGALERTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSGTMINSTANCERESPONSEBODYCONFIGALERTCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDnsGtmInstanceResponseBodyConfigAlertConfigAlertConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDnsGtmInstanceResponseBodyConfigAlertConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsGtmInstanceResponseBodyConfigAlertConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AlertConfig, alertConfig_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsGtmInstanceResponseBodyConfigAlertConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertConfig, alertConfig_);
    };
    DescribeDnsGtmInstanceResponseBodyConfigAlertConfig() = default ;
    DescribeDnsGtmInstanceResponseBodyConfigAlertConfig(const DescribeDnsGtmInstanceResponseBodyConfigAlertConfig &) = default ;
    DescribeDnsGtmInstanceResponseBodyConfigAlertConfig(DescribeDnsGtmInstanceResponseBodyConfigAlertConfig &&) = default ;
    DescribeDnsGtmInstanceResponseBodyConfigAlertConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsGtmInstanceResponseBodyConfigAlertConfig() = default ;
    DescribeDnsGtmInstanceResponseBodyConfigAlertConfig& operator=(const DescribeDnsGtmInstanceResponseBodyConfigAlertConfig &) = default ;
    DescribeDnsGtmInstanceResponseBodyConfigAlertConfig& operator=(DescribeDnsGtmInstanceResponseBodyConfigAlertConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertConfig_ != nullptr; };
    // alertConfig Field Functions 
    bool hasAlertConfig() const { return this->alertConfig_ != nullptr;};
    void deleteAlertConfig() { this->alertConfig_ = nullptr;};
    inline const vector<Models::DescribeDnsGtmInstanceResponseBodyConfigAlertConfigAlertConfig> & alertConfig() const { DARABONBA_PTR_GET_CONST(alertConfig_, vector<Models::DescribeDnsGtmInstanceResponseBodyConfigAlertConfigAlertConfig>) };
    inline vector<Models::DescribeDnsGtmInstanceResponseBodyConfigAlertConfigAlertConfig> alertConfig() { DARABONBA_PTR_GET(alertConfig_, vector<Models::DescribeDnsGtmInstanceResponseBodyConfigAlertConfigAlertConfig>) };
    inline DescribeDnsGtmInstanceResponseBodyConfigAlertConfig& setAlertConfig(const vector<Models::DescribeDnsGtmInstanceResponseBodyConfigAlertConfigAlertConfig> & alertConfig) { DARABONBA_PTR_SET_VALUE(alertConfig_, alertConfig) };
    inline DescribeDnsGtmInstanceResponseBodyConfigAlertConfig& setAlertConfig(vector<Models::DescribeDnsGtmInstanceResponseBodyConfigAlertConfigAlertConfig> && alertConfig) { DARABONBA_PTR_SET_RVALUE(alertConfig_, alertConfig) };


  protected:
    std::shared_ptr<vector<Models::DescribeDnsGtmInstanceResponseBodyConfigAlertConfigAlertConfig>> alertConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
