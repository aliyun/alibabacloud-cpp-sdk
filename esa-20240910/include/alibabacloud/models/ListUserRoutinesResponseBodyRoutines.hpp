// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERROUTINESRESPONSEBODYROUTINES_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERROUTINESRESPONSEBODYROUTINES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListUserRoutinesResponseBodyRoutines : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserRoutinesResponseBodyRoutines& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DefaultRelatedRecord, defaultRelatedRecord_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(HasAssets, hasAssets_);
      DARABONBA_PTR_TO_JSON(RoutineName, routineName_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserRoutinesResponseBodyRoutines& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DefaultRelatedRecord, defaultRelatedRecord_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(HasAssets, hasAssets_);
      DARABONBA_PTR_FROM_JSON(RoutineName, routineName_);
    };
    ListUserRoutinesResponseBodyRoutines() = default ;
    ListUserRoutinesResponseBodyRoutines(const ListUserRoutinesResponseBodyRoutines &) = default ;
    ListUserRoutinesResponseBodyRoutines(ListUserRoutinesResponseBodyRoutines &&) = default ;
    ListUserRoutinesResponseBodyRoutines(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserRoutinesResponseBodyRoutines() = default ;
    ListUserRoutinesResponseBodyRoutines& operator=(const ListUserRoutinesResponseBodyRoutines &) = default ;
    ListUserRoutinesResponseBodyRoutines& operator=(ListUserRoutinesResponseBodyRoutines &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->defaultRelatedRecord_ == nullptr && return this->description_ == nullptr && return this->hasAssets_ == nullptr && return this->routineName_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListUserRoutinesResponseBodyRoutines& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // defaultRelatedRecord Field Functions 
    bool hasDefaultRelatedRecord() const { return this->defaultRelatedRecord_ != nullptr;};
    void deleteDefaultRelatedRecord() { this->defaultRelatedRecord_ = nullptr;};
    inline string defaultRelatedRecord() const { DARABONBA_PTR_GET_DEFAULT(defaultRelatedRecord_, "") };
    inline ListUserRoutinesResponseBodyRoutines& setDefaultRelatedRecord(string defaultRelatedRecord) { DARABONBA_PTR_SET_VALUE(defaultRelatedRecord_, defaultRelatedRecord) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListUserRoutinesResponseBodyRoutines& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // hasAssets Field Functions 
    bool hasHasAssets() const { return this->hasAssets_ != nullptr;};
    void deleteHasAssets() { this->hasAssets_ = nullptr;};
    inline bool hasAssets() const { DARABONBA_PTR_GET_DEFAULT(hasAssets_, false) };
    inline ListUserRoutinesResponseBodyRoutines& setHasAssets(bool hasAssets) { DARABONBA_PTR_SET_VALUE(hasAssets_, hasAssets) };


    // routineName Field Functions 
    bool hasRoutineName() const { return this->routineName_ != nullptr;};
    void deleteRoutineName() { this->routineName_ = nullptr;};
    inline string routineName() const { DARABONBA_PTR_GET_DEFAULT(routineName_, "") };
    inline ListUserRoutinesResponseBodyRoutines& setRoutineName(string routineName) { DARABONBA_PTR_SET_VALUE(routineName_, routineName) };


  protected:
    // The time when the function was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The default record name to access.
    std::shared_ptr<string> defaultRelatedRecord_ = nullptr;
    // The function description.
    std::shared_ptr<string> description_ = nullptr;
    // Specifies whether to include the Assets file tag.
    std::shared_ptr<bool> hasAssets_ = nullptr;
    // The function name.
    std::shared_ptr<string> routineName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
