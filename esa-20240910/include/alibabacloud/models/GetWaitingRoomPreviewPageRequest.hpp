// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWAITINGROOMPREVIEWPAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETWAITINGROOMPREVIEWPAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetWaitingRoomPreviewPageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWaitingRoomPreviewPageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomPageHtml, customPageHtml_);
    };
    friend void from_json(const Darabonba::Json& j, GetWaitingRoomPreviewPageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomPageHtml, customPageHtml_);
    };
    GetWaitingRoomPreviewPageRequest() = default ;
    GetWaitingRoomPreviewPageRequest(const GetWaitingRoomPreviewPageRequest &) = default ;
    GetWaitingRoomPreviewPageRequest(GetWaitingRoomPreviewPageRequest &&) = default ;
    GetWaitingRoomPreviewPageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWaitingRoomPreviewPageRequest() = default ;
    GetWaitingRoomPreviewPageRequest& operator=(const GetWaitingRoomPreviewPageRequest &) = default ;
    GetWaitingRoomPreviewPageRequest& operator=(GetWaitingRoomPreviewPageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customPageHtml_ == nullptr; };
    // customPageHtml Field Functions 
    bool hasCustomPageHtml() const { return this->customPageHtml_ != nullptr;};
    void deleteCustomPageHtml() { this->customPageHtml_ = nullptr;};
    inline string getCustomPageHtml() const { DARABONBA_PTR_GET_DEFAULT(customPageHtml_, "") };
    inline GetWaitingRoomPreviewPageRequest& setCustomPageHtml(string customPageHtml) { DARABONBA_PTR_SET_VALUE(customPageHtml_, customPageHtml) };


  protected:
    // The custom waiting room page content. This parameter is required when the waiting room type is custom. The content must be URL-encoded.
    // 
    // This parameter is required.
    shared_ptr<string> customPageHtml_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
