// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYRENDERINGINSTANCEBANDWIDTHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYRENDERINGINSTANCEBANDWIDTHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class ModifyRenderingInstanceBandwidthRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyRenderingInstanceBandwidthRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxEgressBandwidth, maxEgressBandwidth_);
      DARABONBA_PTR_TO_JSON(MaxIngressBandwidth, maxIngressBandwidth_);
      DARABONBA_PTR_TO_JSON(RenderingInstanceId, renderingInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyRenderingInstanceBandwidthRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxEgressBandwidth, maxEgressBandwidth_);
      DARABONBA_PTR_FROM_JSON(MaxIngressBandwidth, maxIngressBandwidth_);
      DARABONBA_PTR_FROM_JSON(RenderingInstanceId, renderingInstanceId_);
    };
    ModifyRenderingInstanceBandwidthRequest() = default ;
    ModifyRenderingInstanceBandwidthRequest(const ModifyRenderingInstanceBandwidthRequest &) = default ;
    ModifyRenderingInstanceBandwidthRequest(ModifyRenderingInstanceBandwidthRequest &&) = default ;
    ModifyRenderingInstanceBandwidthRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyRenderingInstanceBandwidthRequest() = default ;
    ModifyRenderingInstanceBandwidthRequest& operator=(const ModifyRenderingInstanceBandwidthRequest &) = default ;
    ModifyRenderingInstanceBandwidthRequest& operator=(ModifyRenderingInstanceBandwidthRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxEgressBandwidth_ == nullptr
        && this->maxIngressBandwidth_ == nullptr && this->renderingInstanceId_ == nullptr; };
    // maxEgressBandwidth Field Functions 
    bool hasMaxEgressBandwidth() const { return this->maxEgressBandwidth_ != nullptr;};
    void deleteMaxEgressBandwidth() { this->maxEgressBandwidth_ = nullptr;};
    inline int32_t getMaxEgressBandwidth() const { DARABONBA_PTR_GET_DEFAULT(maxEgressBandwidth_, 0) };
    inline ModifyRenderingInstanceBandwidthRequest& setMaxEgressBandwidth(int32_t maxEgressBandwidth) { DARABONBA_PTR_SET_VALUE(maxEgressBandwidth_, maxEgressBandwidth) };


    // maxIngressBandwidth Field Functions 
    bool hasMaxIngressBandwidth() const { return this->maxIngressBandwidth_ != nullptr;};
    void deleteMaxIngressBandwidth() { this->maxIngressBandwidth_ = nullptr;};
    inline int32_t getMaxIngressBandwidth() const { DARABONBA_PTR_GET_DEFAULT(maxIngressBandwidth_, 0) };
    inline ModifyRenderingInstanceBandwidthRequest& setMaxIngressBandwidth(int32_t maxIngressBandwidth) { DARABONBA_PTR_SET_VALUE(maxIngressBandwidth_, maxIngressBandwidth) };


    // renderingInstanceId Field Functions 
    bool hasRenderingInstanceId() const { return this->renderingInstanceId_ != nullptr;};
    void deleteRenderingInstanceId() { this->renderingInstanceId_ = nullptr;};
    inline string getRenderingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceId_, "") };
    inline ModifyRenderingInstanceBandwidthRequest& setRenderingInstanceId(string renderingInstanceId) { DARABONBA_PTR_SET_VALUE(renderingInstanceId_, renderingInstanceId) };


  protected:
    shared_ptr<int32_t> maxEgressBandwidth_ {};
    shared_ptr<int32_t> maxIngressBandwidth_ {};
    // This parameter is required.
    shared_ptr<string> renderingInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
