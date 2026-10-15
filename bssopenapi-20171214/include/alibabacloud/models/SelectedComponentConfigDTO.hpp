// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SELECTEDCOMPONENTCONFIGDTO_HPP_
#define ALIBABACLOUD_MODELS_SELECTEDCOMPONENTCONFIGDTO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class SelectedComponentConfigDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SelectedComponentConfigDTO& obj) { 
      DARABONBA_PTR_TO_JSON(AttributeConfigs, attributeConfigs_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, SelectedComponentConfigDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(AttributeConfigs, attributeConfigs_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    SelectedComponentConfigDTO() = default ;
    SelectedComponentConfigDTO(const SelectedComponentConfigDTO &) = default ;
    SelectedComponentConfigDTO(SelectedComponentConfigDTO &&) = default ;
    SelectedComponentConfigDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SelectedComponentConfigDTO() = default ;
    SelectedComponentConfigDTO& operator=(const SelectedComponentConfigDTO &) = default ;
    SelectedComponentConfigDTO& operator=(SelectedComponentConfigDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AttributeConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AttributeConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(BoundedValue, boundedValue_);
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, AttributeConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(BoundedValue, boundedValue_);
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      AttributeConfigs() = default ;
      AttributeConfigs(const AttributeConfigs &) = default ;
      AttributeConfigs(AttributeConfigs &&) = default ;
      AttributeConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AttributeConfigs() = default ;
      AttributeConfigs& operator=(const AttributeConfigs &) = default ;
      AttributeConfigs& operator=(AttributeConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class BoundedValue : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BoundedValue& obj) { 
          DARABONBA_PTR_TO_JSON(LowerBound, lowerBound_);
          DARABONBA_PTR_TO_JSON(UpperBound, upperBound_);
        };
        friend void from_json(const Darabonba::Json& j, BoundedValue& obj) { 
          DARABONBA_PTR_FROM_JSON(LowerBound, lowerBound_);
          DARABONBA_PTR_FROM_JSON(UpperBound, upperBound_);
        };
        BoundedValue() = default ;
        BoundedValue(const BoundedValue &) = default ;
        BoundedValue(BoundedValue &&) = default ;
        BoundedValue(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BoundedValue() = default ;
        BoundedValue& operator=(const BoundedValue &) = default ;
        BoundedValue& operator=(BoundedValue &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class UpperBound : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const UpperBound& obj) { 
            DARABONBA_PTR_TO_JSON(Code, code_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, UpperBound& obj) { 
            DARABONBA_PTR_FROM_JSON(Code, code_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          UpperBound() = default ;
          UpperBound(const UpperBound &) = default ;
          UpperBound(UpperBound &&) = default ;
          UpperBound(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~UpperBound() = default ;
          UpperBound& operator=(const UpperBound &) = default ;
          UpperBound& operator=(UpperBound &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->code_ == nullptr
        && this->value_ == nullptr; };
          // code Field Functions 
          bool hasCode() const { return this->code_ != nullptr;};
          void deleteCode() { this->code_ = nullptr;};
          inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
          inline UpperBound& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline UpperBound& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The property code.
          shared_ptr<string> code_ {};
          // The property value.
          shared_ptr<string> value_ {};
        };

        class LowerBound : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const LowerBound& obj) { 
            DARABONBA_PTR_TO_JSON(Code, code_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, LowerBound& obj) { 
            DARABONBA_PTR_FROM_JSON(Code, code_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          LowerBound() = default ;
          LowerBound(const LowerBound &) = default ;
          LowerBound(LowerBound &&) = default ;
          LowerBound(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~LowerBound() = default ;
          LowerBound& operator=(const LowerBound &) = default ;
          LowerBound& operator=(LowerBound &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->code_ == nullptr
        && this->value_ == nullptr; };
          // code Field Functions 
          bool hasCode() const { return this->code_ != nullptr;};
          void deleteCode() { this->code_ = nullptr;};
          inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
          inline LowerBound& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline LowerBound& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The property code.
          shared_ptr<string> code_ {};
          // The property value.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->lowerBound_ == nullptr
        && this->upperBound_ == nullptr; };
        // lowerBound Field Functions 
        bool hasLowerBound() const { return this->lowerBound_ != nullptr;};
        void deleteLowerBound() { this->lowerBound_ = nullptr;};
        inline const BoundedValue::LowerBound & getLowerBound() const { DARABONBA_PTR_GET_CONST(lowerBound_, BoundedValue::LowerBound) };
        inline BoundedValue::LowerBound getLowerBound() { DARABONBA_PTR_GET(lowerBound_, BoundedValue::LowerBound) };
        inline BoundedValue& setLowerBound(const BoundedValue::LowerBound & lowerBound) { DARABONBA_PTR_SET_VALUE(lowerBound_, lowerBound) };
        inline BoundedValue& setLowerBound(BoundedValue::LowerBound && lowerBound) { DARABONBA_PTR_SET_RVALUE(lowerBound_, lowerBound) };


        // upperBound Field Functions 
        bool hasUpperBound() const { return this->upperBound_ != nullptr;};
        void deleteUpperBound() { this->upperBound_ = nullptr;};
        inline const BoundedValue::UpperBound & getUpperBound() const { DARABONBA_PTR_GET_CONST(upperBound_, BoundedValue::UpperBound) };
        inline BoundedValue::UpperBound getUpperBound() { DARABONBA_PTR_GET(upperBound_, BoundedValue::UpperBound) };
        inline BoundedValue& setUpperBound(const BoundedValue::UpperBound & upperBound) { DARABONBA_PTR_SET_VALUE(upperBound_, upperBound) };
        inline BoundedValue& setUpperBound(BoundedValue::UpperBound && upperBound) { DARABONBA_PTR_SET_RVALUE(upperBound_, upperBound) };


      protected:
        // The lower bound.
        shared_ptr<BoundedValue::LowerBound> lowerBound_ {};
        // The upper bound.
        shared_ptr<BoundedValue::UpperBound> upperBound_ {};
      };

      virtual bool empty() const override { return this->boundedValue_ == nullptr
        && this->code_ == nullptr && this->value_ == nullptr; };
      // boundedValue Field Functions 
      bool hasBoundedValue() const { return this->boundedValue_ != nullptr;};
      void deleteBoundedValue() { this->boundedValue_ = nullptr;};
      inline const AttributeConfigs::BoundedValue & getBoundedValue() const { DARABONBA_PTR_GET_CONST(boundedValue_, AttributeConfigs::BoundedValue) };
      inline AttributeConfigs::BoundedValue getBoundedValue() { DARABONBA_PTR_GET(boundedValue_, AttributeConfigs::BoundedValue) };
      inline AttributeConfigs& setBoundedValue(const AttributeConfigs::BoundedValue & boundedValue) { DARABONBA_PTR_SET_VALUE(boundedValue_, boundedValue) };
      inline AttributeConfigs& setBoundedValue(AttributeConfigs::BoundedValue && boundedValue) { DARABONBA_PTR_SET_RVALUE(boundedValue_, boundedValue) };


      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline AttributeConfigs& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline AttributeConfigs& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The upper and lower bound values, used for bounded properties.
      shared_ptr<AttributeConfigs::BoundedValue> boundedValue_ {};
      // The property code.
      shared_ptr<string> code_ {};
      // The property value.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->attributeConfigs_ == nullptr
        && this->code_ == nullptr && this->tag_ == nullptr; };
    // attributeConfigs Field Functions 
    bool hasAttributeConfigs() const { return this->attributeConfigs_ != nullptr;};
    void deleteAttributeConfigs() { this->attributeConfigs_ = nullptr;};
    inline const vector<SelectedComponentConfigDTO::AttributeConfigs> & getAttributeConfigs() const { DARABONBA_PTR_GET_CONST(attributeConfigs_, vector<SelectedComponentConfigDTO::AttributeConfigs>) };
    inline vector<SelectedComponentConfigDTO::AttributeConfigs> getAttributeConfigs() { DARABONBA_PTR_GET(attributeConfigs_, vector<SelectedComponentConfigDTO::AttributeConfigs>) };
    inline SelectedComponentConfigDTO& setAttributeConfigs(const vector<SelectedComponentConfigDTO::AttributeConfigs> & attributeConfigs) { DARABONBA_PTR_SET_VALUE(attributeConfigs_, attributeConfigs) };
    inline SelectedComponentConfigDTO& setAttributeConfigs(vector<SelectedComponentConfigDTO::AttributeConfigs> && attributeConfigs) { DARABONBA_PTR_SET_RVALUE(attributeConfigs_, attributeConfigs) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline SelectedComponentConfigDTO& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline SelectedComponentConfigDTO& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


  protected:
    // The property configuration list.
    shared_ptr<vector<SelectedComponentConfigDTO::AttributeConfigs>> attributeConfigs_ {};
    // The component code.
    shared_ptr<string> code_ {};
    // The unique identifier of the component, used in multi-node and multi-disk scenarios.
    shared_ptr<string> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
