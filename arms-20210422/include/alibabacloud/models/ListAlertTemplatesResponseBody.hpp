// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTTEMPLATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20210422
{
namespace Models
{
  class ListAlertTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AlertTemplates, alertTemplates_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlertTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertTemplates, alertTemplates_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAlertTemplatesResponseBody() = default ;
    ListAlertTemplatesResponseBody(const ListAlertTemplatesResponseBody &) = default ;
    ListAlertTemplatesResponseBody(ListAlertTemplatesResponseBody &&) = default ;
    ListAlertTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertTemplatesResponseBody() = default ;
    ListAlertTemplatesResponseBody& operator=(const ListAlertTemplatesResponseBody &) = default ;
    ListAlertTemplatesResponseBody& operator=(ListAlertTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AlertTemplates : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AlertTemplates& obj) { 
        DARABONBA_PTR_TO_JSON(AlertProvider, alertProvider_);
        DARABONBA_ANY_TO_JSON(Annotations, annotations_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(LabelMatchExpressionGrid, labelMatchExpressionGrid_);
        DARABONBA_ANY_TO_JSON(Labels, labels_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ParentId, parentId_);
        DARABONBA_PTR_TO_JSON(Public, public_);
        DARABONBA_PTR_TO_JSON(Rule, rule_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TemplateProvider, templateProvider_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, AlertTemplates& obj) { 
        DARABONBA_PTR_FROM_JSON(AlertProvider, alertProvider_);
        DARABONBA_ANY_FROM_JSON(Annotations, annotations_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(LabelMatchExpressionGrid, labelMatchExpressionGrid_);
        DARABONBA_ANY_FROM_JSON(Labels, labels_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
        DARABONBA_PTR_FROM_JSON(Public, public_);
        DARABONBA_PTR_FROM_JSON(Rule, rule_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TemplateProvider, templateProvider_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      AlertTemplates() = default ;
      AlertTemplates(const AlertTemplates &) = default ;
      AlertTemplates(AlertTemplates &&) = default ;
      AlertTemplates(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AlertTemplates() = default ;
      AlertTemplates& operator=(const AlertTemplates &) = default ;
      AlertTemplates& operator=(AlertTemplates &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class LabelMatchExpressionGrid : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LabelMatchExpressionGrid& obj) { 
          DARABONBA_PTR_TO_JSON(LabelMatchExpressionGroups, labelMatchExpressionGroups_);
        };
        friend void from_json(const Darabonba::Json& j, LabelMatchExpressionGrid& obj) { 
          DARABONBA_PTR_FROM_JSON(LabelMatchExpressionGroups, labelMatchExpressionGroups_);
        };
        LabelMatchExpressionGrid() = default ;
        LabelMatchExpressionGrid(const LabelMatchExpressionGrid &) = default ;
        LabelMatchExpressionGrid(LabelMatchExpressionGrid &&) = default ;
        LabelMatchExpressionGrid(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LabelMatchExpressionGrid() = default ;
        LabelMatchExpressionGrid& operator=(const LabelMatchExpressionGrid &) = default ;
        LabelMatchExpressionGrid& operator=(LabelMatchExpressionGrid &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class LabelMatchExpressionGroups : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const LabelMatchExpressionGroups& obj) { 
            DARABONBA_PTR_TO_JSON(LabelMatchExpressions, labelMatchExpressions_);
          };
          friend void from_json(const Darabonba::Json& j, LabelMatchExpressionGroups& obj) { 
            DARABONBA_PTR_FROM_JSON(LabelMatchExpressions, labelMatchExpressions_);
          };
          LabelMatchExpressionGroups() = default ;
          LabelMatchExpressionGroups(const LabelMatchExpressionGroups &) = default ;
          LabelMatchExpressionGroups(LabelMatchExpressionGroups &&) = default ;
          LabelMatchExpressionGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~LabelMatchExpressionGroups() = default ;
          LabelMatchExpressionGroups& operator=(const LabelMatchExpressionGroups &) = default ;
          LabelMatchExpressionGroups& operator=(LabelMatchExpressionGroups &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class LabelMatchExpressions : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const LabelMatchExpressions& obj) { 
              DARABONBA_PTR_TO_JSON(Key, key_);
              DARABONBA_PTR_TO_JSON(Operator, operator_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, LabelMatchExpressions& obj) { 
              DARABONBA_PTR_FROM_JSON(Key, key_);
              DARABONBA_PTR_FROM_JSON(Operator, operator_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            LabelMatchExpressions() = default ;
            LabelMatchExpressions(const LabelMatchExpressions &) = default ;
            LabelMatchExpressions(LabelMatchExpressions &&) = default ;
            LabelMatchExpressions(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~LabelMatchExpressions() = default ;
            LabelMatchExpressions& operator=(const LabelMatchExpressions &) = default ;
            LabelMatchExpressions& operator=(LabelMatchExpressions &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->key_ == nullptr
        && this->operator_ == nullptr && this->value_ == nullptr; };
            // key Field Functions 
            bool hasKey() const { return this->key_ != nullptr;};
            void deleteKey() { this->key_ = nullptr;};
            inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
            inline LabelMatchExpressions& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


            // operator Field Functions 
            bool hasOperator() const { return this->operator_ != nullptr;};
            void deleteOperator() { this->operator_ = nullptr;};
            inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
            inline LabelMatchExpressions& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline LabelMatchExpressions& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            shared_ptr<string> key_ {};
            shared_ptr<string> operator_ {};
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->labelMatchExpressions_ == nullptr; };
          // labelMatchExpressions Field Functions 
          bool hasLabelMatchExpressions() const { return this->labelMatchExpressions_ != nullptr;};
          void deleteLabelMatchExpressions() { this->labelMatchExpressions_ = nullptr;};
          inline const vector<LabelMatchExpressionGroups::LabelMatchExpressions> & getLabelMatchExpressions() const { DARABONBA_PTR_GET_CONST(labelMatchExpressions_, vector<LabelMatchExpressionGroups::LabelMatchExpressions>) };
          inline vector<LabelMatchExpressionGroups::LabelMatchExpressions> getLabelMatchExpressions() { DARABONBA_PTR_GET(labelMatchExpressions_, vector<LabelMatchExpressionGroups::LabelMatchExpressions>) };
          inline LabelMatchExpressionGroups& setLabelMatchExpressions(const vector<LabelMatchExpressionGroups::LabelMatchExpressions> & labelMatchExpressions) { DARABONBA_PTR_SET_VALUE(labelMatchExpressions_, labelMatchExpressions) };
          inline LabelMatchExpressionGroups& setLabelMatchExpressions(vector<LabelMatchExpressionGroups::LabelMatchExpressions> && labelMatchExpressions) { DARABONBA_PTR_SET_RVALUE(labelMatchExpressions_, labelMatchExpressions) };


        protected:
          shared_ptr<vector<LabelMatchExpressionGroups::LabelMatchExpressions>> labelMatchExpressions_ {};
        };

        virtual bool empty() const override { return this->labelMatchExpressionGroups_ == nullptr; };
        // labelMatchExpressionGroups Field Functions 
        bool hasLabelMatchExpressionGroups() const { return this->labelMatchExpressionGroups_ != nullptr;};
        void deleteLabelMatchExpressionGroups() { this->labelMatchExpressionGroups_ = nullptr;};
        inline const vector<LabelMatchExpressionGrid::LabelMatchExpressionGroups> & getLabelMatchExpressionGroups() const { DARABONBA_PTR_GET_CONST(labelMatchExpressionGroups_, vector<LabelMatchExpressionGrid::LabelMatchExpressionGroups>) };
        inline vector<LabelMatchExpressionGrid::LabelMatchExpressionGroups> getLabelMatchExpressionGroups() { DARABONBA_PTR_GET(labelMatchExpressionGroups_, vector<LabelMatchExpressionGrid::LabelMatchExpressionGroups>) };
        inline LabelMatchExpressionGrid& setLabelMatchExpressionGroups(const vector<LabelMatchExpressionGrid::LabelMatchExpressionGroups> & labelMatchExpressionGroups) { DARABONBA_PTR_SET_VALUE(labelMatchExpressionGroups_, labelMatchExpressionGroups) };
        inline LabelMatchExpressionGrid& setLabelMatchExpressionGroups(vector<LabelMatchExpressionGrid::LabelMatchExpressionGroups> && labelMatchExpressionGroups) { DARABONBA_PTR_SET_RVALUE(labelMatchExpressionGroups_, labelMatchExpressionGroups) };


      protected:
        shared_ptr<vector<LabelMatchExpressionGrid::LabelMatchExpressionGroups>> labelMatchExpressionGroups_ {};
      };

      virtual bool empty() const override { return this->alertProvider_ == nullptr
        && this->annotations_ == nullptr && this->id_ == nullptr && this->labelMatchExpressionGrid_ == nullptr && this->labels_ == nullptr && this->message_ == nullptr
        && this->name_ == nullptr && this->parentId_ == nullptr && this->public_ == nullptr && this->rule_ == nullptr && this->status_ == nullptr
        && this->templateProvider_ == nullptr && this->type_ == nullptr && this->userId_ == nullptr; };
      // alertProvider Field Functions 
      bool hasAlertProvider() const { return this->alertProvider_ != nullptr;};
      void deleteAlertProvider() { this->alertProvider_ = nullptr;};
      inline string getAlertProvider() const { DARABONBA_PTR_GET_DEFAULT(alertProvider_, "") };
      inline AlertTemplates& setAlertProvider(string alertProvider) { DARABONBA_PTR_SET_VALUE(alertProvider_, alertProvider) };


      // annotations Field Functions 
      bool hasAnnotations() const { return this->annotations_ != nullptr;};
      void deleteAnnotations() { this->annotations_ = nullptr;};
      inline       const Darabonba::Json & getAnnotations() const { DARABONBA_GET(annotations_) };
      Darabonba::Json & getAnnotations() { DARABONBA_GET(annotations_) };
      inline AlertTemplates& setAnnotations(const Darabonba::Json & annotations) { DARABONBA_SET_VALUE(annotations_, annotations) };
      inline AlertTemplates& setAnnotations(Darabonba::Json && annotations) { DARABONBA_SET_RVALUE(annotations_, annotations) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int32_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
      inline AlertTemplates& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // labelMatchExpressionGrid Field Functions 
      bool hasLabelMatchExpressionGrid() const { return this->labelMatchExpressionGrid_ != nullptr;};
      void deleteLabelMatchExpressionGrid() { this->labelMatchExpressionGrid_ = nullptr;};
      inline const AlertTemplates::LabelMatchExpressionGrid & getLabelMatchExpressionGrid() const { DARABONBA_PTR_GET_CONST(labelMatchExpressionGrid_, AlertTemplates::LabelMatchExpressionGrid) };
      inline AlertTemplates::LabelMatchExpressionGrid getLabelMatchExpressionGrid() { DARABONBA_PTR_GET(labelMatchExpressionGrid_, AlertTemplates::LabelMatchExpressionGrid) };
      inline AlertTemplates& setLabelMatchExpressionGrid(const AlertTemplates::LabelMatchExpressionGrid & labelMatchExpressionGrid) { DARABONBA_PTR_SET_VALUE(labelMatchExpressionGrid_, labelMatchExpressionGrid) };
      inline AlertTemplates& setLabelMatchExpressionGrid(AlertTemplates::LabelMatchExpressionGrid && labelMatchExpressionGrid) { DARABONBA_PTR_SET_RVALUE(labelMatchExpressionGrid_, labelMatchExpressionGrid) };


      // labels Field Functions 
      bool hasLabels() const { return this->labels_ != nullptr;};
      void deleteLabels() { this->labels_ = nullptr;};
      inline       const Darabonba::Json & getLabels() const { DARABONBA_GET(labels_) };
      Darabonba::Json & getLabels() { DARABONBA_GET(labels_) };
      inline AlertTemplates& setLabels(const Darabonba::Json & labels) { DARABONBA_SET_VALUE(labels_, labels) };
      inline AlertTemplates& setLabels(Darabonba::Json && labels) { DARABONBA_SET_RVALUE(labels_, labels) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline AlertTemplates& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline AlertTemplates& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // parentId Field Functions 
      bool hasParentId() const { return this->parentId_ != nullptr;};
      void deleteParentId() { this->parentId_ = nullptr;};
      inline int32_t getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, 0) };
      inline AlertTemplates& setParentId(int32_t parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


      // public Field Functions 
      bool hasPublic() const { return this->public_ != nullptr;};
      void deletePublic() { this->public_ = nullptr;};
      inline bool getPublic() const { DARABONBA_PTR_GET_DEFAULT(public_, false) };
      inline AlertTemplates& setPublic(bool _public) { DARABONBA_PTR_SET_VALUE(public_, _public) };


      // rule Field Functions 
      bool hasRule() const { return this->rule_ != nullptr;};
      void deleteRule() { this->rule_ = nullptr;};
      inline string getRule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
      inline AlertTemplates& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline bool getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, false) };
      inline AlertTemplates& setStatus(bool status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // templateProvider Field Functions 
      bool hasTemplateProvider() const { return this->templateProvider_ != nullptr;};
      void deleteTemplateProvider() { this->templateProvider_ = nullptr;};
      inline string getTemplateProvider() const { DARABONBA_PTR_GET_DEFAULT(templateProvider_, "") };
      inline AlertTemplates& setTemplateProvider(string templateProvider) { DARABONBA_PTR_SET_VALUE(templateProvider_, templateProvider) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline AlertTemplates& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline AlertTemplates& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      shared_ptr<string> alertProvider_ {};
      Darabonba::Json annotations_ {};
      shared_ptr<int32_t> id_ {};
      shared_ptr<AlertTemplates::LabelMatchExpressionGrid> labelMatchExpressionGrid_ {};
      Darabonba::Json labels_ {};
      shared_ptr<string> message_ {};
      shared_ptr<string> name_ {};
      shared_ptr<int32_t> parentId_ {};
      shared_ptr<bool> public_ {};
      shared_ptr<string> rule_ {};
      shared_ptr<bool> status_ {};
      shared_ptr<string> templateProvider_ {};
      shared_ptr<string> type_ {};
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->alertTemplates_ == nullptr
        && this->requestId_ == nullptr; };
    // alertTemplates Field Functions 
    bool hasAlertTemplates() const { return this->alertTemplates_ != nullptr;};
    void deleteAlertTemplates() { this->alertTemplates_ = nullptr;};
    inline const vector<ListAlertTemplatesResponseBody::AlertTemplates> & getAlertTemplates() const { DARABONBA_PTR_GET_CONST(alertTemplates_, vector<ListAlertTemplatesResponseBody::AlertTemplates>) };
    inline vector<ListAlertTemplatesResponseBody::AlertTemplates> getAlertTemplates() { DARABONBA_PTR_GET(alertTemplates_, vector<ListAlertTemplatesResponseBody::AlertTemplates>) };
    inline ListAlertTemplatesResponseBody& setAlertTemplates(const vector<ListAlertTemplatesResponseBody::AlertTemplates> & alertTemplates) { DARABONBA_PTR_SET_VALUE(alertTemplates_, alertTemplates) };
    inline ListAlertTemplatesResponseBody& setAlertTemplates(vector<ListAlertTemplatesResponseBody::AlertTemplates> && alertTemplates) { DARABONBA_PTR_SET_RVALUE(alertTemplates_, alertTemplates) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAlertTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListAlertTemplatesResponseBody::AlertTemplates>> alertTemplates_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20210422
#endif
