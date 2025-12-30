// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOTWORDLIBRARIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTHOTWORDLIBRARIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListHotwordLibrariesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHotwordLibrariesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HotwordLibraryList, hotwordLibraryList_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListHotwordLibrariesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HotwordLibraryList, hotwordLibraryList_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListHotwordLibrariesResponseBody() = default ;
    ListHotwordLibrariesResponseBody(const ListHotwordLibrariesResponseBody &) = default ;
    ListHotwordLibrariesResponseBody(ListHotwordLibrariesResponseBody &&) = default ;
    ListHotwordLibrariesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHotwordLibrariesResponseBody() = default ;
    ListHotwordLibrariesResponseBody& operator=(const ListHotwordLibrariesResponseBody &) = default ;
    ListHotwordLibrariesResponseBody& operator=(ListHotwordLibrariesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class HotwordLibraryList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HotwordLibraryList& obj) { 
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(HotwordLibraryId, hotwordLibraryId_);
        DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(UsageScenario, usageScenario_);
      };
      friend void from_json(const Darabonba::Json& j, HotwordLibraryList& obj) { 
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(HotwordLibraryId, hotwordLibraryId_);
        DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(UsageScenario, usageScenario_);
      };
      HotwordLibraryList() = default ;
      HotwordLibraryList(const HotwordLibraryList &) = default ;
      HotwordLibraryList(HotwordLibraryList &&) = default ;
      HotwordLibraryList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HotwordLibraryList() = default ;
      HotwordLibraryList& operator=(const HotwordLibraryList &) = default ;
      HotwordLibraryList& operator=(HotwordLibraryList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->description_ == nullptr && this->hotwordLibraryId_ == nullptr && this->modifiedTime_ == nullptr && this->name_ == nullptr && this->usageScenario_ == nullptr; };
      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline HotwordLibraryList& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline HotwordLibraryList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // hotwordLibraryId Field Functions 
      bool hasHotwordLibraryId() const { return this->hotwordLibraryId_ != nullptr;};
      void deleteHotwordLibraryId() { this->hotwordLibraryId_ = nullptr;};
      inline string getHotwordLibraryId() const { DARABONBA_PTR_GET_DEFAULT(hotwordLibraryId_, "") };
      inline HotwordLibraryList& setHotwordLibraryId(string hotwordLibraryId) { DARABONBA_PTR_SET_VALUE(hotwordLibraryId_, hotwordLibraryId) };


      // modifiedTime Field Functions 
      bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
      void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
      inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
      inline HotwordLibraryList& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline HotwordLibraryList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // usageScenario Field Functions 
      bool hasUsageScenario() const { return this->usageScenario_ != nullptr;};
      void deleteUsageScenario() { this->usageScenario_ = nullptr;};
      inline string getUsageScenario() const { DARABONBA_PTR_GET_DEFAULT(usageScenario_, "") };
      inline HotwordLibraryList& setUsageScenario(string usageScenario) { DARABONBA_PTR_SET_VALUE(usageScenario_, usageScenario) };


    protected:
      // The time when the hotword library was created.
      shared_ptr<string> creationTime_ {};
      // The description of the hotword library. It can be up to 200 characters in length.
      shared_ptr<string> description_ {};
      // The ID of the hotword library.
      shared_ptr<string> hotwordLibraryId_ {};
      // The time when the hotword library was last modified.
      shared_ptr<string> modifiedTime_ {};
      // The name of the hotword library.
      shared_ptr<string> name_ {};
      // The usage scenario of the hotword library. Valid values:
      // 
      // *   ASR: Automatic Speech Recognition
      // *   StructuredMediaAssets: structured media analysis
      // *   VideoTranslation: Video translation This field cannot be modified after the hotword library is created.
      shared_ptr<string> usageScenario_ {};
    };

    virtual bool empty() const override { return this->hotwordLibraryList_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // hotwordLibraryList Field Functions 
    bool hasHotwordLibraryList() const { return this->hotwordLibraryList_ != nullptr;};
    void deleteHotwordLibraryList() { this->hotwordLibraryList_ = nullptr;};
    inline const vector<ListHotwordLibrariesResponseBody::HotwordLibraryList> & getHotwordLibraryList() const { DARABONBA_PTR_GET_CONST(hotwordLibraryList_, vector<ListHotwordLibrariesResponseBody::HotwordLibraryList>) };
    inline vector<ListHotwordLibrariesResponseBody::HotwordLibraryList> getHotwordLibraryList() { DARABONBA_PTR_GET(hotwordLibraryList_, vector<ListHotwordLibrariesResponseBody::HotwordLibraryList>) };
    inline ListHotwordLibrariesResponseBody& setHotwordLibraryList(const vector<ListHotwordLibrariesResponseBody::HotwordLibraryList> & hotwordLibraryList) { DARABONBA_PTR_SET_VALUE(hotwordLibraryList_, hotwordLibraryList) };
    inline ListHotwordLibrariesResponseBody& setHotwordLibraryList(vector<ListHotwordLibrariesResponseBody::HotwordLibraryList> && hotwordLibraryList) { DARABONBA_PTR_SET_RVALUE(hotwordLibraryList_, hotwordLibraryList) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListHotwordLibrariesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListHotwordLibrariesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListHotwordLibrariesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListHotwordLibrariesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The hotword libraries.
    shared_ptr<vector<ListHotwordLibrariesResponseBody::HotwordLibraryList>> hotwordLibraryList_ {};
    // The maximum number of hotword libraries that can be returned.
    shared_ptr<int32_t> maxResults_ {};
    // A pagination token that can be used in the next request to retrieve a new page of results. If it is empty, all results are returned.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of hotword libraries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
