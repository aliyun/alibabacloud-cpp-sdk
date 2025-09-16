// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERTASKSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERTASKSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListClusterTasksResponseBodyResultTags.hpp>
#include <alibabacloud/models/ListClusterTasksResponseBodyResultTaskNodes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ListClusterTasksResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClusterTasksResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(extraAttribute, extraAttribute_);
      DARABONBA_PTR_TO_JSON(field3, field3_);
      DARABONBA_PTR_TO_JSON(fsmId, fsmId_);
      DARABONBA_PTR_TO_JSON(groupType, groupType_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(taskNodes, taskNodes_);
      DARABONBA_PTR_TO_JSON(time, time_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(user, user_);
    };
    friend void from_json(const Darabonba::Json& j, ListClusterTasksResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(extraAttribute, extraAttribute_);
      DARABONBA_PTR_FROM_JSON(field3, field3_);
      DARABONBA_PTR_FROM_JSON(fsmId, fsmId_);
      DARABONBA_PTR_FROM_JSON(groupType, groupType_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(taskNodes, taskNodes_);
      DARABONBA_PTR_FROM_JSON(time, time_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(user, user_);
    };
    ListClusterTasksResponseBodyResult() = default ;
    ListClusterTasksResponseBodyResult(const ListClusterTasksResponseBodyResult &) = default ;
    ListClusterTasksResponseBodyResult(ListClusterTasksResponseBodyResult &&) = default ;
    ListClusterTasksResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClusterTasksResponseBodyResult() = default ;
    ListClusterTasksResponseBodyResult& operator=(const ListClusterTasksResponseBodyResult &) = default ;
    ListClusterTasksResponseBodyResult& operator=(ListClusterTasksResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->extraAttribute_ != nullptr
        && this->field3_ != nullptr && this->fsmId_ != nullptr && this->groupType_ != nullptr && this->name_ != nullptr && this->status_ != nullptr
        && this->tags_ != nullptr && this->taskNodes_ != nullptr && this->time_ != nullptr && this->type_ != nullptr && this->user_ != nullptr; };
    // extraAttribute Field Functions 
    bool hasExtraAttribute() const { return this->extraAttribute_ != nullptr;};
    void deleteExtraAttribute() { this->extraAttribute_ = nullptr;};
    inline string extraAttribute() const { DARABONBA_PTR_GET_DEFAULT(extraAttribute_, "") };
    inline ListClusterTasksResponseBodyResult& setExtraAttribute(string extraAttribute) { DARABONBA_PTR_SET_VALUE(extraAttribute_, extraAttribute) };


    // field3 Field Functions 
    bool hasField3() const { return this->field3_ != nullptr;};
    void deleteField3() { this->field3_ = nullptr;};
    inline string field3() const { DARABONBA_PTR_GET_DEFAULT(field3_, "") };
    inline ListClusterTasksResponseBodyResult& setField3(string field3) { DARABONBA_PTR_SET_VALUE(field3_, field3) };


    // fsmId Field Functions 
    bool hasFsmId() const { return this->fsmId_ != nullptr;};
    void deleteFsmId() { this->fsmId_ = nullptr;};
    inline string fsmId() const { DARABONBA_PTR_GET_DEFAULT(fsmId_, "") };
    inline ListClusterTasksResponseBodyResult& setFsmId(string fsmId) { DARABONBA_PTR_SET_VALUE(fsmId_, fsmId) };


    // groupType Field Functions 
    bool hasGroupType() const { return this->groupType_ != nullptr;};
    void deleteGroupType() { this->groupType_ = nullptr;};
    inline string groupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, "") };
    inline ListClusterTasksResponseBodyResult& setGroupType(string groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListClusterTasksResponseBodyResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListClusterTasksResponseBodyResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListClusterTasksResponseBodyResultTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListClusterTasksResponseBodyResultTags>) };
    inline vector<Models::ListClusterTasksResponseBodyResultTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListClusterTasksResponseBodyResultTags>) };
    inline ListClusterTasksResponseBodyResult& setTags(const vector<Models::ListClusterTasksResponseBodyResultTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListClusterTasksResponseBodyResult& setTags(vector<Models::ListClusterTasksResponseBodyResultTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // taskNodes Field Functions 
    bool hasTaskNodes() const { return this->taskNodes_ != nullptr;};
    void deleteTaskNodes() { this->taskNodes_ = nullptr;};
    inline const vector<Models::ListClusterTasksResponseBodyResultTaskNodes> & taskNodes() const { DARABONBA_PTR_GET_CONST(taskNodes_, vector<Models::ListClusterTasksResponseBodyResultTaskNodes>) };
    inline vector<Models::ListClusterTasksResponseBodyResultTaskNodes> taskNodes() { DARABONBA_PTR_GET(taskNodes_, vector<Models::ListClusterTasksResponseBodyResultTaskNodes>) };
    inline ListClusterTasksResponseBodyResult& setTaskNodes(const vector<Models::ListClusterTasksResponseBodyResultTaskNodes> & taskNodes) { DARABONBA_PTR_SET_VALUE(taskNodes_, taskNodes) };
    inline ListClusterTasksResponseBodyResult& setTaskNodes(vector<Models::ListClusterTasksResponseBodyResultTaskNodes> && taskNodes) { DARABONBA_PTR_SET_RVALUE(taskNodes_, taskNodes) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline ListClusterTasksResponseBodyResult& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListClusterTasksResponseBodyResult& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string user() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline ListClusterTasksResponseBodyResult& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


  protected:
    // The additional attributes of the card.
    std::shared_ptr<string> extraAttribute_ = nullptr;
    // The field3 field that was passed when the FSM was created.
    std::shared_ptr<string> field3_ = nullptr;
    // The ID of the finite state machine (FSM).
    std::shared_ptr<string> fsmId_ = nullptr;
    // The change group type.
    std::shared_ptr<string> groupType_ = nullptr;
    // The card name.
    std::shared_ptr<string> name_ = nullptr;
    // The FSM status.
    std::shared_ptr<string> status_ = nullptr;
    // The tags of the progress bar.
    std::shared_ptr<vector<Models::ListClusterTasksResponseBodyResultTags>> tags_ = nullptr;
    // The task information.
    std::shared_ptr<vector<Models::ListClusterTasksResponseBodyResultTaskNodes>> taskNodes_ = nullptr;
    // The timestamp of the card.
    std::shared_ptr<string> time_ = nullptr;
    // The card type.
    std::shared_ptr<string> type_ = nullptr;
    // The user who triggered the generation of the FSM process.
    std::shared_ptr<string> user_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
