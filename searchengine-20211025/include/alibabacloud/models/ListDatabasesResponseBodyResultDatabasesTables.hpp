// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATABASESRESPONSEBODYRESULTDATABASESTABLES_HPP_
#define ALIBABACLOUD_MODELS_LISTDATABASESRESPONSEBODYRESULTDATABASESTABLES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ListDatabasesResponseBodyResultDatabasesTables : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDatabasesResponseBodyResultDatabasesTables& obj) { 
      DARABONBA_PTR_TO_JSON(children, children_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(isDir, isDir_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(parent, parent_);
      DARABONBA_PTR_TO_JSON(templateId, templateId_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListDatabasesResponseBodyResultDatabasesTables& obj) { 
      DARABONBA_PTR_FROM_JSON(children, children_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(isDir, isDir_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(parent, parent_);
      DARABONBA_PTR_FROM_JSON(templateId, templateId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ListDatabasesResponseBodyResultDatabasesTables() = default ;
    ListDatabasesResponseBodyResultDatabasesTables(const ListDatabasesResponseBodyResultDatabasesTables &) = default ;
    ListDatabasesResponseBodyResultDatabasesTables(ListDatabasesResponseBodyResultDatabasesTables &&) = default ;
    ListDatabasesResponseBodyResultDatabasesTables(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDatabasesResponseBodyResultDatabasesTables() = default ;
    ListDatabasesResponseBodyResultDatabasesTables& operator=(const ListDatabasesResponseBodyResultDatabasesTables &) = default ;
    ListDatabasesResponseBodyResultDatabasesTables& operator=(ListDatabasesResponseBodyResultDatabasesTables &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->children_ != nullptr
        && this->id_ != nullptr && this->instanceId_ != nullptr && this->isDir_ != nullptr && this->name_ != nullptr && this->parent_ != nullptr
        && this->templateId_ != nullptr && this->type_ != nullptr; };
    // children Field Functions 
    bool hasChildren() const { return this->children_ != nullptr;};
    void deleteChildren() { this->children_ = nullptr;};
    inline const vector<Darabonba::Json> & children() const { DARABONBA_PTR_GET_CONST(children_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> children() { DARABONBA_PTR_GET(children_, vector<Darabonba::Json>) };
    inline ListDatabasesResponseBodyResultDatabasesTables& setChildren(const vector<Darabonba::Json> & children) { DARABONBA_PTR_SET_VALUE(children_, children) };
    inline ListDatabasesResponseBodyResultDatabasesTables& setChildren(vector<Darabonba::Json> && children) { DARABONBA_PTR_SET_RVALUE(children_, children) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListDatabasesResponseBodyResultDatabasesTables& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int64_t instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
    inline ListDatabasesResponseBodyResultDatabasesTables& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // isDir Field Functions 
    bool hasIsDir() const { return this->isDir_ != nullptr;};
    void deleteIsDir() { this->isDir_ = nullptr;};
    inline int32_t isDir() const { DARABONBA_PTR_GET_DEFAULT(isDir_, 0) };
    inline ListDatabasesResponseBodyResultDatabasesTables& setIsDir(int32_t isDir) { DARABONBA_PTR_SET_VALUE(isDir_, isDir) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListDatabasesResponseBodyResultDatabasesTables& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // parent Field Functions 
    bool hasParent() const { return this->parent_ != nullptr;};
    void deleteParent() { this->parent_ = nullptr;};
    inline int64_t parent() const { DARABONBA_PTR_GET_DEFAULT(parent_, 0L) };
    inline ListDatabasesResponseBodyResultDatabasesTables& setParent(int64_t parent) { DARABONBA_PTR_SET_VALUE(parent_, parent) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline ListDatabasesResponseBodyResultDatabasesTables& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListDatabasesResponseBodyResultDatabasesTables& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<vector<Darabonba::Json>> children_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<int64_t> instanceId_ = nullptr;
    std::shared_ptr<int32_t> isDir_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int64_t> parent_ = nullptr;
    std::shared_ptr<int64_t> templateId_ = nullptr;
    // table, instance, template, function
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
