// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEGATEWAYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEGATEWAYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class DeleteGatewayResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteGatewayResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteGatewayResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DeleteGatewayResponseBody() = default ;
    DeleteGatewayResponseBody(const DeleteGatewayResponseBody &) = default ;
    DeleteGatewayResponseBody(DeleteGatewayResponseBody &&) = default ;
    DeleteGatewayResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteGatewayResponseBody() = default ;
    DeleteGatewayResponseBody& operator=(const DeleteGatewayResponseBody &) = default ;
    DeleteGatewayResponseBody& operator=(DeleteGatewayResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(PrimaryUser, primaryUser_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(Replica, replica_);
        DARABONBA_PTR_TO_JSON(SecurityGroup, securityGroup_);
        DARABONBA_PTR_TO_JSON(Spec, spec_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Vpc, vpc_);
        DARABONBA_PTR_TO_JSON(Vswitch, vswitch_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(PrimaryUser, primaryUser_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(Replica, replica_);
        DARABONBA_PTR_FROM_JSON(SecurityGroup, securityGroup_);
        DARABONBA_PTR_FROM_JSON(Spec, spec_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Vpc, vpc_);
        DARABONBA_PTR_FROM_JSON(Vswitch, vswitch_);
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
      virtual bool empty() const override { return this->gatewayUniqueId_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->primaryUser_ == nullptr
        && this->region_ == nullptr && this->replica_ == nullptr && this->securityGroup_ == nullptr && this->spec_ == nullptr && this->status_ == nullptr
        && this->vpc_ == nullptr && this->vswitch_ == nullptr; };
      // gatewayUniqueId Field Functions 
      bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
      void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
      inline string getGatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
      inline Data& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Data& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Data& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // primaryUser Field Functions 
      bool hasPrimaryUser() const { return this->primaryUser_ != nullptr;};
      void deletePrimaryUser() { this->primaryUser_ = nullptr;};
      inline string getPrimaryUser() const { DARABONBA_PTR_GET_DEFAULT(primaryUser_, "") };
      inline Data& setPrimaryUser(string primaryUser) { DARABONBA_PTR_SET_VALUE(primaryUser_, primaryUser) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline Data& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // replica Field Functions 
      bool hasReplica() const { return this->replica_ != nullptr;};
      void deleteReplica() { this->replica_ = nullptr;};
      inline int32_t getReplica() const { DARABONBA_PTR_GET_DEFAULT(replica_, 0) };
      inline Data& setReplica(int32_t replica) { DARABONBA_PTR_SET_VALUE(replica_, replica) };


      // securityGroup Field Functions 
      bool hasSecurityGroup() const { return this->securityGroup_ != nullptr;};
      void deleteSecurityGroup() { this->securityGroup_ = nullptr;};
      inline string getSecurityGroup() const { DARABONBA_PTR_GET_DEFAULT(securityGroup_, "") };
      inline Data& setSecurityGroup(string securityGroup) { DARABONBA_PTR_SET_VALUE(securityGroup_, securityGroup) };


      // spec Field Functions 
      bool hasSpec() const { return this->spec_ != nullptr;};
      void deleteSpec() { this->spec_ = nullptr;};
      inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
      inline Data& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Data& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // vpc Field Functions 
      bool hasVpc() const { return this->vpc_ != nullptr;};
      void deleteVpc() { this->vpc_ = nullptr;};
      inline string getVpc() const { DARABONBA_PTR_GET_DEFAULT(vpc_, "") };
      inline Data& setVpc(string vpc) { DARABONBA_PTR_SET_VALUE(vpc_, vpc) };


      // vswitch Field Functions 
      bool hasVswitch() const { return this->vswitch_ != nullptr;};
      void deleteVswitch() { this->vswitch_ = nullptr;};
      inline string getVswitch() const { DARABONBA_PTR_GET_DEFAULT(vswitch_, "") };
      inline Data& setVswitch(string vswitch) { DARABONBA_PTR_SET_VALUE(vswitch_, vswitch) };


    protected:
      // The unique ID of the gateway. The ID is automatically generated by the system.
      shared_ptr<string> gatewayUniqueId_ {};
      // The creation time.
      shared_ptr<string> gmtCreate_ {};
      // The time when the gateway was last updated.
      shared_ptr<string> gmtModified_ {};
      // The ID of the primary key.
      shared_ptr<int64_t> id_ {};
      // The name of the gateway.
      shared_ptr<string> name_ {};
      // The information about the user.
      shared_ptr<string> primaryUser_ {};
      // The ID of the region.
      shared_ptr<string> region_ {};
      // The number of gateway replicas.
      shared_ptr<int32_t> replica_ {};
      // The ID of the security group.
      shared_ptr<string> securityGroup_ {};
      // The specifications of the gateway.
      shared_ptr<string> spec_ {};
      // The status of the gateway. Valid values: 0: The gateway is being created. 1: The gateway fails to be created. 2: The gateway is running. 3: The gateway is changing. 4: The gateway is scaling down. 6: The gateway is scaling up. 8: The gateway is being deleted. 10: The gateway is restarting. 11: The gateway is being rebuilt. 12: The gateway is updating. 13: The gateway fails to be updated.
      shared_ptr<int32_t> status_ {};
      // The ID of the virtual private cloud (VPC) where the gateway resides.
      shared_ptr<string> vpc_ {};
      // The ID of the vSwitch.
      shared_ptr<string> vswitch_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DeleteGatewayResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DeleteGatewayResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DeleteGatewayResponseBody::Data) };
    inline DeleteGatewayResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DeleteGatewayResponseBody::Data) };
    inline DeleteGatewayResponseBody& setData(const DeleteGatewayResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DeleteGatewayResponseBody& setData(DeleteGatewayResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DeleteGatewayResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DeleteGatewayResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteGatewayResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DeleteGatewayResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code returned. The value 200 indicates that the request was successful. Other values indicate that the request failed.
    shared_ptr<int32_t> code_ {};
    // The details of the data.
    shared_ptr<DeleteGatewayResponseBody::Data> data_ {};
    // The HTTP status code returned.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The returned message.
    // 
    // *   If the request is successful, a success message is returned.
    // *   If the request fails, an error message is returned, such as the "TaskId not found" message.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   `true`: The request was successful.
    // *   `false`: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
