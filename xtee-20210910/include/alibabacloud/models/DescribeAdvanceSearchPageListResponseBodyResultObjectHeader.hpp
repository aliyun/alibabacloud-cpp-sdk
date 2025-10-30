// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEADVANCESEARCHPAGELISTRESPONSEBODYRESULTOBJECTHEADER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEADVANCESEARCHPAGELISTRESPONSEBODYRESULTOBJECTHEADER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeAdvanceSearchPageListResponseBodyResultObjectHeader : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAdvanceSearchPageListResponseBodyResultObjectHeader& obj) { 
      DARABONBA_PTR_TO_JSON(fieldName, fieldName_);
      DARABONBA_PTR_TO_JSON(fieldTitle, fieldTitle_);
      DARABONBA_PTR_TO_JSON(isDefault, isDefault_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAdvanceSearchPageListResponseBodyResultObjectHeader& obj) { 
      DARABONBA_PTR_FROM_JSON(fieldName, fieldName_);
      DARABONBA_PTR_FROM_JSON(fieldTitle, fieldTitle_);
      DARABONBA_PTR_FROM_JSON(isDefault, isDefault_);
    };
    DescribeAdvanceSearchPageListResponseBodyResultObjectHeader() = default ;
    DescribeAdvanceSearchPageListResponseBodyResultObjectHeader(const DescribeAdvanceSearchPageListResponseBodyResultObjectHeader &) = default ;
    DescribeAdvanceSearchPageListResponseBodyResultObjectHeader(DescribeAdvanceSearchPageListResponseBodyResultObjectHeader &&) = default ;
    DescribeAdvanceSearchPageListResponseBodyResultObjectHeader(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAdvanceSearchPageListResponseBodyResultObjectHeader() = default ;
    DescribeAdvanceSearchPageListResponseBodyResultObjectHeader& operator=(const DescribeAdvanceSearchPageListResponseBodyResultObjectHeader &) = default ;
    DescribeAdvanceSearchPageListResponseBodyResultObjectHeader& operator=(DescribeAdvanceSearchPageListResponseBodyResultObjectHeader &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fieldName_ == nullptr
        && return this->fieldTitle_ == nullptr && return this->isDefault_ == nullptr; };
    // fieldName Field Functions 
    bool hasFieldName() const { return this->fieldName_ != nullptr;};
    void deleteFieldName() { this->fieldName_ = nullptr;};
    inline string fieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
    inline DescribeAdvanceSearchPageListResponseBodyResultObjectHeader& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


    // fieldTitle Field Functions 
    bool hasFieldTitle() const { return this->fieldTitle_ != nullptr;};
    void deleteFieldTitle() { this->fieldTitle_ = nullptr;};
    inline string fieldTitle() const { DARABONBA_PTR_GET_DEFAULT(fieldTitle_, "") };
    inline DescribeAdvanceSearchPageListResponseBodyResultObjectHeader& setFieldTitle(string fieldTitle) { DARABONBA_PTR_SET_VALUE(fieldTitle_, fieldTitle) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline bool isDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
    inline DescribeAdvanceSearchPageListResponseBodyResultObjectHeader& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


  protected:
    // Field name
    std::shared_ptr<string> fieldName_ = nullptr;
    // Field title.
    std::shared_ptr<string> fieldTitle_ = nullptr;
    // Whether it is a default display field (displayed in the response, not used as a parameter)
    // - true: Yes
    // - false: No
    std::shared_ptr<bool> isDefault_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
