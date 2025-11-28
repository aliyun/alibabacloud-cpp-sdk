// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRAINPICAVATARRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATETRAINPICAVATARRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LingMou20250527
{
namespace Models
{
  class CreateTrainPicAvatarResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTrainPicAvatarResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(avatarId, avatarId_);
      DARABONBA_PTR_TO_JSON(expectedCompletionTime, expectedCompletionTime_);
      DARABONBA_PTR_TO_JSON(pass, pass_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTrainPicAvatarResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(avatarId, avatarId_);
      DARABONBA_PTR_FROM_JSON(expectedCompletionTime, expectedCompletionTime_);
      DARABONBA_PTR_FROM_JSON(pass, pass_);
    };
    CreateTrainPicAvatarResponseBodyData() = default ;
    CreateTrainPicAvatarResponseBodyData(const CreateTrainPicAvatarResponseBodyData &) = default ;
    CreateTrainPicAvatarResponseBodyData(CreateTrainPicAvatarResponseBodyData &&) = default ;
    CreateTrainPicAvatarResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTrainPicAvatarResponseBodyData() = default ;
    CreateTrainPicAvatarResponseBodyData& operator=(const CreateTrainPicAvatarResponseBodyData &) = default ;
    CreateTrainPicAvatarResponseBodyData& operator=(CreateTrainPicAvatarResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->avatarId_ == nullptr
        && return this->expectedCompletionTime_ == nullptr && return this->pass_ == nullptr; };
    // avatarId Field Functions 
    bool hasAvatarId() const { return this->avatarId_ != nullptr;};
    void deleteAvatarId() { this->avatarId_ = nullptr;};
    inline string avatarId() const { DARABONBA_PTR_GET_DEFAULT(avatarId_, "") };
    inline CreateTrainPicAvatarResponseBodyData& setAvatarId(string avatarId) { DARABONBA_PTR_SET_VALUE(avatarId_, avatarId) };


    // expectedCompletionTime Field Functions 
    bool hasExpectedCompletionTime() const { return this->expectedCompletionTime_ != nullptr;};
    void deleteExpectedCompletionTime() { this->expectedCompletionTime_ = nullptr;};
    inline int32_t expectedCompletionTime() const { DARABONBA_PTR_GET_DEFAULT(expectedCompletionTime_, 0) };
    inline CreateTrainPicAvatarResponseBodyData& setExpectedCompletionTime(int32_t expectedCompletionTime) { DARABONBA_PTR_SET_VALUE(expectedCompletionTime_, expectedCompletionTime) };


    // pass Field Functions 
    bool hasPass() const { return this->pass_ != nullptr;};
    void deletePass() { this->pass_ = nullptr;};
    inline bool pass() const { DARABONBA_PTR_GET_DEFAULT(pass_, false) };
    inline CreateTrainPicAvatarResponseBodyData& setPass(bool pass) { DARABONBA_PTR_SET_VALUE(pass_, pass) };


  protected:
    std::shared_ptr<string> avatarId_ = nullptr;
    std::shared_ptr<int32_t> expectedCompletionTime_ = nullptr;
    std::shared_ptr<bool> pass_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LingMou20250527
#endif
