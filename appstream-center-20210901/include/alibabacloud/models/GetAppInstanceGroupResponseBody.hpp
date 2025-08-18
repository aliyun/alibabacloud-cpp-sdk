// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPINSTANCEGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPPINSTANCEGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAppInstanceGroupResponseBodyAppInstanceGroupModels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class GetAppInstanceGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppInstanceGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppInstanceGroupModels, appInstanceGroupModels_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAppInstanceGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupModels, appInstanceGroupModels_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAppInstanceGroupResponseBody() = default ;
    GetAppInstanceGroupResponseBody(const GetAppInstanceGroupResponseBody &) = default ;
    GetAppInstanceGroupResponseBody(GetAppInstanceGroupResponseBody &&) = default ;
    GetAppInstanceGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppInstanceGroupResponseBody() = default ;
    GetAppInstanceGroupResponseBody& operator=(const GetAppInstanceGroupResponseBody &) = default ;
    GetAppInstanceGroupResponseBody& operator=(GetAppInstanceGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appInstanceGroupModels_ != nullptr
        && this->requestId_ != nullptr; };
    // appInstanceGroupModels Field Functions 
    bool hasAppInstanceGroupModels() const { return this->appInstanceGroupModels_ != nullptr;};
    void deleteAppInstanceGroupModels() { this->appInstanceGroupModels_ = nullptr;};
    inline const GetAppInstanceGroupResponseBodyAppInstanceGroupModels & appInstanceGroupModels() const { DARABONBA_PTR_GET_CONST(appInstanceGroupModels_, GetAppInstanceGroupResponseBodyAppInstanceGroupModels) };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModels appInstanceGroupModels() { DARABONBA_PTR_GET(appInstanceGroupModels_, GetAppInstanceGroupResponseBodyAppInstanceGroupModels) };
    inline GetAppInstanceGroupResponseBody& setAppInstanceGroupModels(const GetAppInstanceGroupResponseBodyAppInstanceGroupModels & appInstanceGroupModels) { DARABONBA_PTR_SET_VALUE(appInstanceGroupModels_, appInstanceGroupModels) };
    inline GetAppInstanceGroupResponseBody& setAppInstanceGroupModels(GetAppInstanceGroupResponseBodyAppInstanceGroupModels && appInstanceGroupModels) { DARABONBA_PTR_SET_RVALUE(appInstanceGroupModels_, appInstanceGroupModels) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAppInstanceGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // AppInstanceGroupModels
    std::shared_ptr<GetAppInstanceGroupResponseBodyAppInstanceGroupModels> appInstanceGroupModels_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
