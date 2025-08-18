// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUBMITRECORDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSUBMITRECORDSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListSubmitRecordsRequestListQuery.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListSubmitRecordsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSubmitRecordsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSubmitRecordsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    ListSubmitRecordsRequest() = default ;
    ListSubmitRecordsRequest(const ListSubmitRecordsRequest &) = default ;
    ListSubmitRecordsRequest(ListSubmitRecordsRequest &&) = default ;
    ListSubmitRecordsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSubmitRecordsRequest() = default ;
    ListSubmitRecordsRequest& operator=(const ListSubmitRecordsRequest &) = default ;
    ListSubmitRecordsRequest& operator=(ListSubmitRecordsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->listQuery_ != nullptr
        && this->opTenantId_ != nullptr; };
    // listQuery Field Functions 
    bool hasListQuery() const { return this->listQuery_ != nullptr;};
    void deleteListQuery() { this->listQuery_ = nullptr;};
    inline const ListSubmitRecordsRequestListQuery & listQuery() const { DARABONBA_PTR_GET_CONST(listQuery_, ListSubmitRecordsRequestListQuery) };
    inline ListSubmitRecordsRequestListQuery listQuery() { DARABONBA_PTR_GET(listQuery_, ListSubmitRecordsRequestListQuery) };
    inline ListSubmitRecordsRequest& setListQuery(const ListSubmitRecordsRequestListQuery & listQuery) { DARABONBA_PTR_SET_VALUE(listQuery_, listQuery) };
    inline ListSubmitRecordsRequest& setListQuery(ListSubmitRecordsRequestListQuery && listQuery) { DARABONBA_PTR_SET_RVALUE(listQuery_, listQuery) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ListSubmitRecordsRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    std::shared_ptr<ListSubmitRecordsRequestListQuery> listQuery_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
