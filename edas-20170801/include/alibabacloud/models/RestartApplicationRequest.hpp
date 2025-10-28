// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESTARTAPPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESTARTAPPLICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class RestartApplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RestartApplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(EccInfo, eccInfo_);
    };
    friend void from_json(const Darabonba::Json& j, RestartApplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(EccInfo, eccInfo_);
    };
    RestartApplicationRequest() = default ;
    RestartApplicationRequest(const RestartApplicationRequest &) = default ;
    RestartApplicationRequest(RestartApplicationRequest &&) = default ;
    RestartApplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RestartApplicationRequest() = default ;
    RestartApplicationRequest& operator=(const RestartApplicationRequest &) = default ;
    RestartApplicationRequest& operator=(RestartApplicationRequest &&) = default ;
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
    inline RestartApplicationRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // eccInfo Field Functions 
    bool hasEccInfo() const { return this->eccInfo_ != nullptr;};
    void deleteEccInfo() { this->eccInfo_ = nullptr;};
    inline string eccInfo() const { DARABONBA_PTR_GET_DEFAULT(eccInfo_, "") };
    inline RestartApplicationRequest& setEccInfo(string eccInfo) { DARABONBA_PTR_SET_VALUE(eccInfo_, eccInfo) };


  protected:
    // The ID of the application. You can call the ListApplication operation to query the application ID. For more information, see [ListApplication](https://help.aliyun.com/document_detail/149390.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The ID of the elastic compute container (ECC) that corresponds to the ECS instance on which you want to restart the application. You can call the QueryApplicationStatus operation to query the ECC ID. For more information, see [QueryApplicationStatus](https://help.aliyun.com/document_detail/149394.html).
    // 
    // *   Separate multiple ECC IDs with commas (,).
    // *   If you leave this parameter empty, the application will be restarted on all the ECS instances deployed with the application.
    std::shared_ptr<string> eccInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
