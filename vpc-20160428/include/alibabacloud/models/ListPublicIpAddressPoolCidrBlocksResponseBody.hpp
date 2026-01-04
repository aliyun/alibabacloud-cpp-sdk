// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPUBLICIPADDRESSPOOLCIDRBLOCKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPUBLICIPADDRESSPOOLCIDRBLOCKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListPublicIpAddressPoolCidrBlocksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPublicIpAddressPoolCidrBlocksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PublicIpPoolCidrBlockList, publicIpPoolCidrBlockList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListPublicIpAddressPoolCidrBlocksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PublicIpPoolCidrBlockList, publicIpPoolCidrBlockList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListPublicIpAddressPoolCidrBlocksResponseBody() = default ;
    ListPublicIpAddressPoolCidrBlocksResponseBody(const ListPublicIpAddressPoolCidrBlocksResponseBody &) = default ;
    ListPublicIpAddressPoolCidrBlocksResponseBody(ListPublicIpAddressPoolCidrBlocksResponseBody &&) = default ;
    ListPublicIpAddressPoolCidrBlocksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPublicIpAddressPoolCidrBlocksResponseBody() = default ;
    ListPublicIpAddressPoolCidrBlocksResponseBody& operator=(const ListPublicIpAddressPoolCidrBlocksResponseBody &) = default ;
    ListPublicIpAddressPoolCidrBlocksResponseBody& operator=(ListPublicIpAddressPoolCidrBlocksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PublicIpPoolCidrBlockList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PublicIpPoolCidrBlockList& obj) { 
        DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(PublicIpAddressPoolId, publicIpAddressPoolId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TotalIpNum, totalIpNum_);
        DARABONBA_PTR_TO_JSON(UsedIpNum, usedIpNum_);
      };
      friend void from_json(const Darabonba::Json& j, PublicIpPoolCidrBlockList& obj) { 
        DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(PublicIpAddressPoolId, publicIpAddressPoolId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TotalIpNum, totalIpNum_);
        DARABONBA_PTR_FROM_JSON(UsedIpNum, usedIpNum_);
      };
      PublicIpPoolCidrBlockList() = default ;
      PublicIpPoolCidrBlockList(const PublicIpPoolCidrBlockList &) = default ;
      PublicIpPoolCidrBlockList(PublicIpPoolCidrBlockList &&) = default ;
      PublicIpPoolCidrBlockList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PublicIpPoolCidrBlockList() = default ;
      PublicIpPoolCidrBlockList& operator=(const PublicIpPoolCidrBlockList &) = default ;
      PublicIpPoolCidrBlockList& operator=(PublicIpPoolCidrBlockList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cidrBlock_ == nullptr
        && this->creationTime_ == nullptr && this->publicIpAddressPoolId_ == nullptr && this->status_ == nullptr && this->totalIpNum_ == nullptr && this->usedIpNum_ == nullptr; };
      // cidrBlock Field Functions 
      bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
      void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
      inline string getCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
      inline PublicIpPoolCidrBlockList& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline PublicIpPoolCidrBlockList& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // publicIpAddressPoolId Field Functions 
      bool hasPublicIpAddressPoolId() const { return this->publicIpAddressPoolId_ != nullptr;};
      void deletePublicIpAddressPoolId() { this->publicIpAddressPoolId_ = nullptr;};
      inline string getPublicIpAddressPoolId() const { DARABONBA_PTR_GET_DEFAULT(publicIpAddressPoolId_, "") };
      inline PublicIpPoolCidrBlockList& setPublicIpAddressPoolId(string publicIpAddressPoolId) { DARABONBA_PTR_SET_VALUE(publicIpAddressPoolId_, publicIpAddressPoolId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline PublicIpPoolCidrBlockList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // totalIpNum Field Functions 
      bool hasTotalIpNum() const { return this->totalIpNum_ != nullptr;};
      void deleteTotalIpNum() { this->totalIpNum_ = nullptr;};
      inline int32_t getTotalIpNum() const { DARABONBA_PTR_GET_DEFAULT(totalIpNum_, 0) };
      inline PublicIpPoolCidrBlockList& setTotalIpNum(int32_t totalIpNum) { DARABONBA_PTR_SET_VALUE(totalIpNum_, totalIpNum) };


      // usedIpNum Field Functions 
      bool hasUsedIpNum() const { return this->usedIpNum_ != nullptr;};
      void deleteUsedIpNum() { this->usedIpNum_ = nullptr;};
      inline int32_t getUsedIpNum() const { DARABONBA_PTR_GET_DEFAULT(usedIpNum_, 0) };
      inline PublicIpPoolCidrBlockList& setUsedIpNum(int32_t usedIpNum) { DARABONBA_PTR_SET_VALUE(usedIpNum_, usedIpNum) };


    protected:
      // The ID of the IP address pool.
      shared_ptr<string> cidrBlock_ {};
      // The CIDR blocks.
      shared_ptr<string> creationTime_ {};
      // The information about the CIDR blocks.
      shared_ptr<string> publicIpAddressPoolId_ {};
      // The time when the CIDR block was created. The time is displayed in `YYYY-MM-DDThh:mm:ssZ` format.
      shared_ptr<string> status_ {};
      // The total number of available IP addresses in the CIDR block.
      shared_ptr<int32_t> totalIpNum_ {};
      // The status of the CIDR block in the IP address pool. Valid values:
      // 
      // *   **Created**: available
      // *   **Deleting**: being deleted
      // *   **Modifying**: being modified
      shared_ptr<int32_t> usedIpNum_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->publicIpPoolCidrBlockList_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListPublicIpAddressPoolCidrBlocksResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // publicIpPoolCidrBlockList Field Functions 
    bool hasPublicIpPoolCidrBlockList() const { return this->publicIpPoolCidrBlockList_ != nullptr;};
    void deletePublicIpPoolCidrBlockList() { this->publicIpPoolCidrBlockList_ = nullptr;};
    inline const vector<ListPublicIpAddressPoolCidrBlocksResponseBody::PublicIpPoolCidrBlockList> & getPublicIpPoolCidrBlockList() const { DARABONBA_PTR_GET_CONST(publicIpPoolCidrBlockList_, vector<ListPublicIpAddressPoolCidrBlocksResponseBody::PublicIpPoolCidrBlockList>) };
    inline vector<ListPublicIpAddressPoolCidrBlocksResponseBody::PublicIpPoolCidrBlockList> getPublicIpPoolCidrBlockList() { DARABONBA_PTR_GET(publicIpPoolCidrBlockList_, vector<ListPublicIpAddressPoolCidrBlocksResponseBody::PublicIpPoolCidrBlockList>) };
    inline ListPublicIpAddressPoolCidrBlocksResponseBody& setPublicIpPoolCidrBlockList(const vector<ListPublicIpAddressPoolCidrBlocksResponseBody::PublicIpPoolCidrBlockList> & publicIpPoolCidrBlockList) { DARABONBA_PTR_SET_VALUE(publicIpPoolCidrBlockList_, publicIpPoolCidrBlockList) };
    inline ListPublicIpAddressPoolCidrBlocksResponseBody& setPublicIpPoolCidrBlockList(vector<ListPublicIpAddressPoolCidrBlocksResponseBody::PublicIpPoolCidrBlockList> && publicIpPoolCidrBlockList) { DARABONBA_PTR_SET_RVALUE(publicIpPoolCidrBlockList_, publicIpPoolCidrBlockList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPublicIpAddressPoolCidrBlocksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListPublicIpAddressPoolCidrBlocksResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The token that is used for the next query. Valid values:
    // 
    // *   If **NextToken** was not returned, it indicates that no additional results exist.
    // *   If **NextToken** is returned, the value is the token that is used for the next query.
    shared_ptr<string> nextToken_ {};
    // The total number of entries returned.
    shared_ptr<vector<ListPublicIpAddressPoolCidrBlocksResponseBody::PublicIpPoolCidrBlockList>> publicIpPoolCidrBlockList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The maximum number of entries returned. Valid values: **10** to **100**. Default value: **10**.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
