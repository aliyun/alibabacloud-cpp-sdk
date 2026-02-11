// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATASOURCEPARAMETERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATASOURCEPARAMETERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeDataSourceParametersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataSourceParametersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataSourceParametersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDataSourceParametersResponseBody() = default ;
    DescribeDataSourceParametersResponseBody(const DescribeDataSourceParametersResponseBody &) = default ;
    DescribeDataSourceParametersResponseBody(DescribeDataSourceParametersResponseBody &&) = default ;
    DescribeDataSourceParametersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataSourceParametersResponseBody() = default ;
    DescribeDataSourceParametersResponseBody& operator=(const DescribeDataSourceParametersResponseBody &) = default ;
    DescribeDataSourceParametersResponseBody& operator=(DescribeDataSourceParametersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ParamValue : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ParamValue& obj) { 
          DARABONBA_PTR_TO_JSON(Label, label_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, ParamValue& obj) { 
          DARABONBA_PTR_FROM_JSON(Label, label_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        ParamValue() = default ;
        ParamValue(const ParamValue &) = default ;
        ParamValue(ParamValue &&) = default ;
        ParamValue(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ParamValue() = default ;
        ParamValue& operator=(const ParamValue &) = default ;
        ParamValue& operator=(ParamValue &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->label_ == nullptr
        && this->value_ == nullptr; };
        // label Field Functions 
        bool hasLabel() const { return this->label_ != nullptr;};
        void deleteLabel() { this->label_ = nullptr;};
        inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
        inline ParamValue& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline ParamValue& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The display value.
        shared_ptr<string> label_ {};
        // The actual value.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->canEditted_ == nullptr
        && this->cloudCode_ == nullptr && this->dataSourceType_ == nullptr && this->defaultValue_ == nullptr && this->disabled_ == nullptr && this->formatCheck_ == nullptr
        && this->hit_ == nullptr && this->paraCode_ == nullptr && this->paraLevel_ == nullptr && this->paraName_ == nullptr && this->paraType_ == nullptr
        && this->paramValue_ == nullptr && this->required_ == nullptr && this->title_ == nullptr; };
      // canEditted Field Functions 
      bool hasCanEditted() const { return this->canEditted_ != nullptr;};
      void deleteCanEditted() { this->canEditted_ = nullptr;};
      inline int32_t getCanEditted() const { DARABONBA_PTR_GET_DEFAULT(canEditted_, 0) };
      inline Data& setCanEditted(int32_t canEditted) { DARABONBA_PTR_SET_VALUE(canEditted_, canEditted) };


      // cloudCode Field Functions 
      bool hasCloudCode() const { return this->cloudCode_ != nullptr;};
      void deleteCloudCode() { this->cloudCode_ = nullptr;};
      inline string getCloudCode() const { DARABONBA_PTR_GET_DEFAULT(cloudCode_, "") };
      inline Data& setCloudCode(string cloudCode) { DARABONBA_PTR_SET_VALUE(cloudCode_, cloudCode) };


      // dataSourceType Field Functions 
      bool hasDataSourceType() const { return this->dataSourceType_ != nullptr;};
      void deleteDataSourceType() { this->dataSourceType_ = nullptr;};
      inline string getDataSourceType() const { DARABONBA_PTR_GET_DEFAULT(dataSourceType_, "") };
      inline Data& setDataSourceType(string dataSourceType) { DARABONBA_PTR_SET_VALUE(dataSourceType_, dataSourceType) };


      // defaultValue Field Functions 
      bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
      void deleteDefaultValue() { this->defaultValue_ = nullptr;};
      inline string getDefaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
      inline Data& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


      // disabled Field Functions 
      bool hasDisabled() const { return this->disabled_ != nullptr;};
      void deleteDisabled() { this->disabled_ = nullptr;};
      inline bool getDisabled() const { DARABONBA_PTR_GET_DEFAULT(disabled_, false) };
      inline Data& setDisabled(bool disabled) { DARABONBA_PTR_SET_VALUE(disabled_, disabled) };


      // formatCheck Field Functions 
      bool hasFormatCheck() const { return this->formatCheck_ != nullptr;};
      void deleteFormatCheck() { this->formatCheck_ = nullptr;};
      inline string getFormatCheck() const { DARABONBA_PTR_GET_DEFAULT(formatCheck_, "") };
      inline Data& setFormatCheck(string formatCheck) { DARABONBA_PTR_SET_VALUE(formatCheck_, formatCheck) };


      // hit Field Functions 
      bool hasHit() const { return this->hit_ != nullptr;};
      void deleteHit() { this->hit_ = nullptr;};
      inline string getHit() const { DARABONBA_PTR_GET_DEFAULT(hit_, "") };
      inline Data& setHit(string hit) { DARABONBA_PTR_SET_VALUE(hit_, hit) };


      // paraCode Field Functions 
      bool hasParaCode() const { return this->paraCode_ != nullptr;};
      void deleteParaCode() { this->paraCode_ = nullptr;};
      inline string getParaCode() const { DARABONBA_PTR_GET_DEFAULT(paraCode_, "") };
      inline Data& setParaCode(string paraCode) { DARABONBA_PTR_SET_VALUE(paraCode_, paraCode) };


      // paraLevel Field Functions 
      bool hasParaLevel() const { return this->paraLevel_ != nullptr;};
      void deleteParaLevel() { this->paraLevel_ = nullptr;};
      inline int32_t getParaLevel() const { DARABONBA_PTR_GET_DEFAULT(paraLevel_, 0) };
      inline Data& setParaLevel(int32_t paraLevel) { DARABONBA_PTR_SET_VALUE(paraLevel_, paraLevel) };


      // paraName Field Functions 
      bool hasParaName() const { return this->paraName_ != nullptr;};
      void deleteParaName() { this->paraName_ = nullptr;};
      inline string getParaName() const { DARABONBA_PTR_GET_DEFAULT(paraName_, "") };
      inline Data& setParaName(string paraName) { DARABONBA_PTR_SET_VALUE(paraName_, paraName) };


      // paraType Field Functions 
      bool hasParaType() const { return this->paraType_ != nullptr;};
      void deleteParaType() { this->paraType_ = nullptr;};
      inline string getParaType() const { DARABONBA_PTR_GET_DEFAULT(paraType_, "") };
      inline Data& setParaType(string paraType) { DARABONBA_PTR_SET_VALUE(paraType_, paraType) };


      // paramValue Field Functions 
      bool hasParamValue() const { return this->paramValue_ != nullptr;};
      void deleteParamValue() { this->paramValue_ = nullptr;};
      inline const vector<Data::ParamValue> & getParamValue() const { DARABONBA_PTR_GET_CONST(paramValue_, vector<Data::ParamValue>) };
      inline vector<Data::ParamValue> getParamValue() { DARABONBA_PTR_GET(paramValue_, vector<Data::ParamValue>) };
      inline Data& setParamValue(const vector<Data::ParamValue> & paramValue) { DARABONBA_PTR_SET_VALUE(paramValue_, paramValue) };
      inline Data& setParamValue(vector<Data::ParamValue> && paramValue) { DARABONBA_PTR_SET_RVALUE(paramValue_, paramValue) };


      // required Field Functions 
      bool hasRequired() const { return this->required_ != nullptr;};
      void deleteRequired() { this->required_ = nullptr;};
      inline int32_t getRequired() const { DARABONBA_PTR_GET_DEFAULT(required_, 0) };
      inline Data& setRequired(int32_t required) { DARABONBA_PTR_SET_VALUE(required_, required) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Data& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    protected:
      // Indicates whether the edit operation is supported. Valid values:
      // 
      // *   **0**
      // *   **1**
      shared_ptr<int32_t> canEditted_ {};
      // The code of the cloud service provider. Valid values:
      // 
      // *   **qcloud**: Tencent Cloud
      // *   **aliyun**: Alibaba Cloud
      // *   **hcloud**: Huawei Cloud
      shared_ptr<string> cloudCode_ {};
      // The type of the data source. Valid values:
      // 
      // *   **obs**: Huawei Cloud Object Storage Service (OBS)
      // *   **wafApi**: download API of Tencent Cloud Web Application Firewall (WAF)
      // *   **ckafka**: Tencent Cloud TDMQ for CKafka
      shared_ptr<string> dataSourceType_ {};
      // The default value of the parameter.
      shared_ptr<string> defaultValue_ {};
      // Indicates whether the modification operation is forbidden. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> disabled_ {};
      // The method that is used to check the parameter format.
      shared_ptr<string> formatCheck_ {};
      // The additional information.
      shared_ptr<string> hit_ {};
      // The code of the parameter.
      shared_ptr<string> paraCode_ {};
      // The parameter level. Valid values:
      // 
      // *   **1**: the parameters of the data source
      // *   **2**: the parameters of the log
      shared_ptr<int32_t> paraLevel_ {};
      // The name of the parameter.
      shared_ptr<string> paraName_ {};
      // The data type of the parameter.
      shared_ptr<string> paraType_ {};
      // The value of the parameter.
      shared_ptr<vector<Data::ParamValue>> paramValue_ {};
      // Indicates whether the parameter is required. Valid values:
      // 
      // *   **1**: required
      // *   **0**: optional
      shared_ptr<int32_t> required_ {};
      // The note for the parameter value.
      shared_ptr<string> title_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeDataSourceParametersResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeDataSourceParametersResponseBody::Data>) };
    inline vector<DescribeDataSourceParametersResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeDataSourceParametersResponseBody::Data>) };
    inline DescribeDataSourceParametersResponseBody& setData(const vector<DescribeDataSourceParametersResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeDataSourceParametersResponseBody& setData(vector<DescribeDataSourceParametersResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDataSourceParametersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<vector<DescribeDataSourceParametersResponseBody::Data>> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
