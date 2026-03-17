// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACCESSPOINTNETWORKQUALITIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTACCESSPOINTNETWORKQUALITIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class ListAccessPointNetworkQualitiesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAccessPointNetworkQualitiesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessPointNetworkQualities, accessPointNetworkQualities_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAccessPointNetworkQualitiesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessPointNetworkQualities, accessPointNetworkQualities_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAccessPointNetworkQualitiesResponseBody() = default ;
    ListAccessPointNetworkQualitiesResponseBody(const ListAccessPointNetworkQualitiesResponseBody &) = default ;
    ListAccessPointNetworkQualitiesResponseBody(ListAccessPointNetworkQualitiesResponseBody &&) = default ;
    ListAccessPointNetworkQualitiesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAccessPointNetworkQualitiesResponseBody() = default ;
    ListAccessPointNetworkQualitiesResponseBody& operator=(const ListAccessPointNetworkQualitiesResponseBody &) = default ;
    ListAccessPointNetworkQualitiesResponseBody& operator=(ListAccessPointNetworkQualitiesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AccessPointNetworkQualities : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccessPointNetworkQualities& obj) { 
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Loss, loss_);
        DARABONBA_PTR_TO_JSON(Rtt, rtt_);
      };
      friend void from_json(const Darabonba::Json& j, AccessPointNetworkQualities& obj) { 
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Loss, loss_);
        DARABONBA_PTR_FROM_JSON(Rtt, rtt_);
      };
      AccessPointNetworkQualities() = default ;
      AccessPointNetworkQualities(const AccessPointNetworkQualities &) = default ;
      AccessPointNetworkQualities(AccessPointNetworkQualities &&) = default ;
      AccessPointNetworkQualities(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccessPointNetworkQualities() = default ;
      AccessPointNetworkQualities& operator=(const AccessPointNetworkQualities &) = default ;
      AccessPointNetworkQualities& operator=(AccessPointNetworkQualities &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->id_ == nullptr
        && this->loss_ == nullptr && this->rtt_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int32_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
      inline AccessPointNetworkQualities& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // loss Field Functions 
      bool hasLoss() const { return this->loss_ != nullptr;};
      void deleteLoss() { this->loss_ = nullptr;};
      inline string getLoss() const { DARABONBA_PTR_GET_DEFAULT(loss_, "") };
      inline AccessPointNetworkQualities& setLoss(string loss) { DARABONBA_PTR_SET_VALUE(loss_, loss) };


      // rtt Field Functions 
      bool hasRtt() const { return this->rtt_ != nullptr;};
      void deleteRtt() { this->rtt_ = nullptr;};
      inline string getRtt() const { DARABONBA_PTR_GET_DEFAULT(rtt_, "") };
      inline AccessPointNetworkQualities& setRtt(string rtt) { DARABONBA_PTR_SET_VALUE(rtt_, rtt) };


    protected:
      // The ID of the endpoint.
      shared_ptr<int32_t> id_ {};
      // The packet loss rate.
      shared_ptr<string> loss_ {};
      // The network latency. Unit: milliseconds.
      shared_ptr<string> rtt_ {};
    };

    virtual bool empty() const override { return this->accessPointNetworkQualities_ == nullptr
        && this->requestId_ == nullptr; };
    // accessPointNetworkQualities Field Functions 
    bool hasAccessPointNetworkQualities() const { return this->accessPointNetworkQualities_ != nullptr;};
    void deleteAccessPointNetworkQualities() { this->accessPointNetworkQualities_ = nullptr;};
    inline const vector<ListAccessPointNetworkQualitiesResponseBody::AccessPointNetworkQualities> & getAccessPointNetworkQualities() const { DARABONBA_PTR_GET_CONST(accessPointNetworkQualities_, vector<ListAccessPointNetworkQualitiesResponseBody::AccessPointNetworkQualities>) };
    inline vector<ListAccessPointNetworkQualitiesResponseBody::AccessPointNetworkQualities> getAccessPointNetworkQualities() { DARABONBA_PTR_GET(accessPointNetworkQualities_, vector<ListAccessPointNetworkQualitiesResponseBody::AccessPointNetworkQualities>) };
    inline ListAccessPointNetworkQualitiesResponseBody& setAccessPointNetworkQualities(const vector<ListAccessPointNetworkQualitiesResponseBody::AccessPointNetworkQualities> & accessPointNetworkQualities) { DARABONBA_PTR_SET_VALUE(accessPointNetworkQualities_, accessPointNetworkQualities) };
    inline ListAccessPointNetworkQualitiesResponseBody& setAccessPointNetworkQualities(vector<ListAccessPointNetworkQualitiesResponseBody::AccessPointNetworkQualities> && accessPointNetworkQualities) { DARABONBA_PTR_SET_RVALUE(accessPointNetworkQualities_, accessPointNetworkQualities) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAccessPointNetworkQualitiesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The network quality of the endpoint.
    shared_ptr<vector<ListAccessPointNetworkQualitiesResponseBody::AccessPointNetworkQualities>> accessPointNetworkQualities_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
