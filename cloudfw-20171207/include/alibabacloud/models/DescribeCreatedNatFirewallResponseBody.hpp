// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECREATEDNATFIREWALLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECREATEDNATFIREWALLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeCreatedNatFirewallResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCreatedNatFirewallResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreatedNatFirewalls, createdNatFirewalls_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCreatedNatFirewallResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatedNatFirewalls, createdNatFirewalls_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCreatedNatFirewallResponseBody() = default ;
    DescribeCreatedNatFirewallResponseBody(const DescribeCreatedNatFirewallResponseBody &) = default ;
    DescribeCreatedNatFirewallResponseBody(DescribeCreatedNatFirewallResponseBody &&) = default ;
    DescribeCreatedNatFirewallResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCreatedNatFirewallResponseBody() = default ;
    DescribeCreatedNatFirewallResponseBody& operator=(const DescribeCreatedNatFirewallResponseBody &) = default ;
    DescribeCreatedNatFirewallResponseBody& operator=(DescribeCreatedNatFirewallResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CreatedNatFirewalls : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CreatedNatFirewalls& obj) { 
        DARABONBA_PTR_TO_JSON(NatFirewallId, natFirewallId_);
        DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
        DARABONBA_PTR_TO_JSON(NatGatewayName, natGatewayName_);
      };
      friend void from_json(const Darabonba::Json& j, CreatedNatFirewalls& obj) { 
        DARABONBA_PTR_FROM_JSON(NatFirewallId, natFirewallId_);
        DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
        DARABONBA_PTR_FROM_JSON(NatGatewayName, natGatewayName_);
      };
      CreatedNatFirewalls() = default ;
      CreatedNatFirewalls(const CreatedNatFirewalls &) = default ;
      CreatedNatFirewalls(CreatedNatFirewalls &&) = default ;
      CreatedNatFirewalls(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CreatedNatFirewalls() = default ;
      CreatedNatFirewalls& operator=(const CreatedNatFirewalls &) = default ;
      CreatedNatFirewalls& operator=(CreatedNatFirewalls &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->natFirewallId_ == nullptr
        && this->natGatewayId_ == nullptr && this->natGatewayName_ == nullptr; };
      // natFirewallId Field Functions 
      bool hasNatFirewallId() const { return this->natFirewallId_ != nullptr;};
      void deleteNatFirewallId() { this->natFirewallId_ = nullptr;};
      inline string getNatFirewallId() const { DARABONBA_PTR_GET_DEFAULT(natFirewallId_, "") };
      inline CreatedNatFirewalls& setNatFirewallId(string natFirewallId) { DARABONBA_PTR_SET_VALUE(natFirewallId_, natFirewallId) };


      // natGatewayId Field Functions 
      bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
      void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
      inline string getNatGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
      inline CreatedNatFirewalls& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


      // natGatewayName Field Functions 
      bool hasNatGatewayName() const { return this->natGatewayName_ != nullptr;};
      void deleteNatGatewayName() { this->natGatewayName_ = nullptr;};
      inline string getNatGatewayName() const { DARABONBA_PTR_GET_DEFAULT(natGatewayName_, "") };
      inline CreatedNatFirewalls& setNatGatewayName(string natGatewayName) { DARABONBA_PTR_SET_VALUE(natGatewayName_, natGatewayName) };


    protected:
      shared_ptr<string> natFirewallId_ {};
      shared_ptr<string> natGatewayId_ {};
      shared_ptr<string> natGatewayName_ {};
    };

    virtual bool empty() const override { return this->createdNatFirewalls_ == nullptr
        && this->requestId_ == nullptr; };
    // createdNatFirewalls Field Functions 
    bool hasCreatedNatFirewalls() const { return this->createdNatFirewalls_ != nullptr;};
    void deleteCreatedNatFirewalls() { this->createdNatFirewalls_ = nullptr;};
    inline const vector<DescribeCreatedNatFirewallResponseBody::CreatedNatFirewalls> & getCreatedNatFirewalls() const { DARABONBA_PTR_GET_CONST(createdNatFirewalls_, vector<DescribeCreatedNatFirewallResponseBody::CreatedNatFirewalls>) };
    inline vector<DescribeCreatedNatFirewallResponseBody::CreatedNatFirewalls> getCreatedNatFirewalls() { DARABONBA_PTR_GET(createdNatFirewalls_, vector<DescribeCreatedNatFirewallResponseBody::CreatedNatFirewalls>) };
    inline DescribeCreatedNatFirewallResponseBody& setCreatedNatFirewalls(const vector<DescribeCreatedNatFirewallResponseBody::CreatedNatFirewalls> & createdNatFirewalls) { DARABONBA_PTR_SET_VALUE(createdNatFirewalls_, createdNatFirewalls) };
    inline DescribeCreatedNatFirewallResponseBody& setCreatedNatFirewalls(vector<DescribeCreatedNatFirewallResponseBody::CreatedNatFirewalls> && createdNatFirewalls) { DARABONBA_PTR_SET_RVALUE(createdNatFirewalls_, createdNatFirewalls) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCreatedNatFirewallResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeCreatedNatFirewallResponseBody::CreatedNatFirewalls>> createdNatFirewalls_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
