// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCERESOURCETABLERESPONSEBODYFIELDS_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCERESOURCETABLERESPONSEBODYFIELDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class GetInstanceResourceTableResponseBodyFields : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceResourceTableResponseBodyFields& obj) { 
      DARABONBA_PTR_TO_JSON(IsDimensionField, isDimensionField_);
      DARABONBA_PTR_TO_JSON(IsPartitionField, isPartitionField_);
      DARABONBA_PTR_TO_JSON(Meaning, meaning_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceResourceTableResponseBodyFields& obj) { 
      DARABONBA_PTR_FROM_JSON(IsDimensionField, isDimensionField_);
      DARABONBA_PTR_FROM_JSON(IsPartitionField, isPartitionField_);
      DARABONBA_PTR_FROM_JSON(Meaning, meaning_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetInstanceResourceTableResponseBodyFields() = default ;
    GetInstanceResourceTableResponseBodyFields(const GetInstanceResourceTableResponseBodyFields &) = default ;
    GetInstanceResourceTableResponseBodyFields(GetInstanceResourceTableResponseBodyFields &&) = default ;
    GetInstanceResourceTableResponseBodyFields(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceResourceTableResponseBodyFields() = default ;
    GetInstanceResourceTableResponseBodyFields& operator=(const GetInstanceResourceTableResponseBodyFields &) = default ;
    GetInstanceResourceTableResponseBodyFields& operator=(GetInstanceResourceTableResponseBodyFields &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isDimensionField_ != nullptr
        && this->isPartitionField_ != nullptr && this->meaning_ != nullptr && this->name_ != nullptr && this->type_ != nullptr; };
    // isDimensionField Field Functions 
    bool hasIsDimensionField() const { return this->isDimensionField_ != nullptr;};
    void deleteIsDimensionField() { this->isDimensionField_ = nullptr;};
    inline bool isDimensionField() const { DARABONBA_PTR_GET_DEFAULT(isDimensionField_, false) };
    inline GetInstanceResourceTableResponseBodyFields& setIsDimensionField(bool isDimensionField) { DARABONBA_PTR_SET_VALUE(isDimensionField_, isDimensionField) };


    // isPartitionField Field Functions 
    bool hasIsPartitionField() const { return this->isPartitionField_ != nullptr;};
    void deleteIsPartitionField() { this->isPartitionField_ = nullptr;};
    inline bool isPartitionField() const { DARABONBA_PTR_GET_DEFAULT(isPartitionField_, false) };
    inline GetInstanceResourceTableResponseBodyFields& setIsPartitionField(bool isPartitionField) { DARABONBA_PTR_SET_VALUE(isPartitionField_, isPartitionField) };


    // meaning Field Functions 
    bool hasMeaning() const { return this->meaning_ != nullptr;};
    void deleteMeaning() { this->meaning_ = nullptr;};
    inline string meaning() const { DARABONBA_PTR_GET_DEFAULT(meaning_, "") };
    inline GetInstanceResourceTableResponseBodyFields& setMeaning(string meaning) { DARABONBA_PTR_SET_VALUE(meaning_, meaning) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetInstanceResourceTableResponseBodyFields& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetInstanceResourceTableResponseBodyFields& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<bool> isDimensionField_ = nullptr;
    std::shared_ptr<bool> isPartitionField_ = nullptr;
    std::shared_ptr<string> meaning_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
