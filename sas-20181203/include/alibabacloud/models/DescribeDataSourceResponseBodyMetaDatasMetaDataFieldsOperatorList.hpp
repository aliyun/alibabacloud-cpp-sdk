// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATASOURCERESPONSEBODYMETADATASMETADATAFIELDSOPERATORLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATASOURCERESPONSEBODYMETADATASMETADATAFIELDSOPERATORLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeDataSourceResponseBodyMetaDatasMetaDataFieldsOperatorList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataSourceResponseBodyMetaDatasMetaDataFieldsOperatorList& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataSourceResponseBodyMetaDatasMetaDataFieldsOperatorList& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    DescribeDataSourceResponseBodyMetaDatasMetaDataFieldsOperatorList() = default ;
    DescribeDataSourceResponseBodyMetaDatasMetaDataFieldsOperatorList(const DescribeDataSourceResponseBodyMetaDatasMetaDataFieldsOperatorList &) = default ;
    DescribeDataSourceResponseBodyMetaDatasMetaDataFieldsOperatorList(DescribeDataSourceResponseBodyMetaDatasMetaDataFieldsOperatorList &&) = default ;
    DescribeDataSourceResponseBodyMetaDatasMetaDataFieldsOperatorList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataSourceResponseBodyMetaDatasMetaDataFieldsOperatorList() = default ;
    DescribeDataSourceResponseBodyMetaDatasMetaDataFieldsOperatorList& operator=(const DescribeDataSourceResponseBodyMetaDatasMetaDataFieldsOperatorList &) = default ;
    DescribeDataSourceResponseBodyMetaDatasMetaDataFieldsOperatorList& operator=(DescribeDataSourceResponseBodyMetaDatasMetaDataFieldsOperatorList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->name_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeDataSourceResponseBodyMetaDatasMetaDataFieldsOperatorList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeDataSourceResponseBodyMetaDatasMetaDataFieldsOperatorList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The description of the operator.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the operator.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
