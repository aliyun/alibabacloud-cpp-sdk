// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEXTTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTEXTTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class GetTextTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTextTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(availableIndustry, availableIndustry_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTextTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(availableIndustry, availableIndustry_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetTextTemplateResponseBody() = default ;
    GetTextTemplateResponseBody(const GetTextTemplateResponseBody &) = default ;
    GetTextTemplateResponseBody(GetTextTemplateResponseBody &&) = default ;
    GetTextTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTextTemplateResponseBody() = default ;
    GetTextTemplateResponseBody& operator=(const GetTextTemplateResponseBody &) = default ;
    GetTextTemplateResponseBody& operator=(GetTextTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AvailableIndustry : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AvailableIndustry& obj) { 
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(textModeTypes, textModeTypes_);
      };
      friend void from_json(const Darabonba::Json& j, AvailableIndustry& obj) { 
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(textModeTypes, textModeTypes_);
      };
      AvailableIndustry() = default ;
      AvailableIndustry(const AvailableIndustry &) = default ;
      AvailableIndustry(AvailableIndustry &&) = default ;
      AvailableIndustry(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AvailableIndustry() = default ;
      AvailableIndustry& operator=(const AvailableIndustry &) = default ;
      AvailableIndustry& operator=(AvailableIndustry &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TextModeTypes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TextModeTypes& obj) { 
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(textStyles, textStyles_);
        };
        friend void from_json(const Darabonba::Json& j, TextModeTypes& obj) { 
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(textStyles, textStyles_);
        };
        TextModeTypes() = default ;
        TextModeTypes(const TextModeTypes &) = default ;
        TextModeTypes(TextModeTypes &&) = default ;
        TextModeTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TextModeTypes() = default ;
        TextModeTypes& operator=(const TextModeTypes &) = default ;
        TextModeTypes& operator=(TextModeTypes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TextStyles : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TextStyles& obj) { 
            DARABONBA_PTR_TO_JSON(desc, desc_);
            DARABONBA_PTR_TO_JSON(disabled, disabled_);
            DARABONBA_PTR_TO_JSON(name, name_);
            DARABONBA_PTR_TO_JSON(templateKey, templateKey_);
          };
          friend void from_json(const Darabonba::Json& j, TextStyles& obj) { 
            DARABONBA_PTR_FROM_JSON(desc, desc_);
            DARABONBA_PTR_FROM_JSON(disabled, disabled_);
            DARABONBA_PTR_FROM_JSON(name, name_);
            DARABONBA_PTR_FROM_JSON(templateKey, templateKey_);
          };
          TextStyles() = default ;
          TextStyles(const TextStyles &) = default ;
          TextStyles(TextStyles &&) = default ;
          TextStyles(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TextStyles() = default ;
          TextStyles& operator=(const TextStyles &) = default ;
          TextStyles& operator=(TextStyles &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->desc_ == nullptr
        && this->disabled_ == nullptr && this->name_ == nullptr && this->templateKey_ == nullptr; };
          // desc Field Functions 
          bool hasDesc() const { return this->desc_ != nullptr;};
          void deleteDesc() { this->desc_ = nullptr;};
          inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
          inline TextStyles& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


          // disabled Field Functions 
          bool hasDisabled() const { return this->disabled_ != nullptr;};
          void deleteDisabled() { this->disabled_ = nullptr;};
          inline bool getDisabled() const { DARABONBA_PTR_GET_DEFAULT(disabled_, false) };
          inline TextStyles& setDisabled(bool disabled) { DARABONBA_PTR_SET_VALUE(disabled_, disabled) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline TextStyles& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // templateKey Field Functions 
          bool hasTemplateKey() const { return this->templateKey_ != nullptr;};
          void deleteTemplateKey() { this->templateKey_ = nullptr;};
          inline string getTemplateKey() const { DARABONBA_PTR_GET_DEFAULT(templateKey_, "") };
          inline TextStyles& setTemplateKey(string templateKey) { DARABONBA_PTR_SET_VALUE(templateKey_, templateKey) };


        protected:
          shared_ptr<string> desc_ {};
          shared_ptr<bool> disabled_ {};
          shared_ptr<string> name_ {};
          shared_ptr<string> templateKey_ {};
        };

        virtual bool empty() const override { return this->name_ == nullptr
        && this->textStyles_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline TextModeTypes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // textStyles Field Functions 
        bool hasTextStyles() const { return this->textStyles_ != nullptr;};
        void deleteTextStyles() { this->textStyles_ = nullptr;};
        inline const vector<TextModeTypes::TextStyles> & getTextStyles() const { DARABONBA_PTR_GET_CONST(textStyles_, vector<TextModeTypes::TextStyles>) };
        inline vector<TextModeTypes::TextStyles> getTextStyles() { DARABONBA_PTR_GET(textStyles_, vector<TextModeTypes::TextStyles>) };
        inline TextModeTypes& setTextStyles(const vector<TextModeTypes::TextStyles> & textStyles) { DARABONBA_PTR_SET_VALUE(textStyles_, textStyles) };
        inline TextModeTypes& setTextStyles(vector<TextModeTypes::TextStyles> && textStyles) { DARABONBA_PTR_SET_RVALUE(textStyles_, textStyles) };


      protected:
        shared_ptr<string> name_ {};
        shared_ptr<vector<TextModeTypes::TextStyles>> textStyles_ {};
      };

      virtual bool empty() const override { return this->name_ == nullptr
        && this->textModeTypes_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline AvailableIndustry& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // textModeTypes Field Functions 
      bool hasTextModeTypes() const { return this->textModeTypes_ != nullptr;};
      void deleteTextModeTypes() { this->textModeTypes_ = nullptr;};
      inline const vector<AvailableIndustry::TextModeTypes> & getTextModeTypes() const { DARABONBA_PTR_GET_CONST(textModeTypes_, vector<AvailableIndustry::TextModeTypes>) };
      inline vector<AvailableIndustry::TextModeTypes> getTextModeTypes() { DARABONBA_PTR_GET(textModeTypes_, vector<AvailableIndustry::TextModeTypes>) };
      inline AvailableIndustry& setTextModeTypes(const vector<AvailableIndustry::TextModeTypes> & textModeTypes) { DARABONBA_PTR_SET_VALUE(textModeTypes_, textModeTypes) };
      inline AvailableIndustry& setTextModeTypes(vector<AvailableIndustry::TextModeTypes> && textModeTypes) { DARABONBA_PTR_SET_RVALUE(textModeTypes_, textModeTypes) };


    protected:
      shared_ptr<string> name_ {};
      shared_ptr<vector<AvailableIndustry::TextModeTypes>> textModeTypes_ {};
    };

    virtual bool empty() const override { return this->availableIndustry_ == nullptr
        && this->requestId_ == nullptr; };
    // availableIndustry Field Functions 
    bool hasAvailableIndustry() const { return this->availableIndustry_ != nullptr;};
    void deleteAvailableIndustry() { this->availableIndustry_ = nullptr;};
    inline const GetTextTemplateResponseBody::AvailableIndustry & getAvailableIndustry() const { DARABONBA_PTR_GET_CONST(availableIndustry_, GetTextTemplateResponseBody::AvailableIndustry) };
    inline GetTextTemplateResponseBody::AvailableIndustry getAvailableIndustry() { DARABONBA_PTR_GET(availableIndustry_, GetTextTemplateResponseBody::AvailableIndustry) };
    inline GetTextTemplateResponseBody& setAvailableIndustry(const GetTextTemplateResponseBody::AvailableIndustry & availableIndustry) { DARABONBA_PTR_SET_VALUE(availableIndustry_, availableIndustry) };
    inline GetTextTemplateResponseBody& setAvailableIndustry(GetTextTemplateResponseBody::AvailableIndustry && availableIndustry) { DARABONBA_PTR_SET_RVALUE(availableIndustry_, availableIndustry) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTextTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetTextTemplateResponseBody::AvailableIndustry> availableIndustry_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
