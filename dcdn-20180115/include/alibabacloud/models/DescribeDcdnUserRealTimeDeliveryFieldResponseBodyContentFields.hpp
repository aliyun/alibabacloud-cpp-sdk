// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERREALTIMEDELIVERYFIELDRESPONSEBODYCONTENTFIELDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERREALTIMEDELIVERYFIELDRESPONSEBODYCONTENTFIELDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnUserRealTimeDeliveryFieldResponseBodyContentFields : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnUserRealTimeDeliveryFieldResponseBodyContentFields& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FieldName, fieldName_);
      DARABONBA_PTR_TO_JSON(Selected, selected_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnUserRealTimeDeliveryFieldResponseBodyContentFields& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FieldName, fieldName_);
      DARABONBA_PTR_FROM_JSON(Selected, selected_);
    };
    DescribeDcdnUserRealTimeDeliveryFieldResponseBodyContentFields() = default ;
    DescribeDcdnUserRealTimeDeliveryFieldResponseBodyContentFields(const DescribeDcdnUserRealTimeDeliveryFieldResponseBodyContentFields &) = default ;
    DescribeDcdnUserRealTimeDeliveryFieldResponseBodyContentFields(DescribeDcdnUserRealTimeDeliveryFieldResponseBodyContentFields &&) = default ;
    DescribeDcdnUserRealTimeDeliveryFieldResponseBodyContentFields(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnUserRealTimeDeliveryFieldResponseBodyContentFields() = default ;
    DescribeDcdnUserRealTimeDeliveryFieldResponseBodyContentFields& operator=(const DescribeDcdnUserRealTimeDeliveryFieldResponseBodyContentFields &) = default ;
    DescribeDcdnUserRealTimeDeliveryFieldResponseBodyContentFields& operator=(DescribeDcdnUserRealTimeDeliveryFieldResponseBodyContentFields &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->fieldName_ != nullptr && this->selected_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeDcdnUserRealTimeDeliveryFieldResponseBodyContentFields& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fieldName Field Functions 
    bool hasFieldName() const { return this->fieldName_ != nullptr;};
    void deleteFieldName() { this->fieldName_ = nullptr;};
    inline string fieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
    inline DescribeDcdnUserRealTimeDeliveryFieldResponseBodyContentFields& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


    // selected Field Functions 
    bool hasSelected() const { return this->selected_ != nullptr;};
    void deleteSelected() { this->selected_ = nullptr;};
    inline bool selected() const { DARABONBA_PTR_GET_DEFAULT(selected_, false) };
    inline DescribeDcdnUserRealTimeDeliveryFieldResponseBodyContentFields& setSelected(bool selected) { DARABONBA_PTR_SET_VALUE(selected_, selected) };


  protected:
    // The description of the field.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the field.
    std::shared_ptr<string> fieldName_ = nullptr;
    // Indicates whether the field was selected.
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> selected_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
