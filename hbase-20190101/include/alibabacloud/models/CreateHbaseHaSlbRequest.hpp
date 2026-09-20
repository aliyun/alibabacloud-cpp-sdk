// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHBASEHASLBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEHBASEHASLBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class CreateHbaseHaSlbRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHbaseHaSlbRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BdsId, bdsId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(HaId, haId_);
      DARABONBA_PTR_TO_JSON(HaTypes, haTypes_);
      DARABONBA_PTR_TO_JSON(HbaseType, hbaseType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHbaseHaSlbRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BdsId, bdsId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(HaId, haId_);
      DARABONBA_PTR_FROM_JSON(HaTypes, haTypes_);
      DARABONBA_PTR_FROM_JSON(HbaseType, hbaseType_);
    };
    CreateHbaseHaSlbRequest() = default ;
    CreateHbaseHaSlbRequest(const CreateHbaseHaSlbRequest &) = default ;
    CreateHbaseHaSlbRequest(CreateHbaseHaSlbRequest &&) = default ;
    CreateHbaseHaSlbRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHbaseHaSlbRequest() = default ;
    CreateHbaseHaSlbRequest& operator=(const CreateHbaseHaSlbRequest &) = default ;
    CreateHbaseHaSlbRequest& operator=(CreateHbaseHaSlbRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bdsId_ == nullptr
        && this->clientToken_ == nullptr && this->haId_ == nullptr && this->haTypes_ == nullptr && this->hbaseType_ == nullptr; };
    // bdsId Field Functions 
    bool hasBdsId() const { return this->bdsId_ != nullptr;};
    void deleteBdsId() { this->bdsId_ = nullptr;};
    inline string getBdsId() const { DARABONBA_PTR_GET_DEFAULT(bdsId_, "") };
    inline CreateHbaseHaSlbRequest& setBdsId(string bdsId) { DARABONBA_PTR_SET_VALUE(bdsId_, bdsId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateHbaseHaSlbRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // haId Field Functions 
    bool hasHaId() const { return this->haId_ != nullptr;};
    void deleteHaId() { this->haId_ = nullptr;};
    inline string getHaId() const { DARABONBA_PTR_GET_DEFAULT(haId_, "") };
    inline CreateHbaseHaSlbRequest& setHaId(string haId) { DARABONBA_PTR_SET_VALUE(haId_, haId) };


    // haTypes Field Functions 
    bool hasHaTypes() const { return this->haTypes_ != nullptr;};
    void deleteHaTypes() { this->haTypes_ = nullptr;};
    inline string getHaTypes() const { DARABONBA_PTR_GET_DEFAULT(haTypes_, "") };
    inline CreateHbaseHaSlbRequest& setHaTypes(string haTypes) { DARABONBA_PTR_SET_VALUE(haTypes_, haTypes) };


    // hbaseType Field Functions 
    bool hasHbaseType() const { return this->hbaseType_ != nullptr;};
    void deleteHbaseType() { this->hbaseType_ = nullptr;};
    inline string getHbaseType() const { DARABONBA_PTR_GET_DEFAULT(hbaseType_, "") };
    inline CreateHbaseHaSlbRequest& setHbaseType(string hbaseType) { DARABONBA_PTR_SET_VALUE(hbaseType_, hbaseType) };


  protected:
    // The ID of the BDS cluster.
    // 
    // This parameter is required.
    shared_ptr<string> bdsId_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the value, but you must make sure that the value is unique among different requests. The value cannot exceed 64 printable ASCII characters in length.
    shared_ptr<string> clientToken_ {};
    // The high-availability ID in the BDS active-active management.
    // 
    // This parameter is required.
    shared_ptr<string> haId_ {};
    // The high-availability type. Valid values:
    // 
    // - thrift
    // - phoenix.
    // 
    // This parameter is required.
    shared_ptr<string> haTypes_ {};
    // Specifies whether the high-availability type is on the primary or secondary instance. Valid values:
    // 
    // - Active: The high-availability type is on the primary instance.
    // - Standby: The high-availability type is on the secondary instance.
    // 
    // This parameter is required.
    shared_ptr<string> hbaseType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
