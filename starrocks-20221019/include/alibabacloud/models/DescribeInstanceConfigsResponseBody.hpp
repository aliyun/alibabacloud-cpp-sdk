// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCECONFIGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCECONFIGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class DescribeInstanceConfigsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceConfigsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceConfigsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeInstanceConfigsResponseBody() = default ;
    DescribeInstanceConfigsResponseBody(const DescribeInstanceConfigsResponseBody &) = default ;
    DescribeInstanceConfigsResponseBody(DescribeInstanceConfigsResponseBody &&) = default ;
    DescribeInstanceConfigsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceConfigsResponseBody() = default ;
    DescribeInstanceConfigsResponseBody& operator=(const DescribeInstanceConfigsResponseBody &) = default ;
    DescribeInstanceConfigsResponseBody& operator=(DescribeInstanceConfigsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AllowModify, allowModify_);
        DARABONBA_PTR_TO_JSON(ConfigKey, configKey_);
        DARABONBA_PTR_TO_JSON(ConfigType, configType_);
        DARABONBA_PTR_TO_JSON(ConfigValue, configValue_);
        DARABONBA_PTR_TO_JSON(Custom, custom_);
        DARABONBA_PTR_TO_JSON(DefaultNodeGroup, defaultNodeGroup_);
        DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DescriptionEn, descriptionEn_);
        DARABONBA_PTR_TO_JSON(NodeGroupId, nodeGroupId_);
        DARABONBA_PTR_TO_JSON(NodeGroupName, nodeGroupName_);
        DARABONBA_PTR_TO_JSON(Restart, restart_);
        DARABONBA_PTR_TO_JSON(Unit, unit_);
        DARABONBA_PTR_TO_JSON(ValueRange, valueRange_);
        DARABONBA_PTR_TO_JSON(ValueType, valueType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AllowModify, allowModify_);
        DARABONBA_PTR_FROM_JSON(ConfigKey, configKey_);
        DARABONBA_PTR_FROM_JSON(ConfigType, configType_);
        DARABONBA_PTR_FROM_JSON(ConfigValue, configValue_);
        DARABONBA_PTR_FROM_JSON(Custom, custom_);
        DARABONBA_PTR_FROM_JSON(DefaultNodeGroup, defaultNodeGroup_);
        DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DescriptionEn, descriptionEn_);
        DARABONBA_PTR_FROM_JSON(NodeGroupId, nodeGroupId_);
        DARABONBA_PTR_FROM_JSON(NodeGroupName, nodeGroupName_);
        DARABONBA_PTR_FROM_JSON(Restart, restart_);
        DARABONBA_PTR_FROM_JSON(Unit, unit_);
        DARABONBA_PTR_FROM_JSON(ValueRange, valueRange_);
        DARABONBA_PTR_FROM_JSON(ValueType, valueType_);
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
      virtual bool empty() const override { return this->allowModify_ == nullptr
        && this->configKey_ == nullptr && this->configType_ == nullptr && this->configValue_ == nullptr && this->custom_ == nullptr && this->defaultNodeGroup_ == nullptr
        && this->defaultValue_ == nullptr && this->description_ == nullptr && this->descriptionEn_ == nullptr && this->nodeGroupId_ == nullptr && this->nodeGroupName_ == nullptr
        && this->restart_ == nullptr && this->unit_ == nullptr && this->valueRange_ == nullptr && this->valueType_ == nullptr; };
      // allowModify Field Functions 
      bool hasAllowModify() const { return this->allowModify_ != nullptr;};
      void deleteAllowModify() { this->allowModify_ = nullptr;};
      inline string getAllowModify() const { DARABONBA_PTR_GET_DEFAULT(allowModify_, "") };
      inline Data& setAllowModify(string allowModify) { DARABONBA_PTR_SET_VALUE(allowModify_, allowModify) };


      // configKey Field Functions 
      bool hasConfigKey() const { return this->configKey_ != nullptr;};
      void deleteConfigKey() { this->configKey_ = nullptr;};
      inline string getConfigKey() const { DARABONBA_PTR_GET_DEFAULT(configKey_, "") };
      inline Data& setConfigKey(string configKey) { DARABONBA_PTR_SET_VALUE(configKey_, configKey) };


      // configType Field Functions 
      bool hasConfigType() const { return this->configType_ != nullptr;};
      void deleteConfigType() { this->configType_ = nullptr;};
      inline string getConfigType() const { DARABONBA_PTR_GET_DEFAULT(configType_, "") };
      inline Data& setConfigType(string configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


      // configValue Field Functions 
      bool hasConfigValue() const { return this->configValue_ != nullptr;};
      void deleteConfigValue() { this->configValue_ = nullptr;};
      inline string getConfigValue() const { DARABONBA_PTR_GET_DEFAULT(configValue_, "") };
      inline Data& setConfigValue(string configValue) { DARABONBA_PTR_SET_VALUE(configValue_, configValue) };


      // custom Field Functions 
      bool hasCustom() const { return this->custom_ != nullptr;};
      void deleteCustom() { this->custom_ = nullptr;};
      inline bool getCustom() const { DARABONBA_PTR_GET_DEFAULT(custom_, false) };
      inline Data& setCustom(bool custom) { DARABONBA_PTR_SET_VALUE(custom_, custom) };


      // defaultNodeGroup Field Functions 
      bool hasDefaultNodeGroup() const { return this->defaultNodeGroup_ != nullptr;};
      void deleteDefaultNodeGroup() { this->defaultNodeGroup_ = nullptr;};
      inline bool getDefaultNodeGroup() const { DARABONBA_PTR_GET_DEFAULT(defaultNodeGroup_, false) };
      inline Data& setDefaultNodeGroup(bool defaultNodeGroup) { DARABONBA_PTR_SET_VALUE(defaultNodeGroup_, defaultNodeGroup) };


      // defaultValue Field Functions 
      bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
      void deleteDefaultValue() { this->defaultValue_ = nullptr;};
      inline string getDefaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
      inline Data& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // descriptionEn Field Functions 
      bool hasDescriptionEn() const { return this->descriptionEn_ != nullptr;};
      void deleteDescriptionEn() { this->descriptionEn_ = nullptr;};
      inline string getDescriptionEn() const { DARABONBA_PTR_GET_DEFAULT(descriptionEn_, "") };
      inline Data& setDescriptionEn(string descriptionEn) { DARABONBA_PTR_SET_VALUE(descriptionEn_, descriptionEn) };


      // nodeGroupId Field Functions 
      bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
      void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
      inline string getNodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
      inline Data& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


      // nodeGroupName Field Functions 
      bool hasNodeGroupName() const { return this->nodeGroupName_ != nullptr;};
      void deleteNodeGroupName() { this->nodeGroupName_ = nullptr;};
      inline string getNodeGroupName() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupName_, "") };
      inline Data& setNodeGroupName(string nodeGroupName) { DARABONBA_PTR_SET_VALUE(nodeGroupName_, nodeGroupName) };


      // restart Field Functions 
      bool hasRestart() const { return this->restart_ != nullptr;};
      void deleteRestart() { this->restart_ = nullptr;};
      inline bool getRestart() const { DARABONBA_PTR_GET_DEFAULT(restart_, false) };
      inline Data& setRestart(bool restart) { DARABONBA_PTR_SET_VALUE(restart_, restart) };


      // unit Field Functions 
      bool hasUnit() const { return this->unit_ != nullptr;};
      void deleteUnit() { this->unit_ = nullptr;};
      inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
      inline Data& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


      // valueRange Field Functions 
      bool hasValueRange() const { return this->valueRange_ != nullptr;};
      void deleteValueRange() { this->valueRange_ = nullptr;};
      inline string getValueRange() const { DARABONBA_PTR_GET_DEFAULT(valueRange_, "") };
      inline Data& setValueRange(string valueRange) { DARABONBA_PTR_SET_VALUE(valueRange_, valueRange) };


      // valueType Field Functions 
      bool hasValueType() const { return this->valueType_ != nullptr;};
      void deleteValueType() { this->valueType_ = nullptr;};
      inline string getValueType() const { DARABONBA_PTR_GET_DEFAULT(valueType_, "") };
      inline Data& setValueType(string valueType) { DARABONBA_PTR_SET_VALUE(valueType_, valueType) };


    protected:
      shared_ptr<string> allowModify_ {};
      shared_ptr<string> configKey_ {};
      shared_ptr<string> configType_ {};
      shared_ptr<string> configValue_ {};
      shared_ptr<bool> custom_ {};
      shared_ptr<bool> defaultNodeGroup_ {};
      shared_ptr<string> defaultValue_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> descriptionEn_ {};
      shared_ptr<string> nodeGroupId_ {};
      shared_ptr<string> nodeGroupName_ {};
      shared_ptr<bool> restart_ {};
      shared_ptr<string> unit_ {};
      shared_ptr<string> valueRange_ {};
      shared_ptr<string> valueType_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->data_ == nullptr && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->total_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline DescribeInstanceConfigsResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeInstanceConfigsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeInstanceConfigsResponseBody::Data>) };
    inline vector<DescribeInstanceConfigsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeInstanceConfigsResponseBody::Data>) };
    inline DescribeInstanceConfigsResponseBody& setData(const vector<DescribeInstanceConfigsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeInstanceConfigsResponseBody& setData(vector<DescribeInstanceConfigsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeInstanceConfigsResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeInstanceConfigsResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeInstanceConfigsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceConfigsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeInstanceConfigsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeInstanceConfigsResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<vector<DescribeInstanceConfigsResponseBody::Data>> data_ {};
    shared_ptr<string> errCode_ {};
    shared_ptr<string> errMessage_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
