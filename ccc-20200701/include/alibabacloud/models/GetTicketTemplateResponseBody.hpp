// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTICKETTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTICKETTEMPLATERESPONSEBODY_HPP_
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
  class GetTicketTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTicketTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTicketTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetTicketTemplateResponseBody() = default ;
    GetTicketTemplateResponseBody(const GetTicketTemplateResponseBody &) = default ;
    GetTicketTemplateResponseBody(GetTicketTemplateResponseBody &&) = default ;
    GetTicketTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTicketTemplateResponseBody() = default ;
    GetTicketTemplateResponseBody& operator=(const GetTicketTemplateResponseBody &) = default ;
    GetTicketTemplateResponseBody& operator=(GetTicketTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
        DARABONBA_PTR_TO_JSON(Editor, editor_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ProcessDefinition, processDefinition_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
        DARABONBA_PTR_TO_JSON(TicketFields, ticketFields_);
        DARABONBA_PTR_TO_JSON(UpdatedTime, updatedTime_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
        DARABONBA_PTR_FROM_JSON(Editor, editor_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ProcessDefinition, processDefinition_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
        DARABONBA_PTR_FROM_JSON(TicketFields, ticketFields_);
        DARABONBA_PTR_FROM_JSON(UpdatedTime, updatedTime_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TicketFields : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TicketFields& obj) { 
          DARABONBA_PTR_TO_JSON(Array, array_);
          DARABONBA_PTR_TO_JSON(Attributes, attributes_);
          DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_TO_JSON(Creator, creator_);
          DARABONBA_PTR_TO_JSON(DataType, dataType_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Disabled, disabled_);
          DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
          DARABONBA_PTR_TO_JSON(DisplayOrder, displayOrder_);
          DARABONBA_PTR_TO_JSON(EditorType, editorType_);
          DARABONBA_PTR_TO_JSON(MaxLength, maxLength_);
          DARABONBA_PTR_TO_JSON(Maximum, maximum_);
          DARABONBA_PTR_TO_JSON(MinLength, minLength_);
          DARABONBA_PTR_TO_JSON(Minimum, minimum_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Pattern, pattern_);
          DARABONBA_PTR_TO_JSON(PatternErrorMessage, patternErrorMessage_);
          DARABONBA_PTR_TO_JSON(ReadOnly, readOnly_);
          DARABONBA_PTR_TO_JSON(Required, required_);
          DARABONBA_PTR_TO_JSON(System, system_);
          DARABONBA_PTR_TO_JSON(UpdatedTime, updatedTime_);
        };
        friend void from_json(const Darabonba::Json& j, TicketFields& obj) { 
          DARABONBA_PTR_FROM_JSON(Array, array_);
          DARABONBA_PTR_FROM_JSON(Attributes, attributes_);
          DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_FROM_JSON(Creator, creator_);
          DARABONBA_PTR_FROM_JSON(DataType, dataType_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Disabled, disabled_);
          DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
          DARABONBA_PTR_FROM_JSON(DisplayOrder, displayOrder_);
          DARABONBA_PTR_FROM_JSON(EditorType, editorType_);
          DARABONBA_PTR_FROM_JSON(MaxLength, maxLength_);
          DARABONBA_PTR_FROM_JSON(Maximum, maximum_);
          DARABONBA_PTR_FROM_JSON(MinLength, minLength_);
          DARABONBA_PTR_FROM_JSON(Minimum, minimum_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Pattern, pattern_);
          DARABONBA_PTR_FROM_JSON(PatternErrorMessage, patternErrorMessage_);
          DARABONBA_PTR_FROM_JSON(ReadOnly, readOnly_);
          DARABONBA_PTR_FROM_JSON(Required, required_);
          DARABONBA_PTR_FROM_JSON(System, system_);
          DARABONBA_PTR_FROM_JSON(UpdatedTime, updatedTime_);
        };
        TicketFields() = default ;
        TicketFields(const TicketFields &) = default ;
        TicketFields(TicketFields &&) = default ;
        TicketFields(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TicketFields() = default ;
        TicketFields& operator=(const TicketFields &) = default ;
        TicketFields& operator=(TicketFields &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->array_ == nullptr
        && this->attributes_ == nullptr && this->createdTime_ == nullptr && this->creator_ == nullptr && this->dataType_ == nullptr && this->description_ == nullptr
        && this->disabled_ == nullptr && this->displayName_ == nullptr && this->displayOrder_ == nullptr && this->editorType_ == nullptr && this->maxLength_ == nullptr
        && this->maximum_ == nullptr && this->minLength_ == nullptr && this->minimum_ == nullptr && this->name_ == nullptr && this->pattern_ == nullptr
        && this->patternErrorMessage_ == nullptr && this->readOnly_ == nullptr && this->required_ == nullptr && this->system_ == nullptr && this->updatedTime_ == nullptr; };
        // array Field Functions 
        bool hasArray() const { return this->array_ != nullptr;};
        void deleteArray() { this->array_ = nullptr;};
        inline bool getArray() const { DARABONBA_PTR_GET_DEFAULT(array_, false) };
        inline TicketFields& setArray(bool array) { DARABONBA_PTR_SET_VALUE(array_, array) };


        // attributes Field Functions 
        bool hasAttributes() const { return this->attributes_ != nullptr;};
        void deleteAttributes() { this->attributes_ = nullptr;};
        inline string getAttributes() const { DARABONBA_PTR_GET_DEFAULT(attributes_, "") };
        inline TicketFields& setAttributes(string attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };


        // createdTime Field Functions 
        bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
        void deleteCreatedTime() { this->createdTime_ = nullptr;};
        inline int64_t getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
        inline TicketFields& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


        // creator Field Functions 
        bool hasCreator() const { return this->creator_ != nullptr;};
        void deleteCreator() { this->creator_ = nullptr;};
        inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
        inline TicketFields& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


        // dataType Field Functions 
        bool hasDataType() const { return this->dataType_ != nullptr;};
        void deleteDataType() { this->dataType_ = nullptr;};
        inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
        inline TicketFields& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline TicketFields& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // disabled Field Functions 
        bool hasDisabled() const { return this->disabled_ != nullptr;};
        void deleteDisabled() { this->disabled_ = nullptr;};
        inline bool getDisabled() const { DARABONBA_PTR_GET_DEFAULT(disabled_, false) };
        inline TicketFields& setDisabled(bool disabled) { DARABONBA_PTR_SET_VALUE(disabled_, disabled) };


        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline TicketFields& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // displayOrder Field Functions 
        bool hasDisplayOrder() const { return this->displayOrder_ != nullptr;};
        void deleteDisplayOrder() { this->displayOrder_ = nullptr;};
        inline int32_t getDisplayOrder() const { DARABONBA_PTR_GET_DEFAULT(displayOrder_, 0) };
        inline TicketFields& setDisplayOrder(int32_t displayOrder) { DARABONBA_PTR_SET_VALUE(displayOrder_, displayOrder) };


        // editorType Field Functions 
        bool hasEditorType() const { return this->editorType_ != nullptr;};
        void deleteEditorType() { this->editorType_ = nullptr;};
        inline string getEditorType() const { DARABONBA_PTR_GET_DEFAULT(editorType_, "") };
        inline TicketFields& setEditorType(string editorType) { DARABONBA_PTR_SET_VALUE(editorType_, editorType) };


        // maxLength Field Functions 
        bool hasMaxLength() const { return this->maxLength_ != nullptr;};
        void deleteMaxLength() { this->maxLength_ = nullptr;};
        inline int32_t getMaxLength() const { DARABONBA_PTR_GET_DEFAULT(maxLength_, 0) };
        inline TicketFields& setMaxLength(int32_t maxLength) { DARABONBA_PTR_SET_VALUE(maxLength_, maxLength) };


        // maximum Field Functions 
        bool hasMaximum() const { return this->maximum_ != nullptr;};
        void deleteMaximum() { this->maximum_ = nullptr;};
        inline double getMaximum() const { DARABONBA_PTR_GET_DEFAULT(maximum_, 0.0) };
        inline TicketFields& setMaximum(double maximum) { DARABONBA_PTR_SET_VALUE(maximum_, maximum) };


        // minLength Field Functions 
        bool hasMinLength() const { return this->minLength_ != nullptr;};
        void deleteMinLength() { this->minLength_ = nullptr;};
        inline int32_t getMinLength() const { DARABONBA_PTR_GET_DEFAULT(minLength_, 0) };
        inline TicketFields& setMinLength(int32_t minLength) { DARABONBA_PTR_SET_VALUE(minLength_, minLength) };


        // minimum Field Functions 
        bool hasMinimum() const { return this->minimum_ != nullptr;};
        void deleteMinimum() { this->minimum_ = nullptr;};
        inline double getMinimum() const { DARABONBA_PTR_GET_DEFAULT(minimum_, 0.0) };
        inline TicketFields& setMinimum(double minimum) { DARABONBA_PTR_SET_VALUE(minimum_, minimum) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline TicketFields& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // pattern Field Functions 
        bool hasPattern() const { return this->pattern_ != nullptr;};
        void deletePattern() { this->pattern_ = nullptr;};
        inline string getPattern() const { DARABONBA_PTR_GET_DEFAULT(pattern_, "") };
        inline TicketFields& setPattern(string pattern) { DARABONBA_PTR_SET_VALUE(pattern_, pattern) };


        // patternErrorMessage Field Functions 
        bool hasPatternErrorMessage() const { return this->patternErrorMessage_ != nullptr;};
        void deletePatternErrorMessage() { this->patternErrorMessage_ = nullptr;};
        inline string getPatternErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(patternErrorMessage_, "") };
        inline TicketFields& setPatternErrorMessage(string patternErrorMessage) { DARABONBA_PTR_SET_VALUE(patternErrorMessage_, patternErrorMessage) };


        // readOnly Field Functions 
        bool hasReadOnly() const { return this->readOnly_ != nullptr;};
        void deleteReadOnly() { this->readOnly_ = nullptr;};
        inline bool getReadOnly() const { DARABONBA_PTR_GET_DEFAULT(readOnly_, false) };
        inline TicketFields& setReadOnly(bool readOnly) { DARABONBA_PTR_SET_VALUE(readOnly_, readOnly) };


        // required Field Functions 
        bool hasRequired() const { return this->required_ != nullptr;};
        void deleteRequired() { this->required_ = nullptr;};
        inline bool getRequired() const { DARABONBA_PTR_GET_DEFAULT(required_, false) };
        inline TicketFields& setRequired(bool required) { DARABONBA_PTR_SET_VALUE(required_, required) };


        // system Field Functions 
        bool hasSystem() const { return this->system_ != nullptr;};
        void deleteSystem() { this->system_ = nullptr;};
        inline bool getSystem() const { DARABONBA_PTR_GET_DEFAULT(system_, false) };
        inline TicketFields& setSystem(bool system) { DARABONBA_PTR_SET_VALUE(system_, system) };


        // updatedTime Field Functions 
        bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
        void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
        inline int64_t getUpdatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, 0L) };
        inline TicketFields& setUpdatedTime(int64_t updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


      protected:
        shared_ptr<bool> array_ {};
        shared_ptr<string> attributes_ {};
        shared_ptr<int64_t> createdTime_ {};
        shared_ptr<string> creator_ {};
        shared_ptr<string> dataType_ {};
        shared_ptr<string> description_ {};
        shared_ptr<bool> disabled_ {};
        shared_ptr<string> displayName_ {};
        shared_ptr<int32_t> displayOrder_ {};
        shared_ptr<string> editorType_ {};
        shared_ptr<int32_t> maxLength_ {};
        shared_ptr<double> maximum_ {};
        shared_ptr<int32_t> minLength_ {};
        shared_ptr<double> minimum_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> pattern_ {};
        shared_ptr<string> patternErrorMessage_ {};
        shared_ptr<bool> readOnly_ {};
        shared_ptr<bool> required_ {};
        shared_ptr<bool> system_ {};
        shared_ptr<int64_t> updatedTime_ {};
      };

      virtual bool empty() const override { return this->categoryId_ == nullptr
        && this->editor_ == nullptr && this->instanceId_ == nullptr && this->name_ == nullptr && this->processDefinition_ == nullptr && this->state_ == nullptr
        && this->templateId_ == nullptr && this->ticketFields_ == nullptr && this->updatedTime_ == nullptr; };
      // categoryId Field Functions 
      bool hasCategoryId() const { return this->categoryId_ != nullptr;};
      void deleteCategoryId() { this->categoryId_ = nullptr;};
      inline string getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, "") };
      inline Data& setCategoryId(string categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


      // editor Field Functions 
      bool hasEditor() const { return this->editor_ != nullptr;};
      void deleteEditor() { this->editor_ = nullptr;};
      inline string getEditor() const { DARABONBA_PTR_GET_DEFAULT(editor_, "") };
      inline Data& setEditor(string editor) { DARABONBA_PTR_SET_VALUE(editor_, editor) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // processDefinition Field Functions 
      bool hasProcessDefinition() const { return this->processDefinition_ != nullptr;};
      void deleteProcessDefinition() { this->processDefinition_ = nullptr;};
      inline string getProcessDefinition() const { DARABONBA_PTR_GET_DEFAULT(processDefinition_, "") };
      inline Data& setProcessDefinition(string processDefinition) { DARABONBA_PTR_SET_VALUE(processDefinition_, processDefinition) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Data& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
      inline Data& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      // ticketFields Field Functions 
      bool hasTicketFields() const { return this->ticketFields_ != nullptr;};
      void deleteTicketFields() { this->ticketFields_ = nullptr;};
      inline const vector<Data::TicketFields> & getTicketFields() const { DARABONBA_PTR_GET_CONST(ticketFields_, vector<Data::TicketFields>) };
      inline vector<Data::TicketFields> getTicketFields() { DARABONBA_PTR_GET(ticketFields_, vector<Data::TicketFields>) };
      inline Data& setTicketFields(const vector<Data::TicketFields> & ticketFields) { DARABONBA_PTR_SET_VALUE(ticketFields_, ticketFields) };
      inline Data& setTicketFields(vector<Data::TicketFields> && ticketFields) { DARABONBA_PTR_SET_RVALUE(ticketFields_, ticketFields) };


      // updatedTime Field Functions 
      bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
      void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
      inline int64_t getUpdatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, 0L) };
      inline Data& setUpdatedTime(int64_t updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


    protected:
      shared_ptr<string> categoryId_ {};
      shared_ptr<string> editor_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> processDefinition_ {};
      shared_ptr<string> state_ {};
      shared_ptr<string> templateId_ {};
      shared_ptr<vector<Data::TicketFields>> ticketFields_ {};
      shared_ptr<int64_t> updatedTime_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->params_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetTicketTemplateResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetTicketTemplateResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetTicketTemplateResponseBody::Data) };
    inline GetTicketTemplateResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetTicketTemplateResponseBody::Data) };
    inline GetTicketTemplateResponseBody& setData(const GetTicketTemplateResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetTicketTemplateResponseBody& setData(GetTicketTemplateResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetTicketTemplateResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetTicketTemplateResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline const vector<string> & getParams() const { DARABONBA_PTR_GET_CONST(params_, vector<string>) };
    inline vector<string> getParams() { DARABONBA_PTR_GET(params_, vector<string>) };
    inline GetTicketTemplateResponseBody& setParams(const vector<string> & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
    inline GetTicketTemplateResponseBody& setParams(vector<string> && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTicketTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetTicketTemplateResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<vector<string>> params_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
