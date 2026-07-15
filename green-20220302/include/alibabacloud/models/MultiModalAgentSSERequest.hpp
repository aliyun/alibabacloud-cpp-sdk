// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MULTIMODALAGENTSSEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MULTIMODALAGENTSSEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class MultiModalAgentSSERequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MultiModalAgentSSERequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppID, appID_);
      DARABONBA_PTR_TO_JSON(ServiceParameters, serviceParameters_);
      DARABONBA_PTR_TO_JSON(Stream, stream_);
    };
    friend void from_json(const Darabonba::Json& j, MultiModalAgentSSERequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppID, appID_);
      DARABONBA_PTR_FROM_JSON(ServiceParameters, serviceParameters_);
      DARABONBA_PTR_FROM_JSON(Stream, stream_);
    };
    MultiModalAgentSSERequest() = default ;
    MultiModalAgentSSERequest(const MultiModalAgentSSERequest &) = default ;
    MultiModalAgentSSERequest(MultiModalAgentSSERequest &&) = default ;
    MultiModalAgentSSERequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MultiModalAgentSSERequest() = default ;
    MultiModalAgentSSERequest& operator=(const MultiModalAgentSSERequest &) = default ;
    MultiModalAgentSSERequest& operator=(MultiModalAgentSSERequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appID_ == nullptr
        && this->serviceParameters_ == nullptr && this->stream_ == nullptr; };
    // appID Field Functions 
    bool hasAppID() const { return this->appID_ != nullptr;};
    void deleteAppID() { this->appID_ = nullptr;};
    inline string getAppID() const { DARABONBA_PTR_GET_DEFAULT(appID_, "") };
    inline MultiModalAgentSSERequest& setAppID(string appID) { DARABONBA_PTR_SET_VALUE(appID_, appID) };


    // serviceParameters Field Functions 
    bool hasServiceParameters() const { return this->serviceParameters_ != nullptr;};
    void deleteServiceParameters() { this->serviceParameters_ = nullptr;};
    inline string getServiceParameters() const { DARABONBA_PTR_GET_DEFAULT(serviceParameters_, "") };
    inline MultiModalAgentSSERequest& setServiceParameters(string serviceParameters) { DARABONBA_PTR_SET_VALUE(serviceParameters_, serviceParameters) };


    // stream Field Functions 
    bool hasStream() const { return this->stream_ != nullptr;};
    void deleteStream() { this->stream_ = nullptr;};
    inline string getStream() const { DARABONBA_PTR_GET_DEFAULT(stream_, "") };
    inline MultiModalAgentSSERequest& setStream(string stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };


  protected:
    // The unique identifier of the whiteboard application. To obtain the whiteboard application ID, see [CreateApp](https://help.aliyun.com/document_detail/204234.html).
    shared_ptr<string> appID_ {};
    // The parameter set required by the moderation service, in JSON string format. The input parameter for text content is content (String), the custom data ID is DataId (String), and the cache type is CacheType (String, valid value: ephemeral).
    shared_ptr<string> serviceParameters_ {};
    // Specifies whether to use streaming output.
    shared_ptr<string> stream_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
