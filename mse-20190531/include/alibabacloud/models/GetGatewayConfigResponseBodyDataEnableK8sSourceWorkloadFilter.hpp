// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGATEWAYCONFIGRESPONSEBODYDATAENABLEK8SSOURCEWORKLOADFILTER_HPP_
#define ALIBABACLOUD_MODELS_GETGATEWAYCONFIGRESPONSEBODYDATAENABLEK8SSOURCEWORKLOADFILTER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetGatewayConfigResponseBodyDataEnableK8sSourceWorkloadFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGatewayConfigResponseBodyDataEnableK8sSourceWorkloadFilter& obj) { 
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(FilterOpt, filterOpt_);
      DARABONBA_PTR_TO_JSON(LabelKey, labelKey_);
      DARABONBA_PTR_TO_JSON(LabelValue, labelValue_);
    };
    friend void from_json(const Darabonba::Json& j, GetGatewayConfigResponseBodyDataEnableK8sSourceWorkloadFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(FilterOpt, filterOpt_);
      DARABONBA_PTR_FROM_JSON(LabelKey, labelKey_);
      DARABONBA_PTR_FROM_JSON(LabelValue, labelValue_);
    };
    GetGatewayConfigResponseBodyDataEnableK8sSourceWorkloadFilter() = default ;
    GetGatewayConfigResponseBodyDataEnableK8sSourceWorkloadFilter(const GetGatewayConfigResponseBodyDataEnableK8sSourceWorkloadFilter &) = default ;
    GetGatewayConfigResponseBodyDataEnableK8sSourceWorkloadFilter(GetGatewayConfigResponseBodyDataEnableK8sSourceWorkloadFilter &&) = default ;
    GetGatewayConfigResponseBodyDataEnableK8sSourceWorkloadFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGatewayConfigResponseBodyDataEnableK8sSourceWorkloadFilter() = default ;
    GetGatewayConfigResponseBodyDataEnableK8sSourceWorkloadFilter& operator=(const GetGatewayConfigResponseBodyDataEnableK8sSourceWorkloadFilter &) = default ;
    GetGatewayConfigResponseBodyDataEnableK8sSourceWorkloadFilter& operator=(GetGatewayConfigResponseBodyDataEnableK8sSourceWorkloadFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enable_ != nullptr
        && this->filterOpt_ != nullptr && this->labelKey_ != nullptr && this->labelValue_ != nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline GetGatewayConfigResponseBodyDataEnableK8sSourceWorkloadFilter& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // filterOpt Field Functions 
    bool hasFilterOpt() const { return this->filterOpt_ != nullptr;};
    void deleteFilterOpt() { this->filterOpt_ = nullptr;};
    inline string filterOpt() const { DARABONBA_PTR_GET_DEFAULT(filterOpt_, "") };
    inline GetGatewayConfigResponseBodyDataEnableK8sSourceWorkloadFilter& setFilterOpt(string filterOpt) { DARABONBA_PTR_SET_VALUE(filterOpt_, filterOpt) };


    // labelKey Field Functions 
    bool hasLabelKey() const { return this->labelKey_ != nullptr;};
    void deleteLabelKey() { this->labelKey_ = nullptr;};
    inline string labelKey() const { DARABONBA_PTR_GET_DEFAULT(labelKey_, "") };
    inline GetGatewayConfigResponseBodyDataEnableK8sSourceWorkloadFilter& setLabelKey(string labelKey) { DARABONBA_PTR_SET_VALUE(labelKey_, labelKey) };


    // labelValue Field Functions 
    bool hasLabelValue() const { return this->labelValue_ != nullptr;};
    void deleteLabelValue() { this->labelValue_ = nullptr;};
    inline string labelValue() const { DARABONBA_PTR_GET_DEFAULT(labelValue_, "") };
    inline GetGatewayConfigResponseBodyDataEnableK8sSourceWorkloadFilter& setLabelValue(string labelValue) { DARABONBA_PTR_SET_VALUE(labelValue_, labelValue) };


  protected:
    std::shared_ptr<bool> enable_ = nullptr;
    std::shared_ptr<string> filterOpt_ = nullptr;
    std::shared_ptr<string> labelKey_ = nullptr;
    std::shared_ptr<string> labelValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
