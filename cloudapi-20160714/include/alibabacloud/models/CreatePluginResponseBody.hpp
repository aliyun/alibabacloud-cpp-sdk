// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPLUGINRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEPLUGINRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class CreatePluginResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePluginResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PluginId, pluginId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TagStatus, tagStatus_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePluginResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PluginId, pluginId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TagStatus, tagStatus_);
    };
    CreatePluginResponseBody() = default ;
    CreatePluginResponseBody(const CreatePluginResponseBody &) = default ;
    CreatePluginResponseBody(CreatePluginResponseBody &&) = default ;
    CreatePluginResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePluginResponseBody() = default ;
    CreatePluginResponseBody& operator=(const CreatePluginResponseBody &) = default ;
    CreatePluginResponseBody& operator=(CreatePluginResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pluginId_ == nullptr
        && return this->requestId_ == nullptr && return this->tagStatus_ == nullptr; };
    // pluginId Field Functions 
    bool hasPluginId() const { return this->pluginId_ != nullptr;};
    void deletePluginId() { this->pluginId_ = nullptr;};
    inline string pluginId() const { DARABONBA_PTR_GET_DEFAULT(pluginId_, "") };
    inline CreatePluginResponseBody& setPluginId(string pluginId) { DARABONBA_PTR_SET_VALUE(pluginId_, pluginId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreatePluginResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tagStatus Field Functions 
    bool hasTagStatus() const { return this->tagStatus_ != nullptr;};
    void deleteTagStatus() { this->tagStatus_ = nullptr;};
    inline bool tagStatus() const { DARABONBA_PTR_GET_DEFAULT(tagStatus_, false) };
    inline CreatePluginResponseBody& setTagStatus(bool tagStatus) { DARABONBA_PTR_SET_VALUE(tagStatus_, tagStatus) };


  protected:
    // The ID of the plug-in.
    std::shared_ptr<string> pluginId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the plug-in is successfully marked.
    std::shared_ptr<bool> tagStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
