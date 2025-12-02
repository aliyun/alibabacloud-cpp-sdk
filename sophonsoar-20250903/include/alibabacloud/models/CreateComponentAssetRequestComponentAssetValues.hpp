// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOMPONENTASSETREQUESTCOMPONENTASSETVALUES_HPP_
#define ALIBABACLOUD_MODELS_CREATECOMPONENTASSETREQUESTCOMPONENTASSETVALUES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20250903
{
namespace Models
{
  class CreateComponentAssetRequestComponentAssetValues : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateComponentAssetRequestComponentAssetValues& obj) { 
      DARABONBA_PTR_TO_JSON(FieldName, fieldName_);
      DARABONBA_PTR_TO_JSON(FieldValue, fieldValue_);
    };
    friend void from_json(const Darabonba::Json& j, CreateComponentAssetRequestComponentAssetValues& obj) { 
      DARABONBA_PTR_FROM_JSON(FieldName, fieldName_);
      DARABONBA_PTR_FROM_JSON(FieldValue, fieldValue_);
    };
    CreateComponentAssetRequestComponentAssetValues() = default ;
    CreateComponentAssetRequestComponentAssetValues(const CreateComponentAssetRequestComponentAssetValues &) = default ;
    CreateComponentAssetRequestComponentAssetValues(CreateComponentAssetRequestComponentAssetValues &&) = default ;
    CreateComponentAssetRequestComponentAssetValues(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateComponentAssetRequestComponentAssetValues() = default ;
    CreateComponentAssetRequestComponentAssetValues& operator=(const CreateComponentAssetRequestComponentAssetValues &) = default ;
    CreateComponentAssetRequestComponentAssetValues& operator=(CreateComponentAssetRequestComponentAssetValues &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fieldName_ == nullptr
        && return this->fieldValue_ == nullptr; };
    // fieldName Field Functions 
    bool hasFieldName() const { return this->fieldName_ != nullptr;};
    void deleteFieldName() { this->fieldName_ = nullptr;};
    inline string fieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
    inline CreateComponentAssetRequestComponentAssetValues& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


    // fieldValue Field Functions 
    bool hasFieldValue() const { return this->fieldValue_ != nullptr;};
    void deleteFieldValue() { this->fieldValue_ = nullptr;};
    inline string fieldValue() const { DARABONBA_PTR_GET_DEFAULT(fieldValue_, "") };
    inline CreateComponentAssetRequestComponentAssetValues& setFieldValue(string fieldValue) { DARABONBA_PTR_SET_VALUE(fieldValue_, fieldValue) };


  protected:
    // Field name.
    // 
    // This parameter is required.
    std::shared_ptr<string> fieldName_ = nullptr;
    // Field value.
    // 
    // This parameter is required.
    std::shared_ptr<string> fieldValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20250903
#endif
