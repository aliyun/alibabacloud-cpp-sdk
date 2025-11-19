// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMEDIASTORAGECLASSRESPONSEBODYFORBIDDENLIST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMEDIASTORAGECLASSRESPONSEBODYFORBIDDENLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateMediaStorageClassResponseBodyForbiddenListMediaForbiddenReasonDTO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class UpdateMediaStorageClassResponseBodyForbiddenList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMediaStorageClassResponseBodyForbiddenList& obj) { 
      DARABONBA_PTR_TO_JSON(MediaForbiddenReasonDTO, mediaForbiddenReasonDTO_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMediaStorageClassResponseBodyForbiddenList& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaForbiddenReasonDTO, mediaForbiddenReasonDTO_);
    };
    UpdateMediaStorageClassResponseBodyForbiddenList() = default ;
    UpdateMediaStorageClassResponseBodyForbiddenList(const UpdateMediaStorageClassResponseBodyForbiddenList &) = default ;
    UpdateMediaStorageClassResponseBodyForbiddenList(UpdateMediaStorageClassResponseBodyForbiddenList &&) = default ;
    UpdateMediaStorageClassResponseBodyForbiddenList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMediaStorageClassResponseBodyForbiddenList() = default ;
    UpdateMediaStorageClassResponseBodyForbiddenList& operator=(const UpdateMediaStorageClassResponseBodyForbiddenList &) = default ;
    UpdateMediaStorageClassResponseBodyForbiddenList& operator=(UpdateMediaStorageClassResponseBodyForbiddenList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mediaForbiddenReasonDTO_ == nullptr; };
    // mediaForbiddenReasonDTO Field Functions 
    bool hasMediaForbiddenReasonDTO() const { return this->mediaForbiddenReasonDTO_ != nullptr;};
    void deleteMediaForbiddenReasonDTO() { this->mediaForbiddenReasonDTO_ = nullptr;};
    inline const vector<Models::UpdateMediaStorageClassResponseBodyForbiddenListMediaForbiddenReasonDTO> & mediaForbiddenReasonDTO() const { DARABONBA_PTR_GET_CONST(mediaForbiddenReasonDTO_, vector<Models::UpdateMediaStorageClassResponseBodyForbiddenListMediaForbiddenReasonDTO>) };
    inline vector<Models::UpdateMediaStorageClassResponseBodyForbiddenListMediaForbiddenReasonDTO> mediaForbiddenReasonDTO() { DARABONBA_PTR_GET(mediaForbiddenReasonDTO_, vector<Models::UpdateMediaStorageClassResponseBodyForbiddenListMediaForbiddenReasonDTO>) };
    inline UpdateMediaStorageClassResponseBodyForbiddenList& setMediaForbiddenReasonDTO(const vector<Models::UpdateMediaStorageClassResponseBodyForbiddenListMediaForbiddenReasonDTO> & mediaForbiddenReasonDTO) { DARABONBA_PTR_SET_VALUE(mediaForbiddenReasonDTO_, mediaForbiddenReasonDTO) };
    inline UpdateMediaStorageClassResponseBodyForbiddenList& setMediaForbiddenReasonDTO(vector<Models::UpdateMediaStorageClassResponseBodyForbiddenListMediaForbiddenReasonDTO> && mediaForbiddenReasonDTO) { DARABONBA_PTR_SET_RVALUE(mediaForbiddenReasonDTO_, mediaForbiddenReasonDTO) };


  protected:
    std::shared_ptr<vector<Models::UpdateMediaStorageClassResponseBodyForbiddenListMediaForbiddenReasonDTO>> mediaForbiddenReasonDTO_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
