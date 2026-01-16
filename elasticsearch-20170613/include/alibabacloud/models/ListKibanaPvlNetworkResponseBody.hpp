// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKIBANAPVLNETWORKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTKIBANAPVLNETWORKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListKibanaPvlNetworkResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKibanaPvlNetworkResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListKibanaPvlNetworkResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListKibanaPvlNetworkResponseBody() = default ;
    ListKibanaPvlNetworkResponseBody(const ListKibanaPvlNetworkResponseBody &) = default ;
    ListKibanaPvlNetworkResponseBody(ListKibanaPvlNetworkResponseBody &&) = default ;
    ListKibanaPvlNetworkResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKibanaPvlNetworkResponseBody() = default ;
    ListKibanaPvlNetworkResponseBody& operator=(const ListKibanaPvlNetworkResponseBody &) = default ;
    ListKibanaPvlNetworkResponseBody& operator=(ListKibanaPvlNetworkResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(endpointId, endpointId_);
        DARABONBA_PTR_TO_JSON(endpointName, endpointName_);
        DARABONBA_PTR_TO_JSON(endpointStatus, endpointStatus_);
        DARABONBA_PTR_TO_JSON(pvlId, pvlId_);
        DARABONBA_PTR_TO_JSON(securityGroups, securityGroups_);
        DARABONBA_PTR_TO_JSON(vSwitchIdsZone, vSwitchIdsZone_);
        DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(endpointId, endpointId_);
        DARABONBA_PTR_FROM_JSON(endpointName, endpointName_);
        DARABONBA_PTR_FROM_JSON(endpointStatus, endpointStatus_);
        DARABONBA_PTR_FROM_JSON(pvlId, pvlId_);
        DARABONBA_PTR_FROM_JSON(securityGroups, securityGroups_);
        DARABONBA_PTR_FROM_JSON(vSwitchIdsZone, vSwitchIdsZone_);
        DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VSwitchIdsZone : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VSwitchIdsZone& obj) { 
          DARABONBA_PTR_TO_JSON(vswitchId, vswitchId_);
          DARABONBA_PTR_TO_JSON(zoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, VSwitchIdsZone& obj) { 
          DARABONBA_PTR_FROM_JSON(vswitchId, vswitchId_);
          DARABONBA_PTR_FROM_JSON(zoneId, zoneId_);
        };
        VSwitchIdsZone() = default ;
        VSwitchIdsZone(const VSwitchIdsZone &) = default ;
        VSwitchIdsZone(VSwitchIdsZone &&) = default ;
        VSwitchIdsZone(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VSwitchIdsZone() = default ;
        VSwitchIdsZone& operator=(const VSwitchIdsZone &) = default ;
        VSwitchIdsZone& operator=(VSwitchIdsZone &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->vswitchId_ == nullptr
        && this->zoneId_ == nullptr; };
        // vswitchId Field Functions 
        bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
        void deleteVswitchId() { this->vswitchId_ = nullptr;};
        inline string getVswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
        inline VSwitchIdsZone& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline VSwitchIdsZone& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        shared_ptr<string> vswitchId_ {};
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->endpointId_ == nullptr && this->endpointName_ == nullptr && this->endpointStatus_ == nullptr && this->pvlId_ == nullptr && this->securityGroups_ == nullptr
        && this->vSwitchIdsZone_ == nullptr && this->vpcId_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Result& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // endpointId Field Functions 
      bool hasEndpointId() const { return this->endpointId_ != nullptr;};
      void deleteEndpointId() { this->endpointId_ = nullptr;};
      inline string getEndpointId() const { DARABONBA_PTR_GET_DEFAULT(endpointId_, "") };
      inline Result& setEndpointId(string endpointId) { DARABONBA_PTR_SET_VALUE(endpointId_, endpointId) };


      // endpointName Field Functions 
      bool hasEndpointName() const { return this->endpointName_ != nullptr;};
      void deleteEndpointName() { this->endpointName_ = nullptr;};
      inline string getEndpointName() const { DARABONBA_PTR_GET_DEFAULT(endpointName_, "") };
      inline Result& setEndpointName(string endpointName) { DARABONBA_PTR_SET_VALUE(endpointName_, endpointName) };


      // endpointStatus Field Functions 
      bool hasEndpointStatus() const { return this->endpointStatus_ != nullptr;};
      void deleteEndpointStatus() { this->endpointStatus_ = nullptr;};
      inline string getEndpointStatus() const { DARABONBA_PTR_GET_DEFAULT(endpointStatus_, "") };
      inline Result& setEndpointStatus(string endpointStatus) { DARABONBA_PTR_SET_VALUE(endpointStatus_, endpointStatus) };


      // pvlId Field Functions 
      bool hasPvlId() const { return this->pvlId_ != nullptr;};
      void deletePvlId() { this->pvlId_ = nullptr;};
      inline string getPvlId() const { DARABONBA_PTR_GET_DEFAULT(pvlId_, "") };
      inline Result& setPvlId(string pvlId) { DARABONBA_PTR_SET_VALUE(pvlId_, pvlId) };


      // securityGroups Field Functions 
      bool hasSecurityGroups() const { return this->securityGroups_ != nullptr;};
      void deleteSecurityGroups() { this->securityGroups_ = nullptr;};
      inline const vector<string> & getSecurityGroups() const { DARABONBA_PTR_GET_CONST(securityGroups_, vector<string>) };
      inline vector<string> getSecurityGroups() { DARABONBA_PTR_GET(securityGroups_, vector<string>) };
      inline Result& setSecurityGroups(const vector<string> & securityGroups) { DARABONBA_PTR_SET_VALUE(securityGroups_, securityGroups) };
      inline Result& setSecurityGroups(vector<string> && securityGroups) { DARABONBA_PTR_SET_RVALUE(securityGroups_, securityGroups) };


      // vSwitchIdsZone Field Functions 
      bool hasVSwitchIdsZone() const { return this->vSwitchIdsZone_ != nullptr;};
      void deleteVSwitchIdsZone() { this->vSwitchIdsZone_ = nullptr;};
      inline const vector<Result::VSwitchIdsZone> & getVSwitchIdsZone() const { DARABONBA_PTR_GET_CONST(vSwitchIdsZone_, vector<Result::VSwitchIdsZone>) };
      inline vector<Result::VSwitchIdsZone> getVSwitchIdsZone() { DARABONBA_PTR_GET(vSwitchIdsZone_, vector<Result::VSwitchIdsZone>) };
      inline Result& setVSwitchIdsZone(const vector<Result::VSwitchIdsZone> & vSwitchIdsZone) { DARABONBA_PTR_SET_VALUE(vSwitchIdsZone_, vSwitchIdsZone) };
      inline Result& setVSwitchIdsZone(vector<Result::VSwitchIdsZone> && vSwitchIdsZone) { DARABONBA_PTR_SET_RVALUE(vSwitchIdsZone_, vSwitchIdsZone) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline Result& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      shared_ptr<string> createTime_ {};
      shared_ptr<string> endpointId_ {};
      shared_ptr<string> endpointName_ {};
      shared_ptr<string> endpointStatus_ {};
      shared_ptr<string> pvlId_ {};
      shared_ptr<vector<string>> securityGroups_ {};
      shared_ptr<vector<Result::VSwitchIdsZone>> vSwitchIdsZone_ {};
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListKibanaPvlNetworkResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListKibanaPvlNetworkResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ListKibanaPvlNetworkResponseBody::Result>) };
    inline vector<ListKibanaPvlNetworkResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ListKibanaPvlNetworkResponseBody::Result>) };
    inline ListKibanaPvlNetworkResponseBody& setResult(const vector<ListKibanaPvlNetworkResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListKibanaPvlNetworkResponseBody& setResult(vector<ListKibanaPvlNetworkResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // request id
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListKibanaPvlNetworkResponseBody::Result>> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
