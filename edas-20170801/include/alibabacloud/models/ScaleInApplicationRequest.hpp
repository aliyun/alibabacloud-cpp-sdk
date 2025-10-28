// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCALEINAPPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SCALEINAPPLICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ScaleInApplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScaleInApplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(EccInfo, eccInfo_);
      DARABONBA_PTR_TO_JSON(ForceStatus, forceStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ScaleInApplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(EccInfo, eccInfo_);
      DARABONBA_PTR_FROM_JSON(ForceStatus, forceStatus_);
    };
    ScaleInApplicationRequest() = default ;
    ScaleInApplicationRequest(const ScaleInApplicationRequest &) = default ;
    ScaleInApplicationRequest(ScaleInApplicationRequest &&) = default ;
    ScaleInApplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScaleInApplicationRequest() = default ;
    ScaleInApplicationRequest& operator=(const ScaleInApplicationRequest &) = default ;
    ScaleInApplicationRequest& operator=(ScaleInApplicationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->eccInfo_ == nullptr && return this->forceStatus_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ScaleInApplicationRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // eccInfo Field Functions 
    bool hasEccInfo() const { return this->eccInfo_ != nullptr;};
    void deleteEccInfo() { this->eccInfo_ = nullptr;};
    inline string eccInfo() const { DARABONBA_PTR_GET_DEFAULT(eccInfo_, "") };
    inline ScaleInApplicationRequest& setEccInfo(string eccInfo) { DARABONBA_PTR_SET_VALUE(eccInfo_, eccInfo) };


    // forceStatus Field Functions 
    bool hasForceStatus() const { return this->forceStatus_ != nullptr;};
    void deleteForceStatus() { this->forceStatus_ = nullptr;};
    inline bool forceStatus() const { DARABONBA_PTR_GET_DEFAULT(forceStatus_, false) };
    inline ScaleInApplicationRequest& setForceStatus(bool forceStatus) { DARABONBA_PTR_SET_VALUE(forceStatus_, forceStatus) };


  protected:
    // The ID of the application. You can call the ListApplication operation to query the application ID. For more information, see [ListApplication](https://help.aliyun.com/document_detail/149390.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The ID of the elastic compute container (ECC) that corresponds to the Elastic Compute Service (ECS) instance to be removed for the application. Separate multiple ECC IDs with commas (,). You can call the QueryApplicationStatus operation to query the ECC ID. For more information, see [QueryApplicationStatus](https://help.aliyun.com/document_detail/149394.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> eccInfo_ = nullptr;
    // Specifies whether to forcibly unpublish the application from the ECS instance. You need to set this parameter to true only if the ECS instance expires. In normal cases, you do not need to set this parameter to true.
    std::shared_ptr<bool> forceStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
