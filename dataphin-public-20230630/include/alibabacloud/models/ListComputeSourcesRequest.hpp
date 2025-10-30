// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMPUTESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMPUTESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListComputeSourcesRequestListQuery.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListComputeSourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListComputeSourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListComputeSourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    ListComputeSourcesRequest() = default ;
    ListComputeSourcesRequest(const ListComputeSourcesRequest &) = default ;
    ListComputeSourcesRequest(ListComputeSourcesRequest &&) = default ;
    ListComputeSourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListComputeSourcesRequest() = default ;
    ListComputeSourcesRequest& operator=(const ListComputeSourcesRequest &) = default ;
    ListComputeSourcesRequest& operator=(ListComputeSourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->listQuery_ == nullptr
        && return this->opTenantId_ == nullptr; };
    // listQuery Field Functions 
    bool hasListQuery() const { return this->listQuery_ != nullptr;};
    void deleteListQuery() { this->listQuery_ = nullptr;};
    inline const ListComputeSourcesRequestListQuery & listQuery() const { DARABONBA_PTR_GET_CONST(listQuery_, ListComputeSourcesRequestListQuery) };
    inline ListComputeSourcesRequestListQuery listQuery() { DARABONBA_PTR_GET(listQuery_, ListComputeSourcesRequestListQuery) };
    inline ListComputeSourcesRequest& setListQuery(const ListComputeSourcesRequestListQuery & listQuery) { DARABONBA_PTR_SET_VALUE(listQuery_, listQuery) };
    inline ListComputeSourcesRequest& setListQuery(ListComputeSourcesRequestListQuery && listQuery) { DARABONBA_PTR_SET_RVALUE(listQuery_, listQuery) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ListComputeSourcesRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    std::shared_ptr<ListComputeSourcesRequestListQuery> listQuery_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
