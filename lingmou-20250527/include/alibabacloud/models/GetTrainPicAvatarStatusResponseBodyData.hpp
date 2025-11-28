// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRAINPICAVATARSTATUSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETTRAINPICAVATARSTATUSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LingMou20250527
{
namespace Models
{
  class GetTrainPicAvatarStatusResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTrainPicAvatarStatusResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(avatarId, avatarId_);
      DARABONBA_PTR_TO_JSON(previewURL, previewURL_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetTrainPicAvatarStatusResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(avatarId, avatarId_);
      DARABONBA_PTR_FROM_JSON(previewURL, previewURL_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    GetTrainPicAvatarStatusResponseBodyData() = default ;
    GetTrainPicAvatarStatusResponseBodyData(const GetTrainPicAvatarStatusResponseBodyData &) = default ;
    GetTrainPicAvatarStatusResponseBodyData(GetTrainPicAvatarStatusResponseBodyData &&) = default ;
    GetTrainPicAvatarStatusResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTrainPicAvatarStatusResponseBodyData() = default ;
    GetTrainPicAvatarStatusResponseBodyData& operator=(const GetTrainPicAvatarStatusResponseBodyData &) = default ;
    GetTrainPicAvatarStatusResponseBodyData& operator=(GetTrainPicAvatarStatusResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->avatarId_ == nullptr
        && return this->previewURL_ == nullptr && return this->status_ == nullptr; };
    // avatarId Field Functions 
    bool hasAvatarId() const { return this->avatarId_ != nullptr;};
    void deleteAvatarId() { this->avatarId_ = nullptr;};
    inline string avatarId() const { DARABONBA_PTR_GET_DEFAULT(avatarId_, "") };
    inline GetTrainPicAvatarStatusResponseBodyData& setAvatarId(string avatarId) { DARABONBA_PTR_SET_VALUE(avatarId_, avatarId) };


    // previewURL Field Functions 
    bool hasPreviewURL() const { return this->previewURL_ != nullptr;};
    void deletePreviewURL() { this->previewURL_ = nullptr;};
    inline string previewURL() const { DARABONBA_PTR_GET_DEFAULT(previewURL_, "") };
    inline GetTrainPicAvatarStatusResponseBodyData& setPreviewURL(string previewURL) { DARABONBA_PTR_SET_VALUE(previewURL_, previewURL) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetTrainPicAvatarStatusResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> avatarId_ = nullptr;
    std::shared_ptr<string> previewURL_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LingMou20250527
#endif
