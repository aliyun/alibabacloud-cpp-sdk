// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFEATUREENTITIESRESPONSEBODYFEATUREENTITIES_HPP_
#define ALIBABACLOUD_MODELS_LISTFEATUREENTITIESRESPONSEBODYFEATUREENTITIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class ListFeatureEntitiesResponseBodyFeatureEntities : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFeatureEntitiesResponseBodyFeatureEntities& obj) { 
      DARABONBA_PTR_TO_JSON(FeatureEntityId, featureEntityId_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(JoinId, joinId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
    };
    friend void from_json(const Darabonba::Json& j, ListFeatureEntitiesResponseBodyFeatureEntities& obj) { 
      DARABONBA_PTR_FROM_JSON(FeatureEntityId, featureEntityId_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(JoinId, joinId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
    };
    ListFeatureEntitiesResponseBodyFeatureEntities() = default ;
    ListFeatureEntitiesResponseBodyFeatureEntities(const ListFeatureEntitiesResponseBodyFeatureEntities &) = default ;
    ListFeatureEntitiesResponseBodyFeatureEntities(ListFeatureEntitiesResponseBodyFeatureEntities &&) = default ;
    ListFeatureEntitiesResponseBodyFeatureEntities(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFeatureEntitiesResponseBodyFeatureEntities() = default ;
    ListFeatureEntitiesResponseBodyFeatureEntities& operator=(const ListFeatureEntitiesResponseBodyFeatureEntities &) = default ;
    ListFeatureEntitiesResponseBodyFeatureEntities& operator=(ListFeatureEntitiesResponseBodyFeatureEntities &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->featureEntityId_ != nullptr
        && this->gmtCreateTime_ != nullptr && this->joinId_ != nullptr && this->name_ != nullptr && this->owner_ != nullptr && this->projectId_ != nullptr
        && this->projectName_ != nullptr; };
    // featureEntityId Field Functions 
    bool hasFeatureEntityId() const { return this->featureEntityId_ != nullptr;};
    void deleteFeatureEntityId() { this->featureEntityId_ = nullptr;};
    inline string featureEntityId() const { DARABONBA_PTR_GET_DEFAULT(featureEntityId_, "") };
    inline ListFeatureEntitiesResponseBodyFeatureEntities& setFeatureEntityId(string featureEntityId) { DARABONBA_PTR_SET_VALUE(featureEntityId_, featureEntityId) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline ListFeatureEntitiesResponseBodyFeatureEntities& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // joinId Field Functions 
    bool hasJoinId() const { return this->joinId_ != nullptr;};
    void deleteJoinId() { this->joinId_ = nullptr;};
    inline string joinId() const { DARABONBA_PTR_GET_DEFAULT(joinId_, "") };
    inline ListFeatureEntitiesResponseBodyFeatureEntities& setJoinId(string joinId) { DARABONBA_PTR_SET_VALUE(joinId_, joinId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListFeatureEntitiesResponseBodyFeatureEntities& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline ListFeatureEntitiesResponseBodyFeatureEntities& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline ListFeatureEntitiesResponseBodyFeatureEntities& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline ListFeatureEntitiesResponseBodyFeatureEntities& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


  protected:
    std::shared_ptr<string> featureEntityId_ = nullptr;
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    std::shared_ptr<string> joinId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> owner_ = nullptr;
    std::shared_ptr<string> projectId_ = nullptr;
    std::shared_ptr<string> projectName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
