// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHIGHRELIABLEPHYSICALCONNECTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEHIGHRELIABLEPHYSICALCONNECTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateHighReliablePhysicalConnectionResponseBodyErrorInfoList.hpp>
#include <alibabacloud/models/CreateHighReliablePhysicalConnectionResponseBodyPhysicalConnectionList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateHighReliablePhysicalConnectionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHighReliablePhysicalConnectionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorInfoList, errorInfoList_);
      DARABONBA_PTR_TO_JSON(PhysicalConnectionList, physicalConnectionList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHighReliablePhysicalConnectionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorInfoList, errorInfoList_);
      DARABONBA_PTR_FROM_JSON(PhysicalConnectionList, physicalConnectionList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateHighReliablePhysicalConnectionResponseBody() = default ;
    CreateHighReliablePhysicalConnectionResponseBody(const CreateHighReliablePhysicalConnectionResponseBody &) = default ;
    CreateHighReliablePhysicalConnectionResponseBody(CreateHighReliablePhysicalConnectionResponseBody &&) = default ;
    CreateHighReliablePhysicalConnectionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHighReliablePhysicalConnectionResponseBody() = default ;
    CreateHighReliablePhysicalConnectionResponseBody& operator=(const CreateHighReliablePhysicalConnectionResponseBody &) = default ;
    CreateHighReliablePhysicalConnectionResponseBody& operator=(CreateHighReliablePhysicalConnectionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorInfoList_ != nullptr
        && this->physicalConnectionList_ != nullptr && this->requestId_ != nullptr; };
    // errorInfoList Field Functions 
    bool hasErrorInfoList() const { return this->errorInfoList_ != nullptr;};
    void deleteErrorInfoList() { this->errorInfoList_ = nullptr;};
    inline const CreateHighReliablePhysicalConnectionResponseBodyErrorInfoList & errorInfoList() const { DARABONBA_PTR_GET_CONST(errorInfoList_, CreateHighReliablePhysicalConnectionResponseBodyErrorInfoList) };
    inline CreateHighReliablePhysicalConnectionResponseBodyErrorInfoList errorInfoList() { DARABONBA_PTR_GET(errorInfoList_, CreateHighReliablePhysicalConnectionResponseBodyErrorInfoList) };
    inline CreateHighReliablePhysicalConnectionResponseBody& setErrorInfoList(const CreateHighReliablePhysicalConnectionResponseBodyErrorInfoList & errorInfoList) { DARABONBA_PTR_SET_VALUE(errorInfoList_, errorInfoList) };
    inline CreateHighReliablePhysicalConnectionResponseBody& setErrorInfoList(CreateHighReliablePhysicalConnectionResponseBodyErrorInfoList && errorInfoList) { DARABONBA_PTR_SET_RVALUE(errorInfoList_, errorInfoList) };


    // physicalConnectionList Field Functions 
    bool hasPhysicalConnectionList() const { return this->physicalConnectionList_ != nullptr;};
    void deletePhysicalConnectionList() { this->physicalConnectionList_ = nullptr;};
    inline const CreateHighReliablePhysicalConnectionResponseBodyPhysicalConnectionList & physicalConnectionList() const { DARABONBA_PTR_GET_CONST(physicalConnectionList_, CreateHighReliablePhysicalConnectionResponseBodyPhysicalConnectionList) };
    inline CreateHighReliablePhysicalConnectionResponseBodyPhysicalConnectionList physicalConnectionList() { DARABONBA_PTR_GET(physicalConnectionList_, CreateHighReliablePhysicalConnectionResponseBodyPhysicalConnectionList) };
    inline CreateHighReliablePhysicalConnectionResponseBody& setPhysicalConnectionList(const CreateHighReliablePhysicalConnectionResponseBodyPhysicalConnectionList & physicalConnectionList) { DARABONBA_PTR_SET_VALUE(physicalConnectionList_, physicalConnectionList) };
    inline CreateHighReliablePhysicalConnectionResponseBody& setPhysicalConnectionList(CreateHighReliablePhysicalConnectionResponseBodyPhysicalConnectionList && physicalConnectionList) { DARABONBA_PTR_SET_RVALUE(physicalConnectionList_, physicalConnectionList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateHighReliablePhysicalConnectionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // If the request fails the dry run, the following error codes and error messages may be returned:
    // 
    // - pconn.high.reliable.dryrun.error.disable.outbound.data.transfer.billing. Billing for outbound data transfer is not enabled.
    // - pconn.high.reliable.dryrun.error.incompatable.device.capacity. No device in the access point supports advanced features.
    // - pconn.high.reliable.dryrun.error.quota.exceeded. The quota is insufficient.
    // - pconn.high.reliable.dryrun.error.not.enough.resource. The access point resources are insufficient.
    std::shared_ptr<CreateHighReliablePhysicalConnectionResponseBodyErrorInfoList> errorInfoList_ = nullptr;
    // The Express Connect circuits.
    std::shared_ptr<CreateHighReliablePhysicalConnectionResponseBodyPhysicalConnectionList> physicalConnectionList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
