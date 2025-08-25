// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONTACTFLOWSRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_LISTCONTACTFLOWSRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListContactFlowsResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListContactFlowsResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(ContactFlowId, contactFlowId_);
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(Definition, definition_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DraftId, draftId_);
      DARABONBA_PTR_TO_JSON(Editor, editor_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NumberList, numberList_);
      DARABONBA_PTR_TO_JSON(Published, published_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UpdatedTime, updatedTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListContactFlowsResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactFlowId, contactFlowId_);
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(Definition, definition_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DraftId, draftId_);
      DARABONBA_PTR_FROM_JSON(Editor, editor_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NumberList, numberList_);
      DARABONBA_PTR_FROM_JSON(Published, published_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UpdatedTime, updatedTime_);
    };
    ListContactFlowsResponseBodyDataList() = default ;
    ListContactFlowsResponseBodyDataList(const ListContactFlowsResponseBodyDataList &) = default ;
    ListContactFlowsResponseBodyDataList(ListContactFlowsResponseBodyDataList &&) = default ;
    ListContactFlowsResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListContactFlowsResponseBodyDataList() = default ;
    ListContactFlowsResponseBodyDataList& operator=(const ListContactFlowsResponseBodyDataList &) = default ;
    ListContactFlowsResponseBodyDataList& operator=(ListContactFlowsResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contactFlowId_ != nullptr
        && this->createdTime_ != nullptr && this->definition_ != nullptr && this->description_ != nullptr && this->draftId_ != nullptr && this->editor_ != nullptr
        && this->instanceId_ != nullptr && this->name_ != nullptr && this->numberList_ != nullptr && this->published_ != nullptr && this->type_ != nullptr
        && this->updatedTime_ != nullptr; };
    // contactFlowId Field Functions 
    bool hasContactFlowId() const { return this->contactFlowId_ != nullptr;};
    void deleteContactFlowId() { this->contactFlowId_ = nullptr;};
    inline string contactFlowId() const { DARABONBA_PTR_GET_DEFAULT(contactFlowId_, "") };
    inline ListContactFlowsResponseBodyDataList& setContactFlowId(string contactFlowId) { DARABONBA_PTR_SET_VALUE(contactFlowId_, contactFlowId) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline ListContactFlowsResponseBodyDataList& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // definition Field Functions 
    bool hasDefinition() const { return this->definition_ != nullptr;};
    void deleteDefinition() { this->definition_ = nullptr;};
    inline string definition() const { DARABONBA_PTR_GET_DEFAULT(definition_, "") };
    inline ListContactFlowsResponseBodyDataList& setDefinition(string definition) { DARABONBA_PTR_SET_VALUE(definition_, definition) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListContactFlowsResponseBodyDataList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // draftId Field Functions 
    bool hasDraftId() const { return this->draftId_ != nullptr;};
    void deleteDraftId() { this->draftId_ = nullptr;};
    inline string draftId() const { DARABONBA_PTR_GET_DEFAULT(draftId_, "") };
    inline ListContactFlowsResponseBodyDataList& setDraftId(string draftId) { DARABONBA_PTR_SET_VALUE(draftId_, draftId) };


    // editor Field Functions 
    bool hasEditor() const { return this->editor_ != nullptr;};
    void deleteEditor() { this->editor_ = nullptr;};
    inline string editor() const { DARABONBA_PTR_GET_DEFAULT(editor_, "") };
    inline ListContactFlowsResponseBodyDataList& setEditor(string editor) { DARABONBA_PTR_SET_VALUE(editor_, editor) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListContactFlowsResponseBodyDataList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListContactFlowsResponseBodyDataList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // numberList Field Functions 
    bool hasNumberList() const { return this->numberList_ != nullptr;};
    void deleteNumberList() { this->numberList_ = nullptr;};
    inline const vector<string> & numberList() const { DARABONBA_PTR_GET_CONST(numberList_, vector<string>) };
    inline vector<string> numberList() { DARABONBA_PTR_GET(numberList_, vector<string>) };
    inline ListContactFlowsResponseBodyDataList& setNumberList(const vector<string> & numberList) { DARABONBA_PTR_SET_VALUE(numberList_, numberList) };
    inline ListContactFlowsResponseBodyDataList& setNumberList(vector<string> && numberList) { DARABONBA_PTR_SET_RVALUE(numberList_, numberList) };


    // published Field Functions 
    bool hasPublished() const { return this->published_ != nullptr;};
    void deletePublished() { this->published_ = nullptr;};
    inline bool published() const { DARABONBA_PTR_GET_DEFAULT(published_, false) };
    inline ListContactFlowsResponseBodyDataList& setPublished(bool published) { DARABONBA_PTR_SET_VALUE(published_, published) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListContactFlowsResponseBodyDataList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // updatedTime Field Functions 
    bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
    void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
    inline string updatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, "") };
    inline ListContactFlowsResponseBodyDataList& setUpdatedTime(string updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


  protected:
    std::shared_ptr<string> contactFlowId_ = nullptr;
    std::shared_ptr<string> createdTime_ = nullptr;
    std::shared_ptr<string> definition_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> draftId_ = nullptr;
    std::shared_ptr<string> editor_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<string>> numberList_ = nullptr;
    std::shared_ptr<bool> published_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> updatedTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
