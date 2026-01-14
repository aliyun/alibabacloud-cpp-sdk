// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSPAREIPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSPAREIPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class ListSpareIpsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSpareIpsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SpareIps, spareIps_);
    };
    friend void from_json(const Darabonba::Json& j, ListSpareIpsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SpareIps, spareIps_);
    };
    ListSpareIpsResponseBody() = default ;
    ListSpareIpsResponseBody(const ListSpareIpsResponseBody &) = default ;
    ListSpareIpsResponseBody(ListSpareIpsResponseBody &&) = default ;
    ListSpareIpsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSpareIpsResponseBody() = default ;
    ListSpareIpsResponseBody& operator=(const ListSpareIpsResponseBody &) = default ;
    ListSpareIpsResponseBody& operator=(ListSpareIpsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SpareIps : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SpareIps& obj) { 
        DARABONBA_PTR_TO_JSON(SpareIp, spareIp_);
        DARABONBA_PTR_TO_JSON(State, state_);
      };
      friend void from_json(const Darabonba::Json& j, SpareIps& obj) { 
        DARABONBA_PTR_FROM_JSON(SpareIp, spareIp_);
        DARABONBA_PTR_FROM_JSON(State, state_);
      };
      SpareIps() = default ;
      SpareIps(const SpareIps &) = default ;
      SpareIps(SpareIps &&) = default ;
      SpareIps(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SpareIps() = default ;
      SpareIps& operator=(const SpareIps &) = default ;
      SpareIps& operator=(SpareIps &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->spareIp_ == nullptr
        && this->state_ == nullptr; };
      // spareIp Field Functions 
      bool hasSpareIp() const { return this->spareIp_ != nullptr;};
      void deleteSpareIp() { this->spareIp_ = nullptr;};
      inline string getSpareIp() const { DARABONBA_PTR_GET_DEFAULT(spareIp_, "") };
      inline SpareIps& setSpareIp(string spareIp) { DARABONBA_PTR_SET_VALUE(spareIp_, spareIp) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline SpareIps& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    protected:
      // The secondary IP address that is associated with the CNAME. If the acceleration area becomes unavailable, GA redirects traffic to the secondary IP address.
      shared_ptr<string> spareIp_ {};
      // The status of the secondary IP address. Valid values:
      // 
      // *   **active:** The secondary IP address is available.
      // *   **inuse:** The secondary IP address is in use.
      shared_ptr<string> state_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->spareIps_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSpareIpsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // spareIps Field Functions 
    bool hasSpareIps() const { return this->spareIps_ != nullptr;};
    void deleteSpareIps() { this->spareIps_ = nullptr;};
    inline const vector<ListSpareIpsResponseBody::SpareIps> & getSpareIps() const { DARABONBA_PTR_GET_CONST(spareIps_, vector<ListSpareIpsResponseBody::SpareIps>) };
    inline vector<ListSpareIpsResponseBody::SpareIps> getSpareIps() { DARABONBA_PTR_GET(spareIps_, vector<ListSpareIpsResponseBody::SpareIps>) };
    inline ListSpareIpsResponseBody& setSpareIps(const vector<ListSpareIpsResponseBody::SpareIps> & spareIps) { DARABONBA_PTR_SET_VALUE(spareIps_, spareIps) };
    inline ListSpareIpsResponseBody& setSpareIps(vector<ListSpareIpsResponseBody::SpareIps> && spareIps) { DARABONBA_PTR_SET_RVALUE(spareIps_, spareIps) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The secondary IP addresses that are associated with the CNAME.
    shared_ptr<vector<ListSpareIpsResponseBody::SpareIps>> spareIps_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
