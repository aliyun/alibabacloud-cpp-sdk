// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFUNCTIONSRESPONSEBODYDATAFUNCTIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTFUNCTIONSRESPONSEBODYDATAFUNCTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListFunctionsResponseBodyDataFunctions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFunctionsResponseBodyDataFunctions& obj) { 
      DARABONBA_PTR_TO_JSON(class, class_);
      DARABONBA_PTR_TO_JSON(creationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(displayName, displayName_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(owner, owner_);
      DARABONBA_PTR_TO_JSON(resources, resources_);
      DARABONBA_PTR_TO_JSON(schema, schema_);
    };
    friend void from_json(const Darabonba::Json& j, ListFunctionsResponseBodyDataFunctions& obj) { 
      DARABONBA_PTR_FROM_JSON(class, class_);
      DARABONBA_PTR_FROM_JSON(creationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(displayName, displayName_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(owner, owner_);
      DARABONBA_PTR_FROM_JSON(resources, resources_);
      DARABONBA_PTR_FROM_JSON(schema, schema_);
    };
    ListFunctionsResponseBodyDataFunctions() = default ;
    ListFunctionsResponseBodyDataFunctions(const ListFunctionsResponseBodyDataFunctions &) = default ;
    ListFunctionsResponseBodyDataFunctions(ListFunctionsResponseBodyDataFunctions &&) = default ;
    ListFunctionsResponseBodyDataFunctions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFunctionsResponseBodyDataFunctions() = default ;
    ListFunctionsResponseBodyDataFunctions& operator=(const ListFunctionsResponseBodyDataFunctions &) = default ;
    ListFunctionsResponseBodyDataFunctions& operator=(ListFunctionsResponseBodyDataFunctions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->class_ != nullptr
        && this->creationTime_ != nullptr && this->displayName_ != nullptr && this->name_ != nullptr && this->owner_ != nullptr && this->resources_ != nullptr
        && this->schema_ != nullptr; };
    // class Field Functions 
    bool hasClass() const { return this->class_ != nullptr;};
    void deleteClass() { this->class_ = nullptr;};
    inline string _class() const { DARABONBA_PTR_GET_DEFAULT(class_, "") };
    inline ListFunctionsResponseBodyDataFunctions& setClass(string _class) { DARABONBA_PTR_SET_VALUE(class_, _class) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline int64_t creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, 0L) };
    inline ListFunctionsResponseBodyDataFunctions& setCreationTime(int64_t creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ListFunctionsResponseBodyDataFunctions& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListFunctionsResponseBodyDataFunctions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline ListFunctionsResponseBodyDataFunctions& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline string resources() const { DARABONBA_PTR_GET_DEFAULT(resources_, "") };
    inline ListFunctionsResponseBodyDataFunctions& setResources(string resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline string schema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
    inline ListFunctionsResponseBodyDataFunctions& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


  protected:
    // The class in which the function was defined.
    std::shared_ptr<string> class_ = nullptr;
    // The time when the function was created. Unit: milliseconds.
    std::shared_ptr<int64_t> creationTime_ = nullptr;
    // The display name of the function.
    std::shared_ptr<string> displayName_ = nullptr;
    // The name of the function.
    std::shared_ptr<string> name_ = nullptr;
    // The owner of the function.
    std::shared_ptr<string> owner_ = nullptr;
    // The name of the resource that was associated with the function.
    std::shared_ptr<string> resources_ = nullptr;
    // The schema of the function.
    std::shared_ptr<string> schema_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
