// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPADDRESSESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPADDRESSESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeIpAddressesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIpAddressesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IpAddresses, ipAddresses_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIpAddressesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IpAddresses, ipAddresses_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeIpAddressesResponseBody() = default ;
    DescribeIpAddressesResponseBody(const DescribeIpAddressesResponseBody &) = default ;
    DescribeIpAddressesResponseBody(DescribeIpAddressesResponseBody &&) = default ;
    DescribeIpAddressesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIpAddressesResponseBody() = default ;
    DescribeIpAddressesResponseBody& operator=(const DescribeIpAddressesResponseBody &) = default ;
    DescribeIpAddressesResponseBody& operator=(DescribeIpAddressesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IpAddresses : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IpAddresses& obj) { 
        DARABONBA_PTR_TO_JSON(CreateByWuying, createByWuying_);
        DARABONBA_PTR_TO_JSON(EipAddress, eipAddress_);
        DARABONBA_PTR_TO_JSON(EipId, eipId_);
        DARABONBA_PTR_TO_JSON(EipStatus, eipStatus_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      };
      friend void from_json(const Darabonba::Json& j, IpAddresses& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateByWuying, createByWuying_);
        DARABONBA_PTR_FROM_JSON(EipAddress, eipAddress_);
        DARABONBA_PTR_FROM_JSON(EipId, eipId_);
        DARABONBA_PTR_FROM_JSON(EipStatus, eipStatus_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      };
      IpAddresses() = default ;
      IpAddresses(const IpAddresses &) = default ;
      IpAddresses(IpAddresses &&) = default ;
      IpAddresses(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IpAddresses() = default ;
      IpAddresses& operator=(const IpAddresses &) = default ;
      IpAddresses& operator=(IpAddresses &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createByWuying_ == nullptr
        && this->eipAddress_ == nullptr && this->eipId_ == nullptr && this->eipStatus_ == nullptr && this->instanceId_ == nullptr && this->instanceType_ == nullptr; };
      // createByWuying Field Functions 
      bool hasCreateByWuying() const { return this->createByWuying_ != nullptr;};
      void deleteCreateByWuying() { this->createByWuying_ = nullptr;};
      inline bool getCreateByWuying() const { DARABONBA_PTR_GET_DEFAULT(createByWuying_, false) };
      inline IpAddresses& setCreateByWuying(bool createByWuying) { DARABONBA_PTR_SET_VALUE(createByWuying_, createByWuying) };


      // eipAddress Field Functions 
      bool hasEipAddress() const { return this->eipAddress_ != nullptr;};
      void deleteEipAddress() { this->eipAddress_ = nullptr;};
      inline string getEipAddress() const { DARABONBA_PTR_GET_DEFAULT(eipAddress_, "") };
      inline IpAddresses& setEipAddress(string eipAddress) { DARABONBA_PTR_SET_VALUE(eipAddress_, eipAddress) };


      // eipId Field Functions 
      bool hasEipId() const { return this->eipId_ != nullptr;};
      void deleteEipId() { this->eipId_ = nullptr;};
      inline string getEipId() const { DARABONBA_PTR_GET_DEFAULT(eipId_, "") };
      inline IpAddresses& setEipId(string eipId) { DARABONBA_PTR_SET_VALUE(eipId_, eipId) };


      // eipStatus Field Functions 
      bool hasEipStatus() const { return this->eipStatus_ != nullptr;};
      void deleteEipStatus() { this->eipStatus_ = nullptr;};
      inline string getEipStatus() const { DARABONBA_PTR_GET_DEFAULT(eipStatus_, "") };
      inline IpAddresses& setEipStatus(string eipStatus) { DARABONBA_PTR_SET_VALUE(eipStatus_, eipStatus) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline IpAddresses& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline IpAddresses& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    protected:
      shared_ptr<bool> createByWuying_ {};
      shared_ptr<string> eipAddress_ {};
      shared_ptr<string> eipId_ {};
      shared_ptr<string> eipStatus_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> instanceType_ {};
    };

    virtual bool empty() const override { return this->ipAddresses_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // ipAddresses Field Functions 
    bool hasIpAddresses() const { return this->ipAddresses_ != nullptr;};
    void deleteIpAddresses() { this->ipAddresses_ = nullptr;};
    inline const vector<DescribeIpAddressesResponseBody::IpAddresses> & getIpAddresses() const { DARABONBA_PTR_GET_CONST(ipAddresses_, vector<DescribeIpAddressesResponseBody::IpAddresses>) };
    inline vector<DescribeIpAddressesResponseBody::IpAddresses> getIpAddresses() { DARABONBA_PTR_GET(ipAddresses_, vector<DescribeIpAddressesResponseBody::IpAddresses>) };
    inline DescribeIpAddressesResponseBody& setIpAddresses(const vector<DescribeIpAddressesResponseBody::IpAddresses> & ipAddresses) { DARABONBA_PTR_SET_VALUE(ipAddresses_, ipAddresses) };
    inline DescribeIpAddressesResponseBody& setIpAddresses(vector<DescribeIpAddressesResponseBody::IpAddresses> && ipAddresses) { DARABONBA_PTR_SET_RVALUE(ipAddresses_, ipAddresses) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeIpAddressesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeIpAddressesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeIpAddressesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeIpAddressesResponseBody::IpAddresses>> ipAddresses_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
