// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDBLOCKSTORAGECLUSTERDISKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDBLOCKSTORAGECLUSTERDISKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDedicatedBlockStorageClusterDisksResponseBodyDisks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class DescribeDedicatedBlockStorageClusterDisksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDedicatedBlockStorageClusterDisksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Disks, disks_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDedicatedBlockStorageClusterDisksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Disks, disks_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDedicatedBlockStorageClusterDisksResponseBody() = default ;
    DescribeDedicatedBlockStorageClusterDisksResponseBody(const DescribeDedicatedBlockStorageClusterDisksResponseBody &) = default ;
    DescribeDedicatedBlockStorageClusterDisksResponseBody(DescribeDedicatedBlockStorageClusterDisksResponseBody &&) = default ;
    DescribeDedicatedBlockStorageClusterDisksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDedicatedBlockStorageClusterDisksResponseBody() = default ;
    DescribeDedicatedBlockStorageClusterDisksResponseBody& operator=(const DescribeDedicatedBlockStorageClusterDisksResponseBody &) = default ;
    DescribeDedicatedBlockStorageClusterDisksResponseBody& operator=(DescribeDedicatedBlockStorageClusterDisksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->disks_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr; };
    // disks Field Functions 
    bool hasDisks() const { return this->disks_ != nullptr;};
    void deleteDisks() { this->disks_ = nullptr;};
    inline const DescribeDedicatedBlockStorageClusterDisksResponseBodyDisks & disks() const { DARABONBA_PTR_GET_CONST(disks_, DescribeDedicatedBlockStorageClusterDisksResponseBodyDisks) };
    inline DescribeDedicatedBlockStorageClusterDisksResponseBodyDisks disks() { DARABONBA_PTR_GET(disks_, DescribeDedicatedBlockStorageClusterDisksResponseBodyDisks) };
    inline DescribeDedicatedBlockStorageClusterDisksResponseBody& setDisks(const DescribeDedicatedBlockStorageClusterDisksResponseBodyDisks & disks) { DARABONBA_PTR_SET_VALUE(disks_, disks) };
    inline DescribeDedicatedBlockStorageClusterDisksResponseBody& setDisks(DescribeDedicatedBlockStorageClusterDisksResponseBodyDisks && disks) { DARABONBA_PTR_SET_RVALUE(disks_, disks) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeDedicatedBlockStorageClusterDisksResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDedicatedBlockStorageClusterDisksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details about the cloud disks.
    std::shared_ptr<DescribeDedicatedBlockStorageClusterDisksResponseBodyDisks> disks_ = nullptr;
    // The query token returned in this call.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
