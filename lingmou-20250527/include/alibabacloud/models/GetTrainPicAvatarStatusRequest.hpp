// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRAINPICAVATARSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTRAINPICAVATARSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LingMou20250527
{
namespace Models
{
  class GetTrainPicAvatarStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTrainPicAvatarStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(avatarId, avatarId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTrainPicAvatarStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(avatarId, avatarId_);
    };
    GetTrainPicAvatarStatusRequest() = default ;
    GetTrainPicAvatarStatusRequest(const GetTrainPicAvatarStatusRequest &) = default ;
    GetTrainPicAvatarStatusRequest(GetTrainPicAvatarStatusRequest &&) = default ;
    GetTrainPicAvatarStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTrainPicAvatarStatusRequest() = default ;
    GetTrainPicAvatarStatusRequest& operator=(const GetTrainPicAvatarStatusRequest &) = default ;
    GetTrainPicAvatarStatusRequest& operator=(GetTrainPicAvatarStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->avatarId_ == nullptr; };
    // avatarId Field Functions 
    bool hasAvatarId() const { return this->avatarId_ != nullptr;};
    void deleteAvatarId() { this->avatarId_ = nullptr;};
    inline string avatarId() const { DARABONBA_PTR_GET_DEFAULT(avatarId_, "") };
    inline GetTrainPicAvatarStatusRequest& setAvatarId(string avatarId) { DARABONBA_PTR_SET_VALUE(avatarId_, avatarId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> avatarId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LingMou20250527
#endif
