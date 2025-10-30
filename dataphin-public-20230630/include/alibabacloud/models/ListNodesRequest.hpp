// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTNODESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListNodesRequestListQuery.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListNodesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Env, env_);
      DARABONBA_PTR_TO_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Env, env_);
      DARABONBA_PTR_FROM_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    ListNodesRequest() = default ;
    ListNodesRequest(const ListNodesRequest &) = default ;
    ListNodesRequest(ListNodesRequest &&) = default ;
    ListNodesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodesRequest() = default ;
    ListNodesRequest& operator=(const ListNodesRequest &) = default ;
    ListNodesRequest& operator=(ListNodesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->env_ == nullptr
        && return this->listQuery_ == nullptr && return this->opTenantId_ == nullptr; };
    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string env() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline ListNodesRequest& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // listQuery Field Functions 
    bool hasListQuery() const { return this->listQuery_ != nullptr;};
    void deleteListQuery() { this->listQuery_ = nullptr;};
    inline const ListNodesRequestListQuery & listQuery() const { DARABONBA_PTR_GET_CONST(listQuery_, ListNodesRequestListQuery) };
    inline ListNodesRequestListQuery listQuery() { DARABONBA_PTR_GET(listQuery_, ListNodesRequestListQuery) };
    inline ListNodesRequest& setListQuery(const ListNodesRequestListQuery & listQuery) { DARABONBA_PTR_SET_VALUE(listQuery_, listQuery) };
    inline ListNodesRequest& setListQuery(ListNodesRequestListQuery && listQuery) { DARABONBA_PTR_SET_RVALUE(listQuery_, listQuery) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ListNodesRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    std::shared_ptr<string> env_ = nullptr;
    // This parameter is required.
    std::shared_ptr<ListNodesRequestListQuery> listQuery_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
