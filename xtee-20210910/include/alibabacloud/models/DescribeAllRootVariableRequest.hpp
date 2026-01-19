// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALLROOTVARIABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALLROOTVARIABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeAllRootVariableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAllRootVariableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(deviceVariableIds, deviceVariableIds_);
      DARABONBA_PTR_TO_JSON(eventCode, eventCode_);
      DARABONBA_PTR_TO_JSON(expressionVariableIds, expressionVariableIds_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(nativeVariableIds, nativeVariableIds_);
      DARABONBA_PTR_TO_JSON(queryVariableIds, queryVariableIds_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(velocityVariableIds, velocityVariableIds_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAllRootVariableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(deviceVariableIds, deviceVariableIds_);
      DARABONBA_PTR_FROM_JSON(eventCode, eventCode_);
      DARABONBA_PTR_FROM_JSON(expressionVariableIds, expressionVariableIds_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(nativeVariableIds, nativeVariableIds_);
      DARABONBA_PTR_FROM_JSON(queryVariableIds, queryVariableIds_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(velocityVariableIds, velocityVariableIds_);
    };
    DescribeAllRootVariableRequest() = default ;
    DescribeAllRootVariableRequest(const DescribeAllRootVariableRequest &) = default ;
    DescribeAllRootVariableRequest(DescribeAllRootVariableRequest &&) = default ;
    DescribeAllRootVariableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAllRootVariableRequest() = default ;
    DescribeAllRootVariableRequest& operator=(const DescribeAllRootVariableRequest &) = default ;
    DescribeAllRootVariableRequest& operator=(DescribeAllRootVariableRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->sourceIp_ == nullptr && this->deviceVariableIds_ == nullptr && this->eventCode_ == nullptr && this->expressionVariableIds_ == nullptr && this->id_ == nullptr
        && this->nativeVariableIds_ == nullptr && this->queryVariableIds_ == nullptr && this->regId_ == nullptr && this->velocityVariableIds_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeAllRootVariableRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeAllRootVariableRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // deviceVariableIds Field Functions 
    bool hasDeviceVariableIds() const { return this->deviceVariableIds_ != nullptr;};
    void deleteDeviceVariableIds() { this->deviceVariableIds_ = nullptr;};
    inline string getDeviceVariableIds() const { DARABONBA_PTR_GET_DEFAULT(deviceVariableIds_, "") };
    inline DescribeAllRootVariableRequest& setDeviceVariableIds(string deviceVariableIds) { DARABONBA_PTR_SET_VALUE(deviceVariableIds_, deviceVariableIds) };


    // eventCode Field Functions 
    bool hasEventCode() const { return this->eventCode_ != nullptr;};
    void deleteEventCode() { this->eventCode_ = nullptr;};
    inline string getEventCode() const { DARABONBA_PTR_GET_DEFAULT(eventCode_, "") };
    inline DescribeAllRootVariableRequest& setEventCode(string eventCode) { DARABONBA_PTR_SET_VALUE(eventCode_, eventCode) };


    // expressionVariableIds Field Functions 
    bool hasExpressionVariableIds() const { return this->expressionVariableIds_ != nullptr;};
    void deleteExpressionVariableIds() { this->expressionVariableIds_ = nullptr;};
    inline string getExpressionVariableIds() const { DARABONBA_PTR_GET_DEFAULT(expressionVariableIds_, "") };
    inline DescribeAllRootVariableRequest& setExpressionVariableIds(string expressionVariableIds) { DARABONBA_PTR_SET_VALUE(expressionVariableIds_, expressionVariableIds) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeAllRootVariableRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // nativeVariableIds Field Functions 
    bool hasNativeVariableIds() const { return this->nativeVariableIds_ != nullptr;};
    void deleteNativeVariableIds() { this->nativeVariableIds_ = nullptr;};
    inline string getNativeVariableIds() const { DARABONBA_PTR_GET_DEFAULT(nativeVariableIds_, "") };
    inline DescribeAllRootVariableRequest& setNativeVariableIds(string nativeVariableIds) { DARABONBA_PTR_SET_VALUE(nativeVariableIds_, nativeVariableIds) };


    // queryVariableIds Field Functions 
    bool hasQueryVariableIds() const { return this->queryVariableIds_ != nullptr;};
    void deleteQueryVariableIds() { this->queryVariableIds_ = nullptr;};
    inline string getQueryVariableIds() const { DARABONBA_PTR_GET_DEFAULT(queryVariableIds_, "") };
    inline DescribeAllRootVariableRequest& setQueryVariableIds(string queryVariableIds) { DARABONBA_PTR_SET_VALUE(queryVariableIds_, queryVariableIds) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DescribeAllRootVariableRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // velocityVariableIds Field Functions 
    bool hasVelocityVariableIds() const { return this->velocityVariableIds_ != nullptr;};
    void deleteVelocityVariableIds() { this->velocityVariableIds_ = nullptr;};
    inline string getVelocityVariableIds() const { DARABONBA_PTR_GET_DEFAULT(velocityVariableIds_, "") };
    inline DescribeAllRootVariableRequest& setVelocityVariableIds(string velocityVariableIds) { DARABONBA_PTR_SET_VALUE(velocityVariableIds_, velocityVariableIds) };


  protected:
    // Set the language type for requests and received messages, default value is **zh**. Values: 
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // Request source IP. No need to fill in, the system will automatically obtain it.
    shared_ptr<string> sourceIp_ {};
    // Device variable list
    shared_ptr<string> deviceVariableIds_ {};
    // Event code
    shared_ptr<string> eventCode_ {};
    // Custom variable list
    shared_ptr<string> expressionVariableIds_ {};
    // Variable ID.
    shared_ptr<int64_t> id_ {};
    // Event field list
    shared_ptr<string> nativeVariableIds_ {};
    // Custom query variable
    shared_ptr<string> queryVariableIds_ {};
    // Region code
    shared_ptr<string> regId_ {};
    // Custom cumulative variable
    shared_ptr<string> velocityVariableIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
