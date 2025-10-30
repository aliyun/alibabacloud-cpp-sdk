// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASERVICEAPIIMPACTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASERVICEAPIIMPACTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDataServiceApiImpactsRequestListQuery.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListDataServiceApiImpactsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataServiceApiImpactsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataServiceApiImpactsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    ListDataServiceApiImpactsRequest() = default ;
    ListDataServiceApiImpactsRequest(const ListDataServiceApiImpactsRequest &) = default ;
    ListDataServiceApiImpactsRequest(ListDataServiceApiImpactsRequest &&) = default ;
    ListDataServiceApiImpactsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataServiceApiImpactsRequest() = default ;
    ListDataServiceApiImpactsRequest& operator=(const ListDataServiceApiImpactsRequest &) = default ;
    ListDataServiceApiImpactsRequest& operator=(ListDataServiceApiImpactsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->listQuery_ == nullptr
        && return this->opTenantId_ == nullptr && return this->projectId_ == nullptr; };
    // listQuery Field Functions 
    bool hasListQuery() const { return this->listQuery_ != nullptr;};
    void deleteListQuery() { this->listQuery_ = nullptr;};
    inline const ListDataServiceApiImpactsRequestListQuery & listQuery() const { DARABONBA_PTR_GET_CONST(listQuery_, ListDataServiceApiImpactsRequestListQuery) };
    inline ListDataServiceApiImpactsRequestListQuery listQuery() { DARABONBA_PTR_GET(listQuery_, ListDataServiceApiImpactsRequestListQuery) };
    inline ListDataServiceApiImpactsRequest& setListQuery(const ListDataServiceApiImpactsRequestListQuery & listQuery) { DARABONBA_PTR_SET_VALUE(listQuery_, listQuery) };
    inline ListDataServiceApiImpactsRequest& setListQuery(ListDataServiceApiImpactsRequestListQuery && listQuery) { DARABONBA_PTR_SET_RVALUE(listQuery_, listQuery) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ListDataServiceApiImpactsRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int32_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0) };
    inline ListDataServiceApiImpactsRequest& setProjectId(int32_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // This parameter is required.
    std::shared_ptr<ListDataServiceApiImpactsRequestListQuery> listQuery_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
