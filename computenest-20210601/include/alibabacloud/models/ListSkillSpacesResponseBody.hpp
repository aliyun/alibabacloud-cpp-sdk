// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSKILLSPACESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSKILLSPACESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class ListSkillSpacesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSkillSpacesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SkillSpaces, skillSpaces_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListSkillSpacesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SkillSpaces, skillSpaces_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListSkillSpacesResponseBody() = default ;
    ListSkillSpacesResponseBody(const ListSkillSpacesResponseBody &) = default ;
    ListSkillSpacesResponseBody(ListSkillSpacesResponseBody &&) = default ;
    ListSkillSpacesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSkillSpacesResponseBody() = default ;
    ListSkillSpacesResponseBody& operator=(const ListSkillSpacesResponseBody &) = default ;
    ListSkillSpacesResponseBody& operator=(ListSkillSpacesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SkillSpaces : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SkillSpaces& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(SkillSpaceDescription, skillSpaceDescription_);
        DARABONBA_PTR_TO_JSON(SkillSpaceId, skillSpaceId_);
        DARABONBA_PTR_TO_JSON(SkillSpaceName, skillSpaceName_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, SkillSpaces& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(SkillSpaceDescription, skillSpaceDescription_);
        DARABONBA_PTR_FROM_JSON(SkillSpaceId, skillSpaceId_);
        DARABONBA_PTR_FROM_JSON(SkillSpaceName, skillSpaceName_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      SkillSpaces() = default ;
      SkillSpaces(const SkillSpaces &) = default ;
      SkillSpaces(SkillSpaces &&) = default ;
      SkillSpaces(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SkillSpaces() = default ;
      SkillSpaces& operator=(const SkillSpaces &) = default ;
      SkillSpaces& operator=(SkillSpaces &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->skillSpaceDescription_ == nullptr && this->skillSpaceId_ == nullptr && this->skillSpaceName_ == nullptr && this->updateTime_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline SkillSpaces& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // skillSpaceDescription Field Functions 
      bool hasSkillSpaceDescription() const { return this->skillSpaceDescription_ != nullptr;};
      void deleteSkillSpaceDescription() { this->skillSpaceDescription_ = nullptr;};
      inline string getSkillSpaceDescription() const { DARABONBA_PTR_GET_DEFAULT(skillSpaceDescription_, "") };
      inline SkillSpaces& setSkillSpaceDescription(string skillSpaceDescription) { DARABONBA_PTR_SET_VALUE(skillSpaceDescription_, skillSpaceDescription) };


      // skillSpaceId Field Functions 
      bool hasSkillSpaceId() const { return this->skillSpaceId_ != nullptr;};
      void deleteSkillSpaceId() { this->skillSpaceId_ = nullptr;};
      inline string getSkillSpaceId() const { DARABONBA_PTR_GET_DEFAULT(skillSpaceId_, "") };
      inline SkillSpaces& setSkillSpaceId(string skillSpaceId) { DARABONBA_PTR_SET_VALUE(skillSpaceId_, skillSpaceId) };


      // skillSpaceName Field Functions 
      bool hasSkillSpaceName() const { return this->skillSpaceName_ != nullptr;};
      void deleteSkillSpaceName() { this->skillSpaceName_ = nullptr;};
      inline string getSkillSpaceName() const { DARABONBA_PTR_GET_DEFAULT(skillSpaceName_, "") };
      inline SkillSpaces& setSkillSpaceName(string skillSpaceName) { DARABONBA_PTR_SET_VALUE(skillSpaceName_, skillSpaceName) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline SkillSpaces& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The time when the SkillSpace was created. The time is in UTC.
      shared_ptr<string> createTime_ {};
      // The SkillSpace description.
      shared_ptr<string> skillSpaceDescription_ {};
      // The SkillSpace ID.
      shared_ptr<string> skillSpaceId_ {};
      // The SkillSpace name.
      shared_ptr<string> skillSpaceName_ {};
      // The time when the SkillSpace was last updated. The time is in UTC.
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->skillSpaces_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListSkillSpacesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSkillSpacesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSkillSpacesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // skillSpaces Field Functions 
    bool hasSkillSpaces() const { return this->skillSpaces_ != nullptr;};
    void deleteSkillSpaces() { this->skillSpaces_ = nullptr;};
    inline const vector<ListSkillSpacesResponseBody::SkillSpaces> & getSkillSpaces() const { DARABONBA_PTR_GET_CONST(skillSpaces_, vector<ListSkillSpacesResponseBody::SkillSpaces>) };
    inline vector<ListSkillSpacesResponseBody::SkillSpaces> getSkillSpaces() { DARABONBA_PTR_GET(skillSpaces_, vector<ListSkillSpacesResponseBody::SkillSpaces>) };
    inline ListSkillSpacesResponseBody& setSkillSpaces(const vector<ListSkillSpacesResponseBody::SkillSpaces> & skillSpaces) { DARABONBA_PTR_SET_VALUE(skillSpaces_, skillSpaces) };
    inline ListSkillSpacesResponseBody& setSkillSpaces(vector<ListSkillSpacesResponseBody::SkillSpaces> && skillSpaces) { DARABONBA_PTR_SET_RVALUE(skillSpaces_, skillSpaces) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListSkillSpacesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of entries returned per page.
    shared_ptr<int32_t> maxResults_ {};
    // The token for the next page of results. If this parameter is not returned, no more results are available.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The list of SkillSpaces.
    shared_ptr<vector<ListSkillSpacesResponseBody::SkillSpaces>> skillSpaces_ {};
    // The total number of entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
