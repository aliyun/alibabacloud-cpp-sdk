// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESTOREMEDIARESPONSEBODYFORBIDDENLISTMEDIAFORBIDDENREASONDTO_HPP_
#define ALIBABACLOUD_MODELS_RESTOREMEDIARESPONSEBODYFORBIDDENLISTMEDIAFORBIDDENREASONDTO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class RestoreMediaResponseBodyForbiddenListMediaForbiddenReasonDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RestoreMediaResponseBodyForbiddenListMediaForbiddenReasonDTO& obj) { 
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
    };
    friend void from_json(const Darabonba::Json& j, RestoreMediaResponseBodyForbiddenListMediaForbiddenReasonDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
    };
    RestoreMediaResponseBodyForbiddenListMediaForbiddenReasonDTO() = default ;
    RestoreMediaResponseBodyForbiddenListMediaForbiddenReasonDTO(const RestoreMediaResponseBodyForbiddenListMediaForbiddenReasonDTO &) = default ;
    RestoreMediaResponseBodyForbiddenListMediaForbiddenReasonDTO(RestoreMediaResponseBodyForbiddenListMediaForbiddenReasonDTO &&) = default ;
    RestoreMediaResponseBodyForbiddenListMediaForbiddenReasonDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RestoreMediaResponseBodyForbiddenListMediaForbiddenReasonDTO() = default ;
    RestoreMediaResponseBodyForbiddenListMediaForbiddenReasonDTO& operator=(const RestoreMediaResponseBodyForbiddenListMediaForbiddenReasonDTO &) = default ;
    RestoreMediaResponseBodyForbiddenListMediaForbiddenReasonDTO& operator=(RestoreMediaResponseBodyForbiddenListMediaForbiddenReasonDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mediaId_ != nullptr
        && this->reason_ != nullptr; };
    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline RestoreMediaResponseBodyForbiddenListMediaForbiddenReasonDTO& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline RestoreMediaResponseBodyForbiddenListMediaForbiddenReasonDTO& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


  protected:
    // The ID of the media asset.
    std::shared_ptr<string> mediaId_ = nullptr;
    // The reason for the failure.
    std::shared_ptr<string> reason_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
