// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGTAGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGTAGRESPONSEBODY_HPP_
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
  class DescribeOutgoingTagResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOutgoingTagResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TagList, tagList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOutgoingTagResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TagList, tagList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeOutgoingTagResponseBody() = default ;
    DescribeOutgoingTagResponseBody(const DescribeOutgoingTagResponseBody &) = default ;
    DescribeOutgoingTagResponseBody(DescribeOutgoingTagResponseBody &&) = default ;
    DescribeOutgoingTagResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOutgoingTagResponseBody() = default ;
    DescribeOutgoingTagResponseBody& operator=(const DescribeOutgoingTagResponseBody &) = default ;
    DescribeOutgoingTagResponseBody& operator=(DescribeOutgoingTagResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TagList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TagList& obj) { 
        DARABONBA_PTR_TO_JSON(ClassId, classId_);
        DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_TO_JSON(TagDescribe, tagDescribe_);
        DARABONBA_PTR_TO_JSON(TagId, tagId_);
        DARABONBA_PTR_TO_JSON(TagName, tagName_);
      };
      friend void from_json(const Darabonba::Json& j, TagList& obj) { 
        DARABONBA_PTR_FROM_JSON(ClassId, classId_);
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
      virtual bool empty() const override { return this->classId_ == nullptr
        && this->riskLevel_ == nullptr && this->tagDescribe_ == nullptr && this->tagId_ == nullptr && this->tagName_ == nullptr; };
      // classId Field Functions 
      bool hasClassId() const { return this->classId_ != nullptr;};
      void deleteClassId() { this->classId_ = nullptr;};
      inline string getClassId() const { DARABONBA_PTR_GET_DEFAULT(classId_, "") };
      inline TagList& setClassId(string classId) { DARABONBA_PTR_SET_VALUE(classId_, classId) };


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
      shared_ptr<string> classId_ {};
      shared_ptr<int32_t> riskLevel_ {};
      shared_ptr<string> tagDescribe_ {};
      shared_ptr<string> tagId_ {};
      shared_ptr<string> tagName_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->tagList_ == nullptr && this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeOutgoingTagResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tagList Field Functions 
    bool hasTagList() const { return this->tagList_ != nullptr;};
    void deleteTagList() { this->tagList_ = nullptr;};
    inline const vector<DescribeOutgoingTagResponseBody::TagList> & getTagList() const { DARABONBA_PTR_GET_CONST(tagList_, vector<DescribeOutgoingTagResponseBody::TagList>) };
    inline vector<DescribeOutgoingTagResponseBody::TagList> getTagList() { DARABONBA_PTR_GET(tagList_, vector<DescribeOutgoingTagResponseBody::TagList>) };
    inline DescribeOutgoingTagResponseBody& setTagList(const vector<DescribeOutgoingTagResponseBody::TagList> & tagList) { DARABONBA_PTR_SET_VALUE(tagList_, tagList) };
    inline DescribeOutgoingTagResponseBody& setTagList(vector<DescribeOutgoingTagResponseBody::TagList> && tagList) { DARABONBA_PTR_SET_RVALUE(tagList_, tagList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeOutgoingTagResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeOutgoingTagResponseBody::TagList>> tagList_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
