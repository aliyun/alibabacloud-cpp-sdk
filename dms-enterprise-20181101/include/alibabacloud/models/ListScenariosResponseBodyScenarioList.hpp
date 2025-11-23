// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCENARIOSRESPONSEBODYSCENARIOLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTSCENARIOSRESPONSEBODYSCENARIOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListScenariosResponseBodyScenarioList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListScenariosResponseBodyScenarioList& obj) { 
      DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ScenarioName, scenarioName_);
    };
    friend void from_json(const Darabonba::Json& j, ListScenariosResponseBodyScenarioList& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ScenarioName, scenarioName_);
    };
    ListScenariosResponseBodyScenarioList() = default ;
    ListScenariosResponseBodyScenarioList(const ListScenariosResponseBodyScenarioList &) = default ;
    ListScenariosResponseBodyScenarioList(ListScenariosResponseBodyScenarioList &&) = default ;
    ListScenariosResponseBodyScenarioList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListScenariosResponseBodyScenarioList() = default ;
    ListScenariosResponseBodyScenarioList& operator=(const ListScenariosResponseBodyScenarioList &) = default ;
    ListScenariosResponseBodyScenarioList& operator=(ListScenariosResponseBodyScenarioList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creatorId_ == nullptr
        && return this->description_ == nullptr && return this->id_ == nullptr && return this->scenarioName_ == nullptr; };
    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline string creatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
    inline ListScenariosResponseBodyScenarioList& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListScenariosResponseBodyScenarioList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListScenariosResponseBodyScenarioList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // scenarioName Field Functions 
    bool hasScenarioName() const { return this->scenarioName_ != nullptr;};
    void deleteScenarioName() { this->scenarioName_ = nullptr;};
    inline string scenarioName() const { DARABONBA_PTR_GET_DEFAULT(scenarioName_, "") };
    inline ListScenariosResponseBodyScenarioList& setScenarioName(string scenarioName) { DARABONBA_PTR_SET_VALUE(scenarioName_, scenarioName) };


  protected:
    // The ID of the user who created the business scenario.
    std::shared_ptr<string> creatorId_ = nullptr;
    // The description of the business scenario.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the business scenario.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the business scenario.
    std::shared_ptr<string> scenarioName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
