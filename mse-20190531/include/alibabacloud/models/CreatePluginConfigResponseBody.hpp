// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPLUGINCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEPLUGINCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class CreatePluginConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePluginConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PluginConfigID, pluginConfigID_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePluginConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PluginConfigID, pluginConfigID_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreatePluginConfigResponseBody() = default ;
    CreatePluginConfigResponseBody(const CreatePluginConfigResponseBody &) = default ;
    CreatePluginConfigResponseBody(CreatePluginConfigResponseBody &&) = default ;
    CreatePluginConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePluginConfigResponseBody() = default ;
    CreatePluginConfigResponseBody& operator=(const CreatePluginConfigResponseBody &) = default ;
    CreatePluginConfigResponseBody& operator=(CreatePluginConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pluginConfigID_ == nullptr
        && this->requestId_ == nullptr; };
    // pluginConfigID Field Functions 
    bool hasPluginConfigID() const { return this->pluginConfigID_ != nullptr;};
    void deletePluginConfigID() { this->pluginConfigID_ = nullptr;};
    inline int64_t getPluginConfigID() const { DARABONBA_PTR_GET_DEFAULT(pluginConfigID_, 0L) };
    inline CreatePluginConfigResponseBody& setPluginConfigID(int64_t pluginConfigID) { DARABONBA_PTR_SET_VALUE(pluginConfigID_, pluginConfigID) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreatePluginConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The plug-in configuration ID.
    shared_ptr<int64_t> pluginConfigID_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
