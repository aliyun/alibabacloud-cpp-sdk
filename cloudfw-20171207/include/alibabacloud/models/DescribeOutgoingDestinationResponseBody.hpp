// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGDESTINATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGDESTINATIONRESPONSEBODY_HPP_
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
  class DescribeOutgoingDestinationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOutgoingDestinationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DstList, dstList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOutgoingDestinationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DstList, dstList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeOutgoingDestinationResponseBody() = default ;
    DescribeOutgoingDestinationResponseBody(const DescribeOutgoingDestinationResponseBody &) = default ;
    DescribeOutgoingDestinationResponseBody(DescribeOutgoingDestinationResponseBody &&) = default ;
    DescribeOutgoingDestinationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOutgoingDestinationResponseBody() = default ;
    DescribeOutgoingDestinationResponseBody& operator=(const DescribeOutgoingDestinationResponseBody &) = default ;
    DescribeOutgoingDestinationResponseBody& operator=(DescribeOutgoingDestinationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DstList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DstList& obj) { 
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
      friend void from_json(const Darabonba::Json& j, DstList& obj) { 
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
      DstList() = default ;
      DstList(const DstList &) = default ;
      DstList(DstList &&) = default ;
      DstList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DstList() = default ;
      DstList& operator=(const DstList &) = default ;
      DstList& operator=(DstList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TagList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TagList& obj) { 
          DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
          DARABONBA_PTR_TO_JSON(TagDescribe, tagDescribe_);
          DARABONBA_PTR_TO_JSON(TagId, tagId_);
          DARABONBA_PTR_TO_JSON(TagName, tagName_);
        };
        friend void from_json(const Darabonba::Json& j, TagList& obj) { 
          DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
          DARABONBA_PTR_FROM_JSON(TagDescribe, tagDescribe_);
          DARABONBA_PTR_FROM_JSON(TagId, tagId_);
          DARABONBA_PTR_FROM_JSON(TagName, tagName_);
        };
        TagList() = default ;
        TagList(const TagList &) = default ;
        TagList(TagList &&) = default ;
        TagList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TagList() = default ;
        TagList& operator=(const TagList &) = default ;
        TagList& operator=(TagList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->riskLevel_ == nullptr
        && this->tagDescribe_ == nullptr && this->tagId_ == nullptr && this->tagName_ == nullptr; };
        // riskLevel Field Functions 
        bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
        void deleteRiskLevel() { this->riskLevel_ = nullptr;};
        inline int32_t getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, 0) };
        inline TagList& setRiskLevel(int32_t riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


        // tagDescribe Field Functions 
        bool hasTagDescribe() const { return this->tagDescribe_ != nullptr;};
        void deleteTagDescribe() { this->tagDescribe_ = nullptr;};
        inline string getTagDescribe() const { DARABONBA_PTR_GET_DEFAULT(tagDescribe_, "") };
        inline TagList& setTagDescribe(string tagDescribe) { DARABONBA_PTR_SET_VALUE(tagDescribe_, tagDescribe) };


        // tagId Field Functions 
        bool hasTagId() const { return this->tagId_ != nullptr;};
        void deleteTagId() { this->tagId_ = nullptr;};
        inline string getTagId() const { DARABONBA_PTR_GET_DEFAULT(tagId_, "") };
        inline TagList& setTagId(string tagId) { DARABONBA_PTR_SET_VALUE(tagId_, tagId) };


        // tagName Field Functions 
        bool hasTagName() const { return this->tagName_ != nullptr;};
        void deleteTagName() { this->tagName_ = nullptr;};
        inline string getTagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
        inline TagList& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


      protected:
        shared_ptr<int32_t> riskLevel_ {};
        shared_ptr<string> tagDescribe_ {};
        shared_ptr<string> tagId_ {};
        shared_ptr<string> tagName_ {};
      };

      virtual bool empty() const override { return this->aclRecommendDetail_ == nullptr
        && this->aclStatus_ == nullptr && this->business_ == nullptr && this->categoryId_ == nullptr && this->categoryName_ == nullptr && this->dstDomain_ == nullptr
        && this->dstIP_ == nullptr && this->dstType_ == nullptr && this->groupName_ == nullptr && this->hasAclRecommend_ == nullptr && this->inBytes_ == nullptr
        && this->isMarkNormal_ == nullptr && this->outBytes_ == nullptr && this->sessionCount_ == nullptr && this->tagList_ == nullptr; };
      // aclRecommendDetail Field Functions 
      bool hasAclRecommendDetail() const { return this->aclRecommendDetail_ != nullptr;};
      void deleteAclRecommendDetail() { this->aclRecommendDetail_ = nullptr;};
      inline string getAclRecommendDetail() const { DARABONBA_PTR_GET_DEFAULT(aclRecommendDetail_, "") };
      inline DstList& setAclRecommendDetail(string aclRecommendDetail) { DARABONBA_PTR_SET_VALUE(aclRecommendDetail_, aclRecommendDetail) };


      // aclStatus Field Functions 
      bool hasAclStatus() const { return this->aclStatus_ != nullptr;};
      void deleteAclStatus() { this->aclStatus_ = nullptr;};
      inline string getAclStatus() const { DARABONBA_PTR_GET_DEFAULT(aclStatus_, "") };
      inline DstList& setAclStatus(string aclStatus) { DARABONBA_PTR_SET_VALUE(aclStatus_, aclStatus) };


      // business Field Functions 
      bool hasBusiness() const { return this->business_ != nullptr;};
      void deleteBusiness() { this->business_ = nullptr;};
      inline string getBusiness() const { DARABONBA_PTR_GET_DEFAULT(business_, "") };
      inline DstList& setBusiness(string business) { DARABONBA_PTR_SET_VALUE(business_, business) };


      // categoryId Field Functions 
      bool hasCategoryId() const { return this->categoryId_ != nullptr;};
      void deleteCategoryId() { this->categoryId_ = nullptr;};
      inline string getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, "") };
      inline DstList& setCategoryId(string categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


      // categoryName Field Functions 
      bool hasCategoryName() const { return this->categoryName_ != nullptr;};
      void deleteCategoryName() { this->categoryName_ = nullptr;};
      inline string getCategoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
      inline DstList& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


      // dstDomain Field Functions 
      bool hasDstDomain() const { return this->dstDomain_ != nullptr;};
      void deleteDstDomain() { this->dstDomain_ = nullptr;};
      inline string getDstDomain() const { DARABONBA_PTR_GET_DEFAULT(dstDomain_, "") };
      inline DstList& setDstDomain(string dstDomain) { DARABONBA_PTR_SET_VALUE(dstDomain_, dstDomain) };


      // dstIP Field Functions 
      bool hasDstIP() const { return this->dstIP_ != nullptr;};
      void deleteDstIP() { this->dstIP_ = nullptr;};
      inline string getDstIP() const { DARABONBA_PTR_GET_DEFAULT(dstIP_, "") };
      inline DstList& setDstIP(string dstIP) { DARABONBA_PTR_SET_VALUE(dstIP_, dstIP) };


      // dstType Field Functions 
      bool hasDstType() const { return this->dstType_ != nullptr;};
      void deleteDstType() { this->dstType_ = nullptr;};
      inline string getDstType() const { DARABONBA_PTR_GET_DEFAULT(dstType_, "") };
      inline DstList& setDstType(string dstType) { DARABONBA_PTR_SET_VALUE(dstType_, dstType) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline DstList& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // hasAclRecommend Field Functions 
      bool hasHasAclRecommend() const { return this->hasAclRecommend_ != nullptr;};
      void deleteHasAclRecommend() { this->hasAclRecommend_ = nullptr;};
      inline bool getHasAclRecommend() const { DARABONBA_PTR_GET_DEFAULT(hasAclRecommend_, false) };
      inline DstList& setHasAclRecommend(bool hasAclRecommend) { DARABONBA_PTR_SET_VALUE(hasAclRecommend_, hasAclRecommend) };


      // inBytes Field Functions 
      bool hasInBytes() const { return this->inBytes_ != nullptr;};
      void deleteInBytes() { this->inBytes_ = nullptr;};
      inline int64_t getInBytes() const { DARABONBA_PTR_GET_DEFAULT(inBytes_, 0L) };
      inline DstList& setInBytes(int64_t inBytes) { DARABONBA_PTR_SET_VALUE(inBytes_, inBytes) };


      // isMarkNormal Field Functions 
      bool hasIsMarkNormal() const { return this->isMarkNormal_ != nullptr;};
      void deleteIsMarkNormal() { this->isMarkNormal_ = nullptr;};
      inline bool getIsMarkNormal() const { DARABONBA_PTR_GET_DEFAULT(isMarkNormal_, false) };
      inline DstList& setIsMarkNormal(bool isMarkNormal) { DARABONBA_PTR_SET_VALUE(isMarkNormal_, isMarkNormal) };


      // outBytes Field Functions 
      bool hasOutBytes() const { return this->outBytes_ != nullptr;};
      void deleteOutBytes() { this->outBytes_ = nullptr;};
      inline int64_t getOutBytes() const { DARABONBA_PTR_GET_DEFAULT(outBytes_, 0L) };
      inline DstList& setOutBytes(int64_t outBytes) { DARABONBA_PTR_SET_VALUE(outBytes_, outBytes) };


      // sessionCount Field Functions 
      bool hasSessionCount() const { return this->sessionCount_ != nullptr;};
      void deleteSessionCount() { this->sessionCount_ = nullptr;};
      inline int64_t getSessionCount() const { DARABONBA_PTR_GET_DEFAULT(sessionCount_, 0L) };
      inline DstList& setSessionCount(int64_t sessionCount) { DARABONBA_PTR_SET_VALUE(sessionCount_, sessionCount) };


      // tagList Field Functions 
      bool hasTagList() const { return this->tagList_ != nullptr;};
      void deleteTagList() { this->tagList_ = nullptr;};
      inline const vector<DstList::TagList> & getTagList() const { DARABONBA_PTR_GET_CONST(tagList_, vector<DstList::TagList>) };
      inline vector<DstList::TagList> getTagList() { DARABONBA_PTR_GET(tagList_, vector<DstList::TagList>) };
      inline DstList& setTagList(const vector<DstList::TagList> & tagList) { DARABONBA_PTR_SET_VALUE(tagList_, tagList) };
      inline DstList& setTagList(vector<DstList::TagList> && tagList) { DARABONBA_PTR_SET_RVALUE(tagList_, tagList) };


    protected:
      shared_ptr<string> aclRecommendDetail_ {};
      shared_ptr<string> aclStatus_ {};
      shared_ptr<string> business_ {};
      shared_ptr<string> categoryId_ {};
      shared_ptr<string> categoryName_ {};
      shared_ptr<string> dstDomain_ {};
      shared_ptr<string> dstIP_ {};
      shared_ptr<string> dstType_ {};
      shared_ptr<string> groupName_ {};
      shared_ptr<bool> hasAclRecommend_ {};
      shared_ptr<int64_t> inBytes_ {};
      shared_ptr<bool> isMarkNormal_ {};
      shared_ptr<int64_t> outBytes_ {};
      shared_ptr<int64_t> sessionCount_ {};
      shared_ptr<vector<DstList::TagList>> tagList_ {};
    };

    virtual bool empty() const override { return this->dstList_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // dstList Field Functions 
    bool hasDstList() const { return this->dstList_ != nullptr;};
    void deleteDstList() { this->dstList_ = nullptr;};
    inline const vector<DescribeOutgoingDestinationResponseBody::DstList> & getDstList() const { DARABONBA_PTR_GET_CONST(dstList_, vector<DescribeOutgoingDestinationResponseBody::DstList>) };
    inline vector<DescribeOutgoingDestinationResponseBody::DstList> getDstList() { DARABONBA_PTR_GET(dstList_, vector<DescribeOutgoingDestinationResponseBody::DstList>) };
    inline DescribeOutgoingDestinationResponseBody& setDstList(const vector<DescribeOutgoingDestinationResponseBody::DstList> & dstList) { DARABONBA_PTR_SET_VALUE(dstList_, dstList) };
    inline DescribeOutgoingDestinationResponseBody& setDstList(vector<DescribeOutgoingDestinationResponseBody::DstList> && dstList) { DARABONBA_PTR_SET_RVALUE(dstList_, dstList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeOutgoingDestinationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeOutgoingDestinationResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<DescribeOutgoingDestinationResponseBody::DstList>> dstList_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
