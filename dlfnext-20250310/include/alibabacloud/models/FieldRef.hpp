// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FIELDREF_HPP_
#define ALIBABACLOUD_MODELS_FIELDREF_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FullDataType.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class FieldRef : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FieldRef& obj) { 
      DARABONBA_PTR_TO_JSON(index, index_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, FieldRef& obj) { 
      DARABONBA_PTR_FROM_JSON(index, index_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    FieldRef() = default ;
    FieldRef(const FieldRef &) = default ;
    FieldRef(FieldRef &&) = default ;
    FieldRef(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FieldRef() = default ;
    FieldRef& operator=(const FieldRef &) = default ;
    FieldRef& operator=(FieldRef &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->index_ == nullptr
        && this->name_ == nullptr && this->type_ == nullptr; };
    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
    inline FieldRef& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline FieldRef& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline const FullDataType & getType() const { DARABONBA_PTR_GET_CONST(type_, FullDataType) };
    inline FullDataType getType() { DARABONBA_PTR_GET(type_, FullDataType) };
    inline FieldRef& setType(const FullDataType & type) { DARABONBA_PTR_SET_VALUE(type_, type) };
    inline FieldRef& setType(FullDataType && type) { DARABONBA_PTR_SET_RVALUE(type_, type) };


  protected:
    shared_ptr<int32_t> index_ {};
    shared_ptr<string> name_ {};
    shared_ptr<FullDataType> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
