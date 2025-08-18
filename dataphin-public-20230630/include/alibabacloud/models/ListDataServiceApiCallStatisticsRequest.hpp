// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASERVICEAPICALLSTATISTICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASERVICEAPICALLSTATISTICSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDataServiceApiCallStatisticsRequestListQuery.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListDataServiceApiCallStatisticsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataServiceApiCallStatisticsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataServiceApiCallStatisticsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    ListDataServiceApiCallStatisticsRequest() = default ;
    ListDataServiceApiCallStatisticsRequest(const ListDataServiceApiCallStatisticsRequest &) = default ;
    ListDataServiceApiCallStatisticsRequest(ListDataServiceApiCallStatisticsRequest &&) = default ;
    ListDataServiceApiCallStatisticsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataServiceApiCallStatisticsRequest() = default ;
    ListDataServiceApiCallStatisticsRequest& operator=(const ListDataServiceApiCallStatisticsRequest &) = default ;
    ListDataServiceApiCallStatisticsRequest& operator=(ListDataServiceApiCallStatisticsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->listQuery_ != nullptr
        && this->opTenantId_ != nullptr && this->projectId_ != nullptr; };
    // listQuery Field Functions 
    bool hasListQuery() const { return this->listQuery_ != nullptr;};
    void deleteListQuery() { this->listQuery_ = nullptr;};
    inline const ListDataServiceApiCallStatisticsRequestListQuery & listQuery() const { DARABONBA_PTR_GET_CONST(listQuery_, ListDataServiceApiCallStatisticsRequestListQuery) };
    inline ListDataServiceApiCallStatisticsRequestListQuery listQuery() { DARABONBA_PTR_GET(listQuery_, ListDataServiceApiCallStatisticsRequestListQuery) };
    inline ListDataServiceApiCallStatisticsRequest& setListQuery(const ListDataServiceApiCallStatisticsRequestListQuery & listQuery) { DARABONBA_PTR_SET_VALUE(listQuery_, listQuery) };
    inline ListDataServiceApiCallStatisticsRequest& setListQuery(ListDataServiceApiCallStatisticsRequestListQuery && listQuery) { DARABONBA_PTR_SET_RVALUE(listQuery_, listQuery) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ListDataServiceApiCallStatisticsRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int32_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0) };
    inline ListDataServiceApiCallStatisticsRequest& setProjectId(int32_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // This parameter is required.
    std::shared_ptr<ListDataServiceApiCallStatisticsRequestListQuery> listQuery_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
