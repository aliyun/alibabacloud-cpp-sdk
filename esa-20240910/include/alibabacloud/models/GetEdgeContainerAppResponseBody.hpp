// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEDGECONTAINERAPPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETEDGECONTAINERAPPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetEdgeContainerAppResponseBodyApp.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetEdgeContainerAppResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEdgeContainerAppResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(App, app_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetEdgeContainerAppResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(App, app_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetEdgeContainerAppResponseBody() = default ;
    GetEdgeContainerAppResponseBody(const GetEdgeContainerAppResponseBody &) = default ;
    GetEdgeContainerAppResponseBody(GetEdgeContainerAppResponseBody &&) = default ;
    GetEdgeContainerAppResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEdgeContainerAppResponseBody() = default ;
    GetEdgeContainerAppResponseBody& operator=(const GetEdgeContainerAppResponseBody &) = default ;
    GetEdgeContainerAppResponseBody& operator=(GetEdgeContainerAppResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->app_ == nullptr
        && return this->requestId_ == nullptr; };
    // app Field Functions 
    bool hasApp() const { return this->app_ != nullptr;};
    void deleteApp() { this->app_ = nullptr;};
    inline const GetEdgeContainerAppResponseBodyApp & app() const { DARABONBA_PTR_GET_CONST(app_, GetEdgeContainerAppResponseBodyApp) };
    inline GetEdgeContainerAppResponseBodyApp app() { DARABONBA_PTR_GET(app_, GetEdgeContainerAppResponseBodyApp) };
    inline GetEdgeContainerAppResponseBody& setApp(const GetEdgeContainerAppResponseBodyApp & app) { DARABONBA_PTR_SET_VALUE(app_, app) };
    inline GetEdgeContainerAppResponseBody& setApp(GetEdgeContainerAppResponseBodyApp && app) { DARABONBA_PTR_SET_RVALUE(app_, app) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetEdgeContainerAppResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The basic information about the application.
    std::shared_ptr<GetEdgeContainerAppResponseBodyApp> app_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
