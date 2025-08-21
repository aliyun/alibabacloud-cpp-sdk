// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRENDERINGINSTANCEGATEWAYRESPONSEBODYGATEWAYCONFIGURATIONINFOS_HPP_
#define ALIBABACLOUD_MODELS_LISTRENDERINGINSTANCEGATEWAYRESPONSEBODYGATEWAYCONFIGURATIONINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class ListRenderingInstanceGatewayResponseBodyGatewayConfigurationInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRenderingInstanceGatewayResponseBodyGatewayConfigurationInfos& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(GatewayInstanceId, gatewayInstanceId_);
      DARABONBA_PTR_TO_JSON(RenderingInstanceId, renderingInstanceId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListRenderingInstanceGatewayResponseBodyGatewayConfigurationInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(GatewayInstanceId, gatewayInstanceId_);
      DARABONBA_PTR_FROM_JSON(RenderingInstanceId, renderingInstanceId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListRenderingInstanceGatewayResponseBodyGatewayConfigurationInfos() = default ;
    ListRenderingInstanceGatewayResponseBodyGatewayConfigurationInfos(const ListRenderingInstanceGatewayResponseBodyGatewayConfigurationInfos &) = default ;
    ListRenderingInstanceGatewayResponseBodyGatewayConfigurationInfos(ListRenderingInstanceGatewayResponseBodyGatewayConfigurationInfos &&) = default ;
    ListRenderingInstanceGatewayResponseBodyGatewayConfigurationInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRenderingInstanceGatewayResponseBodyGatewayConfigurationInfos() = default ;
    ListRenderingInstanceGatewayResponseBodyGatewayConfigurationInfos& operator=(const ListRenderingInstanceGatewayResponseBodyGatewayConfigurationInfos &) = default ;
    ListRenderingInstanceGatewayResponseBodyGatewayConfigurationInfos& operator=(ListRenderingInstanceGatewayResponseBodyGatewayConfigurationInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->creationTime_ != nullptr
        && this->gatewayInstanceId_ != nullptr && this->renderingInstanceId_ != nullptr && this->status_ != nullptr && this->updateTime_ != nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline ListRenderingInstanceGatewayResponseBodyGatewayConfigurationInfos& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // gatewayInstanceId Field Functions 
    bool hasGatewayInstanceId() const { return this->gatewayInstanceId_ != nullptr;};
    void deleteGatewayInstanceId() { this->gatewayInstanceId_ = nullptr;};
    inline string gatewayInstanceId() const { DARABONBA_PTR_GET_DEFAULT(gatewayInstanceId_, "") };
    inline ListRenderingInstanceGatewayResponseBodyGatewayConfigurationInfos& setGatewayInstanceId(string gatewayInstanceId) { DARABONBA_PTR_SET_VALUE(gatewayInstanceId_, gatewayInstanceId) };


    // renderingInstanceId Field Functions 
    bool hasRenderingInstanceId() const { return this->renderingInstanceId_ != nullptr;};
    void deleteRenderingInstanceId() { this->renderingInstanceId_ = nullptr;};
    inline string renderingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceId_, "") };
    inline ListRenderingInstanceGatewayResponseBodyGatewayConfigurationInfos& setRenderingInstanceId(string renderingInstanceId) { DARABONBA_PTR_SET_VALUE(renderingInstanceId_, renderingInstanceId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListRenderingInstanceGatewayResponseBodyGatewayConfigurationInfos& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListRenderingInstanceGatewayResponseBodyGatewayConfigurationInfos& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<string> creationTime_ = nullptr;
    std::shared_ptr<string> gatewayInstanceId_ = nullptr;
    std::shared_ptr<string> renderingInstanceId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
