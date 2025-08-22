// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRETCODEAPPBYPIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRETCODEAPPBYPIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetRetcodeAppByPidResponseBodyRetcodeApp.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetRetcodeAppByPidResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRetcodeAppByPidResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RetcodeApp, retcodeApp_);
    };
    friend void from_json(const Darabonba::Json& j, GetRetcodeAppByPidResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RetcodeApp, retcodeApp_);
    };
    GetRetcodeAppByPidResponseBody() = default ;
    GetRetcodeAppByPidResponseBody(const GetRetcodeAppByPidResponseBody &) = default ;
    GetRetcodeAppByPidResponseBody(GetRetcodeAppByPidResponseBody &&) = default ;
    GetRetcodeAppByPidResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRetcodeAppByPidResponseBody() = default ;
    GetRetcodeAppByPidResponseBody& operator=(const GetRetcodeAppByPidResponseBody &) = default ;
    GetRetcodeAppByPidResponseBody& operator=(GetRetcodeAppByPidResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->retcodeApp_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRetcodeAppByPidResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // retcodeApp Field Functions 
    bool hasRetcodeApp() const { return this->retcodeApp_ != nullptr;};
    void deleteRetcodeApp() { this->retcodeApp_ = nullptr;};
    inline const GetRetcodeAppByPidResponseBodyRetcodeApp & retcodeApp() const { DARABONBA_PTR_GET_CONST(retcodeApp_, GetRetcodeAppByPidResponseBodyRetcodeApp) };
    inline GetRetcodeAppByPidResponseBodyRetcodeApp retcodeApp() { DARABONBA_PTR_GET(retcodeApp_, GetRetcodeAppByPidResponseBodyRetcodeApp) };
    inline GetRetcodeAppByPidResponseBody& setRetcodeApp(const GetRetcodeAppByPidResponseBodyRetcodeApp & retcodeApp) { DARABONBA_PTR_SET_VALUE(retcodeApp_, retcodeApp) };
    inline GetRetcodeAppByPidResponseBody& setRetcodeApp(GetRetcodeAppByPidResponseBodyRetcodeApp && retcodeApp) { DARABONBA_PTR_SET_RVALUE(retcodeApp_, retcodeApp) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The returned application data.
    std::shared_ptr<GetRetcodeAppByPidResponseBodyRetcodeApp> retcodeApp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
