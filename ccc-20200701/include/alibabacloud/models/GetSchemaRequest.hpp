// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCHEMAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSCHEMAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetSchemaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSchemaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SchemaId, schemaId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSchemaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SchemaId, schemaId_);
    };
    GetSchemaRequest() = default ;
    GetSchemaRequest(const GetSchemaRequest &) = default ;
    GetSchemaRequest(GetSchemaRequest &&) = default ;
    GetSchemaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSchemaRequest() = default ;
    GetSchemaRequest& operator=(const GetSchemaRequest &) = default ;
    GetSchemaRequest& operator=(GetSchemaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->requestId_ == nullptr && this->schemaId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetSchemaRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSchemaRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // schemaId Field Functions 
    bool hasSchemaId() const { return this->schemaId_ != nullptr;};
    void deleteSchemaId() { this->schemaId_ = nullptr;};
    inline string getSchemaId() const { DARABONBA_PTR_GET_DEFAULT(schemaId_, "") };
    inline GetSchemaRequest& setSchemaId(string schemaId) { DARABONBA_PTR_SET_VALUE(schemaId_, schemaId) };


  protected:
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> requestId_ {};
    // schema id
    // 
    // This parameter is required.
    shared_ptr<string> schemaId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
