// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNATGATEWAYSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETNATGATEWAYSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentTeams20260605
{
namespace Models
{
  class GetNatGatewayStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNatGatewayStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetNatGatewayStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetNatGatewayStatusResponseBody() = default ;
    GetNatGatewayStatusResponseBody(const GetNatGatewayStatusResponseBody &) = default ;
    GetNatGatewayStatusResponseBody(GetNatGatewayStatusResponseBody &&) = default ;
    GetNatGatewayStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNatGatewayStatusResponseBody() = default ;
    GetNatGatewayStatusResponseBody& operator=(const GetNatGatewayStatusResponseBody &) = default ;
    GetNatGatewayStatusResponseBody& operator=(GetNatGatewayStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(NatGatewayConfigured, natGatewayConfigured_);
        DARABONBA_PTR_TO_JSON(NatGateways, natGateways_);
        DARABONBA_PTR_TO_JSON(SnatConfigured, snatConfigured_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(ZoneCidrCovered, zoneCidrCovered_);
        DARABONBA_PTR_TO_JSON(ZoneCidrs, zoneCidrs_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(NatGatewayConfigured, natGatewayConfigured_);
        DARABONBA_PTR_FROM_JSON(NatGateways, natGateways_);
        DARABONBA_PTR_FROM_JSON(SnatConfigured, snatConfigured_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(ZoneCidrCovered, zoneCidrCovered_);
        DARABONBA_PTR_FROM_JSON(ZoneCidrs, zoneCidrs_);
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
      class ZoneCidrs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ZoneCidrs& obj) { 
          DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
          DARABONBA_PTR_TO_JSON(Covered, covered_);
          DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
          DARABONBA_PTR_TO_JSON(SnatEntryId, snatEntryId_);
          DARABONBA_PTR_TO_JSON(SnatSourceCidr, snatSourceCidr_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, ZoneCidrs& obj) { 
          DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
          DARABONBA_PTR_FROM_JSON(Covered, covered_);
          DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
          DARABONBA_PTR_FROM_JSON(SnatEntryId, snatEntryId_);
          DARABONBA_PTR_FROM_JSON(SnatSourceCidr, snatSourceCidr_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        };
        ZoneCidrs() = default ;
        ZoneCidrs(const ZoneCidrs &) = default ;
        ZoneCidrs(ZoneCidrs &&) = default ;
        ZoneCidrs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ZoneCidrs() = default ;
        ZoneCidrs& operator=(const ZoneCidrs &) = default ;
        ZoneCidrs& operator=(ZoneCidrs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cidrBlock_ == nullptr
        && this->covered_ == nullptr && this->natGatewayId_ == nullptr && this->snatEntryId_ == nullptr && this->snatSourceCidr_ == nullptr && this->vSwitchId_ == nullptr
        && this->zoneId_ == nullptr; };
        // cidrBlock Field Functions 
        bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
        void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
        inline string getCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
        inline ZoneCidrs& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


        // covered Field Functions 
        bool hasCovered() const { return this->covered_ != nullptr;};
        void deleteCovered() { this->covered_ = nullptr;};
        inline bool getCovered() const { DARABONBA_PTR_GET_DEFAULT(covered_, false) };
        inline ZoneCidrs& setCovered(bool covered) { DARABONBA_PTR_SET_VALUE(covered_, covered) };


        // natGatewayId Field Functions 
        bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
        void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
        inline string getNatGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
        inline ZoneCidrs& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


        // snatEntryId Field Functions 
        bool hasSnatEntryId() const { return this->snatEntryId_ != nullptr;};
        void deleteSnatEntryId() { this->snatEntryId_ = nullptr;};
        inline string getSnatEntryId() const { DARABONBA_PTR_GET_DEFAULT(snatEntryId_, "") };
        inline ZoneCidrs& setSnatEntryId(string snatEntryId) { DARABONBA_PTR_SET_VALUE(snatEntryId_, snatEntryId) };


        // snatSourceCidr Field Functions 
        bool hasSnatSourceCidr() const { return this->snatSourceCidr_ != nullptr;};
        void deleteSnatSourceCidr() { this->snatSourceCidr_ = nullptr;};
        inline string getSnatSourceCidr() const { DARABONBA_PTR_GET_DEFAULT(snatSourceCidr_, "") };
        inline ZoneCidrs& setSnatSourceCidr(string snatSourceCidr) { DARABONBA_PTR_SET_VALUE(snatSourceCidr_, snatSourceCidr) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline ZoneCidrs& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline ZoneCidrs& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        shared_ptr<string> cidrBlock_ {};
        shared_ptr<bool> covered_ {};
        shared_ptr<string> natGatewayId_ {};
        shared_ptr<string> snatEntryId_ {};
        shared_ptr<string> snatSourceCidr_ {};
        shared_ptr<string> vSwitchId_ {};
        shared_ptr<string> zoneId_ {};
      };

      class NatGateways : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NatGateways& obj) { 
          DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
          DARABONBA_PTR_TO_JSON(SnatConfigured, snatConfigured_);
          DARABONBA_PTR_TO_JSON(SnatTableId, snatTableId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, NatGateways& obj) { 
          DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
          DARABONBA_PTR_FROM_JSON(SnatConfigured, snatConfigured_);
          DARABONBA_PTR_FROM_JSON(SnatTableId, snatTableId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        NatGateways() = default ;
        NatGateways(const NatGateways &) = default ;
        NatGateways(NatGateways &&) = default ;
        NatGateways(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NatGateways() = default ;
        NatGateways& operator=(const NatGateways &) = default ;
        NatGateways& operator=(NatGateways &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->natGatewayId_ == nullptr
        && this->snatConfigured_ == nullptr && this->snatTableId_ == nullptr && this->status_ == nullptr; };
        // natGatewayId Field Functions 
        bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
        void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
        inline string getNatGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
        inline NatGateways& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


        // snatConfigured Field Functions 
        bool hasSnatConfigured() const { return this->snatConfigured_ != nullptr;};
        void deleteSnatConfigured() { this->snatConfigured_ = nullptr;};
        inline bool getSnatConfigured() const { DARABONBA_PTR_GET_DEFAULT(snatConfigured_, false) };
        inline NatGateways& setSnatConfigured(bool snatConfigured) { DARABONBA_PTR_SET_VALUE(snatConfigured_, snatConfigured) };


        // snatTableId Field Functions 
        bool hasSnatTableId() const { return this->snatTableId_ != nullptr;};
        void deleteSnatTableId() { this->snatTableId_ = nullptr;};
        inline string getSnatTableId() const { DARABONBA_PTR_GET_DEFAULT(snatTableId_, "") };
        inline NatGateways& setSnatTableId(string snatTableId) { DARABONBA_PTR_SET_VALUE(snatTableId_, snatTableId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline NatGateways& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<string> natGatewayId_ {};
        shared_ptr<bool> snatConfigured_ {};
        shared_ptr<string> snatTableId_ {};
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->natGatewayConfigured_ == nullptr && this->natGateways_ == nullptr && this->snatConfigured_ == nullptr && this->status_ == nullptr && this->vpcId_ == nullptr
        && this->zoneCidrCovered_ == nullptr && this->zoneCidrs_ == nullptr; };
      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // natGatewayConfigured Field Functions 
      bool hasNatGatewayConfigured() const { return this->natGatewayConfigured_ != nullptr;};
      void deleteNatGatewayConfigured() { this->natGatewayConfigured_ = nullptr;};
      inline bool getNatGatewayConfigured() const { DARABONBA_PTR_GET_DEFAULT(natGatewayConfigured_, false) };
      inline Data& setNatGatewayConfigured(bool natGatewayConfigured) { DARABONBA_PTR_SET_VALUE(natGatewayConfigured_, natGatewayConfigured) };


      // natGateways Field Functions 
      bool hasNatGateways() const { return this->natGateways_ != nullptr;};
      void deleteNatGateways() { this->natGateways_ = nullptr;};
      inline const vector<Data::NatGateways> & getNatGateways() const { DARABONBA_PTR_GET_CONST(natGateways_, vector<Data::NatGateways>) };
      inline vector<Data::NatGateways> getNatGateways() { DARABONBA_PTR_GET(natGateways_, vector<Data::NatGateways>) };
      inline Data& setNatGateways(const vector<Data::NatGateways> & natGateways) { DARABONBA_PTR_SET_VALUE(natGateways_, natGateways) };
      inline Data& setNatGateways(vector<Data::NatGateways> && natGateways) { DARABONBA_PTR_SET_RVALUE(natGateways_, natGateways) };


      // snatConfigured Field Functions 
      bool hasSnatConfigured() const { return this->snatConfigured_ != nullptr;};
      void deleteSnatConfigured() { this->snatConfigured_ = nullptr;};
      inline bool getSnatConfigured() const { DARABONBA_PTR_GET_DEFAULT(snatConfigured_, false) };
      inline Data& setSnatConfigured(bool snatConfigured) { DARABONBA_PTR_SET_VALUE(snatConfigured_, snatConfigured) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline Data& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // zoneCidrCovered Field Functions 
      bool hasZoneCidrCovered() const { return this->zoneCidrCovered_ != nullptr;};
      void deleteZoneCidrCovered() { this->zoneCidrCovered_ = nullptr;};
      inline bool getZoneCidrCovered() const { DARABONBA_PTR_GET_DEFAULT(zoneCidrCovered_, false) };
      inline Data& setZoneCidrCovered(bool zoneCidrCovered) { DARABONBA_PTR_SET_VALUE(zoneCidrCovered_, zoneCidrCovered) };


      // zoneCidrs Field Functions 
      bool hasZoneCidrs() const { return this->zoneCidrs_ != nullptr;};
      void deleteZoneCidrs() { this->zoneCidrs_ = nullptr;};
      inline const vector<Data::ZoneCidrs> & getZoneCidrs() const { DARABONBA_PTR_GET_CONST(zoneCidrs_, vector<Data::ZoneCidrs>) };
      inline vector<Data::ZoneCidrs> getZoneCidrs() { DARABONBA_PTR_GET(zoneCidrs_, vector<Data::ZoneCidrs>) };
      inline Data& setZoneCidrs(const vector<Data::ZoneCidrs> & zoneCidrs) { DARABONBA_PTR_SET_VALUE(zoneCidrs_, zoneCidrs) };
      inline Data& setZoneCidrs(vector<Data::ZoneCidrs> && zoneCidrs) { DARABONBA_PTR_SET_RVALUE(zoneCidrs_, zoneCidrs) };


    protected:
      shared_ptr<string> instanceId_ {};
      shared_ptr<bool> natGatewayConfigured_ {};
      shared_ptr<vector<Data::NatGateways>> natGateways_ {};
      shared_ptr<bool> snatConfigured_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> vpcId_ {};
      shared_ptr<bool> zoneCidrCovered_ {};
      shared_ptr<vector<Data::ZoneCidrs>> zoneCidrs_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetNatGatewayStatusResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetNatGatewayStatusResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetNatGatewayStatusResponseBody::Data) };
    inline GetNatGatewayStatusResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetNatGatewayStatusResponseBody::Data) };
    inline GetNatGatewayStatusResponseBody& setData(const GetNatGatewayStatusResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetNatGatewayStatusResponseBody& setData(GetNatGatewayStatusResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetNatGatewayStatusResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetNatGatewayStatusResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetNatGatewayStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetNatGatewayStatusResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetNatGatewayStatusResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentTeams20260605
#endif
