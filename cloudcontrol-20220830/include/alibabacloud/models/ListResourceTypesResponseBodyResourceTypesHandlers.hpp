// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCETYPESRESPONSEBODYRESOURCETYPESHANDLERS_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCETYPESRESPONSEBODYRESOURCETYPESHANDLERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListResourceTypesResponseBodyResourceTypesHandlersCreate.hpp>
#include <alibabacloud/models/ListResourceTypesResponseBodyResourceTypesHandlersDelete.hpp>
#include <alibabacloud/models/ListResourceTypesResponseBodyResourceTypesHandlersGet.hpp>
#include <alibabacloud/models/ListResourceTypesResponseBodyResourceTypesHandlersList.hpp>
#include <alibabacloud/models/ListResourceTypesResponseBodyResourceTypesHandlersUpdate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudcontrol20220830
{
namespace Models
{
  class ListResourceTypesResponseBodyResourceTypesHandlers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceTypesResponseBodyResourceTypesHandlers& obj) { 
      DARABONBA_PTR_TO_JSON(create, create_);
      DARABONBA_PTR_TO_JSON(delete, delete_);
      DARABONBA_PTR_TO_JSON(get, get_);
      DARABONBA_PTR_TO_JSON(list, list_);
      DARABONBA_PTR_TO_JSON(update, update_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceTypesResponseBodyResourceTypesHandlers& obj) { 
      DARABONBA_PTR_FROM_JSON(create, create_);
      DARABONBA_PTR_FROM_JSON(delete, delete_);
      DARABONBA_PTR_FROM_JSON(get, get_);
      DARABONBA_PTR_FROM_JSON(list, list_);
      DARABONBA_PTR_FROM_JSON(update, update_);
    };
    ListResourceTypesResponseBodyResourceTypesHandlers() = default ;
    ListResourceTypesResponseBodyResourceTypesHandlers(const ListResourceTypesResponseBodyResourceTypesHandlers &) = default ;
    ListResourceTypesResponseBodyResourceTypesHandlers(ListResourceTypesResponseBodyResourceTypesHandlers &&) = default ;
    ListResourceTypesResponseBodyResourceTypesHandlers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceTypesResponseBodyResourceTypesHandlers() = default ;
    ListResourceTypesResponseBodyResourceTypesHandlers& operator=(const ListResourceTypesResponseBodyResourceTypesHandlers &) = default ;
    ListResourceTypesResponseBodyResourceTypesHandlers& operator=(ListResourceTypesResponseBodyResourceTypesHandlers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->create_ != nullptr
        && this->delete_ != nullptr && this->get_ != nullptr && this->list_ != nullptr && this->update_ != nullptr; };
    // create Field Functions 
    bool hasCreate() const { return this->create_ != nullptr;};
    void deleteCreate() { this->create_ = nullptr;};
    inline const Models::ListResourceTypesResponseBodyResourceTypesHandlersCreate & create() const { DARABONBA_PTR_GET_CONST(create_, Models::ListResourceTypesResponseBodyResourceTypesHandlersCreate) };
    inline Models::ListResourceTypesResponseBodyResourceTypesHandlersCreate create() { DARABONBA_PTR_GET(create_, Models::ListResourceTypesResponseBodyResourceTypesHandlersCreate) };
    inline ListResourceTypesResponseBodyResourceTypesHandlers& setCreate(const Models::ListResourceTypesResponseBodyResourceTypesHandlersCreate & create) { DARABONBA_PTR_SET_VALUE(create_, create) };
    inline ListResourceTypesResponseBodyResourceTypesHandlers& setCreate(Models::ListResourceTypesResponseBodyResourceTypesHandlersCreate && create) { DARABONBA_PTR_SET_RVALUE(create_, create) };


    // delete Field Functions 
    bool hasDelete() const { return this->delete_ != nullptr;};
    void deleteDelete() { this->delete_ = nullptr;};
    inline const Models::ListResourceTypesResponseBodyResourceTypesHandlersDelete & _delete() const { DARABONBA_PTR_GET_CONST(delete_, Models::ListResourceTypesResponseBodyResourceTypesHandlersDelete) };
    inline Models::ListResourceTypesResponseBodyResourceTypesHandlersDelete _delete() { DARABONBA_PTR_GET(delete_, Models::ListResourceTypesResponseBodyResourceTypesHandlersDelete) };
    inline ListResourceTypesResponseBodyResourceTypesHandlers& setDelete(const Models::ListResourceTypesResponseBodyResourceTypesHandlersDelete & _delete) { DARABONBA_PTR_SET_VALUE(delete_, _delete) };
    inline ListResourceTypesResponseBodyResourceTypesHandlers& setDelete(Models::ListResourceTypesResponseBodyResourceTypesHandlersDelete && _delete) { DARABONBA_PTR_SET_RVALUE(delete_, _delete) };


    // get Field Functions 
    bool hasGet() const { return this->get_ != nullptr;};
    void deleteGet() { this->get_ = nullptr;};
    inline const Models::ListResourceTypesResponseBodyResourceTypesHandlersGet & get() const { DARABONBA_PTR_GET_CONST(get_, Models::ListResourceTypesResponseBodyResourceTypesHandlersGet) };
    inline Models::ListResourceTypesResponseBodyResourceTypesHandlersGet get() { DARABONBA_PTR_GET(get_, Models::ListResourceTypesResponseBodyResourceTypesHandlersGet) };
    inline ListResourceTypesResponseBodyResourceTypesHandlers& setGet(const Models::ListResourceTypesResponseBodyResourceTypesHandlersGet & get) { DARABONBA_PTR_SET_VALUE(get_, get) };
    inline ListResourceTypesResponseBodyResourceTypesHandlers& setGet(Models::ListResourceTypesResponseBodyResourceTypesHandlersGet && get) { DARABONBA_PTR_SET_RVALUE(get_, get) };


    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const Models::ListResourceTypesResponseBodyResourceTypesHandlersList & list() const { DARABONBA_PTR_GET_CONST(list_, Models::ListResourceTypesResponseBodyResourceTypesHandlersList) };
    inline Models::ListResourceTypesResponseBodyResourceTypesHandlersList list() { DARABONBA_PTR_GET(list_, Models::ListResourceTypesResponseBodyResourceTypesHandlersList) };
    inline ListResourceTypesResponseBodyResourceTypesHandlers& setList(const Models::ListResourceTypesResponseBodyResourceTypesHandlersList & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline ListResourceTypesResponseBodyResourceTypesHandlers& setList(Models::ListResourceTypesResponseBodyResourceTypesHandlersList && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // update Field Functions 
    bool hasUpdate() const { return this->update_ != nullptr;};
    void deleteUpdate() { this->update_ = nullptr;};
    inline const Models::ListResourceTypesResponseBodyResourceTypesHandlersUpdate & update() const { DARABONBA_PTR_GET_CONST(update_, Models::ListResourceTypesResponseBodyResourceTypesHandlersUpdate) };
    inline Models::ListResourceTypesResponseBodyResourceTypesHandlersUpdate update() { DARABONBA_PTR_GET(update_, Models::ListResourceTypesResponseBodyResourceTypesHandlersUpdate) };
    inline ListResourceTypesResponseBodyResourceTypesHandlers& setUpdate(const Models::ListResourceTypesResponseBodyResourceTypesHandlersUpdate & update) { DARABONBA_PTR_SET_VALUE(update_, update) };
    inline ListResourceTypesResponseBodyResourceTypesHandlers& setUpdate(Models::ListResourceTypesResponseBodyResourceTypesHandlersUpdate && update) { DARABONBA_PTR_SET_RVALUE(update_, update) };


  protected:
    // The information about the create operation.
    std::shared_ptr<Models::ListResourceTypesResponseBodyResourceTypesHandlersCreate> create_ = nullptr;
    // The information about the delete operation.
    std::shared_ptr<Models::ListResourceTypesResponseBodyResourceTypesHandlersDelete> delete_ = nullptr;
    // The information about the query operation.
    std::shared_ptr<Models::ListResourceTypesResponseBodyResourceTypesHandlersGet> get_ = nullptr;
    // The information about the list operation.
    std::shared_ptr<Models::ListResourceTypesResponseBodyResourceTypesHandlersList> list_ = nullptr;
    // The information about the update operation.
    std::shared_ptr<Models::ListResourceTypesResponseBodyResourceTypesHandlersUpdate> update_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudcontrol20220830
#endif
