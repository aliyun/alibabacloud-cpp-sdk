// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCECONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCECONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
{
namespace Models
{
  class DescribeInstanceConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(ParamNoLooseSentinelEnabled, paramNoLooseSentinelEnabled_);
      DARABONBA_PTR_TO_JSON(ParamNoLooseSentinelPasswordFreeAccess, paramNoLooseSentinelPasswordFreeAccess_);
      DARABONBA_PTR_TO_JSON(ParamNoLooseSentinelPasswordFreeCommands, paramNoLooseSentinelPasswordFreeCommands_);
      DARABONBA_PTR_TO_JSON(ParamReplMode, paramReplMode_);
      DARABONBA_PTR_TO_JSON(ParamReplTimeout, paramReplTimeout_);
      DARABONBA_PTR_TO_JSON(ParamSentinelCompatEnable, paramSentinelCompatEnable_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(ParamNoLooseSentinelEnabled, paramNoLooseSentinelEnabled_);
      DARABONBA_PTR_FROM_JSON(ParamNoLooseSentinelPasswordFreeAccess, paramNoLooseSentinelPasswordFreeAccess_);
      DARABONBA_PTR_FROM_JSON(ParamNoLooseSentinelPasswordFreeCommands, paramNoLooseSentinelPasswordFreeCommands_);
      DARABONBA_PTR_FROM_JSON(ParamReplMode, paramReplMode_);
      DARABONBA_PTR_FROM_JSON(ParamReplTimeout, paramReplTimeout_);
      DARABONBA_PTR_FROM_JSON(ParamSentinelCompatEnable, paramSentinelCompatEnable_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInstanceConfigResponseBody() = default ;
    DescribeInstanceConfigResponseBody(const DescribeInstanceConfigResponseBody &) = default ;
    DescribeInstanceConfigResponseBody(DescribeInstanceConfigResponseBody &&) = default ;
    DescribeInstanceConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceConfigResponseBody() = default ;
    DescribeInstanceConfigResponseBody& operator=(const DescribeInstanceConfigResponseBody &) = default ;
    DescribeInstanceConfigResponseBody& operator=(DescribeInstanceConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && this->paramNoLooseSentinelEnabled_ == nullptr && this->paramNoLooseSentinelPasswordFreeAccess_ == nullptr && this->paramNoLooseSentinelPasswordFreeCommands_ == nullptr && this->paramReplMode_ == nullptr && this->paramReplTimeout_ == nullptr
        && this->paramSentinelCompatEnable_ == nullptr && this->requestId_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline DescribeInstanceConfigResponseBody& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // paramNoLooseSentinelEnabled Field Functions 
    bool hasParamNoLooseSentinelEnabled() const { return this->paramNoLooseSentinelEnabled_ != nullptr;};
    void deleteParamNoLooseSentinelEnabled() { this->paramNoLooseSentinelEnabled_ = nullptr;};
    inline string getParamNoLooseSentinelEnabled() const { DARABONBA_PTR_GET_DEFAULT(paramNoLooseSentinelEnabled_, "") };
    inline DescribeInstanceConfigResponseBody& setParamNoLooseSentinelEnabled(string paramNoLooseSentinelEnabled) { DARABONBA_PTR_SET_VALUE(paramNoLooseSentinelEnabled_, paramNoLooseSentinelEnabled) };


    // paramNoLooseSentinelPasswordFreeAccess Field Functions 
    bool hasParamNoLooseSentinelPasswordFreeAccess() const { return this->paramNoLooseSentinelPasswordFreeAccess_ != nullptr;};
    void deleteParamNoLooseSentinelPasswordFreeAccess() { this->paramNoLooseSentinelPasswordFreeAccess_ = nullptr;};
    inline string getParamNoLooseSentinelPasswordFreeAccess() const { DARABONBA_PTR_GET_DEFAULT(paramNoLooseSentinelPasswordFreeAccess_, "") };
    inline DescribeInstanceConfigResponseBody& setParamNoLooseSentinelPasswordFreeAccess(string paramNoLooseSentinelPasswordFreeAccess) { DARABONBA_PTR_SET_VALUE(paramNoLooseSentinelPasswordFreeAccess_, paramNoLooseSentinelPasswordFreeAccess) };


    // paramNoLooseSentinelPasswordFreeCommands Field Functions 
    bool hasParamNoLooseSentinelPasswordFreeCommands() const { return this->paramNoLooseSentinelPasswordFreeCommands_ != nullptr;};
    void deleteParamNoLooseSentinelPasswordFreeCommands() { this->paramNoLooseSentinelPasswordFreeCommands_ = nullptr;};
    inline string getParamNoLooseSentinelPasswordFreeCommands() const { DARABONBA_PTR_GET_DEFAULT(paramNoLooseSentinelPasswordFreeCommands_, "") };
    inline DescribeInstanceConfigResponseBody& setParamNoLooseSentinelPasswordFreeCommands(string paramNoLooseSentinelPasswordFreeCommands) { DARABONBA_PTR_SET_VALUE(paramNoLooseSentinelPasswordFreeCommands_, paramNoLooseSentinelPasswordFreeCommands) };


    // paramReplMode Field Functions 
    bool hasParamReplMode() const { return this->paramReplMode_ != nullptr;};
    void deleteParamReplMode() { this->paramReplMode_ = nullptr;};
    inline string getParamReplMode() const { DARABONBA_PTR_GET_DEFAULT(paramReplMode_, "") };
    inline DescribeInstanceConfigResponseBody& setParamReplMode(string paramReplMode) { DARABONBA_PTR_SET_VALUE(paramReplMode_, paramReplMode) };


    // paramReplTimeout Field Functions 
    bool hasParamReplTimeout() const { return this->paramReplTimeout_ != nullptr;};
    void deleteParamReplTimeout() { this->paramReplTimeout_ = nullptr;};
    inline string getParamReplTimeout() const { DARABONBA_PTR_GET_DEFAULT(paramReplTimeout_, "") };
    inline DescribeInstanceConfigResponseBody& setParamReplTimeout(string paramReplTimeout) { DARABONBA_PTR_SET_VALUE(paramReplTimeout_, paramReplTimeout) };


    // paramSentinelCompatEnable Field Functions 
    bool hasParamSentinelCompatEnable() const { return this->paramSentinelCompatEnable_ != nullptr;};
    void deleteParamSentinelCompatEnable() { this->paramSentinelCompatEnable_ = nullptr;};
    inline string getParamSentinelCompatEnable() const { DARABONBA_PTR_GET_DEFAULT(paramSentinelCompatEnable_, "") };
    inline DescribeInstanceConfigResponseBody& setParamSentinelCompatEnable(string paramSentinelCompatEnable) { DARABONBA_PTR_SET_VALUE(paramSentinelCompatEnable_, paramSentinelCompatEnable) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The default configuration parameters of the instance. For more comprehensive parameter configurations, call the [Describeparamters](https://help.aliyun.com/document_detail/473847.html) operation.
    shared_ptr<string> config_ {};
    // The Sentinel compatibility mode, which applies to non-cluster instances. Valid values:
    // * **no**: disabled. This is the default value.
    // * **yes**: enabled.
    // > For more information, see [Sentinel compatibility mode](https://help.aliyun.com/document_detail/178911.html).
    shared_ptr<string> paramNoLooseSentinelEnabled_ {};
    // Specifies whether to allow password-free execution of Sentinel-related commands when the Sentinel mode is enabled. Valid values:
    // * **no**: disabled. This is the default value.
    // * **yes**: enabled. After this feature is enabled, you can execute Sentinel commands without a password on any connection and use the SENTINEL command to monitor the +switch-master channel.
    shared_ptr<string> paramNoLooseSentinelPasswordFreeAccess_ {};
    // The list of additional password-free commands. After the Sentinel mode and the ParamNoLooseSentinelPasswordFreeAccess parameter are enabled, you can use this parameter to add extra password-free commands. Default value: empty.
    shared_ptr<string> paramNoLooseSentinelPasswordFreeCommands_ {};
    // The synchronization mode. Valid values:
    // * **async**: asynchronous mode. This is the default value.
    // * **semisync**: semi-synchronous mode.
    shared_ptr<string> paramReplMode_ {};
    // The degradation threshold for the semi-synchronous mode. This parameter can be configured only when the semi-synchronous mode is used. Unit: milliseconds. Valid values: 10 to 60000. Default value: 500.
    // > When the synchronization latency exceeds this threshold, the synchronization mode automatically degrades to the asynchronous mode. After the synchronization latency is eliminated, the synchronization mode automatically switches back to the semi-synchronous mode.
    shared_ptr<string> paramReplTimeout_ {};
    // The Sentinel compatibility mode, which applies to instances in the cluster architecture proxy mode or read/write splitting architecture. Valid values:
    // * **0**: disabled. This is the default value.
    // * **1**: enabled.
    // > For more information, see [Sentinel compatibility mode](https://help.aliyun.com/document_detail/178911.html).
    shared_ptr<string> paramSentinelCompatEnable_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
