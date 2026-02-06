// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPINFOSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAPPINFOSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetAppInfosRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppInfosRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppIds, appIds_);
    };
    friend void from_json(const Darabonba::Json& j, GetAppInfosRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppIds, appIds_);
    };
    GetAppInfosRequest() = default ;
    GetAppInfosRequest(const GetAppInfosRequest &) = default ;
    GetAppInfosRequest(GetAppInfosRequest &&) = default ;
    GetAppInfosRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppInfosRequest() = default ;
    GetAppInfosRequest& operator=(const GetAppInfosRequest &) = default ;
    GetAppInfosRequest& operator=(GetAppInfosRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appIds_ == nullptr; };
    // appIds Field Functions 
    bool hasAppIds() const { return this->appIds_ != nullptr;};
    void deleteAppIds() { this->appIds_ = nullptr;};
    inline string getAppIds() const { DARABONBA_PTR_GET_DEFAULT(appIds_, "") };
    inline GetAppInfosRequest& setAppIds(string appIds) { DARABONBA_PTR_SET_VALUE(appIds_, appIds) };


  protected:
    // The IDs of applications. You can obtain application IDs from the response to the [CreateAppInfo](https://help.aliyun.com/document_detail/113266.html) or [ListAppInfo](https://help.aliyun.com/document_detail/114000.html) operation.
    // 
    // *   You can specify a maximum of 10 application IDs.
    // *   Separate application IDs with commas (,).
    // 
    // This parameter is required.
    shared_ptr<string> appIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
