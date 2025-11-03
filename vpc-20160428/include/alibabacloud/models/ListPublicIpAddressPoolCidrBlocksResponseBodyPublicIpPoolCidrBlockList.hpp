// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPUBLICIPADDRESSPOOLCIDRBLOCKSRESPONSEBODYPUBLICIPPOOLCIDRBLOCKLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTPUBLICIPADDRESSPOOLCIDRBLOCKSRESPONSEBODYPUBLICIPPOOLCIDRBLOCKLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListPublicIpAddressPoolCidrBlocksResponseBodyPublicIpPoolCidrBlockList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPublicIpAddressPoolCidrBlocksResponseBodyPublicIpPoolCidrBlockList& obj) { 
      DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(PublicIpAddressPoolId, publicIpAddressPoolId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TotalIpNum, totalIpNum_);
      DARABONBA_PTR_TO_JSON(UsedIpNum, usedIpNum_);
    };
    friend void from_json(const Darabonba::Json& j, ListPublicIpAddressPoolCidrBlocksResponseBodyPublicIpPoolCidrBlockList& obj) { 
      DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(PublicIpAddressPoolId, publicIpAddressPoolId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TotalIpNum, totalIpNum_);
      DARABONBA_PTR_FROM_JSON(UsedIpNum, usedIpNum_);
    };
    ListPublicIpAddressPoolCidrBlocksResponseBodyPublicIpPoolCidrBlockList() = default ;
    ListPublicIpAddressPoolCidrBlocksResponseBodyPublicIpPoolCidrBlockList(const ListPublicIpAddressPoolCidrBlocksResponseBodyPublicIpPoolCidrBlockList &) = default ;
    ListPublicIpAddressPoolCidrBlocksResponseBodyPublicIpPoolCidrBlockList(ListPublicIpAddressPoolCidrBlocksResponseBodyPublicIpPoolCidrBlockList &&) = default ;
    ListPublicIpAddressPoolCidrBlocksResponseBodyPublicIpPoolCidrBlockList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPublicIpAddressPoolCidrBlocksResponseBodyPublicIpPoolCidrBlockList() = default ;
    ListPublicIpAddressPoolCidrBlocksResponseBodyPublicIpPoolCidrBlockList& operator=(const ListPublicIpAddressPoolCidrBlocksResponseBodyPublicIpPoolCidrBlockList &) = default ;
    ListPublicIpAddressPoolCidrBlocksResponseBodyPublicIpPoolCidrBlockList& operator=(ListPublicIpAddressPoolCidrBlocksResponseBodyPublicIpPoolCidrBlockList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cidrBlock_ == nullptr
        && return this->creationTime_ == nullptr && return this->publicIpAddressPoolId_ == nullptr && return this->status_ == nullptr && return this->totalIpNum_ == nullptr && return this->usedIpNum_ == nullptr; };
    // cidrBlock Field Functions 
    bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
    void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
    inline string cidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
    inline ListPublicIpAddressPoolCidrBlocksResponseBodyPublicIpPoolCidrBlockList& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline ListPublicIpAddressPoolCidrBlocksResponseBodyPublicIpPoolCidrBlockList& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // publicIpAddressPoolId Field Functions 
    bool hasPublicIpAddressPoolId() const { return this->publicIpAddressPoolId_ != nullptr;};
    void deletePublicIpAddressPoolId() { this->publicIpAddressPoolId_ = nullptr;};
    inline string publicIpAddressPoolId() const { DARABONBA_PTR_GET_DEFAULT(publicIpAddressPoolId_, "") };
    inline ListPublicIpAddressPoolCidrBlocksResponseBodyPublicIpPoolCidrBlockList& setPublicIpAddressPoolId(string publicIpAddressPoolId) { DARABONBA_PTR_SET_VALUE(publicIpAddressPoolId_, publicIpAddressPoolId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListPublicIpAddressPoolCidrBlocksResponseBodyPublicIpPoolCidrBlockList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // totalIpNum Field Functions 
    bool hasTotalIpNum() const { return this->totalIpNum_ != nullptr;};
    void deleteTotalIpNum() { this->totalIpNum_ = nullptr;};
    inline int32_t totalIpNum() const { DARABONBA_PTR_GET_DEFAULT(totalIpNum_, 0) };
    inline ListPublicIpAddressPoolCidrBlocksResponseBodyPublicIpPoolCidrBlockList& setTotalIpNum(int32_t totalIpNum) { DARABONBA_PTR_SET_VALUE(totalIpNum_, totalIpNum) };


    // usedIpNum Field Functions 
    bool hasUsedIpNum() const { return this->usedIpNum_ != nullptr;};
    void deleteUsedIpNum() { this->usedIpNum_ = nullptr;};
    inline int32_t usedIpNum() const { DARABONBA_PTR_GET_DEFAULT(usedIpNum_, 0) };
    inline ListPublicIpAddressPoolCidrBlocksResponseBodyPublicIpPoolCidrBlockList& setUsedIpNum(int32_t usedIpNum) { DARABONBA_PTR_SET_VALUE(usedIpNum_, usedIpNum) };


  protected:
    // The ID of the IP address pool.
    std::shared_ptr<string> cidrBlock_ = nullptr;
    // The CIDR blocks.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The information about the CIDR blocks.
    std::shared_ptr<string> publicIpAddressPoolId_ = nullptr;
    // The time when the CIDR block was created. The time is displayed in `YYYY-MM-DDThh:mm:ssZ` format.
    std::shared_ptr<string> status_ = nullptr;
    // The total number of available IP addresses in the CIDR block.
    std::shared_ptr<int32_t> totalIpNum_ = nullptr;
    // The status of the CIDR block in the IP address pool. Valid values:
    // 
    // *   **Created**: available
    // *   **Deleting**: being deleted
    // *   **Modifying**: being modified
    std::shared_ptr<int32_t> usedIpNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
