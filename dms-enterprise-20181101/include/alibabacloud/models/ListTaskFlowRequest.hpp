// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKFLOWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKFLOWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListTaskFlowRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTaskFlowRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, ListTaskFlowRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    ListTaskFlowRequest() = default ;
    ListTaskFlowRequest(const ListTaskFlowRequest &) = default ;
    ListTaskFlowRequest(ListTaskFlowRequest &&) = default ;
    ListTaskFlowRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTaskFlowRequest() = default ;
    ListTaskFlowRequest& operator=(const ListTaskFlowRequest &) = default ;
    ListTaskFlowRequest& operator=(ListTaskFlowRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tid_ == nullptr; };
    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline ListTaskFlowRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The ID of the tenant. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) or [ListUserTenants](https://help.aliyun.com/document_detail/198074.html) operation to obtain the tenant ID.
    shared_ptr<int64_t> tid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
