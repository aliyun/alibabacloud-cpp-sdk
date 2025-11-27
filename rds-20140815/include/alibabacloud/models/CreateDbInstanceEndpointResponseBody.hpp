// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDBINSTANCEENDPOINTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEDBINSTANCEENDPOINTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateDBInstanceEndpointResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class CreateDBInstanceEndpointResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDBInstanceEndpointResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDBInstanceEndpointResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateDBInstanceEndpointResponseBody() = default ;
    CreateDBInstanceEndpointResponseBody(const CreateDBInstanceEndpointResponseBody &) = default ;
    CreateDBInstanceEndpointResponseBody(CreateDBInstanceEndpointResponseBody &&) = default ;
    CreateDBInstanceEndpointResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDBInstanceEndpointResponseBody() = default ;
    CreateDBInstanceEndpointResponseBody& operator=(const CreateDBInstanceEndpointResponseBody &) = default ;
    CreateDBInstanceEndpointResponseBody& operator=(CreateDBInstanceEndpointResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateDBInstanceEndpointResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, CreateDBInstanceEndpointResponseBodyData) };
    inline CreateDBInstanceEndpointResponseBodyData data() { DARABONBA_PTR_GET(data_, CreateDBInstanceEndpointResponseBodyData) };
    inline CreateDBInstanceEndpointResponseBody& setData(const CreateDBInstanceEndpointResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateDBInstanceEndpointResponseBody& setData(CreateDBInstanceEndpointResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateDBInstanceEndpointResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    std::shared_ptr<CreateDBInstanceEndpointResponseBodyData> data_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
