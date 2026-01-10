// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDDLPUBLISHRECORDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDDLPUBLISHRECORDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListDDLPublishRecordsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDDLPublishRecordsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, ListDDLPublishRecordsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    ListDDLPublishRecordsRequest() = default ;
    ListDDLPublishRecordsRequest(const ListDDLPublishRecordsRequest &) = default ;
    ListDDLPublishRecordsRequest(ListDDLPublishRecordsRequest &&) = default ;
    ListDDLPublishRecordsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDDLPublishRecordsRequest() = default ;
    ListDDLPublishRecordsRequest& operator=(const ListDDLPublishRecordsRequest &) = default ;
    ListDDLPublishRecordsRequest& operator=(ListDDLPublishRecordsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->orderId_ == nullptr
        && this->tid_ == nullptr; };
    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline ListDDLPublishRecordsRequest& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline ListDDLPublishRecordsRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The ID of the ticket.
    // 
    // > You can create a schema design ticket in the Data Management (DMS) console. For more information, see [Design schemas](https://help.aliyun.com/document_detail/69711.html). You can also call the [CreateOrder](https://help.aliyun.com/document_detail/144649.html) operation to create a schema design ticket and obtain the ID of the ticket.
    // 
    // This parameter is required.
    shared_ptr<int64_t> orderId_ {};
    // The ID of the tenant.
    // 
    // > To view the ID of the tenant, log on to the DMS console and move the pointer over the profile picture in the upper-right corner. For more information, see [Manage DMS tenants](https://help.aliyun.com/document_detail/181330.html).
    shared_ptr<int64_t> tid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
