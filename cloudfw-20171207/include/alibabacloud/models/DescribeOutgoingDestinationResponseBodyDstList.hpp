// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGDESTINATIONRESPONSEBODYDSTLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGDESTINATIONRESPONSEBODYDSTLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeOutgoingDestinationResponseBodyDstListTagList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeOutgoingDestinationResponseBodyDstList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOutgoingDestinationResponseBodyDstList& obj) { 
      DARABONBA_PTR_TO_JSON(AclRecommendDetail, aclRecommendDetail_);
      DARABONBA_PTR_TO_JSON(AclStatus, aclStatus_);
      DARABONBA_PTR_TO_JSON(Business, business_);
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(CategoryName, categoryName_);
      DARABONBA_PTR_TO_JSON(DstDomain, dstDomain_);
      DARABONBA_PTR_TO_JSON(DstIP, dstIP_);
      DARABONBA_PTR_TO_JSON(DstType, dstType_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(HasAclRecommend, hasAclRecommend_);
      DARABONBA_PTR_TO_JSON(InBytes, inBytes_);
      DARABONBA_PTR_TO_JSON(IsMarkNormal, isMarkNormal_);
      DARABONBA_PTR_TO_JSON(OutBytes, outBytes_);
      DARABONBA_PTR_TO_JSON(SessionCount, sessionCount_);
      DARABONBA_PTR_TO_JSON(TagList, tagList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOutgoingDestinationResponseBodyDstList& obj) { 
      DARABONBA_PTR_FROM_JSON(AclRecommendDetail, aclRecommendDetail_);
      DARABONBA_PTR_FROM_JSON(AclStatus, aclStatus_);
      DARABONBA_PTR_FROM_JSON(Business, business_);
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
      DARABONBA_PTR_FROM_JSON(DstDomain, dstDomain_);
      DARABONBA_PTR_FROM_JSON(DstIP, dstIP_);
      DARABONBA_PTR_FROM_JSON(DstType, dstType_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(HasAclRecommend, hasAclRecommend_);
      DARABONBA_PTR_FROM_JSON(InBytes, inBytes_);
      DARABONBA_PTR_FROM_JSON(IsMarkNormal, isMarkNormal_);
      DARABONBA_PTR_FROM_JSON(OutBytes, outBytes_);
      DARABONBA_PTR_FROM_JSON(SessionCount, sessionCount_);
      DARABONBA_PTR_FROM_JSON(TagList, tagList_);
    };
    DescribeOutgoingDestinationResponseBodyDstList() = default ;
    DescribeOutgoingDestinationResponseBodyDstList(const DescribeOutgoingDestinationResponseBodyDstList &) = default ;
    DescribeOutgoingDestinationResponseBodyDstList(DescribeOutgoingDestinationResponseBodyDstList &&) = default ;
    DescribeOutgoingDestinationResponseBodyDstList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOutgoingDestinationResponseBodyDstList() = default ;
    DescribeOutgoingDestinationResponseBodyDstList& operator=(const DescribeOutgoingDestinationResponseBodyDstList &) = default ;
    DescribeOutgoingDestinationResponseBodyDstList& operator=(DescribeOutgoingDestinationResponseBodyDstList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclRecommendDetail_ == nullptr
        && return this->aclStatus_ == nullptr && return this->business_ == nullptr && return this->categoryId_ == nullptr && return this->categoryName_ == nullptr && return this->dstDomain_ == nullptr
        && return this->dstIP_ == nullptr && return this->dstType_ == nullptr && return this->groupName_ == nullptr && return this->hasAclRecommend_ == nullptr && return this->inBytes_ == nullptr
        && return this->isMarkNormal_ == nullptr && return this->outBytes_ == nullptr && return this->sessionCount_ == nullptr && return this->tagList_ == nullptr; };
    // aclRecommendDetail Field Functions 
    bool hasAclRecommendDetail() const { return this->aclRecommendDetail_ != nullptr;};
    void deleteAclRecommendDetail() { this->aclRecommendDetail_ = nullptr;};
    inline string aclRecommendDetail() const { DARABONBA_PTR_GET_DEFAULT(aclRecommendDetail_, "") };
    inline DescribeOutgoingDestinationResponseBodyDstList& setAclRecommendDetail(string aclRecommendDetail) { DARABONBA_PTR_SET_VALUE(aclRecommendDetail_, aclRecommendDetail) };


    // aclStatus Field Functions 
    bool hasAclStatus() const { return this->aclStatus_ != nullptr;};
    void deleteAclStatus() { this->aclStatus_ = nullptr;};
    inline string aclStatus() const { DARABONBA_PTR_GET_DEFAULT(aclStatus_, "") };
    inline DescribeOutgoingDestinationResponseBodyDstList& setAclStatus(string aclStatus) { DARABONBA_PTR_SET_VALUE(aclStatus_, aclStatus) };


    // business Field Functions 
    bool hasBusiness() const { return this->business_ != nullptr;};
    void deleteBusiness() { this->business_ = nullptr;};
    inline string business() const { DARABONBA_PTR_GET_DEFAULT(business_, "") };
    inline DescribeOutgoingDestinationResponseBodyDstList& setBusiness(string business) { DARABONBA_PTR_SET_VALUE(business_, business) };


    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline string categoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, "") };
    inline DescribeOutgoingDestinationResponseBodyDstList& setCategoryId(string categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // categoryName Field Functions 
    bool hasCategoryName() const { return this->categoryName_ != nullptr;};
    void deleteCategoryName() { this->categoryName_ = nullptr;};
    inline string categoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
    inline DescribeOutgoingDestinationResponseBodyDstList& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


    // dstDomain Field Functions 
    bool hasDstDomain() const { return this->dstDomain_ != nullptr;};
    void deleteDstDomain() { this->dstDomain_ = nullptr;};
    inline string dstDomain() const { DARABONBA_PTR_GET_DEFAULT(dstDomain_, "") };
    inline DescribeOutgoingDestinationResponseBodyDstList& setDstDomain(string dstDomain) { DARABONBA_PTR_SET_VALUE(dstDomain_, dstDomain) };


    // dstIP Field Functions 
    bool hasDstIP() const { return this->dstIP_ != nullptr;};
    void deleteDstIP() { this->dstIP_ = nullptr;};
    inline string dstIP() const { DARABONBA_PTR_GET_DEFAULT(dstIP_, "") };
    inline DescribeOutgoingDestinationResponseBodyDstList& setDstIP(string dstIP) { DARABONBA_PTR_SET_VALUE(dstIP_, dstIP) };


    // dstType Field Functions 
    bool hasDstType() const { return this->dstType_ != nullptr;};
    void deleteDstType() { this->dstType_ = nullptr;};
    inline string dstType() const { DARABONBA_PTR_GET_DEFAULT(dstType_, "") };
    inline DescribeOutgoingDestinationResponseBodyDstList& setDstType(string dstType) { DARABONBA_PTR_SET_VALUE(dstType_, dstType) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeOutgoingDestinationResponseBodyDstList& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // hasAclRecommend Field Functions 
    bool hasHasAclRecommend() const { return this->hasAclRecommend_ != nullptr;};
    void deleteHasAclRecommend() { this->hasAclRecommend_ = nullptr;};
    inline bool hasAclRecommend() const { DARABONBA_PTR_GET_DEFAULT(hasAclRecommend_, false) };
    inline DescribeOutgoingDestinationResponseBodyDstList& setHasAclRecommend(bool hasAclRecommend) { DARABONBA_PTR_SET_VALUE(hasAclRecommend_, hasAclRecommend) };


    // inBytes Field Functions 
    bool hasInBytes() const { return this->inBytes_ != nullptr;};
    void deleteInBytes() { this->inBytes_ = nullptr;};
    inline int64_t inBytes() const { DARABONBA_PTR_GET_DEFAULT(inBytes_, 0L) };
    inline DescribeOutgoingDestinationResponseBodyDstList& setInBytes(int64_t inBytes) { DARABONBA_PTR_SET_VALUE(inBytes_, inBytes) };


    // isMarkNormal Field Functions 
    bool hasIsMarkNormal() const { return this->isMarkNormal_ != nullptr;};
    void deleteIsMarkNormal() { this->isMarkNormal_ = nullptr;};
    inline bool isMarkNormal() const { DARABONBA_PTR_GET_DEFAULT(isMarkNormal_, false) };
    inline DescribeOutgoingDestinationResponseBodyDstList& setIsMarkNormal(bool isMarkNormal) { DARABONBA_PTR_SET_VALUE(isMarkNormal_, isMarkNormal) };


    // outBytes Field Functions 
    bool hasOutBytes() const { return this->outBytes_ != nullptr;};
    void deleteOutBytes() { this->outBytes_ = nullptr;};
    inline int64_t outBytes() const { DARABONBA_PTR_GET_DEFAULT(outBytes_, 0L) };
    inline DescribeOutgoingDestinationResponseBodyDstList& setOutBytes(int64_t outBytes) { DARABONBA_PTR_SET_VALUE(outBytes_, outBytes) };


    // sessionCount Field Functions 
    bool hasSessionCount() const { return this->sessionCount_ != nullptr;};
    void deleteSessionCount() { this->sessionCount_ = nullptr;};
    inline int64_t sessionCount() const { DARABONBA_PTR_GET_DEFAULT(sessionCount_, 0L) };
    inline DescribeOutgoingDestinationResponseBodyDstList& setSessionCount(int64_t sessionCount) { DARABONBA_PTR_SET_VALUE(sessionCount_, sessionCount) };


    // tagList Field Functions 
    bool hasTagList() const { return this->tagList_ != nullptr;};
    void deleteTagList() { this->tagList_ = nullptr;};
    inline const vector<Models::DescribeOutgoingDestinationResponseBodyDstListTagList> & tagList() const { DARABONBA_PTR_GET_CONST(tagList_, vector<Models::DescribeOutgoingDestinationResponseBodyDstListTagList>) };
    inline vector<Models::DescribeOutgoingDestinationResponseBodyDstListTagList> tagList() { DARABONBA_PTR_GET(tagList_, vector<Models::DescribeOutgoingDestinationResponseBodyDstListTagList>) };
    inline DescribeOutgoingDestinationResponseBodyDstList& setTagList(const vector<Models::DescribeOutgoingDestinationResponseBodyDstListTagList> & tagList) { DARABONBA_PTR_SET_VALUE(tagList_, tagList) };
    inline DescribeOutgoingDestinationResponseBodyDstList& setTagList(vector<Models::DescribeOutgoingDestinationResponseBodyDstListTagList> && tagList) { DARABONBA_PTR_SET_RVALUE(tagList_, tagList) };


  protected:
    std::shared_ptr<string> aclRecommendDetail_ = nullptr;
    std::shared_ptr<string> aclStatus_ = nullptr;
    std::shared_ptr<string> business_ = nullptr;
    std::shared_ptr<string> categoryId_ = nullptr;
    std::shared_ptr<string> categoryName_ = nullptr;
    std::shared_ptr<string> dstDomain_ = nullptr;
    std::shared_ptr<string> dstIP_ = nullptr;
    std::shared_ptr<string> dstType_ = nullptr;
    std::shared_ptr<string> groupName_ = nullptr;
    std::shared_ptr<bool> hasAclRecommend_ = nullptr;
    std::shared_ptr<int64_t> inBytes_ = nullptr;
    std::shared_ptr<bool> isMarkNormal_ = nullptr;
    std::shared_ptr<int64_t> outBytes_ = nullptr;
    std::shared_ptr<int64_t> sessionCount_ = nullptr;
    std::shared_ptr<vector<Models::DescribeOutgoingDestinationResponseBodyDstListTagList>> tagList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
