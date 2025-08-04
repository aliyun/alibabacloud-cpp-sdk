// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDESKTOPGROUPDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDESKTOPGROUPDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDesktopGroupDetailResponseBodyDesktops.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class GetDesktopGroupDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDesktopGroupDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Desktops, desktops_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDesktopGroupDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Desktops, desktops_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDesktopGroupDetailResponseBody() = default ;
    GetDesktopGroupDetailResponseBody(const GetDesktopGroupDetailResponseBody &) = default ;
    GetDesktopGroupDetailResponseBody(GetDesktopGroupDetailResponseBody &&) = default ;
    GetDesktopGroupDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDesktopGroupDetailResponseBody() = default ;
    GetDesktopGroupDetailResponseBody& operator=(const GetDesktopGroupDetailResponseBody &) = default ;
    GetDesktopGroupDetailResponseBody& operator=(GetDesktopGroupDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->desktops_ != nullptr
        && this->requestId_ != nullptr; };
    // desktops Field Functions 
    bool hasDesktops() const { return this->desktops_ != nullptr;};
    void deleteDesktops() { this->desktops_ = nullptr;};
    inline const GetDesktopGroupDetailResponseBodyDesktops & desktops() const { DARABONBA_PTR_GET_CONST(desktops_, GetDesktopGroupDetailResponseBodyDesktops) };
    inline GetDesktopGroupDetailResponseBodyDesktops desktops() { DARABONBA_PTR_GET(desktops_, GetDesktopGroupDetailResponseBodyDesktops) };
    inline GetDesktopGroupDetailResponseBody& setDesktops(const GetDesktopGroupDetailResponseBodyDesktops & desktops) { DARABONBA_PTR_SET_VALUE(desktops_, desktops) };
    inline GetDesktopGroupDetailResponseBody& setDesktops(GetDesktopGroupDetailResponseBodyDesktops && desktops) { DARABONBA_PTR_SET_RVALUE(desktops_, desktops) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDesktopGroupDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The cloud computers within the share.
    std::shared_ptr<GetDesktopGroupDetailResponseBodyDesktops> desktops_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
