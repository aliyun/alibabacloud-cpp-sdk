// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERULEMETADATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERULEMETADATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DescribeRuleMetadataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRuleMetadataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Datas, datas_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRuleMetadataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Datas, datas_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRuleMetadataResponseBody() = default ;
    DescribeRuleMetadataResponseBody(const DescribeRuleMetadataResponseBody &) = default ;
    DescribeRuleMetadataResponseBody(DescribeRuleMetadataResponseBody &&) = default ;
    DescribeRuleMetadataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRuleMetadataResponseBody() = default ;
    DescribeRuleMetadataResponseBody& operator=(const DescribeRuleMetadataResponseBody &) = default ;
    DescribeRuleMetadataResponseBody& operator=(DescribeRuleMetadataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Datas : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Datas& obj) { 
        DARABONBA_PTR_TO_JSON(Children, children_);
        DARABONBA_PTR_TO_JSON(Text, text_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Datas& obj) { 
        DARABONBA_PTR_FROM_JSON(Children, children_);
        DARABONBA_PTR_FROM_JSON(Text, text_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Datas() = default ;
      Datas(const Datas &) = default ;
      Datas(Datas &&) = default ;
      Datas(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Datas() = default ;
      Datas& operator=(const Datas &) = default ;
      Datas& operator=(Datas &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Children : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Children& obj) { 
          DARABONBA_PTR_TO_JSON(Text, text_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Children& obj) { 
          DARABONBA_PTR_FROM_JSON(Text, text_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Children() = default ;
        Children(const Children &) = default ;
        Children(Children &&) = default ;
        Children(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Children() = default ;
        Children& operator=(const Children &) = default ;
        Children& operator=(Children &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->text_ == nullptr
        && this->value_ == nullptr; };
        // text Field Functions 
        bool hasText() const { return this->text_ != nullptr;};
        void deleteText() { this->text_ = nullptr;};
        inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
        inline Children& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Children& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The human-readable content.
        shared_ptr<string> text_ {};
        // The value.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->children_ == nullptr
        && this->text_ == nullptr && this->value_ == nullptr; };
      // children Field Functions 
      bool hasChildren() const { return this->children_ != nullptr;};
      void deleteChildren() { this->children_ = nullptr;};
      inline const vector<Datas::Children> & getChildren() const { DARABONBA_PTR_GET_CONST(children_, vector<Datas::Children>) };
      inline vector<Datas::Children> getChildren() { DARABONBA_PTR_GET(children_, vector<Datas::Children>) };
      inline Datas& setChildren(const vector<Datas::Children> & children) { DARABONBA_PTR_SET_VALUE(children_, children) };
      inline Datas& setChildren(vector<Datas::Children> && children) { DARABONBA_PTR_SET_RVALUE(children_, children) };


      // text Field Functions 
      bool hasText() const { return this->text_ != nullptr;};
      void deleteText() { this->text_ = nullptr;};
      inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
      inline Datas& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Datas& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The subset of metadata.
      shared_ptr<vector<Datas::Children>> children_ {};
      // The human-readable content.
      shared_ptr<string> text_ {};
      // The value.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->datas_ == nullptr
        && this->requestId_ == nullptr; };
    // datas Field Functions 
    bool hasDatas() const { return this->datas_ != nullptr;};
    void deleteDatas() { this->datas_ = nullptr;};
    inline const vector<DescribeRuleMetadataResponseBody::Datas> & getDatas() const { DARABONBA_PTR_GET_CONST(datas_, vector<DescribeRuleMetadataResponseBody::Datas>) };
    inline vector<DescribeRuleMetadataResponseBody::Datas> getDatas() { DARABONBA_PTR_GET(datas_, vector<DescribeRuleMetadataResponseBody::Datas>) };
    inline DescribeRuleMetadataResponseBody& setDatas(const vector<DescribeRuleMetadataResponseBody::Datas> & datas) { DARABONBA_PTR_SET_VALUE(datas_, datas) };
    inline DescribeRuleMetadataResponseBody& setDatas(vector<DescribeRuleMetadataResponseBody::Datas> && datas) { DARABONBA_PTR_SET_RVALUE(datas_, datas) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRuleMetadataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of metadata.
    shared_ptr<vector<DescribeRuleMetadataResponseBody::Datas>> datas_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
