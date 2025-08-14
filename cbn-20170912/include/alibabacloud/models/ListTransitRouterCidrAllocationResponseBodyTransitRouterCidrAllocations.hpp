// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSITROUTERCIDRALLOCATIONRESPONSEBODYTRANSITROUTERCIDRALLOCATIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSITROUTERCIDRALLOCATIONRESPONSEBODYTRANSITROUTERCIDRALLOCATIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListTransitRouterCidrAllocationResponseBodyTransitRouterCidrAllocations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransitRouterCidrAllocationResponseBodyTransitRouterCidrAllocations& obj) { 
      DARABONBA_PTR_TO_JSON(AllocatedCidrBlock, allocatedCidrBlock_);
      DARABONBA_PTR_TO_JSON(AttachmentId, attachmentId_);
      DARABONBA_PTR_TO_JSON(AttachmentName, attachmentName_);
      DARABONBA_PTR_TO_JSON(Cidr, cidr_);
      DARABONBA_PTR_TO_JSON(TransitRouterCidrId, transitRouterCidrId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTransitRouterCidrAllocationResponseBodyTransitRouterCidrAllocations& obj) { 
      DARABONBA_PTR_FROM_JSON(AllocatedCidrBlock, allocatedCidrBlock_);
      DARABONBA_PTR_FROM_JSON(AttachmentId, attachmentId_);
      DARABONBA_PTR_FROM_JSON(AttachmentName, attachmentName_);
      DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
      DARABONBA_PTR_FROM_JSON(TransitRouterCidrId, transitRouterCidrId_);
    };
    ListTransitRouterCidrAllocationResponseBodyTransitRouterCidrAllocations() = default ;
    ListTransitRouterCidrAllocationResponseBodyTransitRouterCidrAllocations(const ListTransitRouterCidrAllocationResponseBodyTransitRouterCidrAllocations &) = default ;
    ListTransitRouterCidrAllocationResponseBodyTransitRouterCidrAllocations(ListTransitRouterCidrAllocationResponseBodyTransitRouterCidrAllocations &&) = default ;
    ListTransitRouterCidrAllocationResponseBodyTransitRouterCidrAllocations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransitRouterCidrAllocationResponseBodyTransitRouterCidrAllocations() = default ;
    ListTransitRouterCidrAllocationResponseBodyTransitRouterCidrAllocations& operator=(const ListTransitRouterCidrAllocationResponseBodyTransitRouterCidrAllocations &) = default ;
    ListTransitRouterCidrAllocationResponseBodyTransitRouterCidrAllocations& operator=(ListTransitRouterCidrAllocationResponseBodyTransitRouterCidrAllocations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allocatedCidrBlock_ != nullptr
        && this->attachmentId_ != nullptr && this->attachmentName_ != nullptr && this->cidr_ != nullptr && this->transitRouterCidrId_ != nullptr; };
    // allocatedCidrBlock Field Functions 
    bool hasAllocatedCidrBlock() const { return this->allocatedCidrBlock_ != nullptr;};
    void deleteAllocatedCidrBlock() { this->allocatedCidrBlock_ = nullptr;};
    inline string allocatedCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(allocatedCidrBlock_, "") };
    inline ListTransitRouterCidrAllocationResponseBodyTransitRouterCidrAllocations& setAllocatedCidrBlock(string allocatedCidrBlock) { DARABONBA_PTR_SET_VALUE(allocatedCidrBlock_, allocatedCidrBlock) };


    // attachmentId Field Functions 
    bool hasAttachmentId() const { return this->attachmentId_ != nullptr;};
    void deleteAttachmentId() { this->attachmentId_ = nullptr;};
    inline string attachmentId() const { DARABONBA_PTR_GET_DEFAULT(attachmentId_, "") };
    inline ListTransitRouterCidrAllocationResponseBodyTransitRouterCidrAllocations& setAttachmentId(string attachmentId) { DARABONBA_PTR_SET_VALUE(attachmentId_, attachmentId) };


    // attachmentName Field Functions 
    bool hasAttachmentName() const { return this->attachmentName_ != nullptr;};
    void deleteAttachmentName() { this->attachmentName_ = nullptr;};
    inline string attachmentName() const { DARABONBA_PTR_GET_DEFAULT(attachmentName_, "") };
    inline ListTransitRouterCidrAllocationResponseBodyTransitRouterCidrAllocations& setAttachmentName(string attachmentName) { DARABONBA_PTR_SET_VALUE(attachmentName_, attachmentName) };


    // cidr Field Functions 
    bool hasCidr() const { return this->cidr_ != nullptr;};
    void deleteCidr() { this->cidr_ = nullptr;};
    inline string cidr() const { DARABONBA_PTR_GET_DEFAULT(cidr_, "") };
    inline ListTransitRouterCidrAllocationResponseBodyTransitRouterCidrAllocations& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


    // transitRouterCidrId Field Functions 
    bool hasTransitRouterCidrId() const { return this->transitRouterCidrId_ != nullptr;};
    void deleteTransitRouterCidrId() { this->transitRouterCidrId_ = nullptr;};
    inline string transitRouterCidrId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterCidrId_, "") };
    inline ListTransitRouterCidrAllocationResponseBodyTransitRouterCidrAllocations& setTransitRouterCidrId(string transitRouterCidrId) { DARABONBA_PTR_SET_VALUE(transitRouterCidrId_, transitRouterCidrId) };


  protected:
    // The CIDR blocks that have IP addresses allocated to network instances.
    std::shared_ptr<string> allocatedCidrBlock_ = nullptr;
    // The ID of the network instance connection.
    std::shared_ptr<string> attachmentId_ = nullptr;
    // The name of the network instance connection.
    std::shared_ptr<string> attachmentName_ = nullptr;
    // The CIDR block of the transit router.
    std::shared_ptr<string> cidr_ = nullptr;
    // The ID of the CIDR block.
    std::shared_ptr<string> transitRouterCidrId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
