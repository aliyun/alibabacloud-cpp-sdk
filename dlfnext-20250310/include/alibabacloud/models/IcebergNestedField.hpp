// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ICEBERGNESTEDFIELD_HPP_
#define ALIBABACLOUD_MODELS_ICEBERGNESTEDFIELD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class IcebergNestedField : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IcebergNestedField& obj) { 
      DARABONBA_PTR_TO_JSON(doc, doc_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(optional, optional_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, IcebergNestedField& obj) { 
      DARABONBA_PTR_FROM_JSON(doc, doc_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(optional, optional_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    IcebergNestedField() = default ;
    IcebergNestedField(const IcebergNestedField &) = default ;
    IcebergNestedField(IcebergNestedField &&) = default ;
    IcebergNestedField(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IcebergNestedField() = default ;
    IcebergNestedField& operator=(const IcebergNestedField &) = default ;
    IcebergNestedField& operator=(IcebergNestedField &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->doc_ == nullptr
        && return this->id_ == nullptr && return this->name_ == nullptr && return this->optional_ == nullptr && return this->type_ == nullptr; };
    // doc Field Functions 
    bool hasDoc() const { return this->doc_ != nullptr;};
    void deleteDoc() { this->doc_ = nullptr;};
    inline string doc() const { DARABONBA_PTR_GET_DEFAULT(doc_, "") };
    inline IcebergNestedField& setDoc(string doc) { DARABONBA_PTR_SET_VALUE(doc_, doc) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline IcebergNestedField& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline IcebergNestedField& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // optional Field Functions 
    bool hasOptional() const { return this->optional_ != nullptr;};
    void deleteOptional() { this->optional_ = nullptr;};
    inline bool optional() const { DARABONBA_PTR_GET_DEFAULT(optional_, false) };
    inline IcebergNestedField& setOptional(bool optional) { DARABONBA_PTR_SET_VALUE(optional_, optional) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline IcebergNestedField& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> doc_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<bool> optional_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
