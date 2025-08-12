// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROPERTYRESPONSEBODYCREATERESULT_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROPERTYRESPONSEBODYCREATERESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreatePropertyResponseBodyCreateResultSavePropertyValueModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class CreatePropertyResponseBodyCreateResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePropertyResponseBodyCreateResult& obj) { 
      DARABONBA_PTR_TO_JSON(PropertyId, propertyId_);
      DARABONBA_PTR_TO_JSON(PropertyKey, propertyKey_);
      DARABONBA_PTR_TO_JSON(SavePropertyValueModel, savePropertyValueModel_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePropertyResponseBodyCreateResult& obj) { 
      DARABONBA_PTR_FROM_JSON(PropertyId, propertyId_);
      DARABONBA_PTR_FROM_JSON(PropertyKey, propertyKey_);
      DARABONBA_PTR_FROM_JSON(SavePropertyValueModel, savePropertyValueModel_);
    };
    CreatePropertyResponseBodyCreateResult() = default ;
    CreatePropertyResponseBodyCreateResult(const CreatePropertyResponseBodyCreateResult &) = default ;
    CreatePropertyResponseBodyCreateResult(CreatePropertyResponseBodyCreateResult &&) = default ;
    CreatePropertyResponseBodyCreateResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePropertyResponseBodyCreateResult() = default ;
    CreatePropertyResponseBodyCreateResult& operator=(const CreatePropertyResponseBodyCreateResult &) = default ;
    CreatePropertyResponseBodyCreateResult& operator=(CreatePropertyResponseBodyCreateResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->propertyId_ != nullptr
        && this->propertyKey_ != nullptr && this->savePropertyValueModel_ != nullptr; };
    // propertyId Field Functions 
    bool hasPropertyId() const { return this->propertyId_ != nullptr;};
    void deletePropertyId() { this->propertyId_ = nullptr;};
    inline int64_t propertyId() const { DARABONBA_PTR_GET_DEFAULT(propertyId_, 0L) };
    inline CreatePropertyResponseBodyCreateResult& setPropertyId(int64_t propertyId) { DARABONBA_PTR_SET_VALUE(propertyId_, propertyId) };


    // propertyKey Field Functions 
    bool hasPropertyKey() const { return this->propertyKey_ != nullptr;};
    void deletePropertyKey() { this->propertyKey_ = nullptr;};
    inline string propertyKey() const { DARABONBA_PTR_GET_DEFAULT(propertyKey_, "") };
    inline CreatePropertyResponseBodyCreateResult& setPropertyKey(string propertyKey) { DARABONBA_PTR_SET_VALUE(propertyKey_, propertyKey) };


    // savePropertyValueModel Field Functions 
    bool hasSavePropertyValueModel() const { return this->savePropertyValueModel_ != nullptr;};
    void deleteSavePropertyValueModel() { this->savePropertyValueModel_ = nullptr;};
    inline const Models::CreatePropertyResponseBodyCreateResultSavePropertyValueModel & savePropertyValueModel() const { DARABONBA_PTR_GET_CONST(savePropertyValueModel_, Models::CreatePropertyResponseBodyCreateResultSavePropertyValueModel) };
    inline Models::CreatePropertyResponseBodyCreateResultSavePropertyValueModel savePropertyValueModel() { DARABONBA_PTR_GET(savePropertyValueModel_, Models::CreatePropertyResponseBodyCreateResultSavePropertyValueModel) };
    inline CreatePropertyResponseBodyCreateResult& setSavePropertyValueModel(const Models::CreatePropertyResponseBodyCreateResultSavePropertyValueModel & savePropertyValueModel) { DARABONBA_PTR_SET_VALUE(savePropertyValueModel_, savePropertyValueModel) };
    inline CreatePropertyResponseBodyCreateResult& setSavePropertyValueModel(Models::CreatePropertyResponseBodyCreateResultSavePropertyValueModel && savePropertyValueModel) { DARABONBA_PTR_SET_RVALUE(savePropertyValueModel_, savePropertyValueModel) };


  protected:
    // The ID of the property.
    std::shared_ptr<int64_t> propertyId_ = nullptr;
    // The name of the property.
    std::shared_ptr<string> propertyKey_ = nullptr;
    // The result of creating the property value.
    std::shared_ptr<Models::CreatePropertyResponseBodyCreateResultSavePropertyValueModel> savePropertyValueModel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
