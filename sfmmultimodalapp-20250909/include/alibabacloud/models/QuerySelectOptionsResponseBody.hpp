// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSELECTOPTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSELECTOPTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SfmMultiModalApp20250909
{
namespace Models
{
  class QuerySelectOptionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySelectOptionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SelectOptions, selectOptions_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySelectOptionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SelectOptions, selectOptions_);
    };
    QuerySelectOptionsResponseBody() = default ;
    QuerySelectOptionsResponseBody(const QuerySelectOptionsResponseBody &) = default ;
    QuerySelectOptionsResponseBody(QuerySelectOptionsResponseBody &&) = default ;
    QuerySelectOptionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySelectOptionsResponseBody() = default ;
    QuerySelectOptionsResponseBody& operator=(const QuerySelectOptionsResponseBody &) = default ;
    QuerySelectOptionsResponseBody& operator=(QuerySelectOptionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SelectOptions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SelectOptions& obj) { 
        DARABONBA_ANY_TO_JSON(BizConfig, bizConfig_);
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(Children, children_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Label, label_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, SelectOptions& obj) { 
        DARABONBA_ANY_FROM_JSON(BizConfig, bizConfig_);
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(Children, children_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Label, label_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      SelectOptions() = default ;
      SelectOptions(const SelectOptions &) = default ;
      SelectOptions(SelectOptions &&) = default ;
      SelectOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SelectOptions() = default ;
      SelectOptions& operator=(const SelectOptions &) = default ;
      SelectOptions& operator=(SelectOptions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Children : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Children& obj) { 
          DARABONBA_ANY_TO_JSON(BizConfig, bizConfig_);
          DARABONBA_PTR_TO_JSON(Category, category_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Label, label_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Children& obj) { 
          DARABONBA_ANY_FROM_JSON(BizConfig, bizConfig_);
          DARABONBA_PTR_FROM_JSON(Category, category_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Label, label_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
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
        virtual bool empty() const override { return this->bizConfig_ == nullptr
        && this->category_ == nullptr && this->description_ == nullptr && this->label_ == nullptr && this->tags_ == nullptr && this->value_ == nullptr; };
        // bizConfig Field Functions 
        bool hasBizConfig() const { return this->bizConfig_ != nullptr;};
        void deleteBizConfig() { this->bizConfig_ = nullptr;};
        inline         const Darabonba::Json & getBizConfig() const { DARABONBA_GET(bizConfig_) };
        Darabonba::Json & getBizConfig() { DARABONBA_GET(bizConfig_) };
        inline Children& setBizConfig(const Darabonba::Json & bizConfig) { DARABONBA_SET_VALUE(bizConfig_, bizConfig) };
        inline Children& setBizConfig(Darabonba::Json && bizConfig) { DARABONBA_SET_RVALUE(bizConfig_, bizConfig) };


        // category Field Functions 
        bool hasCategory() const { return this->category_ != nullptr;};
        void deleteCategory() { this->category_ = nullptr;};
        inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
        inline Children& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Children& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // label Field Functions 
        bool hasLabel() const { return this->label_ != nullptr;};
        void deleteLabel() { this->label_ = nullptr;};
        inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
        inline Children& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const vector<string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
        inline vector<string> getTags() { DARABONBA_PTR_GET(tags_, vector<string>) };
        inline Children& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline Children& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Children& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        Darabonba::Json bizConfig_ {};
        shared_ptr<string> category_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> label_ {};
        shared_ptr<vector<string>> tags_ {};
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->bizConfig_ == nullptr
        && this->category_ == nullptr && this->children_ == nullptr && this->description_ == nullptr && this->label_ == nullptr && this->tags_ == nullptr
        && this->value_ == nullptr; };
      // bizConfig Field Functions 
      bool hasBizConfig() const { return this->bizConfig_ != nullptr;};
      void deleteBizConfig() { this->bizConfig_ = nullptr;};
      inline       const Darabonba::Json & getBizConfig() const { DARABONBA_GET(bizConfig_) };
      Darabonba::Json & getBizConfig() { DARABONBA_GET(bizConfig_) };
      inline SelectOptions& setBizConfig(const Darabonba::Json & bizConfig) { DARABONBA_SET_VALUE(bizConfig_, bizConfig) };
      inline SelectOptions& setBizConfig(Darabonba::Json && bizConfig) { DARABONBA_SET_RVALUE(bizConfig_, bizConfig) };


      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline SelectOptions& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // children Field Functions 
      bool hasChildren() const { return this->children_ != nullptr;};
      void deleteChildren() { this->children_ = nullptr;};
      inline const vector<SelectOptions::Children> & getChildren() const { DARABONBA_PTR_GET_CONST(children_, vector<SelectOptions::Children>) };
      inline vector<SelectOptions::Children> getChildren() { DARABONBA_PTR_GET(children_, vector<SelectOptions::Children>) };
      inline SelectOptions& setChildren(const vector<SelectOptions::Children> & children) { DARABONBA_PTR_SET_VALUE(children_, children) };
      inline SelectOptions& setChildren(vector<SelectOptions::Children> && children) { DARABONBA_PTR_SET_RVALUE(children_, children) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline SelectOptions& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // label Field Functions 
      bool hasLabel() const { return this->label_ != nullptr;};
      void deleteLabel() { this->label_ = nullptr;};
      inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
      inline SelectOptions& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
      inline vector<string> getTags() { DARABONBA_PTR_GET(tags_, vector<string>) };
      inline SelectOptions& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline SelectOptions& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline SelectOptions& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      Darabonba::Json bizConfig_ {};
      shared_ptr<string> category_ {};
      shared_ptr<vector<SelectOptions::Children>> children_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> label_ {};
      shared_ptr<vector<string>> tags_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->selectOptions_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QuerySelectOptionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // selectOptions Field Functions 
    bool hasSelectOptions() const { return this->selectOptions_ != nullptr;};
    void deleteSelectOptions() { this->selectOptions_ = nullptr;};
    inline const vector<QuerySelectOptionsResponseBody::SelectOptions> & getSelectOptions() const { DARABONBA_PTR_GET_CONST(selectOptions_, vector<QuerySelectOptionsResponseBody::SelectOptions>) };
    inline vector<QuerySelectOptionsResponseBody::SelectOptions> getSelectOptions() { DARABONBA_PTR_GET(selectOptions_, vector<QuerySelectOptionsResponseBody::SelectOptions>) };
    inline QuerySelectOptionsResponseBody& setSelectOptions(const vector<QuerySelectOptionsResponseBody::SelectOptions> & selectOptions) { DARABONBA_PTR_SET_VALUE(selectOptions_, selectOptions) };
    inline QuerySelectOptionsResponseBody& setSelectOptions(vector<QuerySelectOptionsResponseBody::SelectOptions> && selectOptions) { DARABONBA_PTR_SET_RVALUE(selectOptions_, selectOptions) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<QuerySelectOptionsResponseBody::SelectOptions>> selectOptions_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SfmMultiModalApp20250909
#endif
