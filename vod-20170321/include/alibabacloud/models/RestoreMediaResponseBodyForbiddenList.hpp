// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESTOREMEDIARESPONSEBODYFORBIDDENLIST_HPP_
#define ALIBABACLOUD_MODELS_RESTOREMEDIARESPONSEBODYFORBIDDENLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RestoreMediaResponseBodyForbiddenListMediaForbiddenReasonDTO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class RestoreMediaResponseBodyForbiddenList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RestoreMediaResponseBodyForbiddenList& obj) { 
      DARABONBA_PTR_TO_JSON(MediaForbiddenReasonDTO, mediaForbiddenReasonDTO_);
    };
    friend void from_json(const Darabonba::Json& j, RestoreMediaResponseBodyForbiddenList& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaForbiddenReasonDTO, mediaForbiddenReasonDTO_);
    };
    RestoreMediaResponseBodyForbiddenList() = default ;
    RestoreMediaResponseBodyForbiddenList(const RestoreMediaResponseBodyForbiddenList &) = default ;
    RestoreMediaResponseBodyForbiddenList(RestoreMediaResponseBodyForbiddenList &&) = default ;
    RestoreMediaResponseBodyForbiddenList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RestoreMediaResponseBodyForbiddenList() = default ;
    RestoreMediaResponseBodyForbiddenList& operator=(const RestoreMediaResponseBodyForbiddenList &) = default ;
    RestoreMediaResponseBodyForbiddenList& operator=(RestoreMediaResponseBodyForbiddenList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mediaForbiddenReasonDTO_ != nullptr; };
    // mediaForbiddenReasonDTO Field Functions 
    bool hasMediaForbiddenReasonDTO() const { return this->mediaForbiddenReasonDTO_ != nullptr;};
    void deleteMediaForbiddenReasonDTO() { this->mediaForbiddenReasonDTO_ = nullptr;};
    inline const vector<Models::RestoreMediaResponseBodyForbiddenListMediaForbiddenReasonDTO> & mediaForbiddenReasonDTO() const { DARABONBA_PTR_GET_CONST(mediaForbiddenReasonDTO_, vector<Models::RestoreMediaResponseBodyForbiddenListMediaForbiddenReasonDTO>) };
    inline vector<Models::RestoreMediaResponseBodyForbiddenListMediaForbiddenReasonDTO> mediaForbiddenReasonDTO() { DARABONBA_PTR_GET(mediaForbiddenReasonDTO_, vector<Models::RestoreMediaResponseBodyForbiddenListMediaForbiddenReasonDTO>) };
    inline RestoreMediaResponseBodyForbiddenList& setMediaForbiddenReasonDTO(const vector<Models::RestoreMediaResponseBodyForbiddenListMediaForbiddenReasonDTO> & mediaForbiddenReasonDTO) { DARABONBA_PTR_SET_VALUE(mediaForbiddenReasonDTO_, mediaForbiddenReasonDTO) };
    inline RestoreMediaResponseBodyForbiddenList& setMediaForbiddenReasonDTO(vector<Models::RestoreMediaResponseBodyForbiddenListMediaForbiddenReasonDTO> && mediaForbiddenReasonDTO) { DARABONBA_PTR_SET_RVALUE(mediaForbiddenReasonDTO_, mediaForbiddenReasonDTO) };


  protected:
    std::shared_ptr<vector<Models::RestoreMediaResponseBodyForbiddenListMediaForbiddenReasonDTO>> mediaForbiddenReasonDTO_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
