// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWAITINGROOMPREVIEWPAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETWAITINGROOMPREVIEWPAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetWaitingRoomPreviewPageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWaitingRoomPreviewPageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageUrl, pageUrl_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetWaitingRoomPreviewPageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageUrl, pageUrl_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetWaitingRoomPreviewPageResponseBody() = default ;
    GetWaitingRoomPreviewPageResponseBody(const GetWaitingRoomPreviewPageResponseBody &) = default ;
    GetWaitingRoomPreviewPageResponseBody(GetWaitingRoomPreviewPageResponseBody &&) = default ;
    GetWaitingRoomPreviewPageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWaitingRoomPreviewPageResponseBody() = default ;
    GetWaitingRoomPreviewPageResponseBody& operator=(const GetWaitingRoomPreviewPageResponseBody &) = default ;
    GetWaitingRoomPreviewPageResponseBody& operator=(GetWaitingRoomPreviewPageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageUrl_ == nullptr
        && this->requestId_ == nullptr; };
    // pageUrl Field Functions 
    bool hasPageUrl() const { return this->pageUrl_ != nullptr;};
    void deletePageUrl() { this->pageUrl_ = nullptr;};
    inline string getPageUrl() const { DARABONBA_PTR_GET_DEFAULT(pageUrl_, "") };
    inline GetWaitingRoomPreviewPageResponseBody& setPageUrl(string pageUrl) { DARABONBA_PTR_SET_VALUE(pageUrl_, pageUrl) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetWaitingRoomPreviewPageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The waiting room preview page URL.
    shared_ptr<string> pageUrl_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
