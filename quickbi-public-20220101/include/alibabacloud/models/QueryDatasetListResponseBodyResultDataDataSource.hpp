// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDATASETLISTRESPONSEBODYRESULTDATADATASOURCE_HPP_
#define ALIBABACLOUD_MODELS_QUERYDATASETLISTRESPONSEBODYRESULTDATADATASOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryDatasetListResponseBodyResultDataDataSource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDatasetListResponseBodyResultDataDataSource& obj) { 
      DARABONBA_PTR_TO_JSON(DsId, dsId_);
      DARABONBA_PTR_TO_JSON(DsName, dsName_);
      DARABONBA_PTR_TO_JSON(DsType, dsType_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDatasetListResponseBodyResultDataDataSource& obj) { 
      DARABONBA_PTR_FROM_JSON(DsId, dsId_);
      DARABONBA_PTR_FROM_JSON(DsName, dsName_);
      DARABONBA_PTR_FROM_JSON(DsType, dsType_);
    };
    QueryDatasetListResponseBodyResultDataDataSource() = default ;
    QueryDatasetListResponseBodyResultDataDataSource(const QueryDatasetListResponseBodyResultDataDataSource &) = default ;
    QueryDatasetListResponseBodyResultDataDataSource(QueryDatasetListResponseBodyResultDataDataSource &&) = default ;
    QueryDatasetListResponseBodyResultDataDataSource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDatasetListResponseBodyResultDataDataSource() = default ;
    QueryDatasetListResponseBodyResultDataDataSource& operator=(const QueryDatasetListResponseBodyResultDataDataSource &) = default ;
    QueryDatasetListResponseBodyResultDataDataSource& operator=(QueryDatasetListResponseBodyResultDataDataSource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dsId_ == nullptr
        && return this->dsName_ == nullptr && return this->dsType_ == nullptr; };
    // dsId Field Functions 
    bool hasDsId() const { return this->dsId_ != nullptr;};
    void deleteDsId() { this->dsId_ = nullptr;};
    inline string dsId() const { DARABONBA_PTR_GET_DEFAULT(dsId_, "") };
    inline QueryDatasetListResponseBodyResultDataDataSource& setDsId(string dsId) { DARABONBA_PTR_SET_VALUE(dsId_, dsId) };


    // dsName Field Functions 
    bool hasDsName() const { return this->dsName_ != nullptr;};
    void deleteDsName() { this->dsName_ = nullptr;};
    inline string dsName() const { DARABONBA_PTR_GET_DEFAULT(dsName_, "") };
    inline QueryDatasetListResponseBodyResultDataDataSource& setDsName(string dsName) { DARABONBA_PTR_SET_VALUE(dsName_, dsName) };


    // dsType Field Functions 
    bool hasDsType() const { return this->dsType_ != nullptr;};
    void deleteDsType() { this->dsType_ = nullptr;};
    inline string dsType() const { DARABONBA_PTR_GET_DEFAULT(dsType_, "") };
    inline QueryDatasetListResponseBodyResultDataDataSource& setDsType(string dsType) { DARABONBA_PTR_SET_VALUE(dsType_, dsType) };


  protected:
    // The ID of the training dataset that you want to remove from the specified custom linguistic model.
    std::shared_ptr<string> dsId_ = nullptr;
    // The time when the scaling group was modified.
    std::shared_ptr<string> dsName_ = nullptr;
    // The user ID of the dataset owner in the Quick BI.
    std::shared_ptr<string> dsType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
