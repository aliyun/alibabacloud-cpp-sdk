// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUBSCRIPTIONINSTANCESTATUSRESPONSEBODYSUBSCRIPTIONDATATYPE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUBSCRIPTIONINSTANCESTATUSRESPONSEBODYSUBSCRIPTIONDATATYPE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeSubscriptionInstanceStatusResponseBodySubscriptionDataType : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSubscriptionInstanceStatusResponseBodySubscriptionDataType& obj) { 
      DARABONBA_PTR_TO_JSON(DDL, DDL_);
      DARABONBA_PTR_TO_JSON(DML, DML_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSubscriptionInstanceStatusResponseBodySubscriptionDataType& obj) { 
      DARABONBA_PTR_FROM_JSON(DDL, DDL_);
      DARABONBA_PTR_FROM_JSON(DML, DML_);
    };
    DescribeSubscriptionInstanceStatusResponseBodySubscriptionDataType() = default ;
    DescribeSubscriptionInstanceStatusResponseBodySubscriptionDataType(const DescribeSubscriptionInstanceStatusResponseBodySubscriptionDataType &) = default ;
    DescribeSubscriptionInstanceStatusResponseBodySubscriptionDataType(DescribeSubscriptionInstanceStatusResponseBodySubscriptionDataType &&) = default ;
    DescribeSubscriptionInstanceStatusResponseBodySubscriptionDataType(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSubscriptionInstanceStatusResponseBodySubscriptionDataType() = default ;
    DescribeSubscriptionInstanceStatusResponseBodySubscriptionDataType& operator=(const DescribeSubscriptionInstanceStatusResponseBodySubscriptionDataType &) = default ;
    DescribeSubscriptionInstanceStatusResponseBodySubscriptionDataType& operator=(DescribeSubscriptionInstanceStatusResponseBodySubscriptionDataType &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DDL_ == nullptr
        && return this->DML_ == nullptr; };
    // DDL Field Functions 
    bool hasDDL() const { return this->DDL_ != nullptr;};
    void deleteDDL() { this->DDL_ = nullptr;};
    inline bool DDL() const { DARABONBA_PTR_GET_DEFAULT(DDL_, false) };
    inline DescribeSubscriptionInstanceStatusResponseBodySubscriptionDataType& setDDL(bool DDL) { DARABONBA_PTR_SET_VALUE(DDL_, DDL) };


    // DML Field Functions 
    bool hasDML() const { return this->DML_ != nullptr;};
    void deleteDML() { this->DML_ = nullptr;};
    inline bool DML() const { DARABONBA_PTR_GET_DEFAULT(DML_, false) };
    inline DescribeSubscriptionInstanceStatusResponseBodySubscriptionDataType& setDML(bool DML) { DARABONBA_PTR_SET_VALUE(DML_, DML) };


  protected:
    // Indicates whether data definition language (DDL) operations are tracked. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> DDL_ = nullptr;
    // Indicates whether data manipulation language (DML) operations are tracked. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> DML_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
