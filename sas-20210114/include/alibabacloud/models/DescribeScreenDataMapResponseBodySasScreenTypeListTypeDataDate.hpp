// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCREENDATAMAPRESPONSEBODYSASSCREENTYPELISTTYPEDATADATE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCREENDATAMAPRESPONSEBODYSASSCREENTYPELISTTYPEDATADATE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20210114
{
namespace Models
{
  class DescribeScreenDataMapResponseBodySasScreenTypeListTypeDataDate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScreenDataMapResponseBodySasScreenTypeListTypeDataDate& obj) { 
      DARABONBA_PTR_TO_JSON(Unit, unit_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScreenDataMapResponseBodySasScreenTypeListTypeDataDate& obj) { 
      DARABONBA_PTR_FROM_JSON(Unit, unit_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeScreenDataMapResponseBodySasScreenTypeListTypeDataDate() = default ;
    DescribeScreenDataMapResponseBodySasScreenTypeListTypeDataDate(const DescribeScreenDataMapResponseBodySasScreenTypeListTypeDataDate &) = default ;
    DescribeScreenDataMapResponseBodySasScreenTypeListTypeDataDate(DescribeScreenDataMapResponseBodySasScreenTypeListTypeDataDate &&) = default ;
    DescribeScreenDataMapResponseBodySasScreenTypeListTypeDataDate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScreenDataMapResponseBodySasScreenTypeListTypeDataDate() = default ;
    DescribeScreenDataMapResponseBodySasScreenTypeListTypeDataDate& operator=(const DescribeScreenDataMapResponseBodySasScreenTypeListTypeDataDate &) = default ;
    DescribeScreenDataMapResponseBodySasScreenTypeListTypeDataDate& operator=(DescribeScreenDataMapResponseBodySasScreenTypeListTypeDataDate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->unit_ == nullptr
        && return this->value_ == nullptr; };
    // unit Field Functions 
    bool hasUnit() const { return this->unit_ != nullptr;};
    void deleteUnit() { this->unit_ = nullptr;};
    inline string unit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
    inline DescribeScreenDataMapResponseBodySasScreenTypeListTypeDataDate& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeScreenDataMapResponseBodySasScreenTypeListTypeDataDate& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> unit_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20210114
#endif
