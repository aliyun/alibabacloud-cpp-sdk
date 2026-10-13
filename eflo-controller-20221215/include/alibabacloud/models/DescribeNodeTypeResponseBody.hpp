// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENODETYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENODETYPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class DescribeNodeTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNodeTypeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DiskQuantity, diskQuantity_);
      DARABONBA_PTR_TO_JSON(EniHighDenseQuantity, eniHighDenseQuantity_);
      DARABONBA_PTR_TO_JSON(EniIpv6AddressQuantity, eniIpv6AddressQuantity_);
      DARABONBA_PTR_TO_JSON(EniPrivateIpAddressQuantity, eniPrivateIpAddressQuantity_);
      DARABONBA_PTR_TO_JSON(EniQuantity, eniQuantity_);
      DARABONBA_PTR_TO_JSON(EriQuantity, eriQuantity_);
      DARABONBA_PTR_TO_JSON(NetworkCardQuantity, networkCardQuantity_);
      DARABONBA_PTR_TO_JSON(NetworkCards, networkCards_);
      DARABONBA_PTR_TO_JSON(PrimaryEniQueueNumber, primaryEniQueueNumber_);
      DARABONBA_PTR_TO_JSON(QueuePairNumber, queuePairNumber_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecondaryEniQueueNumber, secondaryEniQueueNumber_);
      DARABONBA_PTR_TO_JSON(TotalEniQueueQuantity, totalEniQueueQuantity_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNodeTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DiskQuantity, diskQuantity_);
      DARABONBA_PTR_FROM_JSON(EniHighDenseQuantity, eniHighDenseQuantity_);
      DARABONBA_PTR_FROM_JSON(EniIpv6AddressQuantity, eniIpv6AddressQuantity_);
      DARABONBA_PTR_FROM_JSON(EniPrivateIpAddressQuantity, eniPrivateIpAddressQuantity_);
      DARABONBA_PTR_FROM_JSON(EniQuantity, eniQuantity_);
      DARABONBA_PTR_FROM_JSON(EriQuantity, eriQuantity_);
      DARABONBA_PTR_FROM_JSON(NetworkCardQuantity, networkCardQuantity_);
      DARABONBA_PTR_FROM_JSON(NetworkCards, networkCards_);
      DARABONBA_PTR_FROM_JSON(PrimaryEniQueueNumber, primaryEniQueueNumber_);
      DARABONBA_PTR_FROM_JSON(QueuePairNumber, queuePairNumber_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecondaryEniQueueNumber, secondaryEniQueueNumber_);
      DARABONBA_PTR_FROM_JSON(TotalEniQueueQuantity, totalEniQueueQuantity_);
    };
    DescribeNodeTypeResponseBody() = default ;
    DescribeNodeTypeResponseBody(const DescribeNodeTypeResponseBody &) = default ;
    DescribeNodeTypeResponseBody(DescribeNodeTypeResponseBody &&) = default ;
    DescribeNodeTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNodeTypeResponseBody() = default ;
    DescribeNodeTypeResponseBody& operator=(const DescribeNodeTypeResponseBody &) = default ;
    DescribeNodeTypeResponseBody& operator=(DescribeNodeTypeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NetworkCards : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NetworkCards& obj) { 
        DARABONBA_PTR_TO_JSON(NetworkCardIndex, networkCardIndex_);
      };
      friend void from_json(const Darabonba::Json& j, NetworkCards& obj) { 
        DARABONBA_PTR_FROM_JSON(NetworkCardIndex, networkCardIndex_);
      };
      NetworkCards() = default ;
      NetworkCards(const NetworkCards &) = default ;
      NetworkCards(NetworkCards &&) = default ;
      NetworkCards(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NetworkCards() = default ;
      NetworkCards& operator=(const NetworkCards &) = default ;
      NetworkCards& operator=(NetworkCards &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->networkCardIndex_ == nullptr; };
      // networkCardIndex Field Functions 
      bool hasNetworkCardIndex() const { return this->networkCardIndex_ != nullptr;};
      void deleteNetworkCardIndex() { this->networkCardIndex_ = nullptr;};
      inline int32_t getNetworkCardIndex() const { DARABONBA_PTR_GET_DEFAULT(networkCardIndex_, 0) };
      inline NetworkCards& setNetworkCardIndex(int32_t networkCardIndex) { DARABONBA_PTR_SET_VALUE(networkCardIndex_, networkCardIndex) };


    protected:
      // The index of the physical network interface controller (NIC), starting from 0. You can specify this index to attach elastic network interfaces (ENIs) to different underlying physical network interface controllers (NICs).
      shared_ptr<int32_t> networkCardIndex_ {};
    };

    virtual bool empty() const override { return this->diskQuantity_ == nullptr
        && this->eniHighDenseQuantity_ == nullptr && this->eniIpv6AddressQuantity_ == nullptr && this->eniPrivateIpAddressQuantity_ == nullptr && this->eniQuantity_ == nullptr && this->eriQuantity_ == nullptr
        && this->networkCardQuantity_ == nullptr && this->networkCards_ == nullptr && this->primaryEniQueueNumber_ == nullptr && this->queuePairNumber_ == nullptr && this->requestId_ == nullptr
        && this->secondaryEniQueueNumber_ == nullptr && this->totalEniQueueQuantity_ == nullptr; };
    // diskQuantity Field Functions 
    bool hasDiskQuantity() const { return this->diskQuantity_ != nullptr;};
    void deleteDiskQuantity() { this->diskQuantity_ = nullptr;};
    inline int32_t getDiskQuantity() const { DARABONBA_PTR_GET_DEFAULT(diskQuantity_, 0) };
    inline DescribeNodeTypeResponseBody& setDiskQuantity(int32_t diskQuantity) { DARABONBA_PTR_SET_VALUE(diskQuantity_, diskQuantity) };


    // eniHighDenseQuantity Field Functions 
    bool hasEniHighDenseQuantity() const { return this->eniHighDenseQuantity_ != nullptr;};
    void deleteEniHighDenseQuantity() { this->eniHighDenseQuantity_ = nullptr;};
    inline int32_t getEniHighDenseQuantity() const { DARABONBA_PTR_GET_DEFAULT(eniHighDenseQuantity_, 0) };
    inline DescribeNodeTypeResponseBody& setEniHighDenseQuantity(int32_t eniHighDenseQuantity) { DARABONBA_PTR_SET_VALUE(eniHighDenseQuantity_, eniHighDenseQuantity) };


    // eniIpv6AddressQuantity Field Functions 
    bool hasEniIpv6AddressQuantity() const { return this->eniIpv6AddressQuantity_ != nullptr;};
    void deleteEniIpv6AddressQuantity() { this->eniIpv6AddressQuantity_ = nullptr;};
    inline int32_t getEniIpv6AddressQuantity() const { DARABONBA_PTR_GET_DEFAULT(eniIpv6AddressQuantity_, 0) };
    inline DescribeNodeTypeResponseBody& setEniIpv6AddressQuantity(int32_t eniIpv6AddressQuantity) { DARABONBA_PTR_SET_VALUE(eniIpv6AddressQuantity_, eniIpv6AddressQuantity) };


    // eniPrivateIpAddressQuantity Field Functions 
    bool hasEniPrivateIpAddressQuantity() const { return this->eniPrivateIpAddressQuantity_ != nullptr;};
    void deleteEniPrivateIpAddressQuantity() { this->eniPrivateIpAddressQuantity_ = nullptr;};
    inline int32_t getEniPrivateIpAddressQuantity() const { DARABONBA_PTR_GET_DEFAULT(eniPrivateIpAddressQuantity_, 0) };
    inline DescribeNodeTypeResponseBody& setEniPrivateIpAddressQuantity(int32_t eniPrivateIpAddressQuantity) { DARABONBA_PTR_SET_VALUE(eniPrivateIpAddressQuantity_, eniPrivateIpAddressQuantity) };


    // eniQuantity Field Functions 
    bool hasEniQuantity() const { return this->eniQuantity_ != nullptr;};
    void deleteEniQuantity() { this->eniQuantity_ = nullptr;};
    inline int32_t getEniQuantity() const { DARABONBA_PTR_GET_DEFAULT(eniQuantity_, 0) };
    inline DescribeNodeTypeResponseBody& setEniQuantity(int32_t eniQuantity) { DARABONBA_PTR_SET_VALUE(eniQuantity_, eniQuantity) };


    // eriQuantity Field Functions 
    bool hasEriQuantity() const { return this->eriQuantity_ != nullptr;};
    void deleteEriQuantity() { this->eriQuantity_ = nullptr;};
    inline int32_t getEriQuantity() const { DARABONBA_PTR_GET_DEFAULT(eriQuantity_, 0) };
    inline DescribeNodeTypeResponseBody& setEriQuantity(int32_t eriQuantity) { DARABONBA_PTR_SET_VALUE(eriQuantity_, eriQuantity) };


    // networkCardQuantity Field Functions 
    bool hasNetworkCardQuantity() const { return this->networkCardQuantity_ != nullptr;};
    void deleteNetworkCardQuantity() { this->networkCardQuantity_ = nullptr;};
    inline int32_t getNetworkCardQuantity() const { DARABONBA_PTR_GET_DEFAULT(networkCardQuantity_, 0) };
    inline DescribeNodeTypeResponseBody& setNetworkCardQuantity(int32_t networkCardQuantity) { DARABONBA_PTR_SET_VALUE(networkCardQuantity_, networkCardQuantity) };


    // networkCards Field Functions 
    bool hasNetworkCards() const { return this->networkCards_ != nullptr;};
    void deleteNetworkCards() { this->networkCards_ = nullptr;};
    inline const vector<DescribeNodeTypeResponseBody::NetworkCards> & getNetworkCards() const { DARABONBA_PTR_GET_CONST(networkCards_, vector<DescribeNodeTypeResponseBody::NetworkCards>) };
    inline vector<DescribeNodeTypeResponseBody::NetworkCards> getNetworkCards() { DARABONBA_PTR_GET(networkCards_, vector<DescribeNodeTypeResponseBody::NetworkCards>) };
    inline DescribeNodeTypeResponseBody& setNetworkCards(const vector<DescribeNodeTypeResponseBody::NetworkCards> & networkCards) { DARABONBA_PTR_SET_VALUE(networkCards_, networkCards) };
    inline DescribeNodeTypeResponseBody& setNetworkCards(vector<DescribeNodeTypeResponseBody::NetworkCards> && networkCards) { DARABONBA_PTR_SET_RVALUE(networkCards_, networkCards) };


    // primaryEniQueueNumber Field Functions 
    bool hasPrimaryEniQueueNumber() const { return this->primaryEniQueueNumber_ != nullptr;};
    void deletePrimaryEniQueueNumber() { this->primaryEniQueueNumber_ = nullptr;};
    inline int32_t getPrimaryEniQueueNumber() const { DARABONBA_PTR_GET_DEFAULT(primaryEniQueueNumber_, 0) };
    inline DescribeNodeTypeResponseBody& setPrimaryEniQueueNumber(int32_t primaryEniQueueNumber) { DARABONBA_PTR_SET_VALUE(primaryEniQueueNumber_, primaryEniQueueNumber) };


    // queuePairNumber Field Functions 
    bool hasQueuePairNumber() const { return this->queuePairNumber_ != nullptr;};
    void deleteQueuePairNumber() { this->queuePairNumber_ = nullptr;};
    inline int32_t getQueuePairNumber() const { DARABONBA_PTR_GET_DEFAULT(queuePairNumber_, 0) };
    inline DescribeNodeTypeResponseBody& setQueuePairNumber(int32_t queuePairNumber) { DARABONBA_PTR_SET_VALUE(queuePairNumber_, queuePairNumber) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNodeTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // secondaryEniQueueNumber Field Functions 
    bool hasSecondaryEniQueueNumber() const { return this->secondaryEniQueueNumber_ != nullptr;};
    void deleteSecondaryEniQueueNumber() { this->secondaryEniQueueNumber_ = nullptr;};
    inline int32_t getSecondaryEniQueueNumber() const { DARABONBA_PTR_GET_DEFAULT(secondaryEniQueueNumber_, 0) };
    inline DescribeNodeTypeResponseBody& setSecondaryEniQueueNumber(int32_t secondaryEniQueueNumber) { DARABONBA_PTR_SET_VALUE(secondaryEniQueueNumber_, secondaryEniQueueNumber) };


    // totalEniQueueQuantity Field Functions 
    bool hasTotalEniQueueQuantity() const { return this->totalEniQueueQuantity_ != nullptr;};
    void deleteTotalEniQueueQuantity() { this->totalEniQueueQuantity_ = nullptr;};
    inline int32_t getTotalEniQueueQuantity() const { DARABONBA_PTR_GET_DEFAULT(totalEniQueueQuantity_, 0) };
    inline DescribeNodeTypeResponseBody& setTotalEniQueueQuantity(int32_t totalEniQueueQuantity) { DARABONBA_PTR_SET_VALUE(totalEniQueueQuantity_, totalEniQueueQuantity) };


  protected:
    // The maximum number of cloud disks that can be mounted.
    shared_ptr<int32_t> diskQuantity_ {};
    // The maximum number of network interface controllers (NICs) in high-density mode.
    shared_ptr<int32_t> eniHighDenseQuantity_ {};
    // The maximum number of IPv6 addresses supported by a NIC.
    shared_ptr<int32_t> eniIpv6AddressQuantity_ {};
    // The maximum number of IPv4 addresses supported by a NIC.
    shared_ptr<int32_t> eniPrivateIpAddressQuantity_ {};
    // The maximum number of elastic network interfaces (ENIs) supported, including primary and secondary ENIs.
    shared_ptr<int32_t> eniQuantity_ {};
    // The number of Elastic RDMA Interfaces (ERIs) for the current specification.
    shared_ptr<int32_t> eriQuantity_ {};
    // The number of physical network interface controllers (NICs) supported by the instance type.
    shared_ptr<int32_t> networkCardQuantity_ {};
    // The list of physical network interface controllers (NICs), including the details of each physical NIC.
    shared_ptr<vector<DescribeNodeTypeResponseBody::NetworkCards>> networkCards_ {};
    // The default number of queues for the primary NIC.
    shared_ptr<int32_t> primaryEniQueueNumber_ {};
    // The number of queue pairs (QPs) for all Elastic RDMA Interfaces (ERIs) of the current specification.
    shared_ptr<int32_t> queuePairNumber_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The default number of queues for secondary elastic network interfaces (ENIs).
    shared_ptr<int32_t> secondaryEniQueueNumber_ {};
    // The total queue quota for elastic network interface controllers (NICs) of the current specification.
    shared_ptr<int32_t> totalEniQueueQuantity_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
