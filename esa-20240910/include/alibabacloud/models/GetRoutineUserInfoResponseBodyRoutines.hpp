// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETROUTINEUSERINFORESPONSEBODYROUTINES_HPP_
#define ALIBABACLOUD_MODELS_GETROUTINEUSERINFORESPONSEBODYROUTINES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetRoutineUserInfoResponseBodyRoutines : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRoutineUserInfoResponseBodyRoutines& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(RoutineName, routineName_);
    };
    friend void from_json(const Darabonba::Json& j, GetRoutineUserInfoResponseBodyRoutines& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(RoutineName, routineName_);
    };
    GetRoutineUserInfoResponseBodyRoutines() = default ;
    GetRoutineUserInfoResponseBodyRoutines(const GetRoutineUserInfoResponseBodyRoutines &) = default ;
    GetRoutineUserInfoResponseBodyRoutines(GetRoutineUserInfoResponseBodyRoutines &&) = default ;
    GetRoutineUserInfoResponseBodyRoutines(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRoutineUserInfoResponseBodyRoutines() = default ;
    GetRoutineUserInfoResponseBodyRoutines& operator=(const GetRoutineUserInfoResponseBodyRoutines &) = default ;
    GetRoutineUserInfoResponseBodyRoutines& operator=(GetRoutineUserInfoResponseBodyRoutines &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->description_ != nullptr && this->routineName_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetRoutineUserInfoResponseBodyRoutines& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetRoutineUserInfoResponseBodyRoutines& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // routineName Field Functions 
    bool hasRoutineName() const { return this->routineName_ != nullptr;};
    void deleteRoutineName() { this->routineName_ = nullptr;};
    inline string routineName() const { DARABONBA_PTR_GET_DEFAULT(routineName_, "") };
    inline GetRoutineUserInfoResponseBodyRoutines& setRoutineName(string routineName) { DARABONBA_PTR_SET_VALUE(routineName_, routineName) };


  protected:
    // The time when the routine was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The routine description, which is Base64-encoded.
    std::shared_ptr<string> description_ = nullptr;
    // The routine name.
    std::shared_ptr<string> routineName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
