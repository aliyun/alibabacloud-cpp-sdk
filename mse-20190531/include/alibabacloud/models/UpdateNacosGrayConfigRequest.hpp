// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATENACOSGRAYCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATENACOSGRAYCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateNacosGrayConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateNacosGrayConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(DataId, dataId_);
      DARABONBA_PTR_TO_JSON(GrayRule, grayRule_);
      DARABONBA_PTR_TO_JSON(GrayRuleName, grayRuleName_);
      DARABONBA_PTR_TO_JSON(GrayRulePriority, grayRulePriority_);
      DARABONBA_PTR_TO_JSON(GrayType, grayType_);
      DARABONBA_PTR_TO_JSON(Group, group_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(OpType, opType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestPars, requestPars_);
      DARABONBA_PTR_TO_JSON(StopGray, stopGray_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateNacosGrayConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(DataId, dataId_);
      DARABONBA_PTR_FROM_JSON(GrayRule, grayRule_);
      DARABONBA_PTR_FROM_JSON(GrayRuleName, grayRuleName_);
      DARABONBA_PTR_FROM_JSON(GrayRulePriority, grayRulePriority_);
      DARABONBA_PTR_FROM_JSON(GrayType, grayType_);
      DARABONBA_PTR_FROM_JSON(Group, group_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(OpType, opType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestPars, requestPars_);
      DARABONBA_PTR_FROM_JSON(StopGray, stopGray_);
    };
    UpdateNacosGrayConfigRequest() = default ;
    UpdateNacosGrayConfigRequest(const UpdateNacosGrayConfigRequest &) = default ;
    UpdateNacosGrayConfigRequest(UpdateNacosGrayConfigRequest &&) = default ;
    UpdateNacosGrayConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateNacosGrayConfigRequest() = default ;
    UpdateNacosGrayConfigRequest& operator=(const UpdateNacosGrayConfigRequest &) = default ;
    UpdateNacosGrayConfigRequest& operator=(UpdateNacosGrayConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->appName_ == nullptr && this->content_ == nullptr && this->dataId_ == nullptr && this->grayRule_ == nullptr && this->grayRuleName_ == nullptr
        && this->grayRulePriority_ == nullptr && this->grayType_ == nullptr && this->group_ == nullptr && this->instanceId_ == nullptr && this->namespaceId_ == nullptr
        && this->opType_ == nullptr && this->regionId_ == nullptr && this->requestPars_ == nullptr && this->stopGray_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline UpdateNacosGrayConfigRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline UpdateNacosGrayConfigRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline UpdateNacosGrayConfigRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // dataId Field Functions 
    bool hasDataId() const { return this->dataId_ != nullptr;};
    void deleteDataId() { this->dataId_ = nullptr;};
    inline string getDataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
    inline UpdateNacosGrayConfigRequest& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


    // grayRule Field Functions 
    bool hasGrayRule() const { return this->grayRule_ != nullptr;};
    void deleteGrayRule() { this->grayRule_ = nullptr;};
    inline string getGrayRule() const { DARABONBA_PTR_GET_DEFAULT(grayRule_, "") };
    inline UpdateNacosGrayConfigRequest& setGrayRule(string grayRule) { DARABONBA_PTR_SET_VALUE(grayRule_, grayRule) };


    // grayRuleName Field Functions 
    bool hasGrayRuleName() const { return this->grayRuleName_ != nullptr;};
    void deleteGrayRuleName() { this->grayRuleName_ = nullptr;};
    inline string getGrayRuleName() const { DARABONBA_PTR_GET_DEFAULT(grayRuleName_, "") };
    inline UpdateNacosGrayConfigRequest& setGrayRuleName(string grayRuleName) { DARABONBA_PTR_SET_VALUE(grayRuleName_, grayRuleName) };


    // grayRulePriority Field Functions 
    bool hasGrayRulePriority() const { return this->grayRulePriority_ != nullptr;};
    void deleteGrayRulePriority() { this->grayRulePriority_ = nullptr;};
    inline int32_t getGrayRulePriority() const { DARABONBA_PTR_GET_DEFAULT(grayRulePriority_, 0) };
    inline UpdateNacosGrayConfigRequest& setGrayRulePriority(int32_t grayRulePriority) { DARABONBA_PTR_SET_VALUE(grayRulePriority_, grayRulePriority) };


    // grayType Field Functions 
    bool hasGrayType() const { return this->grayType_ != nullptr;};
    void deleteGrayType() { this->grayType_ = nullptr;};
    inline string getGrayType() const { DARABONBA_PTR_GET_DEFAULT(grayType_, "") };
    inline UpdateNacosGrayConfigRequest& setGrayType(string grayType) { DARABONBA_PTR_SET_VALUE(grayType_, grayType) };


    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline string getGroup() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
    inline UpdateNacosGrayConfigRequest& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateNacosGrayConfigRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline UpdateNacosGrayConfigRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // opType Field Functions 
    bool hasOpType() const { return this->opType_ != nullptr;};
    void deleteOpType() { this->opType_ = nullptr;};
    inline string getOpType() const { DARABONBA_PTR_GET_DEFAULT(opType_, "") };
    inline UpdateNacosGrayConfigRequest& setOpType(string opType) { DARABONBA_PTR_SET_VALUE(opType_, opType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateNacosGrayConfigRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestPars Field Functions 
    bool hasRequestPars() const { return this->requestPars_ != nullptr;};
    void deleteRequestPars() { this->requestPars_ = nullptr;};
    inline string getRequestPars() const { DARABONBA_PTR_GET_DEFAULT(requestPars_, "") };
    inline UpdateNacosGrayConfigRequest& setRequestPars(string requestPars) { DARABONBA_PTR_SET_VALUE(requestPars_, requestPars) };


    // stopGray Field Functions 
    bool hasStopGray() const { return this->stopGray_ != nullptr;};
    void deleteStopGray() { this->stopGray_ = nullptr;};
    inline bool getStopGray() const { DARABONBA_PTR_GET_DEFAULT(stopGray_, false) };
    inline UpdateNacosGrayConfigRequest& setStopGray(bool stopGray) { DARABONBA_PTR_SET_VALUE(stopGray_, stopGray) };


  protected:
    shared_ptr<string> acceptLanguage_ {};
    shared_ptr<string> appName_ {};
    shared_ptr<string> content_ {};
    // This parameter is required.
    shared_ptr<string> dataId_ {};
    shared_ptr<string> grayRule_ {};
    shared_ptr<string> grayRuleName_ {};
    shared_ptr<int32_t> grayRulePriority_ {};
    // This parameter is required.
    shared_ptr<string> grayType_ {};
    shared_ptr<string> group_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> namespaceId_ {};
    shared_ptr<string> opType_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> requestPars_ {};
    shared_ptr<bool> stopGray_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
