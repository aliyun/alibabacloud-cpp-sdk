// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDEDICATEDBLOCKSTORAGECLUSTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEDEDICATEDBLOCKSTORAGECLUSTERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class CreateDedicatedBlockStorageClusterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDedicatedBlockStorageClusterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DbscId, dbscId_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDedicatedBlockStorageClusterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DbscId, dbscId_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateDedicatedBlockStorageClusterResponseBody() = default ;
    CreateDedicatedBlockStorageClusterResponseBody(const CreateDedicatedBlockStorageClusterResponseBody &) = default ;
    CreateDedicatedBlockStorageClusterResponseBody(CreateDedicatedBlockStorageClusterResponseBody &&) = default ;
    CreateDedicatedBlockStorageClusterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDedicatedBlockStorageClusterResponseBody() = default ;
    CreateDedicatedBlockStorageClusterResponseBody& operator=(const CreateDedicatedBlockStorageClusterResponseBody &) = default ;
    CreateDedicatedBlockStorageClusterResponseBody& operator=(CreateDedicatedBlockStorageClusterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbscId_ == nullptr
        && return this->orderId_ == nullptr && return this->requestId_ == nullptr; };
    // dbscId Field Functions 
    bool hasDbscId() const { return this->dbscId_ != nullptr;};
    void deleteDbscId() { this->dbscId_ = nullptr;};
    inline string dbscId() const { DARABONBA_PTR_GET_DEFAULT(dbscId_, "") };
    inline CreateDedicatedBlockStorageClusterResponseBody& setDbscId(string dbscId) { DARABONBA_PTR_SET_VALUE(dbscId_, dbscId) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline CreateDedicatedBlockStorageClusterResponseBody& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateDedicatedBlockStorageClusterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the dedicated block storage cluster.
    std::shared_ptr<string> dbscId_ = nullptr;
    // The order ID.
    std::shared_ptr<string> orderId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
