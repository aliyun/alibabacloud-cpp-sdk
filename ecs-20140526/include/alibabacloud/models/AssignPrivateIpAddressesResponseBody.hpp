// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSIGNPRIVATEIPADDRESSESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ASSIGNPRIVATEIPADDRESSESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class AssignPrivateIpAddressesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssignPrivateIpAddressesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AssignedPrivateIpAddressesSet, assignedPrivateIpAddressesSet_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AssignPrivateIpAddressesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AssignedPrivateIpAddressesSet, assignedPrivateIpAddressesSet_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AssignPrivateIpAddressesResponseBody() = default ;
    AssignPrivateIpAddressesResponseBody(const AssignPrivateIpAddressesResponseBody &) = default ;
    AssignPrivateIpAddressesResponseBody(AssignPrivateIpAddressesResponseBody &&) = default ;
    AssignPrivateIpAddressesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssignPrivateIpAddressesResponseBody() = default ;
    AssignPrivateIpAddressesResponseBody& operator=(const AssignPrivateIpAddressesResponseBody &) = default ;
    AssignPrivateIpAddressesResponseBody& operator=(AssignPrivateIpAddressesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AssignedPrivateIpAddressesSet : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AssignedPrivateIpAddressesSet& obj) { 
        DARABONBA_PTR_TO_JSON(Ipv4PrefixSet, ipv4PrefixSet_);
        DARABONBA_PTR_TO_JSON(NetworkInterfaceId, networkInterfaceId_);
        DARABONBA_PTR_TO_JSON(PrivateIpSet, privateIpSet_);
      };
      friend void from_json(const Darabonba::Json& j, AssignedPrivateIpAddressesSet& obj) { 
        DARABONBA_PTR_FROM_JSON(Ipv4PrefixSet, ipv4PrefixSet_);
        DARABONBA_PTR_FROM_JSON(NetworkInterfaceId, networkInterfaceId_);
        DARABONBA_PTR_FROM_JSON(PrivateIpSet, privateIpSet_);
      };
      AssignedPrivateIpAddressesSet() = default ;
      AssignedPrivateIpAddressesSet(const AssignedPrivateIpAddressesSet &) = default ;
      AssignedPrivateIpAddressesSet(AssignedPrivateIpAddressesSet &&) = default ;
      AssignedPrivateIpAddressesSet(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AssignedPrivateIpAddressesSet() = default ;
      AssignedPrivateIpAddressesSet& operator=(const AssignedPrivateIpAddressesSet &) = default ;
      AssignedPrivateIpAddressesSet& operator=(AssignedPrivateIpAddressesSet &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PrivateIpSet : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PrivateIpSet& obj) { 
          DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
        };
        friend void from_json(const Darabonba::Json& j, PrivateIpSet& obj) { 
          DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
        };
        PrivateIpSet() = default ;
        PrivateIpSet(const PrivateIpSet &) = default ;
        PrivateIpSet(PrivateIpSet &&) = default ;
        PrivateIpSet(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PrivateIpSet() = default ;
        PrivateIpSet& operator=(const PrivateIpSet &) = default ;
        PrivateIpSet& operator=(PrivateIpSet &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->privateIpAddress_ == nullptr; };
        // privateIpAddress Field Functions 
        bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
        void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
        inline const vector<string> & getPrivateIpAddress() const { DARABONBA_PTR_GET_CONST(privateIpAddress_, vector<string>) };
        inline vector<string> getPrivateIpAddress() { DARABONBA_PTR_GET(privateIpAddress_, vector<string>) };
        inline PrivateIpSet& setPrivateIpAddress(const vector<string> & privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };
        inline PrivateIpSet& setPrivateIpAddress(vector<string> && privateIpAddress) { DARABONBA_PTR_SET_RVALUE(privateIpAddress_, privateIpAddress) };


      protected:
        shared_ptr<vector<string>> privateIpAddress_ {};
      };

      class Ipv4PrefixSet : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Ipv4PrefixSet& obj) { 
          DARABONBA_PTR_TO_JSON(Ipv4Prefixes, ipv4Prefixes_);
        };
        friend void from_json(const Darabonba::Json& j, Ipv4PrefixSet& obj) { 
          DARABONBA_PTR_FROM_JSON(Ipv4Prefixes, ipv4Prefixes_);
        };
        Ipv4PrefixSet() = default ;
        Ipv4PrefixSet(const Ipv4PrefixSet &) = default ;
        Ipv4PrefixSet(Ipv4PrefixSet &&) = default ;
        Ipv4PrefixSet(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Ipv4PrefixSet() = default ;
        Ipv4PrefixSet& operator=(const Ipv4PrefixSet &) = default ;
        Ipv4PrefixSet& operator=(Ipv4PrefixSet &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ipv4Prefixes_ == nullptr; };
        // ipv4Prefixes Field Functions 
        bool hasIpv4Prefixes() const { return this->ipv4Prefixes_ != nullptr;};
        void deleteIpv4Prefixes() { this->ipv4Prefixes_ = nullptr;};
        inline const vector<string> & getIpv4Prefixes() const { DARABONBA_PTR_GET_CONST(ipv4Prefixes_, vector<string>) };
        inline vector<string> getIpv4Prefixes() { DARABONBA_PTR_GET(ipv4Prefixes_, vector<string>) };
        inline Ipv4PrefixSet& setIpv4Prefixes(const vector<string> & ipv4Prefixes) { DARABONBA_PTR_SET_VALUE(ipv4Prefixes_, ipv4Prefixes) };
        inline Ipv4PrefixSet& setIpv4Prefixes(vector<string> && ipv4Prefixes) { DARABONBA_PTR_SET_RVALUE(ipv4Prefixes_, ipv4Prefixes) };


      protected:
        shared_ptr<vector<string>> ipv4Prefixes_ {};
      };

      virtual bool empty() const override { return this->ipv4PrefixSet_ == nullptr
        && this->networkInterfaceId_ == nullptr && this->privateIpSet_ == nullptr; };
      // ipv4PrefixSet Field Functions 
      bool hasIpv4PrefixSet() const { return this->ipv4PrefixSet_ != nullptr;};
      void deleteIpv4PrefixSet() { this->ipv4PrefixSet_ = nullptr;};
      inline const AssignedPrivateIpAddressesSet::Ipv4PrefixSet & getIpv4PrefixSet() const { DARABONBA_PTR_GET_CONST(ipv4PrefixSet_, AssignedPrivateIpAddressesSet::Ipv4PrefixSet) };
      inline AssignedPrivateIpAddressesSet::Ipv4PrefixSet getIpv4PrefixSet() { DARABONBA_PTR_GET(ipv4PrefixSet_, AssignedPrivateIpAddressesSet::Ipv4PrefixSet) };
      inline AssignedPrivateIpAddressesSet& setIpv4PrefixSet(const AssignedPrivateIpAddressesSet::Ipv4PrefixSet & ipv4PrefixSet) { DARABONBA_PTR_SET_VALUE(ipv4PrefixSet_, ipv4PrefixSet) };
      inline AssignedPrivateIpAddressesSet& setIpv4PrefixSet(AssignedPrivateIpAddressesSet::Ipv4PrefixSet && ipv4PrefixSet) { DARABONBA_PTR_SET_RVALUE(ipv4PrefixSet_, ipv4PrefixSet) };


      // networkInterfaceId Field Functions 
      bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
      void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
      inline string getNetworkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceId_, "") };
      inline AssignedPrivateIpAddressesSet& setNetworkInterfaceId(string networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };


      // privateIpSet Field Functions 
      bool hasPrivateIpSet() const { return this->privateIpSet_ != nullptr;};
      void deletePrivateIpSet() { this->privateIpSet_ = nullptr;};
      inline const AssignedPrivateIpAddressesSet::PrivateIpSet & getPrivateIpSet() const { DARABONBA_PTR_GET_CONST(privateIpSet_, AssignedPrivateIpAddressesSet::PrivateIpSet) };
      inline AssignedPrivateIpAddressesSet::PrivateIpSet getPrivateIpSet() { DARABONBA_PTR_GET(privateIpSet_, AssignedPrivateIpAddressesSet::PrivateIpSet) };
      inline AssignedPrivateIpAddressesSet& setPrivateIpSet(const AssignedPrivateIpAddressesSet::PrivateIpSet & privateIpSet) { DARABONBA_PTR_SET_VALUE(privateIpSet_, privateIpSet) };
      inline AssignedPrivateIpAddressesSet& setPrivateIpSet(AssignedPrivateIpAddressesSet::PrivateIpSet && privateIpSet) { DARABONBA_PTR_SET_RVALUE(privateIpSet_, privateIpSet) };


    protected:
      // Details about the assigned IPv4 prefixes.
      shared_ptr<AssignedPrivateIpAddressesSet::Ipv4PrefixSet> ipv4PrefixSet_ {};
      // The ENI ID.
      shared_ptr<string> networkInterfaceId_ {};
      // The secondary private IP addresses that are assigned to the ENI.
      shared_ptr<AssignedPrivateIpAddressesSet::PrivateIpSet> privateIpSet_ {};
    };

    virtual bool empty() const override { return this->assignedPrivateIpAddressesSet_ == nullptr
        && this->requestId_ == nullptr; };
    // assignedPrivateIpAddressesSet Field Functions 
    bool hasAssignedPrivateIpAddressesSet() const { return this->assignedPrivateIpAddressesSet_ != nullptr;};
    void deleteAssignedPrivateIpAddressesSet() { this->assignedPrivateIpAddressesSet_ = nullptr;};
    inline const AssignPrivateIpAddressesResponseBody::AssignedPrivateIpAddressesSet & getAssignedPrivateIpAddressesSet() const { DARABONBA_PTR_GET_CONST(assignedPrivateIpAddressesSet_, AssignPrivateIpAddressesResponseBody::AssignedPrivateIpAddressesSet) };
    inline AssignPrivateIpAddressesResponseBody::AssignedPrivateIpAddressesSet getAssignedPrivateIpAddressesSet() { DARABONBA_PTR_GET(assignedPrivateIpAddressesSet_, AssignPrivateIpAddressesResponseBody::AssignedPrivateIpAddressesSet) };
    inline AssignPrivateIpAddressesResponseBody& setAssignedPrivateIpAddressesSet(const AssignPrivateIpAddressesResponseBody::AssignedPrivateIpAddressesSet & assignedPrivateIpAddressesSet) { DARABONBA_PTR_SET_VALUE(assignedPrivateIpAddressesSet_, assignedPrivateIpAddressesSet) };
    inline AssignPrivateIpAddressesResponseBody& setAssignedPrivateIpAddressesSet(AssignPrivateIpAddressesResponseBody::AssignedPrivateIpAddressesSet && assignedPrivateIpAddressesSet) { DARABONBA_PTR_SET_RVALUE(assignedPrivateIpAddressesSet_, assignedPrivateIpAddressesSet) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AssignPrivateIpAddressesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details about the ENI and the secondary private IP addresses that are assigned to the ENI.
    shared_ptr<AssignPrivateIpAddressesResponseBody::AssignedPrivateIpAddressesSet> assignedPrivateIpAddressesSet_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
