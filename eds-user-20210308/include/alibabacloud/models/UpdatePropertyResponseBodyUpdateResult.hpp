// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROPERTYRESPONSEBODYUPDATERESULT_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROPERTYRESPONSEBODYUPDATERESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdatePropertyResponseBodyUpdateResultSavePropertyValueModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class UpdatePropertyResponseBodyUpdateResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePropertyResponseBodyUpdateResult& obj) { 
      DARABONBA_PTR_TO_JSON(PropertyId, propertyId_);
      DARABONBA_PTR_TO_JSON(PropertyKey, propertyKey_);
      DARABONBA_PTR_TO_JSON(SavePropertyValueModel, savePropertyValueModel_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePropertyResponseBodyUpdateResult& obj) { 
      DARABONBA_PTR_FROM_JSON(PropertyId, propertyId_);
      DARABONBA_PTR_FROM_JSON(PropertyKey, propertyKey_);
      DARABONBA_PTR_FROM_JSON(SavePropertyValueModel, savePropertyValueModel_);
    };
    UpdatePropertyResponseBodyUpdateResult() = default ;
    UpdatePropertyResponseBodyUpdateResult(const UpdatePropertyResponseBodyUpdateResult &) = default ;
    UpdatePropertyResponseBodyUpdateResult(UpdatePropertyResponseBodyUpdateResult &&) = default ;
    UpdatePropertyResponseBodyUpdateResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePropertyResponseBodyUpdateResult() = default ;
    UpdatePropertyResponseBodyUpdateResult& operator=(const UpdatePropertyResponseBodyUpdateResult &) = default ;
    UpdatePropertyResponseBodyUpdateResult& operator=(UpdatePropertyResponseBodyUpdateResult &&) = default ;
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
    inline UpdatePropertyResponseBodyUpdateResult& setPropertyId(int64_t propertyId) { DARABONBA_PTR_SET_VALUE(propertyId_, propertyId) };


    // propertyKey Field Functions 
    bool hasPropertyKey() const { return this->propertyKey_ != nullptr;};
    void deletePropertyKey() { this->propertyKey_ = nullptr;};
    inline string propertyKey() const { DARABONBA_PTR_GET_DEFAULT(propertyKey_, "") };
    inline UpdatePropertyResponseBodyUpdateResult& setPropertyKey(string propertyKey) { DARABONBA_PTR_SET_VALUE(propertyKey_, propertyKey) };


    // savePropertyValueModel Field Functions 
    bool hasSavePropertyValueModel() const { return this->savePropertyValueModel_ != nullptr;};
    void deleteSavePropertyValueModel() { this->savePropertyValueModel_ = nullptr;};
    inline const Models::UpdatePropertyResponseBodyUpdateResultSavePropertyValueModel & savePropertyValueModel() const { DARABONBA_PTR_GET_CONST(savePropertyValueModel_, Models::UpdatePropertyResponseBodyUpdateResultSavePropertyValueModel) };
    inline Models::UpdatePropertyResponseBodyUpdateResultSavePropertyValueModel savePropertyValueModel() { DARABONBA_PTR_GET(savePropertyValueModel_, Models::UpdatePropertyResponseBodyUpdateResultSavePropertyValueModel) };
    inline UpdatePropertyResponseBodyUpdateResult& setSavePropertyValueModel(const Models::UpdatePropertyResponseBodyUpdateResultSavePropertyValueModel & savePropertyValueModel) { DARABONBA_PTR_SET_VALUE(savePropertyValueModel_, savePropertyValueModel) };
    inline UpdatePropertyResponseBodyUpdateResult& setSavePropertyValueModel(Models::UpdatePropertyResponseBodyUpdateResultSavePropertyValueModel && savePropertyValueModel) { DARABONBA_PTR_SET_RVALUE(savePropertyValueModel_, savePropertyValueModel) };


  protected:
    // The ID of the property.
    std::shared_ptr<int64_t> propertyId_ = nullptr;
    // The name of the property.
    std::shared_ptr<string> propertyKey_ = nullptr;
    // The result of the property value modification.
    std::shared_ptr<Models::UpdatePropertyResponseBodyUpdateResultSavePropertyValueModel> savePropertyValueModel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
