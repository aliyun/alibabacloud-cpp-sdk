// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMINSTANCECONFIGALERTRESPONSEBODYALERTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMINSTANCECONFIGALERTRESPONSEBODYALERTCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCloudGtmInstanceConfigAlertResponseBodyAlertConfigAlertConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeCloudGtmInstanceConfigAlertResponseBodyAlertConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudGtmInstanceConfigAlertResponseBodyAlertConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AlertConfig, alertConfig_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudGtmInstanceConfigAlertResponseBodyAlertConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertConfig, alertConfig_);
    };
    DescribeCloudGtmInstanceConfigAlertResponseBodyAlertConfig() = default ;
    DescribeCloudGtmInstanceConfigAlertResponseBodyAlertConfig(const DescribeCloudGtmInstanceConfigAlertResponseBodyAlertConfig &) = default ;
    DescribeCloudGtmInstanceConfigAlertResponseBodyAlertConfig(DescribeCloudGtmInstanceConfigAlertResponseBodyAlertConfig &&) = default ;
    DescribeCloudGtmInstanceConfigAlertResponseBodyAlertConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudGtmInstanceConfigAlertResponseBodyAlertConfig() = default ;
    DescribeCloudGtmInstanceConfigAlertResponseBodyAlertConfig& operator=(const DescribeCloudGtmInstanceConfigAlertResponseBodyAlertConfig &) = default ;
    DescribeCloudGtmInstanceConfigAlertResponseBodyAlertConfig& operator=(DescribeCloudGtmInstanceConfigAlertResponseBodyAlertConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertConfig_ == nullptr; };
    // alertConfig Field Functions 
    bool hasAlertConfig() const { return this->alertConfig_ != nullptr;};
    void deleteAlertConfig() { this->alertConfig_ = nullptr;};
    inline const vector<Models::DescribeCloudGtmInstanceConfigAlertResponseBodyAlertConfigAlertConfig> & alertConfig() const { DARABONBA_PTR_GET_CONST(alertConfig_, vector<Models::DescribeCloudGtmInstanceConfigAlertResponseBodyAlertConfigAlertConfig>) };
    inline vector<Models::DescribeCloudGtmInstanceConfigAlertResponseBodyAlertConfigAlertConfig> alertConfig() { DARABONBA_PTR_GET(alertConfig_, vector<Models::DescribeCloudGtmInstanceConfigAlertResponseBodyAlertConfigAlertConfig>) };
    inline DescribeCloudGtmInstanceConfigAlertResponseBodyAlertConfig& setAlertConfig(const vector<Models::DescribeCloudGtmInstanceConfigAlertResponseBodyAlertConfigAlertConfig> & alertConfig) { DARABONBA_PTR_SET_VALUE(alertConfig_, alertConfig) };
    inline DescribeCloudGtmInstanceConfigAlertResponseBodyAlertConfig& setAlertConfig(vector<Models::DescribeCloudGtmInstanceConfigAlertResponseBodyAlertConfigAlertConfig> && alertConfig) { DARABONBA_PTR_SET_RVALUE(alertConfig_, alertConfig) };


  protected:
    std::shared_ptr<vector<Models::DescribeCloudGtmInstanceConfigAlertResponseBodyAlertConfigAlertConfig>> alertConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
