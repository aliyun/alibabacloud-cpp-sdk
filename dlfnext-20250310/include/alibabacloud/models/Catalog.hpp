// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CATALOG_HPP_
#define ALIBABACLOUD_MODELS_CATALOG_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class Catalog : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Catalog& obj) { 
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(createdBy, createdBy_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(isShared, isShared_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(options, options_);
      DARABONBA_PTR_TO_JSON(owner, owner_);
      DARABONBA_PTR_TO_JSON(shareId, shareId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
      DARABONBA_PTR_TO_JSON(updatedBy, updatedBy_);
    };
    friend void from_json(const Darabonba::Json& j, Catalog& obj) { 
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(createdBy, createdBy_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(isShared, isShared_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(options, options_);
      DARABONBA_PTR_FROM_JSON(owner, owner_);
      DARABONBA_PTR_FROM_JSON(shareId, shareId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
      DARABONBA_PTR_FROM_JSON(updatedBy, updatedBy_);
    };
    Catalog() = default ;
    Catalog(const Catalog &) = default ;
    Catalog(Catalog &&) = default ;
    Catalog(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Catalog() = default ;
    Catalog& operator=(const Catalog &) = default ;
    Catalog& operator=(Catalog &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createdAt_ != nullptr
        && this->createdBy_ != nullptr && this->id_ != nullptr && this->isShared_ != nullptr && this->name_ != nullptr && this->options_ != nullptr
        && this->owner_ != nullptr && this->shareId_ != nullptr && this->status_ != nullptr && this->type_ != nullptr && this->updatedAt_ != nullptr
        && this->updatedBy_ != nullptr; };
    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline int64_t createdAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, 0L) };
    inline Catalog& setCreatedAt(int64_t createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // createdBy Field Functions 
    bool hasCreatedBy() const { return this->createdBy_ != nullptr;};
    void deleteCreatedBy() { this->createdBy_ = nullptr;};
    inline string createdBy() const { DARABONBA_PTR_GET_DEFAULT(createdBy_, "") };
    inline Catalog& setCreatedBy(string createdBy) { DARABONBA_PTR_SET_VALUE(createdBy_, createdBy) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline Catalog& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // isShared Field Functions 
    bool hasIsShared() const { return this->isShared_ != nullptr;};
    void deleteIsShared() { this->isShared_ = nullptr;};
    inline bool isShared() const { DARABONBA_PTR_GET_DEFAULT(isShared_, false) };
    inline Catalog& setIsShared(bool isShared) { DARABONBA_PTR_SET_VALUE(isShared_, isShared) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline Catalog& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline const map<string, string> & options() const { DARABONBA_PTR_GET_CONST(options_, map<string, string>) };
    inline map<string, string> options() { DARABONBA_PTR_GET(options_, map<string, string>) };
    inline Catalog& setOptions(const map<string, string> & options) { DARABONBA_PTR_SET_VALUE(options_, options) };
    inline Catalog& setOptions(map<string, string> && options) { DARABONBA_PTR_SET_RVALUE(options_, options) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline Catalog& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // shareId Field Functions 
    bool hasShareId() const { return this->shareId_ != nullptr;};
    void deleteShareId() { this->shareId_ = nullptr;};
    inline string shareId() const { DARABONBA_PTR_GET_DEFAULT(shareId_, "") };
    inline Catalog& setShareId(string shareId) { DARABONBA_PTR_SET_VALUE(shareId_, shareId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline Catalog& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline Catalog& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline int64_t updatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, 0L) };
    inline Catalog& setUpdatedAt(int64_t updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


    // updatedBy Field Functions 
    bool hasUpdatedBy() const { return this->updatedBy_ != nullptr;};
    void deleteUpdatedBy() { this->updatedBy_ = nullptr;};
    inline string updatedBy() const { DARABONBA_PTR_GET_DEFAULT(updatedBy_, "") };
    inline Catalog& setUpdatedBy(string updatedBy) { DARABONBA_PTR_SET_VALUE(updatedBy_, updatedBy) };


  protected:
    std::shared_ptr<int64_t> createdAt_ = nullptr;
    std::shared_ptr<string> createdBy_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<bool> isShared_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<map<string, string>> options_ = nullptr;
    std::shared_ptr<string> owner_ = nullptr;
    std::shared_ptr<string> shareId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<int64_t> updatedAt_ = nullptr;
    std::shared_ptr<string> updatedBy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
