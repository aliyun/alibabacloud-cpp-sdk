// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSKILLFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSKILLFILESRESPONSEBODY_HPP_
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
  class ListSkillFilesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSkillFilesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SkillFiles, skillFiles_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListSkillFilesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SkillFiles, skillFiles_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListSkillFilesResponseBody() = default ;
    ListSkillFilesResponseBody(const ListSkillFilesResponseBody &) = default ;
    ListSkillFilesResponseBody(ListSkillFilesResponseBody &&) = default ;
    ListSkillFilesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSkillFilesResponseBody() = default ;
    ListSkillFilesResponseBody& operator=(const ListSkillFilesResponseBody &) = default ;
    ListSkillFilesResponseBody& operator=(ListSkillFilesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SkillFiles : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SkillFiles& obj) { 
        DARABONBA_PTR_TO_JSON(FilePath, filePath_);
        DARABONBA_PTR_TO_JSON(SignedUrl, signedUrl_);
      };
      friend void from_json(const Darabonba::Json& j, SkillFiles& obj) { 
        DARABONBA_PTR_FROM_JSON(FilePath, filePath_);
        DARABONBA_PTR_FROM_JSON(SignedUrl, signedUrl_);
      };
      SkillFiles() = default ;
      SkillFiles(const SkillFiles &) = default ;
      SkillFiles(SkillFiles &&) = default ;
      SkillFiles(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SkillFiles() = default ;
      SkillFiles& operator=(const SkillFiles &) = default ;
      SkillFiles& operator=(SkillFiles &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->filePath_ == nullptr
        && this->signedUrl_ == nullptr; };
      // filePath Field Functions 
      bool hasFilePath() const { return this->filePath_ != nullptr;};
      void deleteFilePath() { this->filePath_ = nullptr;};
      inline string getFilePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
      inline SkillFiles& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


      // signedUrl Field Functions 
      bool hasSignedUrl() const { return this->signedUrl_ != nullptr;};
      void deleteSignedUrl() { this->signedUrl_ = nullptr;};
      inline string getSignedUrl() const { DARABONBA_PTR_GET_DEFAULT(signedUrl_, "") };
      inline SkillFiles& setSignedUrl(string signedUrl) { DARABONBA_PTR_SET_VALUE(signedUrl_, signedUrl) };


    protected:
      shared_ptr<string> filePath_ {};
      shared_ptr<string> signedUrl_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->skillFiles_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListSkillFilesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSkillFilesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSkillFilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // skillFiles Field Functions 
    bool hasSkillFiles() const { return this->skillFiles_ != nullptr;};
    void deleteSkillFiles() { this->skillFiles_ = nullptr;};
    inline const vector<ListSkillFilesResponseBody::SkillFiles> & getSkillFiles() const { DARABONBA_PTR_GET_CONST(skillFiles_, vector<ListSkillFilesResponseBody::SkillFiles>) };
    inline vector<ListSkillFilesResponseBody::SkillFiles> getSkillFiles() { DARABONBA_PTR_GET(skillFiles_, vector<ListSkillFilesResponseBody::SkillFiles>) };
    inline ListSkillFilesResponseBody& setSkillFiles(const vector<ListSkillFilesResponseBody::SkillFiles> & skillFiles) { DARABONBA_PTR_SET_VALUE(skillFiles_, skillFiles) };
    inline ListSkillFilesResponseBody& setSkillFiles(vector<ListSkillFilesResponseBody::SkillFiles> && skillFiles) { DARABONBA_PTR_SET_RVALUE(skillFiles_, skillFiles) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListSkillFilesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListSkillFilesResponseBody::SkillFiles>> skillFiles_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
