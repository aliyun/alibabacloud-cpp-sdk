// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRICEREQUESTDBNODE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRICEREQUESTDBNODE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribePriceRequestDBNode : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePriceRequestDBNode& obj) { 
      DARABONBA_PTR_TO_JSON(ClassCode, classCode_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePriceRequestDBNode& obj) { 
      DARABONBA_PTR_FROM_JSON(ClassCode, classCode_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribePriceRequestDBNode() = default ;
    DescribePriceRequestDBNode(const DescribePriceRequestDBNode &) = default ;
    DescribePriceRequestDBNode(DescribePriceRequestDBNode &&) = default ;
    DescribePriceRequestDBNode(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePriceRequestDBNode() = default ;
    DescribePriceRequestDBNode& operator=(const DescribePriceRequestDBNode &) = default ;
    DescribePriceRequestDBNode& operator=(DescribePriceRequestDBNode &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->classCode_ == nullptr
        && return this->zoneId_ == nullptr; };
    // classCode Field Functions 
    bool hasClassCode() const { return this->classCode_ != nullptr;};
    void deleteClassCode() { this->classCode_ = nullptr;};
    inline string classCode() const { DARABONBA_PTR_GET_DEFAULT(classCode_, "") };
    inline DescribePriceRequestDBNode& setClassCode(string classCode) { DARABONBA_PTR_SET_VALUE(classCode_, classCode) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribePriceRequestDBNode& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The instance type of the node.
    std::shared_ptr<string> classCode_ = nullptr;
    // The zone ID of the node.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
