// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSKILLLEVELSOFUSERRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_LISTSKILLLEVELSOFUSERRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListSkillLevelsOfUserResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSkillLevelsOfUserResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
      DARABONBA_PTR_TO_JSON(SkillGroupId, skillGroupId_);
      DARABONBA_PTR_TO_JSON(SkillGroupName, skillGroupName_);
      DARABONBA_PTR_TO_JSON(SkillLevel, skillLevel_);
    };
    friend void from_json(const Darabonba::Json& j, ListSkillLevelsOfUserResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
      DARABONBA_PTR_FROM_JSON(SkillGroupId, skillGroupId_);
      DARABONBA_PTR_FROM_JSON(SkillGroupName, skillGroupName_);
      DARABONBA_PTR_FROM_JSON(SkillLevel, skillLevel_);
    };
    ListSkillLevelsOfUserResponseBodyDataList() = default ;
    ListSkillLevelsOfUserResponseBodyDataList(const ListSkillLevelsOfUserResponseBodyDataList &) = default ;
    ListSkillLevelsOfUserResponseBodyDataList(ListSkillLevelsOfUserResponseBodyDataList &&) = default ;
    ListSkillLevelsOfUserResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSkillLevelsOfUserResponseBodyDataList() = default ;
    ListSkillLevelsOfUserResponseBodyDataList& operator=(const ListSkillLevelsOfUserResponseBodyDataList &) = default ;
    ListSkillLevelsOfUserResponseBodyDataList& operator=(ListSkillLevelsOfUserResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mediaType_ != nullptr
        && this->skillGroupId_ != nullptr && this->skillGroupName_ != nullptr && this->skillLevel_ != nullptr; };
    // mediaType Field Functions 
    bool hasMediaType() const { return this->mediaType_ != nullptr;};
    void deleteMediaType() { this->mediaType_ = nullptr;};
    inline string mediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
    inline ListSkillLevelsOfUserResponseBodyDataList& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


    // skillGroupId Field Functions 
    bool hasSkillGroupId() const { return this->skillGroupId_ != nullptr;};
    void deleteSkillGroupId() { this->skillGroupId_ = nullptr;};
    inline string skillGroupId() const { DARABONBA_PTR_GET_DEFAULT(skillGroupId_, "") };
    inline ListSkillLevelsOfUserResponseBodyDataList& setSkillGroupId(string skillGroupId) { DARABONBA_PTR_SET_VALUE(skillGroupId_, skillGroupId) };


    // skillGroupName Field Functions 
    bool hasSkillGroupName() const { return this->skillGroupName_ != nullptr;};
    void deleteSkillGroupName() { this->skillGroupName_ = nullptr;};
    inline string skillGroupName() const { DARABONBA_PTR_GET_DEFAULT(skillGroupName_, "") };
    inline ListSkillLevelsOfUserResponseBodyDataList& setSkillGroupName(string skillGroupName) { DARABONBA_PTR_SET_VALUE(skillGroupName_, skillGroupName) };


    // skillLevel Field Functions 
    bool hasSkillLevel() const { return this->skillLevel_ != nullptr;};
    void deleteSkillLevel() { this->skillLevel_ = nullptr;};
    inline string skillLevel() const { DARABONBA_PTR_GET_DEFAULT(skillLevel_, "") };
    inline ListSkillLevelsOfUserResponseBodyDataList& setSkillLevel(string skillLevel) { DARABONBA_PTR_SET_VALUE(skillLevel_, skillLevel) };


  protected:
    std::shared_ptr<string> mediaType_ = nullptr;
    std::shared_ptr<string> skillGroupId_ = nullptr;
    std::shared_ptr<string> skillGroupName_ = nullptr;
    std::shared_ptr<string> skillLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
