// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECUSTOMENDPOINTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECUSTOMENDPOINTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class CreateCustomEndpointResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCustomEndpointResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCustomEndpointResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateCustomEndpointResponseBody() = default ;
    CreateCustomEndpointResponseBody(const CreateCustomEndpointResponseBody &) = default ;
    CreateCustomEndpointResponseBody(CreateCustomEndpointResponseBody &&) = default ;
    CreateCustomEndpointResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCustomEndpointResponseBody() = default ;
    CreateCustomEndpointResponseBody& operator=(const CreateCustomEndpointResponseBody &) = default ;
    CreateCustomEndpointResponseBody& operator=(CreateCustomEndpointResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CustomEndpointId, customEndpointId_);
        DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CustomEndpointId, customEndpointId_);
        DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->customEndpointId_ == nullptr
        && this->DBInstanceName_ == nullptr; };
      // customEndpointId Field Functions 
      bool hasCustomEndpointId() const { return this->customEndpointId_ != nullptr;};
      void deleteCustomEndpointId() { this->customEndpointId_ = nullptr;};
      inline string getCustomEndpointId() const { DARABONBA_PTR_GET_DEFAULT(customEndpointId_, "") };
      inline Data& setCustomEndpointId(string customEndpointId) { DARABONBA_PTR_SET_VALUE(customEndpointId_, customEndpointId) };


      // DBInstanceName Field Functions 
      bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
      void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
      inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
      inline Data& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    protected:
      shared_ptr<string> customEndpointId_ {};
      shared_ptr<string> DBInstanceName_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateCustomEndpointResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateCustomEndpointResponseBody::Data) };
    inline CreateCustomEndpointResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateCustomEndpointResponseBody::Data) };
    inline CreateCustomEndpointResponseBody& setData(const CreateCustomEndpointResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateCustomEndpointResponseBody& setData(CreateCustomEndpointResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateCustomEndpointResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<CreateCustomEndpointResponseBody::Data> data_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
