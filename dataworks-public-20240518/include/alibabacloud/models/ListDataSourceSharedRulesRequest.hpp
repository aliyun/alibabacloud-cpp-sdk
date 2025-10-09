// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASOURCESHAREDRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASOURCESHAREDRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDataSourceSharedRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataSourceSharedRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_TO_JSON(TargetProjectId, targetProjectId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataSourceSharedRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_FROM_JSON(TargetProjectId, targetProjectId_);
    };
    ListDataSourceSharedRulesRequest() = default ;
    ListDataSourceSharedRulesRequest(const ListDataSourceSharedRulesRequest &) = default ;
    ListDataSourceSharedRulesRequest(ListDataSourceSharedRulesRequest &&) = default ;
    ListDataSourceSharedRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataSourceSharedRulesRequest() = default ;
    ListDataSourceSharedRulesRequest& operator=(const ListDataSourceSharedRulesRequest &) = default ;
    ListDataSourceSharedRulesRequest& operator=(ListDataSourceSharedRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataSourceId_ != nullptr
        && this->targetProjectId_ != nullptr; };
    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline int64_t dataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, 0L) };
    inline ListDataSourceSharedRulesRequest& setDataSourceId(int64_t dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // targetProjectId Field Functions 
    bool hasTargetProjectId() const { return this->targetProjectId_ != nullptr;};
    void deleteTargetProjectId() { this->targetProjectId_ = nullptr;};
    inline int64_t targetProjectId() const { DARABONBA_PTR_GET_DEFAULT(targetProjectId_, 0L) };
    inline ListDataSourceSharedRulesRequest& setTargetProjectId(int64_t targetProjectId) { DARABONBA_PTR_SET_VALUE(targetProjectId_, targetProjectId) };


  protected:
    // The data source ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> dataSourceId_ = nullptr;
    // The ID of the workspace to which the data source is shared. You cannot share the data source to the workspace with which the data source is associated.
    std::shared_ptr<int64_t> targetProjectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
