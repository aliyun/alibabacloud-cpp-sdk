// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPAPPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STOPAPPLICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class StopApplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopApplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(EccInfo, eccInfo_);
    };
    friend void from_json(const Darabonba::Json& j, StopApplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(EccInfo, eccInfo_);
    };
    StopApplicationRequest() = default ;
    StopApplicationRequest(const StopApplicationRequest &) = default ;
    StopApplicationRequest(StopApplicationRequest &&) = default ;
    StopApplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopApplicationRequest() = default ;
    StopApplicationRequest& operator=(const StopApplicationRequest &) = default ;
    StopApplicationRequest& operator=(StopApplicationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->eccInfo_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline StopApplicationRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // eccInfo Field Functions 
    bool hasEccInfo() const { return this->eccInfo_ != nullptr;};
    void deleteEccInfo() { this->eccInfo_ = nullptr;};
    inline string eccInfo() const { DARABONBA_PTR_GET_DEFAULT(eccInfo_, "") };
    inline StopApplicationRequest& setEccInfo(string eccInfo) { DARABONBA_PTR_SET_VALUE(eccInfo_, eccInfo) };


  protected:
    // The ID of the application. You can call the ListApplication operation to query the application ID. For more information, see [ListApplication](https://help.aliyun.com/document_detail/149390.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The ID of the elastic compute container (ECC) that corresponds to the Elastic Compute Service (ECS) instance on which you want to stop the application. You can call the QueryApplicationStatus operation to query the ECC ID. For more information, see [QueryApplicationStatus](https://help.aliyun.com/document_detail/149394.html).
    // 
    // *   If you want to stop the application on multiple ECS instances, separate the ECC IDs with commas (,).
    // *   If you leave this parameter empty, the application will be stopped on all ECS instances.
    std::shared_ptr<string> eccInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
