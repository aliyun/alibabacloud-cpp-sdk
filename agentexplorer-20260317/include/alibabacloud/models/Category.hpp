// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CATEGORY_HPP_
#define ALIBABACLOUD_MODELS_CATEGORY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentExplorer20260317
{
namespace Models
{
  class Category : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Category& obj) { 
      DARABONBA_PTR_TO_JSON(children, children_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, Category& obj) { 
      DARABONBA_PTR_FROM_JSON(children, children_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    Category() = default ;
    Category(const Category &) = default ;
    Category(Category &&) = default ;
    Category(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Category() = default ;
    Category& operator=(const Category &) = default ;
    Category& operator=(Category &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Children : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Children& obj) { 
        DARABONBA_PTR_TO_JSON(code, code_);
        DARABONBA_PTR_TO_JSON(name, name_);
      };
      friend void from_json(const Darabonba::Json& j, Children& obj) { 
        DARABONBA_PTR_FROM_JSON(code, code_);
        DARABONBA_PTR_FROM_JSON(name, name_);
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
      virtual bool empty() const override { return this->code_ == nullptr
        && this->name_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Children& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Children& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // Level 2 Category Code
      shared_ptr<string> code_ {};
      // Level 2 Category Name
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->children_ == nullptr
        && this->code_ == nullptr && this->name_ == nullptr; };
    // children Field Functions 
    bool hasChildren() const { return this->children_ != nullptr;};
    void deleteChildren() { this->children_ = nullptr;};
    inline const vector<Category::Children> & getChildren() const { DARABONBA_PTR_GET_CONST(children_, vector<Category::Children>) };
    inline vector<Category::Children> getChildren() { DARABONBA_PTR_GET(children_, vector<Category::Children>) };
    inline Category& setChildren(const vector<Category::Children> & children) { DARABONBA_PTR_SET_VALUE(children_, children) };
    inline Category& setChildren(vector<Category::Children> && children) { DARABONBA_PTR_SET_RVALUE(children_, children) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline Category& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline Category& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // Sub-categories
    shared_ptr<vector<Category::Children>> children_ {};
    // Level 1 Category Code
    shared_ptr<string> code_ {};
    // Level 1 Category Name
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentExplorer20260317
#endif
