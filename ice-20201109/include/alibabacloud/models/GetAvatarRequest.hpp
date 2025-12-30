// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAVATARREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAVATARREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetAvatarRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAvatarRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AvatarId, avatarId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAvatarRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AvatarId, avatarId_);
    };
    GetAvatarRequest() = default ;
    GetAvatarRequest(const GetAvatarRequest &) = default ;
    GetAvatarRequest(GetAvatarRequest &&) = default ;
    GetAvatarRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAvatarRequest() = default ;
    GetAvatarRequest& operator=(const GetAvatarRequest &) = default ;
    GetAvatarRequest& operator=(GetAvatarRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->avatarId_ == nullptr; };
    // avatarId Field Functions 
    bool hasAvatarId() const { return this->avatarId_ != nullptr;};
    void deleteAvatarId() { this->avatarId_ = nullptr;};
    inline string getAvatarId() const { DARABONBA_PTR_GET_DEFAULT(avatarId_, "") };
    inline GetAvatarRequest& setAvatarId(string avatarId) { DARABONBA_PTR_SET_VALUE(avatarId_, avatarId) };


  protected:
    // *   The ID of the digital human.
    // 
    // This parameter is required.
    shared_ptr<string> avatarId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
