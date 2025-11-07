// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACTIONSRESPONSEBODYACTIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTACTIONSRESPONSEBODYACTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListActionsResponseBodyActions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListActionsResponseBodyActions& obj) { 
      DARABONBA_PTR_TO_JSON(ActionType, actionType_);
      DARABONBA_PTR_TO_JSON(CreatedDate, createdDate_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(OOSActionName, OOSActionName_);
      DARABONBA_PTR_TO_JSON(Popularity, popularity_);
      DARABONBA_PTR_TO_JSON(Properties, properties_);
      DARABONBA_PTR_TO_JSON(TemplateVersion, templateVersion_);
    };
    friend void from_json(const Darabonba::Json& j, ListActionsResponseBodyActions& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionType, actionType_);
      DARABONBA_PTR_FROM_JSON(CreatedDate, createdDate_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(OOSActionName, OOSActionName_);
      DARABONBA_PTR_FROM_JSON(Popularity, popularity_);
      DARABONBA_PTR_FROM_JSON(Properties, properties_);
      DARABONBA_PTR_FROM_JSON(TemplateVersion, templateVersion_);
    };
    ListActionsResponseBodyActions() = default ;
    ListActionsResponseBodyActions(const ListActionsResponseBodyActions &) = default ;
    ListActionsResponseBodyActions(ListActionsResponseBodyActions &&) = default ;
    ListActionsResponseBodyActions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListActionsResponseBodyActions() = default ;
    ListActionsResponseBodyActions& operator=(const ListActionsResponseBodyActions &) = default ;
    ListActionsResponseBodyActions& operator=(ListActionsResponseBodyActions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionType_ == nullptr
        && return this->createdDate_ == nullptr && return this->description_ == nullptr && return this->OOSActionName_ == nullptr && return this->popularity_ == nullptr && return this->properties_ == nullptr
        && return this->templateVersion_ == nullptr; };
    // actionType Field Functions 
    bool hasActionType() const { return this->actionType_ != nullptr;};
    void deleteActionType() { this->actionType_ = nullptr;};
    inline string actionType() const { DARABONBA_PTR_GET_DEFAULT(actionType_, "") };
    inline ListActionsResponseBodyActions& setActionType(string actionType) { DARABONBA_PTR_SET_VALUE(actionType_, actionType) };


    // createdDate Field Functions 
    bool hasCreatedDate() const { return this->createdDate_ != nullptr;};
    void deleteCreatedDate() { this->createdDate_ = nullptr;};
    inline string createdDate() const { DARABONBA_PTR_GET_DEFAULT(createdDate_, "") };
    inline ListActionsResponseBodyActions& setCreatedDate(string createdDate) { DARABONBA_PTR_SET_VALUE(createdDate_, createdDate) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListActionsResponseBodyActions& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // OOSActionName Field Functions 
    bool hasOOSActionName() const { return this->OOSActionName_ != nullptr;};
    void deleteOOSActionName() { this->OOSActionName_ = nullptr;};
    inline string OOSActionName() const { DARABONBA_PTR_GET_DEFAULT(OOSActionName_, "") };
    inline ListActionsResponseBodyActions& setOOSActionName(string OOSActionName) { DARABONBA_PTR_SET_VALUE(OOSActionName_, OOSActionName) };


    // popularity Field Functions 
    bool hasPopularity() const { return this->popularity_ != nullptr;};
    void deletePopularity() { this->popularity_ = nullptr;};
    inline int32_t popularity() const { DARABONBA_PTR_GET_DEFAULT(popularity_, 0) };
    inline ListActionsResponseBodyActions& setPopularity(int32_t popularity) { DARABONBA_PTR_SET_VALUE(popularity_, popularity) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline string properties() const { DARABONBA_PTR_GET_DEFAULT(properties_, "") };
    inline ListActionsResponseBodyActions& setProperties(string properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };


    // templateVersion Field Functions 
    bool hasTemplateVersion() const { return this->templateVersion_ != nullptr;};
    void deleteTemplateVersion() { this->templateVersion_ = nullptr;};
    inline string templateVersion() const { DARABONBA_PTR_GET_DEFAULT(templateVersion_, "") };
    inline ListActionsResponseBodyActions& setTemplateVersion(string templateVersion) { DARABONBA_PTR_SET_VALUE(templateVersion_, templateVersion) };


  protected:
    // The type of the action.
    // 
    // 1.  Atomic actions
    // 
    //     *   Atomic.API
    //     *   Atomic.Trigger
    //     *   Atomic.Control
    //     *   Atomic.Embedded
    // 
    // 2.  Cloud product actions
    // 
    //     *   Product.ECS
    //     *   Product.RDS
    //     *   Product.VPC
    //     *   Product.FC
    //     *   ...
    std::shared_ptr<string> actionType_ = nullptr;
    // The time when the action was created.
    std::shared_ptr<string> createdDate_ = nullptr;
    // The description of the action.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the action.
    std::shared_ptr<string> OOSActionName_ = nullptr;
    // The number of times that the action is used.
    std::shared_ptr<int32_t> popularity_ = nullptr;
    // The parameters of the action.
    std::shared_ptr<string> properties_ = nullptr;
    // The version of the template that corresponds to the action.
    // 
    // >  For atomic actions, this parameter is not returned.
    std::shared_ptr<string> templateVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
