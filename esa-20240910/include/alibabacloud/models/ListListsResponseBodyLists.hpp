// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLISTSRESPONSEBODYLISTS_HPP_
#define ALIBABACLOUD_MODELS_LISTLISTSRESPONSEBODYLISTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListListsResponseBodyLists : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListListsResponseBodyLists& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Kind, kind_);
      DARABONBA_PTR_TO_JSON(Length, length_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListListsResponseBodyLists& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Kind, kind_);
      DARABONBA_PTR_FROM_JSON(Length, length_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListListsResponseBodyLists() = default ;
    ListListsResponseBodyLists(const ListListsResponseBodyLists &) = default ;
    ListListsResponseBodyLists(ListListsResponseBodyLists &&) = default ;
    ListListsResponseBodyLists(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListListsResponseBodyLists() = default ;
    ListListsResponseBodyLists& operator=(const ListListsResponseBodyLists &) = default ;
    ListListsResponseBodyLists& operator=(ListListsResponseBodyLists &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->id_ == nullptr && return this->kind_ == nullptr && return this->length_ == nullptr && return this->name_ == nullptr && return this->updateTime_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListListsResponseBodyLists& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListListsResponseBodyLists& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // kind Field Functions 
    bool hasKind() const { return this->kind_ != nullptr;};
    void deleteKind() { this->kind_ = nullptr;};
    inline string kind() const { DARABONBA_PTR_GET_DEFAULT(kind_, "") };
    inline ListListsResponseBodyLists& setKind(string kind) { DARABONBA_PTR_SET_VALUE(kind_, kind) };


    // length Field Functions 
    bool hasLength() const { return this->length_ != nullptr;};
    void deleteLength() { this->length_ = nullptr;};
    inline int64_t length() const { DARABONBA_PTR_GET_DEFAULT(length_, 0L) };
    inline ListListsResponseBodyLists& setLength(int64_t length) { DARABONBA_PTR_SET_VALUE(length_, length) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListListsResponseBodyLists& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListListsResponseBodyLists& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The list description.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the custom list.[](~~2850217~~)
    std::shared_ptr<int64_t> id_ = nullptr;
    // The list type.
    std::shared_ptr<string> kind_ = nullptr;
    // The length of the list information array, which indicates how many items the list contains.
    std::shared_ptr<int64_t> length_ = nullptr;
    // The list name.
    std::shared_ptr<string> name_ = nullptr;
    // The time when the list was last modified.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
