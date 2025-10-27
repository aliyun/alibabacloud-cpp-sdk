// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATASOURCERESPONSEBODYMETADATASMETADATAFIELDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATASOURCERESPONSEBODYMETADATASMETADATAFIELDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDataSourceResponseBodyMetaDatasMetaDataFieldsOperatorList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeDataSourceResponseBodyMetaDatasMetaDataFields : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataSourceResponseBodyMetaDatasMetaDataFields& obj) { 
      DARABONBA_PTR_TO_JSON(Filed, filed_);
      DARABONBA_PTR_TO_JSON(FiledName, filedName_);
      DARABONBA_PTR_TO_JSON(OperatorList, operatorList_);
      DARABONBA_PTR_TO_JSON(Sample, sample_);
      DARABONBA_PTR_TO_JSON(ValueType, valueType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataSourceResponseBodyMetaDatasMetaDataFields& obj) { 
      DARABONBA_PTR_FROM_JSON(Filed, filed_);
      DARABONBA_PTR_FROM_JSON(FiledName, filedName_);
      DARABONBA_PTR_FROM_JSON(OperatorList, operatorList_);
      DARABONBA_PTR_FROM_JSON(Sample, sample_);
      DARABONBA_PTR_FROM_JSON(ValueType, valueType_);
    };
    DescribeDataSourceResponseBodyMetaDatasMetaDataFields() = default ;
    DescribeDataSourceResponseBodyMetaDatasMetaDataFields(const DescribeDataSourceResponseBodyMetaDatasMetaDataFields &) = default ;
    DescribeDataSourceResponseBodyMetaDatasMetaDataFields(DescribeDataSourceResponseBodyMetaDatasMetaDataFields &&) = default ;
    DescribeDataSourceResponseBodyMetaDatasMetaDataFields(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataSourceResponseBodyMetaDatasMetaDataFields() = default ;
    DescribeDataSourceResponseBodyMetaDatasMetaDataFields& operator=(const DescribeDataSourceResponseBodyMetaDatasMetaDataFields &) = default ;
    DescribeDataSourceResponseBodyMetaDatasMetaDataFields& operator=(DescribeDataSourceResponseBodyMetaDatasMetaDataFields &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filed_ == nullptr
        && return this->filedName_ == nullptr && return this->operatorList_ == nullptr && return this->sample_ == nullptr && return this->valueType_ == nullptr; };
    // filed Field Functions 
    bool hasFiled() const { return this->filed_ != nullptr;};
    void deleteFiled() { this->filed_ = nullptr;};
    inline string filed() const { DARABONBA_PTR_GET_DEFAULT(filed_, "") };
    inline DescribeDataSourceResponseBodyMetaDatasMetaDataFields& setFiled(string filed) { DARABONBA_PTR_SET_VALUE(filed_, filed) };


    // filedName Field Functions 
    bool hasFiledName() const { return this->filedName_ != nullptr;};
    void deleteFiledName() { this->filedName_ = nullptr;};
    inline string filedName() const { DARABONBA_PTR_GET_DEFAULT(filedName_, "") };
    inline DescribeDataSourceResponseBodyMetaDatasMetaDataFields& setFiledName(string filedName) { DARABONBA_PTR_SET_VALUE(filedName_, filedName) };


    // operatorList Field Functions 
    bool hasOperatorList() const { return this->operatorList_ != nullptr;};
    void deleteOperatorList() { this->operatorList_ = nullptr;};
    inline const vector<Models::DescribeDataSourceResponseBodyMetaDatasMetaDataFieldsOperatorList> & operatorList() const { DARABONBA_PTR_GET_CONST(operatorList_, vector<Models::DescribeDataSourceResponseBodyMetaDatasMetaDataFieldsOperatorList>) };
    inline vector<Models::DescribeDataSourceResponseBodyMetaDatasMetaDataFieldsOperatorList> operatorList() { DARABONBA_PTR_GET(operatorList_, vector<Models::DescribeDataSourceResponseBodyMetaDatasMetaDataFieldsOperatorList>) };
    inline DescribeDataSourceResponseBodyMetaDatasMetaDataFields& setOperatorList(const vector<Models::DescribeDataSourceResponseBodyMetaDatasMetaDataFieldsOperatorList> & operatorList) { DARABONBA_PTR_SET_VALUE(operatorList_, operatorList) };
    inline DescribeDataSourceResponseBodyMetaDatasMetaDataFields& setOperatorList(vector<Models::DescribeDataSourceResponseBodyMetaDatasMetaDataFieldsOperatorList> && operatorList) { DARABONBA_PTR_SET_RVALUE(operatorList_, operatorList) };


    // sample Field Functions 
    bool hasSample() const { return this->sample_ != nullptr;};
    void deleteSample() { this->sample_ = nullptr;};
    inline string sample() const { DARABONBA_PTR_GET_DEFAULT(sample_, "") };
    inline DescribeDataSourceResponseBodyMetaDatasMetaDataFields& setSample(string sample) { DARABONBA_PTR_SET_VALUE(sample_, sample) };


    // valueType Field Functions 
    bool hasValueType() const { return this->valueType_ != nullptr;};
    void deleteValueType() { this->valueType_ = nullptr;};
    inline string valueType() const { DARABONBA_PTR_GET_DEFAULT(valueType_, "") };
    inline DescribeDataSourceResponseBodyMetaDatasMetaDataFields& setValueType(string valueType) { DARABONBA_PTR_SET_VALUE(valueType_, valueType) };


  protected:
    // The key of the field.
    std::shared_ptr<string> filed_ = nullptr;
    // The name of the field.
    std::shared_ptr<string> filedName_ = nullptr;
    // The operators.
    std::shared_ptr<vector<Models::DescribeDataSourceResponseBodyMetaDatasMetaDataFieldsOperatorList>> operatorList_ = nullptr;
    // The sample field.
    std::shared_ptr<string> sample_ = nullptr;
    // The value type of the field.
    std::shared_ptr<string> valueType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
