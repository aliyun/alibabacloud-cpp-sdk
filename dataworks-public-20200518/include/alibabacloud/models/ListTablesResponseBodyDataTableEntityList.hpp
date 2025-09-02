// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTABLESRESPONSEBODYDATATABLEENTITYLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTTABLESRESPONSEBODYDATATABLEENTITYLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListTablesResponseBodyDataTableEntityListEntityContent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListTablesResponseBodyDataTableEntityList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTablesResponseBodyDataTableEntityList& obj) { 
      DARABONBA_PTR_TO_JSON(EntityContent, entityContent_);
      DARABONBA_PTR_TO_JSON(EntityQualifiedName, entityQualifiedName_);
    };
    friend void from_json(const Darabonba::Json& j, ListTablesResponseBodyDataTableEntityList& obj) { 
      DARABONBA_PTR_FROM_JSON(EntityContent, entityContent_);
      DARABONBA_PTR_FROM_JSON(EntityQualifiedName, entityQualifiedName_);
    };
    ListTablesResponseBodyDataTableEntityList() = default ;
    ListTablesResponseBodyDataTableEntityList(const ListTablesResponseBodyDataTableEntityList &) = default ;
    ListTablesResponseBodyDataTableEntityList(ListTablesResponseBodyDataTableEntityList &&) = default ;
    ListTablesResponseBodyDataTableEntityList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTablesResponseBodyDataTableEntityList() = default ;
    ListTablesResponseBodyDataTableEntityList& operator=(const ListTablesResponseBodyDataTableEntityList &) = default ;
    ListTablesResponseBodyDataTableEntityList& operator=(ListTablesResponseBodyDataTableEntityList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->entityContent_ != nullptr
        && this->entityQualifiedName_ != nullptr; };
    // entityContent Field Functions 
    bool hasEntityContent() const { return this->entityContent_ != nullptr;};
    void deleteEntityContent() { this->entityContent_ = nullptr;};
    inline const Models::ListTablesResponseBodyDataTableEntityListEntityContent & entityContent() const { DARABONBA_PTR_GET_CONST(entityContent_, Models::ListTablesResponseBodyDataTableEntityListEntityContent) };
    inline Models::ListTablesResponseBodyDataTableEntityListEntityContent entityContent() { DARABONBA_PTR_GET(entityContent_, Models::ListTablesResponseBodyDataTableEntityListEntityContent) };
    inline ListTablesResponseBodyDataTableEntityList& setEntityContent(const Models::ListTablesResponseBodyDataTableEntityListEntityContent & entityContent) { DARABONBA_PTR_SET_VALUE(entityContent_, entityContent) };
    inline ListTablesResponseBodyDataTableEntityList& setEntityContent(Models::ListTablesResponseBodyDataTableEntityListEntityContent && entityContent) { DARABONBA_PTR_SET_RVALUE(entityContent_, entityContent) };


    // entityQualifiedName Field Functions 
    bool hasEntityQualifiedName() const { return this->entityQualifiedName_ != nullptr;};
    void deleteEntityQualifiedName() { this->entityQualifiedName_ = nullptr;};
    inline string entityQualifiedName() const { DARABONBA_PTR_GET_DEFAULT(entityQualifiedName_, "") };
    inline ListTablesResponseBodyDataTableEntityList& setEntityQualifiedName(string entityQualifiedName) { DARABONBA_PTR_SET_VALUE(entityQualifiedName_, entityQualifiedName) };


  protected:
    // The information about the table.
    std::shared_ptr<Models::ListTablesResponseBodyDataTableEntityListEntityContent> entityContent_ = nullptr;
    // The unique identifier of the table entity.
    std::shared_ptr<string> entityQualifiedName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
