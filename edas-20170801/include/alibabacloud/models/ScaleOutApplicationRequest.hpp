// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCALEOUTAPPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SCALEOUTAPPLICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ScaleOutApplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScaleOutApplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(DeployGroup, deployGroup_);
      DARABONBA_PTR_TO_JSON(EcuInfo, ecuInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ScaleOutApplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(DeployGroup, deployGroup_);
      DARABONBA_PTR_FROM_JSON(EcuInfo, ecuInfo_);
    };
    ScaleOutApplicationRequest() = default ;
    ScaleOutApplicationRequest(const ScaleOutApplicationRequest &) = default ;
    ScaleOutApplicationRequest(ScaleOutApplicationRequest &&) = default ;
    ScaleOutApplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScaleOutApplicationRequest() = default ;
    ScaleOutApplicationRequest& operator=(const ScaleOutApplicationRequest &) = default ;
    ScaleOutApplicationRequest& operator=(ScaleOutApplicationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->deployGroup_ == nullptr && return this->ecuInfo_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ScaleOutApplicationRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // deployGroup Field Functions 
    bool hasDeployGroup() const { return this->deployGroup_ != nullptr;};
    void deleteDeployGroup() { this->deployGroup_ = nullptr;};
    inline string deployGroup() const { DARABONBA_PTR_GET_DEFAULT(deployGroup_, "") };
    inline ScaleOutApplicationRequest& setDeployGroup(string deployGroup) { DARABONBA_PTR_SET_VALUE(deployGroup_, deployGroup) };


    // ecuInfo Field Functions 
    bool hasEcuInfo() const { return this->ecuInfo_ != nullptr;};
    void deleteEcuInfo() { this->ecuInfo_ = nullptr;};
    inline string ecuInfo() const { DARABONBA_PTR_GET_DEFAULT(ecuInfo_, "") };
    inline ScaleOutApplicationRequest& setEcuInfo(string ecuInfo) { DARABONBA_PTR_SET_VALUE(ecuInfo_, ecuInfo) };


  protected:
    // The ID of the application that you want to scale out. You can call the ListApplication operation to query the application ID. For more information, see [ListApplication](https://help.aliyun.com/document_detail/149390.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The ID of the instance group where the application you want to scale out is deployed. You can call the QueryApplicationStatus operation to query the group ID. For more information, see [QueryApplicationStatus](https://help.aliyun.com/document_detail/149394.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> deployGroup_ = nullptr;
    // The ID of the elastic compute unit (ECU) that corresponds to the Elastic Compute Service (ECS) instance to be added to the instance group for scale-out. You can call the ListScaleOutEcu operation to query the ECU ID. For more information, see [ListScaleOutEcu](https://help.aliyun.com/document_detail/149371.html). Separate multiple ECU IDs with commas (,).
    // 
    // This parameter is required.
    std::shared_ptr<string> ecuInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
