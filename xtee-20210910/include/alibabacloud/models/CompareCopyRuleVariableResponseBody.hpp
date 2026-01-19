// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMPARECOPYRULEVARIABLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_COMPARECOPYRULEVARIABLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class CompareCopyRuleVariableResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CompareCopyRuleVariableResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, CompareCopyRuleVariableResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultObject, resultObject_);
    };
    CompareCopyRuleVariableResponseBody() = default ;
    CompareCopyRuleVariableResponseBody(const CompareCopyRuleVariableResponseBody &) = default ;
    CompareCopyRuleVariableResponseBody(CompareCopyRuleVariableResponseBody &&) = default ;
    CompareCopyRuleVariableResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CompareCopyRuleVariableResponseBody() = default ;
    CompareCopyRuleVariableResponseBody& operator=(const CompareCopyRuleVariableResponseBody &) = default ;
    CompareCopyRuleVariableResponseBody& operator=(CompareCopyRuleVariableResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(CustVariableList, custVariableList_);
        DARABONBA_PTR_TO_JSON(EventVariableList, eventVariableList_);
        DARABONBA_PTR_TO_JSON(ExpressionVariableList, expressionVariableList_);
        DARABONBA_PTR_TO_JSON(NameListVariableList, nameListVariableList_);
        DARABONBA_PTR_TO_JSON(QueryExpressionVariableList, queryExpressionVariableList_);
        DARABONBA_PTR_TO_JSON(SystemVariableList, systemVariableList_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(CustVariableList, custVariableList_);
        DARABONBA_PTR_FROM_JSON(EventVariableList, eventVariableList_);
        DARABONBA_PTR_FROM_JSON(ExpressionVariableList, expressionVariableList_);
        DARABONBA_PTR_FROM_JSON(NameListVariableList, nameListVariableList_);
        DARABONBA_PTR_FROM_JSON(QueryExpressionVariableList, queryExpressionVariableList_);
        DARABONBA_PTR_FROM_JSON(SystemVariableList, systemVariableList_);
      };
      ResultObject() = default ;
      ResultObject(const ResultObject &) = default ;
      ResultObject(ResultObject &&) = default ;
      ResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResultObject() = default ;
      ResultObject& operator=(const ResultObject &) = default ;
      ResultObject& operator=(ResultObject &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SystemVariableList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SystemVariableList& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(OutType, outType_);
          DARABONBA_PTR_TO_JSON(Title, title_);
        };
        friend void from_json(const Darabonba::Json& j, SystemVariableList& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(OutType, outType_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
        };
        SystemVariableList() = default ;
        SystemVariableList(const SystemVariableList &) = default ;
        SystemVariableList(SystemVariableList &&) = default ;
        SystemVariableList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SystemVariableList() = default ;
        SystemVariableList& operator=(const SystemVariableList &) = default ;
        SystemVariableList& operator=(SystemVariableList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->outType_ == nullptr && this->title_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline SystemVariableList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline SystemVariableList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline SystemVariableList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // outType Field Functions 
        bool hasOutType() const { return this->outType_ != nullptr;};
        void deleteOutType() { this->outType_ = nullptr;};
        inline string getOutType() const { DARABONBA_PTR_GET_DEFAULT(outType_, "") };
        inline SystemVariableList& setOutType(string outType) { DARABONBA_PTR_SET_VALUE(outType_, outType) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline SystemVariableList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      protected:
        // Description
        shared_ptr<string> description_ {};
        // Variable ID
        shared_ptr<int64_t> id_ {};
        // Variable name
        shared_ptr<string> name_ {};
        // Variable type
        shared_ptr<string> outType_ {};
        // Title
        shared_ptr<string> title_ {};
      };

      class QueryExpressionVariableList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const QueryExpressionVariableList& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(OutType, outType_);
          DARABONBA_PTR_TO_JSON(Title, title_);
        };
        friend void from_json(const Darabonba::Json& j, QueryExpressionVariableList& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(OutType, outType_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
        };
        QueryExpressionVariableList() = default ;
        QueryExpressionVariableList(const QueryExpressionVariableList &) = default ;
        QueryExpressionVariableList(QueryExpressionVariableList &&) = default ;
        QueryExpressionVariableList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~QueryExpressionVariableList() = default ;
        QueryExpressionVariableList& operator=(const QueryExpressionVariableList &) = default ;
        QueryExpressionVariableList& operator=(QueryExpressionVariableList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->outType_ == nullptr && this->title_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline QueryExpressionVariableList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline QueryExpressionVariableList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline QueryExpressionVariableList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // outType Field Functions 
        bool hasOutType() const { return this->outType_ != nullptr;};
        void deleteOutType() { this->outType_ = nullptr;};
        inline string getOutType() const { DARABONBA_PTR_GET_DEFAULT(outType_, "") };
        inline QueryExpressionVariableList& setOutType(string outType) { DARABONBA_PTR_SET_VALUE(outType_, outType) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline QueryExpressionVariableList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      protected:
        // Description
        shared_ptr<string> description_ {};
        // Variable ID
        shared_ptr<int64_t> id_ {};
        // Variable Name
        shared_ptr<string> name_ {};
        // Variable Type
        shared_ptr<string> outType_ {};
        // Title
        shared_ptr<string> title_ {};
      };

      class NameListVariableList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NameListVariableList& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(OutType, outType_);
          DARABONBA_PTR_TO_JSON(Title, title_);
        };
        friend void from_json(const Darabonba::Json& j, NameListVariableList& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(OutType, outType_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
        };
        NameListVariableList() = default ;
        NameListVariableList(const NameListVariableList &) = default ;
        NameListVariableList(NameListVariableList &&) = default ;
        NameListVariableList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NameListVariableList() = default ;
        NameListVariableList& operator=(const NameListVariableList &) = default ;
        NameListVariableList& operator=(NameListVariableList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->outType_ == nullptr && this->title_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline NameListVariableList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline NameListVariableList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline NameListVariableList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // outType Field Functions 
        bool hasOutType() const { return this->outType_ != nullptr;};
        void deleteOutType() { this->outType_ = nullptr;};
        inline string getOutType() const { DARABONBA_PTR_GET_DEFAULT(outType_, "") };
        inline NameListVariableList& setOutType(string outType) { DARABONBA_PTR_SET_VALUE(outType_, outType) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline NameListVariableList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      protected:
        // Description
        shared_ptr<string> description_ {};
        // Variable id
        shared_ptr<int64_t> id_ {};
        // Variable name
        shared_ptr<string> name_ {};
        // Variable type
        shared_ptr<string> outType_ {};
        // Title
        shared_ptr<string> title_ {};
      };

      class ExpressionVariableList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ExpressionVariableList& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(OutType, outType_);
          DARABONBA_PTR_TO_JSON(Title, title_);
        };
        friend void from_json(const Darabonba::Json& j, ExpressionVariableList& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(OutType, outType_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
        };
        ExpressionVariableList() = default ;
        ExpressionVariableList(const ExpressionVariableList &) = default ;
        ExpressionVariableList(ExpressionVariableList &&) = default ;
        ExpressionVariableList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ExpressionVariableList() = default ;
        ExpressionVariableList& operator=(const ExpressionVariableList &) = default ;
        ExpressionVariableList& operator=(ExpressionVariableList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->outType_ == nullptr && this->title_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline ExpressionVariableList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline ExpressionVariableList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline ExpressionVariableList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // outType Field Functions 
        bool hasOutType() const { return this->outType_ != nullptr;};
        void deleteOutType() { this->outType_ = nullptr;};
        inline string getOutType() const { DARABONBA_PTR_GET_DEFAULT(outType_, "") };
        inline ExpressionVariableList& setOutType(string outType) { DARABONBA_PTR_SET_VALUE(outType_, outType) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline ExpressionVariableList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      protected:
        // Description
        shared_ptr<string> description_ {};
        // Variable ID
        shared_ptr<int64_t> id_ {};
        // Variable name
        shared_ptr<string> name_ {};
        // Variable Type
        shared_ptr<string> outType_ {};
        // Title
        shared_ptr<string> title_ {};
      };

      class EventVariableList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EventVariableList& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(OutType, outType_);
          DARABONBA_PTR_TO_JSON(Title, title_);
        };
        friend void from_json(const Darabonba::Json& j, EventVariableList& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(OutType, outType_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
        };
        EventVariableList() = default ;
        EventVariableList(const EventVariableList &) = default ;
        EventVariableList(EventVariableList &&) = default ;
        EventVariableList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EventVariableList() = default ;
        EventVariableList& operator=(const EventVariableList &) = default ;
        EventVariableList& operator=(EventVariableList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->outType_ == nullptr && this->title_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline EventVariableList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline EventVariableList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline EventVariableList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // outType Field Functions 
        bool hasOutType() const { return this->outType_ != nullptr;};
        void deleteOutType() { this->outType_ = nullptr;};
        inline string getOutType() const { DARABONBA_PTR_GET_DEFAULT(outType_, "") };
        inline EventVariableList& setOutType(string outType) { DARABONBA_PTR_SET_VALUE(outType_, outType) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline EventVariableList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      protected:
        // Description
        shared_ptr<string> description_ {};
        // Variable id
        shared_ptr<int64_t> id_ {};
        // Variable name
        shared_ptr<string> name_ {};
        // Variable type
        shared_ptr<string> outType_ {};
        // Title
        shared_ptr<string> title_ {};
      };

      class CustVariableList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CustVariableList& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(OutType, outType_);
          DARABONBA_PTR_TO_JSON(Title, title_);
        };
        friend void from_json(const Darabonba::Json& j, CustVariableList& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(OutType, outType_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
        };
        CustVariableList() = default ;
        CustVariableList(const CustVariableList &) = default ;
        CustVariableList(CustVariableList &&) = default ;
        CustVariableList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CustVariableList() = default ;
        CustVariableList& operator=(const CustVariableList &) = default ;
        CustVariableList& operator=(CustVariableList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->outType_ == nullptr && this->title_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline CustVariableList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline CustVariableList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline CustVariableList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // outType Field Functions 
        bool hasOutType() const { return this->outType_ != nullptr;};
        void deleteOutType() { this->outType_ = nullptr;};
        inline string getOutType() const { DARABONBA_PTR_GET_DEFAULT(outType_, "") };
        inline CustVariableList& setOutType(string outType) { DARABONBA_PTR_SET_VALUE(outType_, outType) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline CustVariableList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      protected:
        // Description
        shared_ptr<string> description_ {};
        // Variable ID
        shared_ptr<int64_t> id_ {};
        // Variable name
        shared_ptr<string> name_ {};
        // Variable type
        shared_ptr<string> outType_ {};
        // Title
        shared_ptr<string> title_ {};
      };

      virtual bool empty() const override { return this->custVariableList_ == nullptr
        && this->eventVariableList_ == nullptr && this->expressionVariableList_ == nullptr && this->nameListVariableList_ == nullptr && this->queryExpressionVariableList_ == nullptr && this->systemVariableList_ == nullptr; };
      // custVariableList Field Functions 
      bool hasCustVariableList() const { return this->custVariableList_ != nullptr;};
      void deleteCustVariableList() { this->custVariableList_ = nullptr;};
      inline const vector<ResultObject::CustVariableList> & getCustVariableList() const { DARABONBA_PTR_GET_CONST(custVariableList_, vector<ResultObject::CustVariableList>) };
      inline vector<ResultObject::CustVariableList> getCustVariableList() { DARABONBA_PTR_GET(custVariableList_, vector<ResultObject::CustVariableList>) };
      inline ResultObject& setCustVariableList(const vector<ResultObject::CustVariableList> & custVariableList) { DARABONBA_PTR_SET_VALUE(custVariableList_, custVariableList) };
      inline ResultObject& setCustVariableList(vector<ResultObject::CustVariableList> && custVariableList) { DARABONBA_PTR_SET_RVALUE(custVariableList_, custVariableList) };


      // eventVariableList Field Functions 
      bool hasEventVariableList() const { return this->eventVariableList_ != nullptr;};
      void deleteEventVariableList() { this->eventVariableList_ = nullptr;};
      inline const vector<ResultObject::EventVariableList> & getEventVariableList() const { DARABONBA_PTR_GET_CONST(eventVariableList_, vector<ResultObject::EventVariableList>) };
      inline vector<ResultObject::EventVariableList> getEventVariableList() { DARABONBA_PTR_GET(eventVariableList_, vector<ResultObject::EventVariableList>) };
      inline ResultObject& setEventVariableList(const vector<ResultObject::EventVariableList> & eventVariableList) { DARABONBA_PTR_SET_VALUE(eventVariableList_, eventVariableList) };
      inline ResultObject& setEventVariableList(vector<ResultObject::EventVariableList> && eventVariableList) { DARABONBA_PTR_SET_RVALUE(eventVariableList_, eventVariableList) };


      // expressionVariableList Field Functions 
      bool hasExpressionVariableList() const { return this->expressionVariableList_ != nullptr;};
      void deleteExpressionVariableList() { this->expressionVariableList_ = nullptr;};
      inline const vector<ResultObject::ExpressionVariableList> & getExpressionVariableList() const { DARABONBA_PTR_GET_CONST(expressionVariableList_, vector<ResultObject::ExpressionVariableList>) };
      inline vector<ResultObject::ExpressionVariableList> getExpressionVariableList() { DARABONBA_PTR_GET(expressionVariableList_, vector<ResultObject::ExpressionVariableList>) };
      inline ResultObject& setExpressionVariableList(const vector<ResultObject::ExpressionVariableList> & expressionVariableList) { DARABONBA_PTR_SET_VALUE(expressionVariableList_, expressionVariableList) };
      inline ResultObject& setExpressionVariableList(vector<ResultObject::ExpressionVariableList> && expressionVariableList) { DARABONBA_PTR_SET_RVALUE(expressionVariableList_, expressionVariableList) };


      // nameListVariableList Field Functions 
      bool hasNameListVariableList() const { return this->nameListVariableList_ != nullptr;};
      void deleteNameListVariableList() { this->nameListVariableList_ = nullptr;};
      inline const vector<ResultObject::NameListVariableList> & getNameListVariableList() const { DARABONBA_PTR_GET_CONST(nameListVariableList_, vector<ResultObject::NameListVariableList>) };
      inline vector<ResultObject::NameListVariableList> getNameListVariableList() { DARABONBA_PTR_GET(nameListVariableList_, vector<ResultObject::NameListVariableList>) };
      inline ResultObject& setNameListVariableList(const vector<ResultObject::NameListVariableList> & nameListVariableList) { DARABONBA_PTR_SET_VALUE(nameListVariableList_, nameListVariableList) };
      inline ResultObject& setNameListVariableList(vector<ResultObject::NameListVariableList> && nameListVariableList) { DARABONBA_PTR_SET_RVALUE(nameListVariableList_, nameListVariableList) };


      // queryExpressionVariableList Field Functions 
      bool hasQueryExpressionVariableList() const { return this->queryExpressionVariableList_ != nullptr;};
      void deleteQueryExpressionVariableList() { this->queryExpressionVariableList_ = nullptr;};
      inline const vector<ResultObject::QueryExpressionVariableList> & getQueryExpressionVariableList() const { DARABONBA_PTR_GET_CONST(queryExpressionVariableList_, vector<ResultObject::QueryExpressionVariableList>) };
      inline vector<ResultObject::QueryExpressionVariableList> getQueryExpressionVariableList() { DARABONBA_PTR_GET(queryExpressionVariableList_, vector<ResultObject::QueryExpressionVariableList>) };
      inline ResultObject& setQueryExpressionVariableList(const vector<ResultObject::QueryExpressionVariableList> & queryExpressionVariableList) { DARABONBA_PTR_SET_VALUE(queryExpressionVariableList_, queryExpressionVariableList) };
      inline ResultObject& setQueryExpressionVariableList(vector<ResultObject::QueryExpressionVariableList> && queryExpressionVariableList) { DARABONBA_PTR_SET_RVALUE(queryExpressionVariableList_, queryExpressionVariableList) };


      // systemVariableList Field Functions 
      bool hasSystemVariableList() const { return this->systemVariableList_ != nullptr;};
      void deleteSystemVariableList() { this->systemVariableList_ = nullptr;};
      inline const vector<ResultObject::SystemVariableList> & getSystemVariableList() const { DARABONBA_PTR_GET_CONST(systemVariableList_, vector<ResultObject::SystemVariableList>) };
      inline vector<ResultObject::SystemVariableList> getSystemVariableList() { DARABONBA_PTR_GET(systemVariableList_, vector<ResultObject::SystemVariableList>) };
      inline ResultObject& setSystemVariableList(const vector<ResultObject::SystemVariableList> & systemVariableList) { DARABONBA_PTR_SET_VALUE(systemVariableList_, systemVariableList) };
      inline ResultObject& setSystemVariableList(vector<ResultObject::SystemVariableList> && systemVariableList) { DARABONBA_PTR_SET_RVALUE(systemVariableList_, systemVariableList) };


    protected:
      // Cumulative variable list
      shared_ptr<vector<ResultObject::CustVariableList>> custVariableList_ {};
      // Event field variables
      shared_ptr<vector<ResultObject::EventVariableList>> eventVariableList_ {};
      // Custom variable list
      shared_ptr<vector<ResultObject::ExpressionVariableList>> expressionVariableList_ {};
      // Name list variables
      shared_ptr<vector<ResultObject::NameListVariableList>> nameListVariableList_ {};
      // Custom Query Variable List
      shared_ptr<vector<ResultObject::QueryExpressionVariableList>> queryExpressionVariableList_ {};
      // System variable list
      shared_ptr<vector<ResultObject::SystemVariableList>> systemVariableList_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultObject_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CompareCopyRuleVariableResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const CompareCopyRuleVariableResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, CompareCopyRuleVariableResponseBody::ResultObject) };
    inline CompareCopyRuleVariableResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, CompareCopyRuleVariableResponseBody::ResultObject) };
    inline CompareCopyRuleVariableResponseBody& setResultObject(const CompareCopyRuleVariableResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline CompareCopyRuleVariableResponseBody& setResultObject(CompareCopyRuleVariableResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Result object.
    shared_ptr<CompareCopyRuleVariableResponseBody::ResultObject> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
