// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTAGINFOBYSELECTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYTAGINFOBYSELECTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dytnsapi20200217
{
namespace Models
{
  class QueryTagInfoBySelectionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTagInfoBySelectionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTagInfoBySelectionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryTagInfoBySelectionResponseBody() = default ;
    QueryTagInfoBySelectionResponseBody(const QueryTagInfoBySelectionResponseBody &) = default ;
    QueryTagInfoBySelectionResponseBody(QueryTagInfoBySelectionResponseBody &&) = default ;
    QueryTagInfoBySelectionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTagInfoBySelectionResponseBody() = default ;
    QueryTagInfoBySelectionResponseBody& operator=(const QueryTagInfoBySelectionResponseBody &) = default ;
    QueryTagInfoBySelectionResponseBody& operator=(QueryTagInfoBySelectionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AuthCodeList, authCodeList_);
        DARABONBA_PTR_TO_JSON(ComplexityType, complexityType_);
        DARABONBA_PTR_TO_JSON(DemoAddress, demoAddress_);
        DARABONBA_PTR_TO_JSON(DocAddress, docAddress_);
        DARABONBA_PTR_TO_JSON(EnumDefinitionAddress, enumDefinitionAddress_);
        DARABONBA_PTR_TO_JSON(FlowName, flowName_);
        DARABONBA_PTR_TO_JSON(IndustryId, industryId_);
        DARABONBA_PTR_TO_JSON(IndustryName, industryName_);
        DARABONBA_PTR_TO_JSON(ParamList, paramList_);
        DARABONBA_PTR_TO_JSON(RichTextDescription, richTextDescription_);
        DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
        DARABONBA_PTR_TO_JSON(SceneName, sceneName_);
        DARABONBA_PTR_TO_JSON(TagId, tagId_);
        DARABONBA_PTR_TO_JSON(TagName, tagName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthCodeList, authCodeList_);
        DARABONBA_PTR_FROM_JSON(ComplexityType, complexityType_);
        DARABONBA_PTR_FROM_JSON(DemoAddress, demoAddress_);
        DARABONBA_PTR_FROM_JSON(DocAddress, docAddress_);
        DARABONBA_PTR_FROM_JSON(EnumDefinitionAddress, enumDefinitionAddress_);
        DARABONBA_PTR_FROM_JSON(FlowName, flowName_);
        DARABONBA_PTR_FROM_JSON(IndustryId, industryId_);
        DARABONBA_PTR_FROM_JSON(IndustryName, industryName_);
        DARABONBA_PTR_FROM_JSON(ParamList, paramList_);
        DARABONBA_PTR_FROM_JSON(RichTextDescription, richTextDescription_);
        DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
        DARABONBA_PTR_FROM_JSON(SceneName, sceneName_);
        DARABONBA_PTR_FROM_JSON(TagId, tagId_);
        DARABONBA_PTR_FROM_JSON(TagName, tagName_);
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
      class ParamList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ParamList& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(Hint, hint_);
          DARABONBA_PTR_TO_JSON(Must, must_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(ValueDict, valueDict_);
        };
        friend void from_json(const Darabonba::Json& j, ParamList& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(Hint, hint_);
          DARABONBA_PTR_FROM_JSON(Must, must_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(ValueDict, valueDict_);
        };
        ParamList() = default ;
        ParamList(const ParamList &) = default ;
        ParamList(ParamList &&) = default ;
        ParamList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ParamList() = default ;
        ParamList& operator=(const ParamList &) = default ;
        ParamList& operator=(ParamList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ValueDict : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ValueDict& obj) { 
            DARABONBA_PTR_TO_JSON(Code, code_);
            DARABONBA_PTR_TO_JSON(Desc, desc_);
          };
          friend void from_json(const Darabonba::Json& j, ValueDict& obj) { 
            DARABONBA_PTR_FROM_JSON(Code, code_);
            DARABONBA_PTR_FROM_JSON(Desc, desc_);
          };
          ValueDict() = default ;
          ValueDict(const ValueDict &) = default ;
          ValueDict(ValueDict &&) = default ;
          ValueDict(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ValueDict() = default ;
          ValueDict& operator=(const ValueDict &) = default ;
          ValueDict& operator=(ValueDict &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->code_ == nullptr
        && this->desc_ == nullptr; };
          // code Field Functions 
          bool hasCode() const { return this->code_ != nullptr;};
          void deleteCode() { this->code_ = nullptr;};
          inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
          inline ValueDict& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


          // desc Field Functions 
          bool hasDesc() const { return this->desc_ != nullptr;};
          void deleteDesc() { this->desc_ = nullptr;};
          inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
          inline ValueDict& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


        protected:
          // The English name.
          shared_ptr<string> code_ {};
          // The Chinese name.
          shared_ptr<string> desc_ {};
        };

        virtual bool empty() const override { return this->code_ == nullptr
        && this->hint_ == nullptr && this->must_ == nullptr && this->name_ == nullptr && this->type_ == nullptr && this->valueDict_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline ParamList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // hint Field Functions 
        bool hasHint() const { return this->hint_ != nullptr;};
        void deleteHint() { this->hint_ = nullptr;};
        inline string getHint() const { DARABONBA_PTR_GET_DEFAULT(hint_, "") };
        inline ParamList& setHint(string hint) { DARABONBA_PTR_SET_VALUE(hint_, hint) };


        // must Field Functions 
        bool hasMust() const { return this->must_ != nullptr;};
        void deleteMust() { this->must_ = nullptr;};
        inline bool getMust() const { DARABONBA_PTR_GET_DEFAULT(must_, false) };
        inline ParamList& setMust(bool must) { DARABONBA_PTR_SET_VALUE(must_, must) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline ParamList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline ParamList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // valueDict Field Functions 
        bool hasValueDict() const { return this->valueDict_ != nullptr;};
        void deleteValueDict() { this->valueDict_ = nullptr;};
        inline const vector<ParamList::ValueDict> & getValueDict() const { DARABONBA_PTR_GET_CONST(valueDict_, vector<ParamList::ValueDict>) };
        inline vector<ParamList::ValueDict> getValueDict() { DARABONBA_PTR_GET(valueDict_, vector<ParamList::ValueDict>) };
        inline ParamList& setValueDict(const vector<ParamList::ValueDict> & valueDict) { DARABONBA_PTR_SET_VALUE(valueDict_, valueDict) };
        inline ParamList& setValueDict(vector<ParamList::ValueDict> && valueDict) { DARABONBA_PTR_SET_RVALUE(valueDict_, valueDict) };


      protected:
        // The English name of the parameter.
        shared_ptr<string> code_ {};
        // The input hint.
        shared_ptr<string> hint_ {};
        // Indicates whether the parameter is required.
        shared_ptr<bool> must_ {};
        // The Chinese name of the parameter.
        shared_ptr<string> name_ {};
        // The type. The code that corresponds to EnumUIWidgetTypes.
        shared_ptr<string> type_ {};
        // The definitions of the enumerated values such as Code or Desc.
        shared_ptr<vector<ParamList::ValueDict>> valueDict_ {};
      };

      virtual bool empty() const override { return this->authCodeList_ == nullptr
        && this->complexityType_ == nullptr && this->demoAddress_ == nullptr && this->docAddress_ == nullptr && this->enumDefinitionAddress_ == nullptr && this->flowName_ == nullptr
        && this->industryId_ == nullptr && this->industryName_ == nullptr && this->paramList_ == nullptr && this->richTextDescription_ == nullptr && this->sceneId_ == nullptr
        && this->sceneName_ == nullptr && this->tagId_ == nullptr && this->tagName_ == nullptr; };
      // authCodeList Field Functions 
      bool hasAuthCodeList() const { return this->authCodeList_ != nullptr;};
      void deleteAuthCodeList() { this->authCodeList_ = nullptr;};
      inline const vector<string> & getAuthCodeList() const { DARABONBA_PTR_GET_CONST(authCodeList_, vector<string>) };
      inline vector<string> getAuthCodeList() { DARABONBA_PTR_GET(authCodeList_, vector<string>) };
      inline Data& setAuthCodeList(const vector<string> & authCodeList) { DARABONBA_PTR_SET_VALUE(authCodeList_, authCodeList) };
      inline Data& setAuthCodeList(vector<string> && authCodeList) { DARABONBA_PTR_SET_RVALUE(authCodeList_, authCodeList) };


      // complexityType Field Functions 
      bool hasComplexityType() const { return this->complexityType_ != nullptr;};
      void deleteComplexityType() { this->complexityType_ = nullptr;};
      inline string getComplexityType() const { DARABONBA_PTR_GET_DEFAULT(complexityType_, "") };
      inline Data& setComplexityType(string complexityType) { DARABONBA_PTR_SET_VALUE(complexityType_, complexityType) };


      // demoAddress Field Functions 
      bool hasDemoAddress() const { return this->demoAddress_ != nullptr;};
      void deleteDemoAddress() { this->demoAddress_ = nullptr;};
      inline string getDemoAddress() const { DARABONBA_PTR_GET_DEFAULT(demoAddress_, "") };
      inline Data& setDemoAddress(string demoAddress) { DARABONBA_PTR_SET_VALUE(demoAddress_, demoAddress) };


      // docAddress Field Functions 
      bool hasDocAddress() const { return this->docAddress_ != nullptr;};
      void deleteDocAddress() { this->docAddress_ = nullptr;};
      inline string getDocAddress() const { DARABONBA_PTR_GET_DEFAULT(docAddress_, "") };
      inline Data& setDocAddress(string docAddress) { DARABONBA_PTR_SET_VALUE(docAddress_, docAddress) };


      // enumDefinitionAddress Field Functions 
      bool hasEnumDefinitionAddress() const { return this->enumDefinitionAddress_ != nullptr;};
      void deleteEnumDefinitionAddress() { this->enumDefinitionAddress_ = nullptr;};
      inline string getEnumDefinitionAddress() const { DARABONBA_PTR_GET_DEFAULT(enumDefinitionAddress_, "") };
      inline Data& setEnumDefinitionAddress(string enumDefinitionAddress) { DARABONBA_PTR_SET_VALUE(enumDefinitionAddress_, enumDefinitionAddress) };


      // flowName Field Functions 
      bool hasFlowName() const { return this->flowName_ != nullptr;};
      void deleteFlowName() { this->flowName_ = nullptr;};
      inline string getFlowName() const { DARABONBA_PTR_GET_DEFAULT(flowName_, "") };
      inline Data& setFlowName(string flowName) { DARABONBA_PTR_SET_VALUE(flowName_, flowName) };


      // industryId Field Functions 
      bool hasIndustryId() const { return this->industryId_ != nullptr;};
      void deleteIndustryId() { this->industryId_ = nullptr;};
      inline int64_t getIndustryId() const { DARABONBA_PTR_GET_DEFAULT(industryId_, 0L) };
      inline Data& setIndustryId(int64_t industryId) { DARABONBA_PTR_SET_VALUE(industryId_, industryId) };


      // industryName Field Functions 
      bool hasIndustryName() const { return this->industryName_ != nullptr;};
      void deleteIndustryName() { this->industryName_ = nullptr;};
      inline string getIndustryName() const { DARABONBA_PTR_GET_DEFAULT(industryName_, "") };
      inline Data& setIndustryName(string industryName) { DARABONBA_PTR_SET_VALUE(industryName_, industryName) };


      // paramList Field Functions 
      bool hasParamList() const { return this->paramList_ != nullptr;};
      void deleteParamList() { this->paramList_ = nullptr;};
      inline const vector<Data::ParamList> & getParamList() const { DARABONBA_PTR_GET_CONST(paramList_, vector<Data::ParamList>) };
      inline vector<Data::ParamList> getParamList() { DARABONBA_PTR_GET(paramList_, vector<Data::ParamList>) };
      inline Data& setParamList(const vector<Data::ParamList> & paramList) { DARABONBA_PTR_SET_VALUE(paramList_, paramList) };
      inline Data& setParamList(vector<Data::ParamList> && paramList) { DARABONBA_PTR_SET_RVALUE(paramList_, paramList) };


      // richTextDescription Field Functions 
      bool hasRichTextDescription() const { return this->richTextDescription_ != nullptr;};
      void deleteRichTextDescription() { this->richTextDescription_ = nullptr;};
      inline string getRichTextDescription() const { DARABONBA_PTR_GET_DEFAULT(richTextDescription_, "") };
      inline Data& setRichTextDescription(string richTextDescription) { DARABONBA_PTR_SET_VALUE(richTextDescription_, richTextDescription) };


      // sceneId Field Functions 
      bool hasSceneId() const { return this->sceneId_ != nullptr;};
      void deleteSceneId() { this->sceneId_ = nullptr;};
      inline int64_t getSceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, 0L) };
      inline Data& setSceneId(int64_t sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


      // sceneName Field Functions 
      bool hasSceneName() const { return this->sceneName_ != nullptr;};
      void deleteSceneName() { this->sceneName_ = nullptr;};
      inline string getSceneName() const { DARABONBA_PTR_GET_DEFAULT(sceneName_, "") };
      inline Data& setSceneName(string sceneName) { DARABONBA_PTR_SET_VALUE(sceneName_, sceneName) };


      // tagId Field Functions 
      bool hasTagId() const { return this->tagId_ != nullptr;};
      void deleteTagId() { this->tagId_ = nullptr;};
      inline int64_t getTagId() const { DARABONBA_PTR_GET_DEFAULT(tagId_, 0L) };
      inline Data& setTagId(int64_t tagId) { DARABONBA_PTR_SET_VALUE(tagId_, tagId) };


      // tagName Field Functions 
      bool hasTagName() const { return this->tagName_ != nullptr;};
      void deleteTagName() { this->tagName_ = nullptr;};
      inline string getTagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
      inline Data& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


    protected:
      // The list of available authorization codes.
      shared_ptr<vector<string>> authCodeList_ {};
      shared_ptr<string> complexityType_ {};
      // The URL for the API demo.
      shared_ptr<string> demoAddress_ {};
      // The URL for the API documentation.
      shared_ptr<string> docAddress_ {};
      // The URL for the definitions of the enumerated values.
      shared_ptr<string> enumDefinitionAddress_ {};
      // The flow name.
      shared_ptr<string> flowName_ {};
      // The industry ID.
      shared_ptr<int64_t> industryId_ {};
      // The industry name.
      shared_ptr<string> industryName_ {};
      // The list of tag parameters.
      shared_ptr<vector<Data::ParamList>> paramList_ {};
      shared_ptr<string> richTextDescription_ {};
      // The scene ID.
      shared_ptr<int64_t> sceneId_ {};
      // The scene name.
      shared_ptr<string> sceneName_ {};
      // The tag ID.
      shared_ptr<int64_t> tagId_ {};
      // The tag name.
      shared_ptr<string> tagName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryTagInfoBySelectionResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<QueryTagInfoBySelectionResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<QueryTagInfoBySelectionResponseBody::Data>) };
    inline vector<QueryTagInfoBySelectionResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<QueryTagInfoBySelectionResponseBody::Data>) };
    inline QueryTagInfoBySelectionResponseBody& setData(const vector<QueryTagInfoBySelectionResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryTagInfoBySelectionResponseBody& setData(vector<QueryTagInfoBySelectionResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryTagInfoBySelectionResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryTagInfoBySelectionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryTagInfoBySelectionResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code. **OK** indicates that the request is successful.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<vector<QueryTagInfoBySelectionResponseBody::Data>> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dytnsapi20200217
#endif
