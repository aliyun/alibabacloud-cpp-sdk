// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCREENDATAMAPRESPONSEBODYSASSCREENTYPELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCREENDATAMAPRESPONSEBODYSASSCREENTYPELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeScreenDataMapResponseBodySasScreenTypeListTypeData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20210114
{
namespace Models
{
  class DescribeScreenDataMapResponseBodySasScreenTypeList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScreenDataMapResponseBodySasScreenTypeList& obj) { 
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(TypeCode, typeCode_);
      DARABONBA_PTR_TO_JSON(TypeData, typeData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScreenDataMapResponseBodySasScreenTypeList& obj) { 
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(TypeCode, typeCode_);
      DARABONBA_PTR_FROM_JSON(TypeData, typeData_);
    };
    DescribeScreenDataMapResponseBodySasScreenTypeList() = default ;
    DescribeScreenDataMapResponseBodySasScreenTypeList(const DescribeScreenDataMapResponseBodySasScreenTypeList &) = default ;
    DescribeScreenDataMapResponseBodySasScreenTypeList(DescribeScreenDataMapResponseBodySasScreenTypeList &&) = default ;
    DescribeScreenDataMapResponseBodySasScreenTypeList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScreenDataMapResponseBodySasScreenTypeList() = default ;
    DescribeScreenDataMapResponseBodySasScreenTypeList& operator=(const DescribeScreenDataMapResponseBodySasScreenTypeList &) = default ;
    DescribeScreenDataMapResponseBodySasScreenTypeList& operator=(DescribeScreenDataMapResponseBodySasScreenTypeList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->type_ == nullptr
        && return this->typeCode_ == nullptr && return this->typeData_ == nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeScreenDataMapResponseBodySasScreenTypeList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // typeCode Field Functions 
    bool hasTypeCode() const { return this->typeCode_ != nullptr;};
    void deleteTypeCode() { this->typeCode_ = nullptr;};
    inline string typeCode() const { DARABONBA_PTR_GET_DEFAULT(typeCode_, "") };
    inline DescribeScreenDataMapResponseBodySasScreenTypeList& setTypeCode(string typeCode) { DARABONBA_PTR_SET_VALUE(typeCode_, typeCode) };


    // typeData Field Functions 
    bool hasTypeData() const { return this->typeData_ != nullptr;};
    void deleteTypeData() { this->typeData_ = nullptr;};
    inline const vector<Models::DescribeScreenDataMapResponseBodySasScreenTypeListTypeData> & typeData() const { DARABONBA_PTR_GET_CONST(typeData_, vector<Models::DescribeScreenDataMapResponseBodySasScreenTypeListTypeData>) };
    inline vector<Models::DescribeScreenDataMapResponseBodySasScreenTypeListTypeData> typeData() { DARABONBA_PTR_GET(typeData_, vector<Models::DescribeScreenDataMapResponseBodySasScreenTypeListTypeData>) };
    inline DescribeScreenDataMapResponseBodySasScreenTypeList& setTypeData(const vector<Models::DescribeScreenDataMapResponseBodySasScreenTypeListTypeData> & typeData) { DARABONBA_PTR_SET_VALUE(typeData_, typeData) };
    inline DescribeScreenDataMapResponseBodySasScreenTypeList& setTypeData(vector<Models::DescribeScreenDataMapResponseBodySasScreenTypeListTypeData> && typeData) { DARABONBA_PTR_SET_RVALUE(typeData_, typeData) };


  protected:
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> typeCode_ = nullptr;
    std::shared_ptr<vector<Models::DescribeScreenDataMapResponseBodySasScreenTypeListTypeData>> typeData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20210114
#endif
