// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateAppResponseBodyAppInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mhub20170825
{
namespace Models
{
  class CreateAppResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppInfo, appInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInfo, appInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateAppResponseBody() = default ;
    CreateAppResponseBody(const CreateAppResponseBody &) = default ;
    CreateAppResponseBody(CreateAppResponseBody &&) = default ;
    CreateAppResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppResponseBody() = default ;
    CreateAppResponseBody& operator=(const CreateAppResponseBody &) = default ;
    CreateAppResponseBody& operator=(CreateAppResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appInfo_ != nullptr
        && this->requestId_ != nullptr; };
    // appInfo Field Functions 
    bool hasAppInfo() const { return this->appInfo_ != nullptr;};
    void deleteAppInfo() { this->appInfo_ = nullptr;};
    inline const CreateAppResponseBodyAppInfo & appInfo() const { DARABONBA_PTR_GET_CONST(appInfo_, CreateAppResponseBodyAppInfo) };
    inline CreateAppResponseBodyAppInfo appInfo() { DARABONBA_PTR_GET(appInfo_, CreateAppResponseBodyAppInfo) };
    inline CreateAppResponseBody& setAppInfo(const CreateAppResponseBodyAppInfo & appInfo) { DARABONBA_PTR_SET_VALUE(appInfo_, appInfo) };
    inline CreateAppResponseBody& setAppInfo(CreateAppResponseBodyAppInfo && appInfo) { DARABONBA_PTR_SET_RVALUE(appInfo_, appInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAppResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<CreateAppResponseBodyAppInfo> appInfo_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mhub20170825
#endif
