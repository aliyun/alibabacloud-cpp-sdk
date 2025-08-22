// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNREALTIMEDELIVERYFIELDRESPONSEBODYCONTENTFIELDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNREALTIMEDELIVERYFIELDRESPONSEBODYCONTENTFIELDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnRealTimeDeliveryFieldResponseBodyContentFields : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnRealTimeDeliveryFieldResponseBodyContentFields& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FieldName, fieldName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnRealTimeDeliveryFieldResponseBodyContentFields& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FieldName, fieldName_);
    };
    DescribeDcdnRealTimeDeliveryFieldResponseBodyContentFields() = default ;
    DescribeDcdnRealTimeDeliveryFieldResponseBodyContentFields(const DescribeDcdnRealTimeDeliveryFieldResponseBodyContentFields &) = default ;
    DescribeDcdnRealTimeDeliveryFieldResponseBodyContentFields(DescribeDcdnRealTimeDeliveryFieldResponseBodyContentFields &&) = default ;
    DescribeDcdnRealTimeDeliveryFieldResponseBodyContentFields(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnRealTimeDeliveryFieldResponseBodyContentFields() = default ;
    DescribeDcdnRealTimeDeliveryFieldResponseBodyContentFields& operator=(const DescribeDcdnRealTimeDeliveryFieldResponseBodyContentFields &) = default ;
    DescribeDcdnRealTimeDeliveryFieldResponseBodyContentFields& operator=(DescribeDcdnRealTimeDeliveryFieldResponseBodyContentFields &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->fieldName_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeDcdnRealTimeDeliveryFieldResponseBodyContentFields& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fieldName Field Functions 
    bool hasFieldName() const { return this->fieldName_ != nullptr;};
    void deleteFieldName() { this->fieldName_ = nullptr;};
    inline string fieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
    inline DescribeDcdnRealTimeDeliveryFieldResponseBodyContentFields& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


  protected:
    // The description of the field.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the field. For more information about fields in real-time log entries, see [Fields in a real-time log](https://help.aliyun.com/document_detail/324199.html).
    std::shared_ptr<string> fieldName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
