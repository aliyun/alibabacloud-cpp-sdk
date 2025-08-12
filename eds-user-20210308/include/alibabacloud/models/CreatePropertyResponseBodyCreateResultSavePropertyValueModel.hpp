// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROPERTYRESPONSEBODYCREATERESULTSAVEPROPERTYVALUEMODEL_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROPERTYRESPONSEBODYCREATERESULTSAVEPROPERTYVALUEMODEL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreatePropertyResponseBodyCreateResultSavePropertyValueModelFailedPropertyValues.hpp>
#include <alibabacloud/models/CreatePropertyResponseBodyCreateResultSavePropertyValueModelSavePropertyValues.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class CreatePropertyResponseBodyCreateResultSavePropertyValueModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePropertyResponseBodyCreateResultSavePropertyValueModel& obj) { 
      DARABONBA_PTR_TO_JSON(FailedPropertyValues, failedPropertyValues_);
      DARABONBA_PTR_TO_JSON(SavePropertyValues, savePropertyValues_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePropertyResponseBodyCreateResultSavePropertyValueModel& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedPropertyValues, failedPropertyValues_);
      DARABONBA_PTR_FROM_JSON(SavePropertyValues, savePropertyValues_);
    };
    CreatePropertyResponseBodyCreateResultSavePropertyValueModel() = default ;
    CreatePropertyResponseBodyCreateResultSavePropertyValueModel(const CreatePropertyResponseBodyCreateResultSavePropertyValueModel &) = default ;
    CreatePropertyResponseBodyCreateResultSavePropertyValueModel(CreatePropertyResponseBodyCreateResultSavePropertyValueModel &&) = default ;
    CreatePropertyResponseBodyCreateResultSavePropertyValueModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePropertyResponseBodyCreateResultSavePropertyValueModel() = default ;
    CreatePropertyResponseBodyCreateResultSavePropertyValueModel& operator=(const CreatePropertyResponseBodyCreateResultSavePropertyValueModel &) = default ;
    CreatePropertyResponseBodyCreateResultSavePropertyValueModel& operator=(CreatePropertyResponseBodyCreateResultSavePropertyValueModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->failedPropertyValues_ != nullptr
        && this->savePropertyValues_ != nullptr; };
    // failedPropertyValues Field Functions 
    bool hasFailedPropertyValues() const { return this->failedPropertyValues_ != nullptr;};
    void deleteFailedPropertyValues() { this->failedPropertyValues_ = nullptr;};
    inline const vector<Models::CreatePropertyResponseBodyCreateResultSavePropertyValueModelFailedPropertyValues> & failedPropertyValues() const { DARABONBA_PTR_GET_CONST(failedPropertyValues_, vector<Models::CreatePropertyResponseBodyCreateResultSavePropertyValueModelFailedPropertyValues>) };
    inline vector<Models::CreatePropertyResponseBodyCreateResultSavePropertyValueModelFailedPropertyValues> failedPropertyValues() { DARABONBA_PTR_GET(failedPropertyValues_, vector<Models::CreatePropertyResponseBodyCreateResultSavePropertyValueModelFailedPropertyValues>) };
    inline CreatePropertyResponseBodyCreateResultSavePropertyValueModel& setFailedPropertyValues(const vector<Models::CreatePropertyResponseBodyCreateResultSavePropertyValueModelFailedPropertyValues> & failedPropertyValues) { DARABONBA_PTR_SET_VALUE(failedPropertyValues_, failedPropertyValues) };
    inline CreatePropertyResponseBodyCreateResultSavePropertyValueModel& setFailedPropertyValues(vector<Models::CreatePropertyResponseBodyCreateResultSavePropertyValueModelFailedPropertyValues> && failedPropertyValues) { DARABONBA_PTR_SET_RVALUE(failedPropertyValues_, failedPropertyValues) };


    // savePropertyValues Field Functions 
    bool hasSavePropertyValues() const { return this->savePropertyValues_ != nullptr;};
    void deleteSavePropertyValues() { this->savePropertyValues_ = nullptr;};
    inline const vector<Models::CreatePropertyResponseBodyCreateResultSavePropertyValueModelSavePropertyValues> & savePropertyValues() const { DARABONBA_PTR_GET_CONST(savePropertyValues_, vector<Models::CreatePropertyResponseBodyCreateResultSavePropertyValueModelSavePropertyValues>) };
    inline vector<Models::CreatePropertyResponseBodyCreateResultSavePropertyValueModelSavePropertyValues> savePropertyValues() { DARABONBA_PTR_GET(savePropertyValues_, vector<Models::CreatePropertyResponseBodyCreateResultSavePropertyValueModelSavePropertyValues>) };
    inline CreatePropertyResponseBodyCreateResultSavePropertyValueModel& setSavePropertyValues(const vector<Models::CreatePropertyResponseBodyCreateResultSavePropertyValueModelSavePropertyValues> & savePropertyValues) { DARABONBA_PTR_SET_VALUE(savePropertyValues_, savePropertyValues) };
    inline CreatePropertyResponseBodyCreateResultSavePropertyValueModel& setSavePropertyValues(vector<Models::CreatePropertyResponseBodyCreateResultSavePropertyValueModelSavePropertyValues> && savePropertyValues) { DARABONBA_PTR_SET_RVALUE(savePropertyValues_, savePropertyValues) };


  protected:
    // The property values that failed to be created.
    std::shared_ptr<vector<Models::CreatePropertyResponseBodyCreateResultSavePropertyValueModelFailedPropertyValues>> failedPropertyValues_ = nullptr;
    // Details of the property values that were created.
    std::shared_ptr<vector<Models::CreatePropertyResponseBodyCreateResultSavePropertyValueModelSavePropertyValues>> savePropertyValues_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
