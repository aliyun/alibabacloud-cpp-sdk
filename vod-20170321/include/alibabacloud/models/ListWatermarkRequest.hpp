// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWATERMARKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTWATERMARKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListWatermarkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWatermarkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
    };
    friend void from_json(const Darabonba::Json& j, ListWatermarkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
    };
    ListWatermarkRequest() = default ;
    ListWatermarkRequest(const ListWatermarkRequest &) = default ;
    ListWatermarkRequest(ListWatermarkRequest &&) = default ;
    ListWatermarkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWatermarkRequest() = default ;
    ListWatermarkRequest& operator=(const ListWatermarkRequest &) = default ;
    ListWatermarkRequest& operator=(ListWatermarkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListWatermarkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


  protected:
    // The application ID. Default value: **app-1000000**.
    // 
    // If the multi-application service is enabled, you can specify an application ID to query watermark templates under the specified application. If you do not specify this parameter, watermark templates under all applications are returned. For more information, see [Multi-application](https://help.aliyun.com/document_detail/113600.html).
    shared_ptr<string> appId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
