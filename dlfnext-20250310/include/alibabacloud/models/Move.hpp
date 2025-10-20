// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MOVE_HPP_
#define ALIBABACLOUD_MODELS_MOVE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class Move : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Move& obj) { 
      DARABONBA_PTR_TO_JSON(fieldName, fieldName_);
      DARABONBA_PTR_TO_JSON(referenceFieldName, referenceFieldName_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, Move& obj) { 
      DARABONBA_PTR_FROM_JSON(fieldName, fieldName_);
      DARABONBA_PTR_FROM_JSON(referenceFieldName, referenceFieldName_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    Move() = default ;
    Move(const Move &) = default ;
    Move(Move &&) = default ;
    Move(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Move() = default ;
    Move& operator=(const Move &) = default ;
    Move& operator=(Move &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fieldName_ == nullptr
        && return this->referenceFieldName_ == nullptr && return this->type_ == nullptr; };
    // fieldName Field Functions 
    bool hasFieldName() const { return this->fieldName_ != nullptr;};
    void deleteFieldName() { this->fieldName_ = nullptr;};
    inline string fieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
    inline Move& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


    // referenceFieldName Field Functions 
    bool hasReferenceFieldName() const { return this->referenceFieldName_ != nullptr;};
    void deleteReferenceFieldName() { this->referenceFieldName_ = nullptr;};
    inline string referenceFieldName() const { DARABONBA_PTR_GET_DEFAULT(referenceFieldName_, "") };
    inline Move& setReferenceFieldName(string referenceFieldName) { DARABONBA_PTR_SET_VALUE(referenceFieldName_, referenceFieldName) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline Move& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> fieldName_ = nullptr;
    std::shared_ptr<string> referenceFieldName_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
