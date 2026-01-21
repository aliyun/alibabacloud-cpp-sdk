// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLIPSWHITELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLIPSWHITELISTRESPONSEBODY_HPP_
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
  class DescribeVpcFirewallIPSWhitelistResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcFirewallIPSWhitelistResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Whitelists, whitelists_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcFirewallIPSWhitelistResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Whitelists, whitelists_);
    };
    DescribeVpcFirewallIPSWhitelistResponseBody() = default ;
    DescribeVpcFirewallIPSWhitelistResponseBody(const DescribeVpcFirewallIPSWhitelistResponseBody &) = default ;
    DescribeVpcFirewallIPSWhitelistResponseBody(DescribeVpcFirewallIPSWhitelistResponseBody &&) = default ;
    DescribeVpcFirewallIPSWhitelistResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcFirewallIPSWhitelistResponseBody() = default ;
    DescribeVpcFirewallIPSWhitelistResponseBody& operator=(const DescribeVpcFirewallIPSWhitelistResponseBody &) = default ;
    DescribeVpcFirewallIPSWhitelistResponseBody& operator=(DescribeVpcFirewallIPSWhitelistResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Whitelists : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Whitelists& obj) { 
        DARABONBA_PTR_TO_JSON(ListType, listType_);
        DARABONBA_PTR_TO_JSON(ListValue, listValue_);
        DARABONBA_PTR_TO_JSON(VpcFirewallId, vpcFirewallId_);
        DARABONBA_PTR_TO_JSON(WhiteListValue, whiteListValue_);
        DARABONBA_PTR_TO_JSON(WhiteType, whiteType_);
      };
      friend void from_json(const Darabonba::Json& j, Whitelists& obj) { 
        DARABONBA_PTR_FROM_JSON(ListType, listType_);
        DARABONBA_PTR_FROM_JSON(ListValue, listValue_);
        DARABONBA_PTR_FROM_JSON(VpcFirewallId, vpcFirewallId_);
        DARABONBA_PTR_FROM_JSON(WhiteListValue, whiteListValue_);
        DARABONBA_PTR_FROM_JSON(WhiteType, whiteType_);
      };
      Whitelists() = default ;
      Whitelists(const Whitelists &) = default ;
      Whitelists(Whitelists &&) = default ;
      Whitelists(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Whitelists() = default ;
      Whitelists& operator=(const Whitelists &) = default ;
      Whitelists& operator=(Whitelists &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->listType_ == nullptr
        && this->listValue_ == nullptr && this->vpcFirewallId_ == nullptr && this->whiteListValue_ == nullptr && this->whiteType_ == nullptr; };
      // listType Field Functions 
      bool hasListType() const { return this->listType_ != nullptr;};
      void deleteListType() { this->listType_ = nullptr;};
      inline int64_t getListType() const { DARABONBA_PTR_GET_DEFAULT(listType_, 0L) };
      inline Whitelists& setListType(int64_t listType) { DARABONBA_PTR_SET_VALUE(listType_, listType) };


      // listValue Field Functions 
      bool hasListValue() const { return this->listValue_ != nullptr;};
      void deleteListValue() { this->listValue_ = nullptr;};
      inline string getListValue() const { DARABONBA_PTR_GET_DEFAULT(listValue_, "") };
      inline Whitelists& setListValue(string listValue) { DARABONBA_PTR_SET_VALUE(listValue_, listValue) };


      // vpcFirewallId Field Functions 
      bool hasVpcFirewallId() const { return this->vpcFirewallId_ != nullptr;};
      void deleteVpcFirewallId() { this->vpcFirewallId_ = nullptr;};
      inline string getVpcFirewallId() const { DARABONBA_PTR_GET_DEFAULT(vpcFirewallId_, "") };
      inline Whitelists& setVpcFirewallId(string vpcFirewallId) { DARABONBA_PTR_SET_VALUE(vpcFirewallId_, vpcFirewallId) };


      // whiteListValue Field Functions 
      bool hasWhiteListValue() const { return this->whiteListValue_ != nullptr;};
      void deleteWhiteListValue() { this->whiteListValue_ = nullptr;};
      inline const vector<string> & getWhiteListValue() const { DARABONBA_PTR_GET_CONST(whiteListValue_, vector<string>) };
      inline vector<string> getWhiteListValue() { DARABONBA_PTR_GET(whiteListValue_, vector<string>) };
      inline Whitelists& setWhiteListValue(const vector<string> & whiteListValue) { DARABONBA_PTR_SET_VALUE(whiteListValue_, whiteListValue) };
      inline Whitelists& setWhiteListValue(vector<string> && whiteListValue) { DARABONBA_PTR_SET_RVALUE(whiteListValue_, whiteListValue) };


      // whiteType Field Functions 
      bool hasWhiteType() const { return this->whiteType_ != nullptr;};
      void deleteWhiteType() { this->whiteType_ = nullptr;};
      inline int64_t getWhiteType() const { DARABONBA_PTR_GET_DEFAULT(whiteType_, 0L) };
      inline Whitelists& setWhiteType(int64_t whiteType) { DARABONBA_PTR_SET_VALUE(whiteType_, whiteType) };


    protected:
      // The type of the list. Valid values:
      // 
      // *   **1**: user-defined
      // *   **2**: address book
      shared_ptr<int64_t> listType_ {};
      // The entries in the list.
      shared_ptr<string> listValue_ {};
      // The instance ID of the VPC firewall.
      shared_ptr<string> vpcFirewallId_ {};
      // An array of entries in the list.
      shared_ptr<vector<string>> whiteListValue_ {};
      // The type of the whitelist. Valid values:
      // 
      // *   **1**: destination
      // *   **2**: source
      shared_ptr<int64_t> whiteType_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->whitelists_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVpcFirewallIPSWhitelistResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // whitelists Field Functions 
    bool hasWhitelists() const { return this->whitelists_ != nullptr;};
    void deleteWhitelists() { this->whitelists_ = nullptr;};
    inline const vector<DescribeVpcFirewallIPSWhitelistResponseBody::Whitelists> & getWhitelists() const { DARABONBA_PTR_GET_CONST(whitelists_, vector<DescribeVpcFirewallIPSWhitelistResponseBody::Whitelists>) };
    inline vector<DescribeVpcFirewallIPSWhitelistResponseBody::Whitelists> getWhitelists() { DARABONBA_PTR_GET(whitelists_, vector<DescribeVpcFirewallIPSWhitelistResponseBody::Whitelists>) };
    inline DescribeVpcFirewallIPSWhitelistResponseBody& setWhitelists(const vector<DescribeVpcFirewallIPSWhitelistResponseBody::Whitelists> & whitelists) { DARABONBA_PTR_SET_VALUE(whitelists_, whitelists) };
    inline DescribeVpcFirewallIPSWhitelistResponseBody& setWhitelists(vector<DescribeVpcFirewallIPSWhitelistResponseBody::Whitelists> && whitelists) { DARABONBA_PTR_SET_RVALUE(whitelists_, whitelists) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The details of the IPS whitelist of the VPC firewall.
    shared_ptr<vector<DescribeVpcFirewallIPSWhitelistResponseBody::Whitelists>> whitelists_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
