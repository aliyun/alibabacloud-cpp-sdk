// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCETYPERESPONSEBODYRESOURCETYPEHANDLERS_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCETYPERESPONSEBODYRESOURCETYPEHANDLERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetResourceTypeResponseBodyResourceTypeHandlersCreate.hpp>
#include <alibabacloud/models/GetResourceTypeResponseBodyResourceTypeHandlersDelete.hpp>
#include <alibabacloud/models/GetResourceTypeResponseBodyResourceTypeHandlersGet.hpp>
#include <alibabacloud/models/GetResourceTypeResponseBodyResourceTypeHandlersList.hpp>
#include <alibabacloud/models/GetResourceTypeResponseBodyResourceTypeHandlersUpdate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudcontrol20220830
{
namespace Models
{
  class GetResourceTypeResponseBodyResourceTypeHandlers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceTypeResponseBodyResourceTypeHandlers& obj) { 
      DARABONBA_PTR_TO_JSON(create, create_);
      DARABONBA_PTR_TO_JSON(delete, delete_);
      DARABONBA_PTR_TO_JSON(get, get_);
      DARABONBA_PTR_TO_JSON(list, list_);
      DARABONBA_PTR_TO_JSON(update, update_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceTypeResponseBodyResourceTypeHandlers& obj) { 
      DARABONBA_PTR_FROM_JSON(create, create_);
      DARABONBA_PTR_FROM_JSON(delete, delete_);
      DARABONBA_PTR_FROM_JSON(get, get_);
      DARABONBA_PTR_FROM_JSON(list, list_);
      DARABONBA_PTR_FROM_JSON(update, update_);
    };
    GetResourceTypeResponseBodyResourceTypeHandlers() = default ;
    GetResourceTypeResponseBodyResourceTypeHandlers(const GetResourceTypeResponseBodyResourceTypeHandlers &) = default ;
    GetResourceTypeResponseBodyResourceTypeHandlers(GetResourceTypeResponseBodyResourceTypeHandlers &&) = default ;
    GetResourceTypeResponseBodyResourceTypeHandlers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceTypeResponseBodyResourceTypeHandlers() = default ;
    GetResourceTypeResponseBodyResourceTypeHandlers& operator=(const GetResourceTypeResponseBodyResourceTypeHandlers &) = default ;
    GetResourceTypeResponseBodyResourceTypeHandlers& operator=(GetResourceTypeResponseBodyResourceTypeHandlers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->create_ != nullptr
        && this->delete_ != nullptr && this->get_ != nullptr && this->list_ != nullptr && this->update_ != nullptr; };
    // create Field Functions 
    bool hasCreate() const { return this->create_ != nullptr;};
    void deleteCreate() { this->create_ = nullptr;};
    inline const Models::GetResourceTypeResponseBodyResourceTypeHandlersCreate & create() const { DARABONBA_PTR_GET_CONST(create_, Models::GetResourceTypeResponseBodyResourceTypeHandlersCreate) };
    inline Models::GetResourceTypeResponseBodyResourceTypeHandlersCreate create() { DARABONBA_PTR_GET(create_, Models::GetResourceTypeResponseBodyResourceTypeHandlersCreate) };
    inline GetResourceTypeResponseBodyResourceTypeHandlers& setCreate(const Models::GetResourceTypeResponseBodyResourceTypeHandlersCreate & create) { DARABONBA_PTR_SET_VALUE(create_, create) };
    inline GetResourceTypeResponseBodyResourceTypeHandlers& setCreate(Models::GetResourceTypeResponseBodyResourceTypeHandlersCreate && create) { DARABONBA_PTR_SET_RVALUE(create_, create) };


    // delete Field Functions 
    bool hasDelete() const { return this->delete_ != nullptr;};
    void deleteDelete() { this->delete_ = nullptr;};
    inline const Models::GetResourceTypeResponseBodyResourceTypeHandlersDelete & _delete() const { DARABONBA_PTR_GET_CONST(delete_, Models::GetResourceTypeResponseBodyResourceTypeHandlersDelete) };
    inline Models::GetResourceTypeResponseBodyResourceTypeHandlersDelete _delete() { DARABONBA_PTR_GET(delete_, Models::GetResourceTypeResponseBodyResourceTypeHandlersDelete) };
    inline GetResourceTypeResponseBodyResourceTypeHandlers& setDelete(const Models::GetResourceTypeResponseBodyResourceTypeHandlersDelete & _delete) { DARABONBA_PTR_SET_VALUE(delete_, _delete) };
    inline GetResourceTypeResponseBodyResourceTypeHandlers& setDelete(Models::GetResourceTypeResponseBodyResourceTypeHandlersDelete && _delete) { DARABONBA_PTR_SET_RVALUE(delete_, _delete) };


    // get Field Functions 
    bool hasGet() const { return this->get_ != nullptr;};
    void deleteGet() { this->get_ = nullptr;};
    inline const Models::GetResourceTypeResponseBodyResourceTypeHandlersGet & get() const { DARABONBA_PTR_GET_CONST(get_, Models::GetResourceTypeResponseBodyResourceTypeHandlersGet) };
    inline Models::GetResourceTypeResponseBodyResourceTypeHandlersGet get() { DARABONBA_PTR_GET(get_, Models::GetResourceTypeResponseBodyResourceTypeHandlersGet) };
    inline GetResourceTypeResponseBodyResourceTypeHandlers& setGet(const Models::GetResourceTypeResponseBodyResourceTypeHandlersGet & get) { DARABONBA_PTR_SET_VALUE(get_, get) };
    inline GetResourceTypeResponseBodyResourceTypeHandlers& setGet(Models::GetResourceTypeResponseBodyResourceTypeHandlersGet && get) { DARABONBA_PTR_SET_RVALUE(get_, get) };


    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const Models::GetResourceTypeResponseBodyResourceTypeHandlersList & list() const { DARABONBA_PTR_GET_CONST(list_, Models::GetResourceTypeResponseBodyResourceTypeHandlersList) };
    inline Models::GetResourceTypeResponseBodyResourceTypeHandlersList list() { DARABONBA_PTR_GET(list_, Models::GetResourceTypeResponseBodyResourceTypeHandlersList) };
    inline GetResourceTypeResponseBodyResourceTypeHandlers& setList(const Models::GetResourceTypeResponseBodyResourceTypeHandlersList & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline GetResourceTypeResponseBodyResourceTypeHandlers& setList(Models::GetResourceTypeResponseBodyResourceTypeHandlersList && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // update Field Functions 
    bool hasUpdate() const { return this->update_ != nullptr;};
    void deleteUpdate() { this->update_ = nullptr;};
    inline const Models::GetResourceTypeResponseBodyResourceTypeHandlersUpdate & update() const { DARABONBA_PTR_GET_CONST(update_, Models::GetResourceTypeResponseBodyResourceTypeHandlersUpdate) };
    inline Models::GetResourceTypeResponseBodyResourceTypeHandlersUpdate update() { DARABONBA_PTR_GET(update_, Models::GetResourceTypeResponseBodyResourceTypeHandlersUpdate) };
    inline GetResourceTypeResponseBodyResourceTypeHandlers& setUpdate(const Models::GetResourceTypeResponseBodyResourceTypeHandlersUpdate & update) { DARABONBA_PTR_SET_VALUE(update_, update) };
    inline GetResourceTypeResponseBodyResourceTypeHandlers& setUpdate(Models::GetResourceTypeResponseBodyResourceTypeHandlersUpdate && update) { DARABONBA_PTR_SET_RVALUE(update_, update) };


  protected:
    // The information about the create operation.
    std::shared_ptr<Models::GetResourceTypeResponseBodyResourceTypeHandlersCreate> create_ = nullptr;
    // The information about the delete operation.
    std::shared_ptr<Models::GetResourceTypeResponseBodyResourceTypeHandlersDelete> delete_ = nullptr;
    // The information about the query operation.
    std::shared_ptr<Models::GetResourceTypeResponseBodyResourceTypeHandlersGet> get_ = nullptr;
    // The information about the list operation.
    std::shared_ptr<Models::GetResourceTypeResponseBodyResourceTypeHandlersList> list_ = nullptr;
    // The information about the update operation.
    std::shared_ptr<Models::GetResourceTypeResponseBodyResourceTypeHandlersUpdate> update_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudcontrol20220830
#endif
