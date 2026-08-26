// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMIXSTREAMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMIXSTREAMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class CreateMixStreamRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMixStreamRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallbackConfig, callbackConfig_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(InputStreamList, inputStreamList_);
      DARABONBA_PTR_TO_JSON(LayoutId, layoutId_);
      DARABONBA_PTR_TO_JSON(OutputConfig, outputConfig_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMixStreamRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallbackConfig, callbackConfig_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(InputStreamList, inputStreamList_);
      DARABONBA_PTR_FROM_JSON(LayoutId, layoutId_);
      DARABONBA_PTR_FROM_JSON(OutputConfig, outputConfig_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateMixStreamRequest() = default ;
    CreateMixStreamRequest(const CreateMixStreamRequest &) = default ;
    CreateMixStreamRequest(CreateMixStreamRequest &&) = default ;
    CreateMixStreamRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMixStreamRequest() = default ;
    CreateMixStreamRequest& operator=(const CreateMixStreamRequest &) = default ;
    CreateMixStreamRequest& operator=(CreateMixStreamRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callbackConfig_ == nullptr
        && this->domainName_ == nullptr && this->inputStreamList_ == nullptr && this->layoutId_ == nullptr && this->outputConfig_ == nullptr && this->ownerId_ == nullptr
        && this->regionId_ == nullptr; };
    // callbackConfig Field Functions 
    bool hasCallbackConfig() const { return this->callbackConfig_ != nullptr;};
    void deleteCallbackConfig() { this->callbackConfig_ = nullptr;};
    inline string getCallbackConfig() const { DARABONBA_PTR_GET_DEFAULT(callbackConfig_, "") };
    inline CreateMixStreamRequest& setCallbackConfig(string callbackConfig) { DARABONBA_PTR_SET_VALUE(callbackConfig_, callbackConfig) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline CreateMixStreamRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // inputStreamList Field Functions 
    bool hasInputStreamList() const { return this->inputStreamList_ != nullptr;};
    void deleteInputStreamList() { this->inputStreamList_ = nullptr;};
    inline string getInputStreamList() const { DARABONBA_PTR_GET_DEFAULT(inputStreamList_, "") };
    inline CreateMixStreamRequest& setInputStreamList(string inputStreamList) { DARABONBA_PTR_SET_VALUE(inputStreamList_, inputStreamList) };


    // layoutId Field Functions 
    bool hasLayoutId() const { return this->layoutId_ != nullptr;};
    void deleteLayoutId() { this->layoutId_ = nullptr;};
    inline string getLayoutId() const { DARABONBA_PTR_GET_DEFAULT(layoutId_, "") };
    inline CreateMixStreamRequest& setLayoutId(string layoutId) { DARABONBA_PTR_SET_VALUE(layoutId_, layoutId) };


    // outputConfig Field Functions 
    bool hasOutputConfig() const { return this->outputConfig_ != nullptr;};
    void deleteOutputConfig() { this->outputConfig_ = nullptr;};
    inline string getOutputConfig() const { DARABONBA_PTR_GET_DEFAULT(outputConfig_, "") };
    inline CreateMixStreamRequest& setOutputConfig(string outputConfig) { DARABONBA_PTR_SET_VALUE(outputConfig_, outputConfig) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateMixStreamRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateMixStreamRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The webhook address. This is a JSON array. When an event occurs, the live service sends an HTTP POST request to this address. The request body contains the event details.
    shared_ptr<string> callbackConfig_ {};
    // The primary streaming domain.
    // 
    // >Notice: 
    // 
    // Currently, only domain names in the China (Shanghai) and China (Beijing) regions are supported.
    // 
    // </notice>
    // 
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    // The list of input streams. This is a JSON array.
    // 
    // For more information, see **InputStreamConfig** below.
    // 
    // This parameter is required.
    shared_ptr<string> inputStreamList_ {};
    // The layout ID. Valid values:
    // 
    // - **MixStreamLayout-1-1**
    // - **MixStreamLayout-2-1**
    // - **MixStreamLayout-2-2**
    // - **MixStreamLayout-2-3**
    // - **MixStreamLayout-3-1**
    // - **MixStreamLayout-3-2**
    // - **MixStreamLayout-4-1**
    // - **USERDEFINED** (If you do not use a preset layout, set this parameter to **USERDEFINED**.)
    // 
    // > For more information, see [Preset stream mix layouts](https://help.aliyun.com/document_detail/199359.html).
    // 
    // This parameter is required.
    shared_ptr<string> layoutId_ {};
    // The output configuration. This is a JSON string.
    // 
    // For more information, see **OutputConfig** below.
    // 
    // This parameter is required.
    shared_ptr<string> outputConfig_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
