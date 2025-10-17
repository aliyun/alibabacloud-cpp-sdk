// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPSDATASOURCESRESPONSEBODYAPSDATASOURCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPSDATASOURCESRESPONSEBODYAPSDATASOURCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeApsDatasourcesResponseBodyApsDatasources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApsDatasourcesResponseBodyApsDatasources& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DatasourceDescription, datasourceDescription_);
      DARABONBA_PTR_TO_JSON(DatasourceId, datasourceId_);
      DARABONBA_PTR_TO_JSON(DatasourceName, datasourceName_);
      DARABONBA_PTR_TO_JSON(DatasourceType, datasourceType_);
      DARABONBA_PTR_TO_JSON(HasJob, hasJob_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApsDatasourcesResponseBodyApsDatasources& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DatasourceDescription, datasourceDescription_);
      DARABONBA_PTR_FROM_JSON(DatasourceId, datasourceId_);
      DARABONBA_PTR_FROM_JSON(DatasourceName, datasourceName_);
      DARABONBA_PTR_FROM_JSON(DatasourceType, datasourceType_);
      DARABONBA_PTR_FROM_JSON(HasJob, hasJob_);
    };
    DescribeApsDatasourcesResponseBodyApsDatasources() = default ;
    DescribeApsDatasourcesResponseBodyApsDatasources(const DescribeApsDatasourcesResponseBodyApsDatasources &) = default ;
    DescribeApsDatasourcesResponseBodyApsDatasources(DescribeApsDatasourcesResponseBodyApsDatasources &&) = default ;
    DescribeApsDatasourcesResponseBodyApsDatasources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApsDatasourcesResponseBodyApsDatasources() = default ;
    DescribeApsDatasourcesResponseBodyApsDatasources& operator=(const DescribeApsDatasourcesResponseBodyApsDatasources &) = default ;
    DescribeApsDatasourcesResponseBodyApsDatasources& operator=(DescribeApsDatasourcesResponseBodyApsDatasources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->datasourceDescription_ == nullptr && return this->datasourceId_ == nullptr && return this->datasourceName_ == nullptr && return this->datasourceType_ == nullptr && return this->hasJob_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeApsDatasourcesResponseBodyApsDatasources& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // datasourceDescription Field Functions 
    bool hasDatasourceDescription() const { return this->datasourceDescription_ != nullptr;};
    void deleteDatasourceDescription() { this->datasourceDescription_ = nullptr;};
    inline string datasourceDescription() const { DARABONBA_PTR_GET_DEFAULT(datasourceDescription_, "") };
    inline DescribeApsDatasourcesResponseBodyApsDatasources& setDatasourceDescription(string datasourceDescription) { DARABONBA_PTR_SET_VALUE(datasourceDescription_, datasourceDescription) };


    // datasourceId Field Functions 
    bool hasDatasourceId() const { return this->datasourceId_ != nullptr;};
    void deleteDatasourceId() { this->datasourceId_ = nullptr;};
    inline int64_t datasourceId() const { DARABONBA_PTR_GET_DEFAULT(datasourceId_, 0L) };
    inline DescribeApsDatasourcesResponseBodyApsDatasources& setDatasourceId(int64_t datasourceId) { DARABONBA_PTR_SET_VALUE(datasourceId_, datasourceId) };


    // datasourceName Field Functions 
    bool hasDatasourceName() const { return this->datasourceName_ != nullptr;};
    void deleteDatasourceName() { this->datasourceName_ = nullptr;};
    inline string datasourceName() const { DARABONBA_PTR_GET_DEFAULT(datasourceName_, "") };
    inline DescribeApsDatasourcesResponseBodyApsDatasources& setDatasourceName(string datasourceName) { DARABONBA_PTR_SET_VALUE(datasourceName_, datasourceName) };


    // datasourceType Field Functions 
    bool hasDatasourceType() const { return this->datasourceType_ != nullptr;};
    void deleteDatasourceType() { this->datasourceType_ = nullptr;};
    inline string datasourceType() const { DARABONBA_PTR_GET_DEFAULT(datasourceType_, "") };
    inline DescribeApsDatasourcesResponseBodyApsDatasources& setDatasourceType(string datasourceType) { DARABONBA_PTR_SET_VALUE(datasourceType_, datasourceType) };


    // hasJob Field Functions 
    bool hasHasJob() const { return this->hasJob_ != nullptr;};
    void deleteHasJob() { this->hasJob_ = nullptr;};
    inline bool hasJob() const { DARABONBA_PTR_GET_DEFAULT(hasJob_, false) };
    inline DescribeApsDatasourcesResponseBodyApsDatasources& setHasJob(bool hasJob) { DARABONBA_PTR_SET_VALUE(hasJob_, hasJob) };


  protected:
    // The time when the data source was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The description of the data source.
    std::shared_ptr<string> datasourceDescription_ = nullptr;
    // The data source ID.
    std::shared_ptr<int64_t> datasourceId_ = nullptr;
    // The name of the data source.
    std::shared_ptr<string> datasourceName_ = nullptr;
    // The type of the data source.
    std::shared_ptr<string> datasourceType_ = nullptr;
    // Indicates whether a job is using the data source.
    std::shared_ptr<bool> hasJob_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
