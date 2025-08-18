// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLISTRESPONSEBODY_HPP_
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
  class GetListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(Kind, kind_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(Kind, kind_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    GetListResponseBody() = default ;
    GetListResponseBody(const GetListResponseBody &) = default ;
    GetListResponseBody(GetListResponseBody &&) = default ;
    GetListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetListResponseBody() = default ;
    GetListResponseBody& operator=(const GetListResponseBody &) = default ;
    GetListResponseBody& operator=(GetListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->id_ != nullptr && this->items_ != nullptr && this->kind_ != nullptr && this->name_ != nullptr && this->requestId_ != nullptr
        && this->updateTime_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetListResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetListResponseBody& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<string> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<string>) };
    inline vector<string> items() { DARABONBA_PTR_GET(items_, vector<string>) };
    inline GetListResponseBody& setItems(const vector<string> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline GetListResponseBody& setItems(vector<string> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // kind Field Functions 
    bool hasKind() const { return this->kind_ != nullptr;};
    void deleteKind() { this->kind_ = nullptr;};
    inline string kind() const { DARABONBA_PTR_GET_DEFAULT(kind_, "") };
    inline GetListResponseBody& setKind(string kind) { DARABONBA_PTR_SET_VALUE(kind_, kind) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetListResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetListResponseBody& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The description of the custom list.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the custom list.[](~~2850217~~)
    std::shared_ptr<int64_t> id_ = nullptr;
    // The items in the custom list, which are displayed as an array.
    std::shared_ptr<vector<string>> items_ = nullptr;
    // The type of the custom list.
    std::shared_ptr<string> kind_ = nullptr;
    // The name of the custom list.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The time when the custom list was last modified.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
