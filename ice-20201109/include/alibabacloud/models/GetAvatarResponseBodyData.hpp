// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAVATARRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETAVATARRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAvatarResponseBodyDataAvatar.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetAvatarResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAvatarResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Avatar, avatar_);
    };
    friend void from_json(const Darabonba::Json& j, GetAvatarResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Avatar, avatar_);
    };
    GetAvatarResponseBodyData() = default ;
    GetAvatarResponseBodyData(const GetAvatarResponseBodyData &) = default ;
    GetAvatarResponseBodyData(GetAvatarResponseBodyData &&) = default ;
    GetAvatarResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAvatarResponseBodyData() = default ;
    GetAvatarResponseBodyData& operator=(const GetAvatarResponseBodyData &) = default ;
    GetAvatarResponseBodyData& operator=(GetAvatarResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->avatar_ == nullptr; };
    // avatar Field Functions 
    bool hasAvatar() const { return this->avatar_ != nullptr;};
    void deleteAvatar() { this->avatar_ = nullptr;};
    inline const Models::GetAvatarResponseBodyDataAvatar & avatar() const { DARABONBA_PTR_GET_CONST(avatar_, Models::GetAvatarResponseBodyDataAvatar) };
    inline Models::GetAvatarResponseBodyDataAvatar avatar() { DARABONBA_PTR_GET(avatar_, Models::GetAvatarResponseBodyDataAvatar) };
    inline GetAvatarResponseBodyData& setAvatar(const Models::GetAvatarResponseBodyDataAvatar & avatar) { DARABONBA_PTR_SET_VALUE(avatar_, avatar) };
    inline GetAvatarResponseBodyData& setAvatar(Models::GetAvatarResponseBodyDataAvatar && avatar) { DARABONBA_PTR_SET_RVALUE(avatar_, avatar) };


  protected:
    // The information about the digital human.
    std::shared_ptr<Models::GetAvatarResponseBodyDataAvatar> avatar_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
