// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATASOURCERESPONSEBODYMETADATAS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATASOURCERESPONSEBODYMETADATAS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDataSourceResponseBodyMetaDatasMetaDataFields.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeDataSourceResponseBodyMetaDatas : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataSourceResponseBodyMetaDatas& obj) { 
      DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_TO_JSON(DataSourceName, dataSourceName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(MetaDataFields, metaDataFields_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataSourceResponseBodyMetaDatas& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_FROM_JSON(DataSourceName, dataSourceName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(MetaDataFields, metaDataFields_);
    };
    DescribeDataSourceResponseBodyMetaDatas() = default ;
    DescribeDataSourceResponseBodyMetaDatas(const DescribeDataSourceResponseBodyMetaDatas &) = default ;
    DescribeDataSourceResponseBodyMetaDatas(DescribeDataSourceResponseBodyMetaDatas &&) = default ;
    DescribeDataSourceResponseBodyMetaDatas(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataSourceResponseBodyMetaDatas() = default ;
    DescribeDataSourceResponseBodyMetaDatas& operator=(const DescribeDataSourceResponseBodyMetaDatas &) = default ;
    DescribeDataSourceResponseBodyMetaDatas& operator=(DescribeDataSourceResponseBodyMetaDatas &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataSourceId_ == nullptr
        && return this->dataSourceName_ == nullptr && return this->description_ == nullptr && return this->metaDataFields_ == nullptr; };
    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline int32_t dataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, 0) };
    inline DescribeDataSourceResponseBodyMetaDatas& setDataSourceId(int32_t dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // dataSourceName Field Functions 
    bool hasDataSourceName() const { return this->dataSourceName_ != nullptr;};
    void deleteDataSourceName() { this->dataSourceName_ = nullptr;};
    inline string dataSourceName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceName_, "") };
    inline DescribeDataSourceResponseBodyMetaDatas& setDataSourceName(string dataSourceName) { DARABONBA_PTR_SET_VALUE(dataSourceName_, dataSourceName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeDataSourceResponseBodyMetaDatas& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // metaDataFields Field Functions 
    bool hasMetaDataFields() const { return this->metaDataFields_ != nullptr;};
    void deleteMetaDataFields() { this->metaDataFields_ = nullptr;};
    inline const vector<Models::DescribeDataSourceResponseBodyMetaDatasMetaDataFields> & metaDataFields() const { DARABONBA_PTR_GET_CONST(metaDataFields_, vector<Models::DescribeDataSourceResponseBodyMetaDatasMetaDataFields>) };
    inline vector<Models::DescribeDataSourceResponseBodyMetaDatasMetaDataFields> metaDataFields() { DARABONBA_PTR_GET(metaDataFields_, vector<Models::DescribeDataSourceResponseBodyMetaDatasMetaDataFields>) };
    inline DescribeDataSourceResponseBodyMetaDatas& setMetaDataFields(const vector<Models::DescribeDataSourceResponseBodyMetaDatasMetaDataFields> & metaDataFields) { DARABONBA_PTR_SET_VALUE(metaDataFields_, metaDataFields) };
    inline DescribeDataSourceResponseBodyMetaDatas& setMetaDataFields(vector<Models::DescribeDataSourceResponseBodyMetaDatasMetaDataFields> && metaDataFields) { DARABONBA_PTR_SET_RVALUE(metaDataFields_, metaDataFields) };


  protected:
    // The ID of the data source.
    std::shared_ptr<int32_t> dataSourceId_ = nullptr;
    // The name of the data source.
    std::shared_ptr<string> dataSourceName_ = nullptr;
    // The description of the data source.
    std::shared_ptr<string> description_ = nullptr;
    // The metadata files.
    std::shared_ptr<vector<Models::DescribeDataSourceResponseBodyMetaDatasMetaDataFields>> metaDataFields_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
