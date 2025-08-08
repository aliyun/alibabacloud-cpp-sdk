// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTABLEDESIGNPROJECTINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTABLEDESIGNPROJECTINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetTableDesignProjectInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTableDesignProjectInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, GetTableDesignProjectInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    GetTableDesignProjectInfoRequest() = default ;
    GetTableDesignProjectInfoRequest(const GetTableDesignProjectInfoRequest &) = default ;
    GetTableDesignProjectInfoRequest(GetTableDesignProjectInfoRequest &&) = default ;
    GetTableDesignProjectInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTableDesignProjectInfoRequest() = default ;
    GetTableDesignProjectInfoRequest& operator=(const GetTableDesignProjectInfoRequest &) = default ;
    GetTableDesignProjectInfoRequest& operator=(GetTableDesignProjectInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->orderId_ != nullptr
        && this->tid_ != nullptr; };
    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline GetTableDesignProjectInfoRequest& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline GetTableDesignProjectInfoRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The ID of the schema design ticket. You can call the [ListOrders](https://help.aliyun.com/document_detail/465867.html) operation to obtain the ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> orderId_ = nullptr;
    // The tenant ID.
    // 
    // >  To view the tenant ID, go to the Data Management (DMS) console and move the pointer over the profile picture in the upper-right corner. For more information, see [View information about the current tenant](https://help.aliyun.com/document_detail/181330.html) section of the "Manage DMS tenants" topic
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
