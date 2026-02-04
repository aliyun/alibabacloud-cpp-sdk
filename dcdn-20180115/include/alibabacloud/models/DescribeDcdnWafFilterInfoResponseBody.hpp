// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFFILTERINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFFILTERINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnWafFilterInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnWafFilterInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnWafFilterInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDcdnWafFilterInfoResponseBody() = default ;
    DescribeDcdnWafFilterInfoResponseBody(const DescribeDcdnWafFilterInfoResponseBody &) = default ;
    DescribeDcdnWafFilterInfoResponseBody(DescribeDcdnWafFilterInfoResponseBody &&) = default ;
    DescribeDcdnWafFilterInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnWafFilterInfoResponseBody() = default ;
    DescribeDcdnWafFilterInfoResponseBody& operator=(const DescribeDcdnWafFilterInfoResponseBody &) = default ;
    DescribeDcdnWafFilterInfoResponseBody& operator=(DescribeDcdnWafFilterInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Content : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Content& obj) { 
        DARABONBA_PTR_TO_JSON(DefenseScene, defenseScene_);
        DARABONBA_PTR_TO_JSON(Fields, fields_);
      };
      friend void from_json(const Darabonba::Json& j, Content& obj) { 
        DARABONBA_PTR_FROM_JSON(DefenseScene, defenseScene_);
        DARABONBA_PTR_FROM_JSON(Fields, fields_);
      };
      Content() = default ;
      Content(const Content &) = default ;
      Content(Content &&) = default ;
      Content(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Content() = default ;
      Content& operator=(const Content &) = default ;
      Content& operator=(Content &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Fields : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Fields& obj) { 
          DARABONBA_PTR_TO_JSON(ExtendField, extendField_);
          DARABONBA_PTR_TO_JSON(LogicalSymbol, logicalSymbol_);
          DARABONBA_PTR_TO_JSON(MatchField, matchField_);
        };
        friend void from_json(const Darabonba::Json& j, Fields& obj) { 
          DARABONBA_PTR_FROM_JSON(ExtendField, extendField_);
          DARABONBA_PTR_FROM_JSON(LogicalSymbol, logicalSymbol_);
          DARABONBA_PTR_FROM_JSON(MatchField, matchField_);
        };
        Fields() = default ;
        Fields(const Fields &) = default ;
        Fields(Fields &&) = default ;
        Fields(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Fields() = default ;
        Fields& operator=(const Fields &) = default ;
        Fields& operator=(Fields &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class LogicalSymbol : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const LogicalSymbol& obj) { 
            DARABONBA_PTR_TO_JSON(Attributes, attributes_);
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(MaxLength, maxLength_);
            DARABONBA_PTR_TO_JSON(Regexp, regexp_);
            DARABONBA_PTR_TO_JSON(Symbol, symbol_);
            DARABONBA_PTR_TO_JSON(Tip, tip_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, LogicalSymbol& obj) { 
            DARABONBA_PTR_FROM_JSON(Attributes, attributes_);
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(MaxLength, maxLength_);
            DARABONBA_PTR_FROM_JSON(Regexp, regexp_);
            DARABONBA_PTR_FROM_JSON(Symbol, symbol_);
            DARABONBA_PTR_FROM_JSON(Tip, tip_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          LogicalSymbol() = default ;
          LogicalSymbol(const LogicalSymbol &) = default ;
          LogicalSymbol(LogicalSymbol &&) = default ;
          LogicalSymbol(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~LogicalSymbol() = default ;
          LogicalSymbol& operator=(const LogicalSymbol &) = default ;
          LogicalSymbol& operator=(LogicalSymbol &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Regexp : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Regexp& obj) { 
              DARABONBA_PTR_TO_JSON(ErrMsg, errMsg_);
              DARABONBA_PTR_TO_JSON(Pattern, pattern_);
            };
            friend void from_json(const Darabonba::Json& j, Regexp& obj) { 
              DARABONBA_PTR_FROM_JSON(ErrMsg, errMsg_);
              DARABONBA_PTR_FROM_JSON(Pattern, pattern_);
            };
            Regexp() = default ;
            Regexp(const Regexp &) = default ;
            Regexp(Regexp &&) = default ;
            Regexp(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Regexp() = default ;
            Regexp& operator=(const Regexp &) = default ;
            Regexp& operator=(Regexp &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->errMsg_ == nullptr
        && this->pattern_ == nullptr; };
            // errMsg Field Functions 
            bool hasErrMsg() const { return this->errMsg_ != nullptr;};
            void deleteErrMsg() { this->errMsg_ = nullptr;};
            inline string getErrMsg() const { DARABONBA_PTR_GET_DEFAULT(errMsg_, "") };
            inline Regexp& setErrMsg(string errMsg) { DARABONBA_PTR_SET_VALUE(errMsg_, errMsg) };


            // pattern Field Functions 
            bool hasPattern() const { return this->pattern_ != nullptr;};
            void deletePattern() { this->pattern_ = nullptr;};
            inline string getPattern() const { DARABONBA_PTR_GET_DEFAULT(pattern_, "") };
            inline Regexp& setPattern(string pattern) { DARABONBA_PTR_SET_VALUE(pattern_, pattern) };


          protected:
            // The error message returned when no items match the regular expression.
            shared_ptr<string> errMsg_ {};
            // The regular expression.
            shared_ptr<string> pattern_ {};
          };

          virtual bool empty() const override { return this->attributes_ == nullptr
        && this->description_ == nullptr && this->maxLength_ == nullptr && this->regexp_ == nullptr && this->symbol_ == nullptr && this->tip_ == nullptr
        && this->type_ == nullptr; };
          // attributes Field Functions 
          bool hasAttributes() const { return this->attributes_ != nullptr;};
          void deleteAttributes() { this->attributes_ = nullptr;};
          inline int32_t getAttributes() const { DARABONBA_PTR_GET_DEFAULT(attributes_, 0) };
          inline LogicalSymbol& setAttributes(int32_t attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };


          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline LogicalSymbol& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // maxLength Field Functions 
          bool hasMaxLength() const { return this->maxLength_ != nullptr;};
          void deleteMaxLength() { this->maxLength_ = nullptr;};
          inline int32_t getMaxLength() const { DARABONBA_PTR_GET_DEFAULT(maxLength_, 0) };
          inline LogicalSymbol& setMaxLength(int32_t maxLength) { DARABONBA_PTR_SET_VALUE(maxLength_, maxLength) };


          // regexp Field Functions 
          bool hasRegexp() const { return this->regexp_ != nullptr;};
          void deleteRegexp() { this->regexp_ = nullptr;};
          inline const LogicalSymbol::Regexp & getRegexp() const { DARABONBA_PTR_GET_CONST(regexp_, LogicalSymbol::Regexp) };
          inline LogicalSymbol::Regexp getRegexp() { DARABONBA_PTR_GET(regexp_, LogicalSymbol::Regexp) };
          inline LogicalSymbol& setRegexp(const LogicalSymbol::Regexp & regexp) { DARABONBA_PTR_SET_VALUE(regexp_, regexp) };
          inline LogicalSymbol& setRegexp(LogicalSymbol::Regexp && regexp) { DARABONBA_PTR_SET_RVALUE(regexp_, regexp) };


          // symbol Field Functions 
          bool hasSymbol() const { return this->symbol_ != nullptr;};
          void deleteSymbol() { this->symbol_ = nullptr;};
          inline string getSymbol() const { DARABONBA_PTR_GET_DEFAULT(symbol_, "") };
          inline LogicalSymbol& setSymbol(string symbol) { DARABONBA_PTR_SET_VALUE(symbol_, symbol) };


          // tip Field Functions 
          bool hasTip() const { return this->tip_ != nullptr;};
          void deleteTip() { this->tip_ = nullptr;};
          inline string getTip() const { DARABONBA_PTR_GET_DEFAULT(tip_, "") };
          inline LogicalSymbol& setTip(string tip) { DARABONBA_PTR_SET_VALUE(tip_, tip) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline LogicalSymbol& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The configurable attributes, which are bit-field variables that are shown in the following list.\\
          // For example, 1(00000001) indicates that case sensitivity can be enabled and stream match cannot be enabled, and 3(00000011) indicates that case sensitivity and stream match can be enabled.
          // 
          // *   Bit (low to high) - Description
          // *   1 - Case sensitivity
          // *   2 - Stream match
          shared_ptr<int32_t> attributes_ {};
          // The logical symbol that is displayed in the Dynamic Content Delivery Network (DCDN) console.
          shared_ptr<string> description_ {};
          // The maximum number of match items that can be returned. The value of this parameter varies based on the value of the Type parameter. Valid values:
          // 
          // *   If **multi** is returned for the Type parameter, the value of this parameter indicates the maximum number of match items.
          // *   If **single** is returned for the Type parameter, the value of this parameter is 1.
          // *   If **none** is returned for the Type parameter, the value of this parameter is 0.
          shared_ptr<int32_t> maxLength_ {};
          // The information about the regular expression.
          shared_ptr<LogicalSymbol::Regexp> regexp_ {};
          // The logical symbol that is passed to the backend.
          shared_ptr<string> symbol_ {};
          // The tips that are displayed in the match item.
          shared_ptr<string> tip_ {};
          // The number of match items. Valid values:
          // 
          // *   multi: You can specify multiple match items.
          // *   single: You can specify only a match item.
          // *   none: no match items.
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->extendField_ == nullptr
        && this->logicalSymbol_ == nullptr && this->matchField_ == nullptr; };
        // extendField Field Functions 
        bool hasExtendField() const { return this->extendField_ != nullptr;};
        void deleteExtendField() { this->extendField_ = nullptr;};
        inline string getExtendField() const { DARABONBA_PTR_GET_DEFAULT(extendField_, "") };
        inline Fields& setExtendField(string extendField) { DARABONBA_PTR_SET_VALUE(extendField_, extendField) };


        // logicalSymbol Field Functions 
        bool hasLogicalSymbol() const { return this->logicalSymbol_ != nullptr;};
        void deleteLogicalSymbol() { this->logicalSymbol_ = nullptr;};
        inline const vector<Fields::LogicalSymbol> & getLogicalSymbol() const { DARABONBA_PTR_GET_CONST(logicalSymbol_, vector<Fields::LogicalSymbol>) };
        inline vector<Fields::LogicalSymbol> getLogicalSymbol() { DARABONBA_PTR_GET(logicalSymbol_, vector<Fields::LogicalSymbol>) };
        inline Fields& setLogicalSymbol(const vector<Fields::LogicalSymbol> & logicalSymbol) { DARABONBA_PTR_SET_VALUE(logicalSymbol_, logicalSymbol) };
        inline Fields& setLogicalSymbol(vector<Fields::LogicalSymbol> && logicalSymbol) { DARABONBA_PTR_SET_RVALUE(logicalSymbol_, logicalSymbol) };


        // matchField Field Functions 
        bool hasMatchField() const { return this->matchField_ != nullptr;};
        void deleteMatchField() { this->matchField_ = nullptr;};
        inline string getMatchField() const { DARABONBA_PTR_GET_DEFAULT(matchField_, "") };
        inline Fields& setMatchField(string matchField) { DARABONBA_PTR_SET_VALUE(matchField_, matchField) };


      protected:
        // The description of the match field. This parameter is not returned or is empty if no match fields are found.
        shared_ptr<string> extendField_ {};
        // The information about the logical symbol.
        shared_ptr<vector<Fields::LogicalSymbol>> logicalSymbol_ {};
        // The match field.
        shared_ptr<string> matchField_ {};
      };

      virtual bool empty() const override { return this->defenseScene_ == nullptr
        && this->fields_ == nullptr; };
      // defenseScene Field Functions 
      bool hasDefenseScene() const { return this->defenseScene_ != nullptr;};
      void deleteDefenseScene() { this->defenseScene_ = nullptr;};
      inline string getDefenseScene() const { DARABONBA_PTR_GET_DEFAULT(defenseScene_, "") };
      inline Content& setDefenseScene(string defenseScene) { DARABONBA_PTR_SET_VALUE(defenseScene_, defenseScene) };


      // fields Field Functions 
      bool hasFields() const { return this->fields_ != nullptr;};
      void deleteFields() { this->fields_ = nullptr;};
      inline const vector<Content::Fields> & getFields() const { DARABONBA_PTR_GET_CONST(fields_, vector<Content::Fields>) };
      inline vector<Content::Fields> getFields() { DARABONBA_PTR_GET(fields_, vector<Content::Fields>) };
      inline Content& setFields(const vector<Content::Fields> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
      inline Content& setFields(vector<Content::Fields> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


    protected:
      // The type of the protection policy. The value of this parameter is the same as that of the DefenseScenes parameter in the request.
      shared_ptr<string> defenseScene_ {};
      // The information about the match condition.
      shared_ptr<vector<Content::Fields>> fields_ {};
    };

    virtual bool empty() const override { return this->content_ == nullptr
        && this->requestId_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const vector<DescribeDcdnWafFilterInfoResponseBody::Content> & getContent() const { DARABONBA_PTR_GET_CONST(content_, vector<DescribeDcdnWafFilterInfoResponseBody::Content>) };
    inline vector<DescribeDcdnWafFilterInfoResponseBody::Content> getContent() { DARABONBA_PTR_GET(content_, vector<DescribeDcdnWafFilterInfoResponseBody::Content>) };
    inline DescribeDcdnWafFilterInfoResponseBody& setContent(const vector<DescribeDcdnWafFilterInfoResponseBody::Content> & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline DescribeDcdnWafFilterInfoResponseBody& setContent(vector<DescribeDcdnWafFilterInfoResponseBody::Content> && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnWafFilterInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned information.
    shared_ptr<vector<DescribeDcdnWafFilterInfoResponseBody::Content>> content_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
