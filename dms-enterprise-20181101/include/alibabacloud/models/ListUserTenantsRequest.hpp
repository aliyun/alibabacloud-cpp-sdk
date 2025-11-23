// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERTENANTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERTENANTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListUserTenantsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserTenantsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserTenantsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    ListUserTenantsRequest() = default ;
    ListUserTenantsRequest(const ListUserTenantsRequest &) = default ;
    ListUserTenantsRequest(ListUserTenantsRequest &&) = default ;
    ListUserTenantsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserTenantsRequest() = default ;
    ListUserTenantsRequest& operator=(const ListUserTenantsRequest &) = default ;
    ListUserTenantsRequest& operator=(ListUserTenantsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tid_ == nullptr; };
    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline ListUserTenantsRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The ID of the tenant. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) operation to query the tenant ID.
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
