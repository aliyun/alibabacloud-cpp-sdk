// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACTIVEINTERACTIONCREATERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_ACTIVEINTERACTIONCREATERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BailianModelOnChip20240816
{
namespace Models
{
  class ActiveInteractionCreateResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ActiveInteractionCreateResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(gesture, gesture_);
      DARABONBA_PTR_TO_JSON(person, person_);
      DARABONBA_PTR_TO_JSON(scene, scene_);
    };
    friend void from_json(const Darabonba::Json& j, ActiveInteractionCreateResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(gesture, gesture_);
      DARABONBA_PTR_FROM_JSON(person, person_);
      DARABONBA_PTR_FROM_JSON(scene, scene_);
    };
    ActiveInteractionCreateResponseBodyData() = default ;
    ActiveInteractionCreateResponseBodyData(const ActiveInteractionCreateResponseBodyData &) = default ;
    ActiveInteractionCreateResponseBodyData(ActiveInteractionCreateResponseBodyData &&) = default ;
    ActiveInteractionCreateResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ActiveInteractionCreateResponseBodyData() = default ;
    ActiveInteractionCreateResponseBodyData& operator=(const ActiveInteractionCreateResponseBodyData &) = default ;
    ActiveInteractionCreateResponseBodyData& operator=(ActiveInteractionCreateResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gesture_ == nullptr
        && return this->person_ == nullptr && return this->scene_ == nullptr; };
    // gesture Field Functions 
    bool hasGesture() const { return this->gesture_ != nullptr;};
    void deleteGesture() { this->gesture_ = nullptr;};
    inline string gesture() const { DARABONBA_PTR_GET_DEFAULT(gesture_, "") };
    inline ActiveInteractionCreateResponseBodyData& setGesture(string gesture) { DARABONBA_PTR_SET_VALUE(gesture_, gesture) };


    // person Field Functions 
    bool hasPerson() const { return this->person_ != nullptr;};
    void deletePerson() { this->person_ = nullptr;};
    inline string person() const { DARABONBA_PTR_GET_DEFAULT(person_, "") };
    inline ActiveInteractionCreateResponseBodyData& setPerson(string person) { DARABONBA_PTR_SET_VALUE(person_, person) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string scene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline ActiveInteractionCreateResponseBodyData& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


  protected:
    std::shared_ptr<string> gesture_ = nullptr;
    std::shared_ptr<string> person_ = nullptr;
    std::shared_ptr<string> scene_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BailianModelOnChip20240816
#endif
