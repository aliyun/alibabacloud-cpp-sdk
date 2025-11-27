// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDBINSTANCEENDPOINTADDRESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEDBINSTANCEENDPOINTADDRESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeleteDBInstanceEndpointAddressResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DeleteDBInstanceEndpointAddressResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDBInstanceEndpointAddressResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDBInstanceEndpointAddressResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteDBInstanceEndpointAddressResponseBody() = default ;
    DeleteDBInstanceEndpointAddressResponseBody(const DeleteDBInstanceEndpointAddressResponseBody &) = default ;
    DeleteDBInstanceEndpointAddressResponseBody(DeleteDBInstanceEndpointAddressResponseBody &&) = default ;
    DeleteDBInstanceEndpointAddressResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDBInstanceEndpointAddressResponseBody() = default ;
    DeleteDBInstanceEndpointAddressResponseBody& operator=(const DeleteDBInstanceEndpointAddressResponseBody &) = default ;
    DeleteDBInstanceEndpointAddressResponseBody& operator=(DeleteDBInstanceEndpointAddressResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DeleteDBInstanceEndpointAddressResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, DeleteDBInstanceEndpointAddressResponseBodyData) };
    inline DeleteDBInstanceEndpointAddressResponseBodyData data() { DARABONBA_PTR_GET(data_, DeleteDBInstanceEndpointAddressResponseBodyData) };
    inline DeleteDBInstanceEndpointAddressResponseBody& setData(const DeleteDBInstanceEndpointAddressResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DeleteDBInstanceEndpointAddressResponseBody& setData(DeleteDBInstanceEndpointAddressResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteDBInstanceEndpointAddressResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    std::shared_ptr<DeleteDBInstanceEndpointAddressResponseBodyData> data_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
