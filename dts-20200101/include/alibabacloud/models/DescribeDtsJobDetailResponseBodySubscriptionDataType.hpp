// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDTSJOBDETAILRESPONSEBODYSUBSCRIPTIONDATATYPE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDTSJOBDETAILRESPONSEBODYSUBSCRIPTIONDATATYPE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeDtsJobDetailResponseBodySubscriptionDataType : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDtsJobDetailResponseBodySubscriptionDataType& obj) { 
      DARABONBA_PTR_TO_JSON(Ddl, ddl_);
      DARABONBA_PTR_TO_JSON(Dml, dml_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDtsJobDetailResponseBodySubscriptionDataType& obj) { 
      DARABONBA_PTR_FROM_JSON(Ddl, ddl_);
      DARABONBA_PTR_FROM_JSON(Dml, dml_);
    };
    DescribeDtsJobDetailResponseBodySubscriptionDataType() = default ;
    DescribeDtsJobDetailResponseBodySubscriptionDataType(const DescribeDtsJobDetailResponseBodySubscriptionDataType &) = default ;
    DescribeDtsJobDetailResponseBodySubscriptionDataType(DescribeDtsJobDetailResponseBodySubscriptionDataType &&) = default ;
    DescribeDtsJobDetailResponseBodySubscriptionDataType(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDtsJobDetailResponseBodySubscriptionDataType() = default ;
    DescribeDtsJobDetailResponseBodySubscriptionDataType& operator=(const DescribeDtsJobDetailResponseBodySubscriptionDataType &) = default ;
    DescribeDtsJobDetailResponseBodySubscriptionDataType& operator=(DescribeDtsJobDetailResponseBodySubscriptionDataType &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ddl_ == nullptr
        && return this->dml_ == nullptr; };
    // ddl Field Functions 
    bool hasDdl() const { return this->ddl_ != nullptr;};
    void deleteDdl() { this->ddl_ = nullptr;};
    inline bool ddl() const { DARABONBA_PTR_GET_DEFAULT(ddl_, false) };
    inline DescribeDtsJobDetailResponseBodySubscriptionDataType& setDdl(bool ddl) { DARABONBA_PTR_SET_VALUE(ddl_, ddl) };


    // dml Field Functions 
    bool hasDml() const { return this->dml_ != nullptr;};
    void deleteDml() { this->dml_ = nullptr;};
    inline bool dml() const { DARABONBA_PTR_GET_DEFAULT(dml_, false) };
    inline DescribeDtsJobDetailResponseBodySubscriptionDataType& setDml(bool dml) { DARABONBA_PTR_SET_VALUE(dml_, dml) };


  protected:
    // Indicates whether DDL statements are tracked. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> ddl_ = nullptr;
    // Indicates whether DML statements are tracked. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> dml_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
