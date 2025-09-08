// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATASOURCEPARAMETERSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATASOURCEPARAMETERSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDataSourceParametersResponseBodyDataParamValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeDataSourceParametersResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataSourceParametersResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CanEditted, canEditted_);
      DARABONBA_PTR_TO_JSON(CloudCode, cloudCode_);
      DARABONBA_PTR_TO_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_TO_JSON(Disabled, disabled_);
      DARABONBA_PTR_TO_JSON(FormatCheck, formatCheck_);
      DARABONBA_PTR_TO_JSON(Hit, hit_);
      DARABONBA_PTR_TO_JSON(ParaCode, paraCode_);
      DARABONBA_PTR_TO_JSON(ParaLevel, paraLevel_);
      DARABONBA_PTR_TO_JSON(ParaName, paraName_);
      DARABONBA_PTR_TO_JSON(ParaType, paraType_);
      DARABONBA_PTR_TO_JSON(ParamValue, paramValue_);
      DARABONBA_PTR_TO_JSON(Required, required_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataSourceParametersResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CanEditted, canEditted_);
      DARABONBA_PTR_FROM_JSON(CloudCode, cloudCode_);
      DARABONBA_PTR_FROM_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_FROM_JSON(Disabled, disabled_);
      DARABONBA_PTR_FROM_JSON(FormatCheck, formatCheck_);
      DARABONBA_PTR_FROM_JSON(Hit, hit_);
      DARABONBA_PTR_FROM_JSON(ParaCode, paraCode_);
      DARABONBA_PTR_FROM_JSON(ParaLevel, paraLevel_);
      DARABONBA_PTR_FROM_JSON(ParaName, paraName_);
      DARABONBA_PTR_FROM_JSON(ParaType, paraType_);
      DARABONBA_PTR_FROM_JSON(ParamValue, paramValue_);
      DARABONBA_PTR_FROM_JSON(Required, required_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    DescribeDataSourceParametersResponseBodyData() = default ;
    DescribeDataSourceParametersResponseBodyData(const DescribeDataSourceParametersResponseBodyData &) = default ;
    DescribeDataSourceParametersResponseBodyData(DescribeDataSourceParametersResponseBodyData &&) = default ;
    DescribeDataSourceParametersResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataSourceParametersResponseBodyData() = default ;
    DescribeDataSourceParametersResponseBodyData& operator=(const DescribeDataSourceParametersResponseBodyData &) = default ;
    DescribeDataSourceParametersResponseBodyData& operator=(DescribeDataSourceParametersResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->canEditted_ != nullptr
        && this->cloudCode_ != nullptr && this->dataSourceType_ != nullptr && this->defaultValue_ != nullptr && this->disabled_ != nullptr && this->formatCheck_ != nullptr
        && this->hit_ != nullptr && this->paraCode_ != nullptr && this->paraLevel_ != nullptr && this->paraName_ != nullptr && this->paraType_ != nullptr
        && this->paramValue_ != nullptr && this->required_ != nullptr && this->title_ != nullptr; };
    // canEditted Field Functions 
    bool hasCanEditted() const { return this->canEditted_ != nullptr;};
    void deleteCanEditted() { this->canEditted_ = nullptr;};
    inline int32_t canEditted() const { DARABONBA_PTR_GET_DEFAULT(canEditted_, 0) };
    inline DescribeDataSourceParametersResponseBodyData& setCanEditted(int32_t canEditted) { DARABONBA_PTR_SET_VALUE(canEditted_, canEditted) };


    // cloudCode Field Functions 
    bool hasCloudCode() const { return this->cloudCode_ != nullptr;};
    void deleteCloudCode() { this->cloudCode_ = nullptr;};
    inline string cloudCode() const { DARABONBA_PTR_GET_DEFAULT(cloudCode_, "") };
    inline DescribeDataSourceParametersResponseBodyData& setCloudCode(string cloudCode) { DARABONBA_PTR_SET_VALUE(cloudCode_, cloudCode) };


    // dataSourceType Field Functions 
    bool hasDataSourceType() const { return this->dataSourceType_ != nullptr;};
    void deleteDataSourceType() { this->dataSourceType_ = nullptr;};
    inline string dataSourceType() const { DARABONBA_PTR_GET_DEFAULT(dataSourceType_, "") };
    inline DescribeDataSourceParametersResponseBodyData& setDataSourceType(string dataSourceType) { DARABONBA_PTR_SET_VALUE(dataSourceType_, dataSourceType) };


    // defaultValue Field Functions 
    bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
    void deleteDefaultValue() { this->defaultValue_ = nullptr;};
    inline string defaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
    inline DescribeDataSourceParametersResponseBodyData& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


    // disabled Field Functions 
    bool hasDisabled() const { return this->disabled_ != nullptr;};
    void deleteDisabled() { this->disabled_ = nullptr;};
    inline bool disabled() const { DARABONBA_PTR_GET_DEFAULT(disabled_, false) };
    inline DescribeDataSourceParametersResponseBodyData& setDisabled(bool disabled) { DARABONBA_PTR_SET_VALUE(disabled_, disabled) };


    // formatCheck Field Functions 
    bool hasFormatCheck() const { return this->formatCheck_ != nullptr;};
    void deleteFormatCheck() { this->formatCheck_ = nullptr;};
    inline string formatCheck() const { DARABONBA_PTR_GET_DEFAULT(formatCheck_, "") };
    inline DescribeDataSourceParametersResponseBodyData& setFormatCheck(string formatCheck) { DARABONBA_PTR_SET_VALUE(formatCheck_, formatCheck) };


    // hit Field Functions 
    bool hasHit() const { return this->hit_ != nullptr;};
    void deleteHit() { this->hit_ = nullptr;};
    inline string hit() const { DARABONBA_PTR_GET_DEFAULT(hit_, "") };
    inline DescribeDataSourceParametersResponseBodyData& setHit(string hit) { DARABONBA_PTR_SET_VALUE(hit_, hit) };


    // paraCode Field Functions 
    bool hasParaCode() const { return this->paraCode_ != nullptr;};
    void deleteParaCode() { this->paraCode_ = nullptr;};
    inline string paraCode() const { DARABONBA_PTR_GET_DEFAULT(paraCode_, "") };
    inline DescribeDataSourceParametersResponseBodyData& setParaCode(string paraCode) { DARABONBA_PTR_SET_VALUE(paraCode_, paraCode) };


    // paraLevel Field Functions 
    bool hasParaLevel() const { return this->paraLevel_ != nullptr;};
    void deleteParaLevel() { this->paraLevel_ = nullptr;};
    inline int32_t paraLevel() const { DARABONBA_PTR_GET_DEFAULT(paraLevel_, 0) };
    inline DescribeDataSourceParametersResponseBodyData& setParaLevel(int32_t paraLevel) { DARABONBA_PTR_SET_VALUE(paraLevel_, paraLevel) };


    // paraName Field Functions 
    bool hasParaName() const { return this->paraName_ != nullptr;};
    void deleteParaName() { this->paraName_ = nullptr;};
    inline string paraName() const { DARABONBA_PTR_GET_DEFAULT(paraName_, "") };
    inline DescribeDataSourceParametersResponseBodyData& setParaName(string paraName) { DARABONBA_PTR_SET_VALUE(paraName_, paraName) };


    // paraType Field Functions 
    bool hasParaType() const { return this->paraType_ != nullptr;};
    void deleteParaType() { this->paraType_ = nullptr;};
    inline string paraType() const { DARABONBA_PTR_GET_DEFAULT(paraType_, "") };
    inline DescribeDataSourceParametersResponseBodyData& setParaType(string paraType) { DARABONBA_PTR_SET_VALUE(paraType_, paraType) };


    // paramValue Field Functions 
    bool hasParamValue() const { return this->paramValue_ != nullptr;};
    void deleteParamValue() { this->paramValue_ = nullptr;};
    inline const vector<Models::DescribeDataSourceParametersResponseBodyDataParamValue> & paramValue() const { DARABONBA_PTR_GET_CONST(paramValue_, vector<Models::DescribeDataSourceParametersResponseBodyDataParamValue>) };
    inline vector<Models::DescribeDataSourceParametersResponseBodyDataParamValue> paramValue() { DARABONBA_PTR_GET(paramValue_, vector<Models::DescribeDataSourceParametersResponseBodyDataParamValue>) };
    inline DescribeDataSourceParametersResponseBodyData& setParamValue(const vector<Models::DescribeDataSourceParametersResponseBodyDataParamValue> & paramValue) { DARABONBA_PTR_SET_VALUE(paramValue_, paramValue) };
    inline DescribeDataSourceParametersResponseBodyData& setParamValue(vector<Models::DescribeDataSourceParametersResponseBodyDataParamValue> && paramValue) { DARABONBA_PTR_SET_RVALUE(paramValue_, paramValue) };


    // required Field Functions 
    bool hasRequired() const { return this->required_ != nullptr;};
    void deleteRequired() { this->required_ = nullptr;};
    inline int32_t required() const { DARABONBA_PTR_GET_DEFAULT(required_, 0) };
    inline DescribeDataSourceParametersResponseBodyData& setRequired(int32_t required) { DARABONBA_PTR_SET_VALUE(required_, required) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline DescribeDataSourceParametersResponseBodyData& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // Indicates whether the edit operation is supported. Valid values:
    // 
    // *   **0**
    // *   **1**
    std::shared_ptr<int32_t> canEditted_ = nullptr;
    // The code of the cloud service provider. Valid values:
    // 
    // *   **qcloud**: Tencent Cloud
    // *   **aliyun**: Alibaba Cloud
    // *   **hcloud**: Huawei Cloud
    std::shared_ptr<string> cloudCode_ = nullptr;
    // The type of the data source. Valid values:
    // 
    // *   **obs**: Huawei Cloud Object Storage Service (OBS)
    // *   **wafApi**: download API of Tencent Cloud Web Application Firewall (WAF)
    // *   **ckafka**: Tencent Cloud TDMQ for CKafka
    std::shared_ptr<string> dataSourceType_ = nullptr;
    // The default value of the parameter.
    std::shared_ptr<string> defaultValue_ = nullptr;
    // Indicates whether the modification operation is forbidden. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> disabled_ = nullptr;
    // The method that is used to check the parameter format.
    std::shared_ptr<string> formatCheck_ = nullptr;
    // The additional information.
    std::shared_ptr<string> hit_ = nullptr;
    // The code of the parameter.
    std::shared_ptr<string> paraCode_ = nullptr;
    // The parameter level. Valid values:
    // 
    // *   **1**: the parameters of the data source
    // *   **2**: the parameters of the log
    std::shared_ptr<int32_t> paraLevel_ = nullptr;
    // The name of the parameter.
    std::shared_ptr<string> paraName_ = nullptr;
    // The data type of the parameter.
    std::shared_ptr<string> paraType_ = nullptr;
    // The value of the parameter.
    std::shared_ptr<vector<Models::DescribeDataSourceParametersResponseBodyDataParamValue>> paramValue_ = nullptr;
    // Indicates whether the parameter is required. Valid values:
    // 
    // *   **1**: required
    // *   **0**: optional
    std::shared_ptr<int32_t> required_ = nullptr;
    // The note for the parameter value.
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
