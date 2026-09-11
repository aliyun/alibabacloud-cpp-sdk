// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMAINTAINWINDOWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMAINTAINWINDOWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MaintainWindowForView.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetMaintainWindowResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMaintainWindowResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(maintainWindow, maintainWindow_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMaintainWindowResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(maintainWindow, maintainWindow_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetMaintainWindowResponseBody() = default ;
    GetMaintainWindowResponseBody(const GetMaintainWindowResponseBody &) = default ;
    GetMaintainWindowResponseBody(GetMaintainWindowResponseBody &&) = default ;
    GetMaintainWindowResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMaintainWindowResponseBody() = default ;
    GetMaintainWindowResponseBody& operator=(const GetMaintainWindowResponseBody &) = default ;
    GetMaintainWindowResponseBody& operator=(GetMaintainWindowResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maintainWindow_ == nullptr
        && this->requestId_ == nullptr; };
    // maintainWindow Field Functions 
    bool hasMaintainWindow() const { return this->maintainWindow_ != nullptr;};
    void deleteMaintainWindow() { this->maintainWindow_ = nullptr;};
    inline const MaintainWindowForView & getMaintainWindow() const { DARABONBA_PTR_GET_CONST(maintainWindow_, MaintainWindowForView) };
    inline MaintainWindowForView getMaintainWindow() { DARABONBA_PTR_GET(maintainWindow_, MaintainWindowForView) };
    inline GetMaintainWindowResponseBody& setMaintainWindow(const MaintainWindowForView & maintainWindow) { DARABONBA_PTR_SET_VALUE(maintainWindow_, maintainWindow) };
    inline GetMaintainWindowResponseBody& setMaintainWindow(MaintainWindowForView && maintainWindow) { DARABONBA_PTR_SET_RVALUE(maintainWindow_, maintainWindow) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMaintainWindowResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<MaintainWindowForView> maintainWindow_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
