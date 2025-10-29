// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENOTRAINPICAVATARRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATENOTRAINPICAVATARRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LingMou20250527
{
namespace Models
{
  class CreateNoTrainPicAvatarResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNoTrainPicAvatarResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(avatarId, avatarId_);
      DARABONBA_PTR_TO_JSON(pass, pass_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNoTrainPicAvatarResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(avatarId, avatarId_);
      DARABONBA_PTR_FROM_JSON(pass, pass_);
    };
    CreateNoTrainPicAvatarResponseBodyData() = default ;
    CreateNoTrainPicAvatarResponseBodyData(const CreateNoTrainPicAvatarResponseBodyData &) = default ;
    CreateNoTrainPicAvatarResponseBodyData(CreateNoTrainPicAvatarResponseBodyData &&) = default ;
    CreateNoTrainPicAvatarResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNoTrainPicAvatarResponseBodyData() = default ;
    CreateNoTrainPicAvatarResponseBodyData& operator=(const CreateNoTrainPicAvatarResponseBodyData &) = default ;
    CreateNoTrainPicAvatarResponseBodyData& operator=(CreateNoTrainPicAvatarResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->avatarId_ == nullptr
        && return this->pass_ == nullptr; };
    // avatarId Field Functions 
    bool hasAvatarId() const { return this->avatarId_ != nullptr;};
    void deleteAvatarId() { this->avatarId_ = nullptr;};
    inline string avatarId() const { DARABONBA_PTR_GET_DEFAULT(avatarId_, "") };
    inline CreateNoTrainPicAvatarResponseBodyData& setAvatarId(string avatarId) { DARABONBA_PTR_SET_VALUE(avatarId_, avatarId) };


    // pass Field Functions 
    bool hasPass() const { return this->pass_ != nullptr;};
    void deletePass() { this->pass_ = nullptr;};
    inline bool pass() const { DARABONBA_PTR_GET_DEFAULT(pass_, false) };
    inline CreateNoTrainPicAvatarResponseBodyData& setPass(bool pass) { DARABONBA_PTR_SET_VALUE(pass_, pass) };


  protected:
    std::shared_ptr<string> avatarId_ = nullptr;
    std::shared_ptr<bool> pass_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LingMou20250527
#endif
