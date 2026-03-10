// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMEMORYSTORESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMEMORYSTORESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListMemoryStoresResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMemoryStoresResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(memoryStores, memoryStores_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMemoryStoresResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(memoryStores, memoryStores_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListMemoryStoresResponseBody() = default ;
    ListMemoryStoresResponseBody(const ListMemoryStoresResponseBody &) = default ;
    ListMemoryStoresResponseBody(ListMemoryStoresResponseBody &&) = default ;
    ListMemoryStoresResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMemoryStoresResponseBody() = default ;
    ListMemoryStoresResponseBody& operator=(const ListMemoryStoresResponseBody &) = default ;
    ListMemoryStoresResponseBody& operator=(ListMemoryStoresResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MemoryStores : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MemoryStores& obj) { 
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(memoryStoreName, memoryStoreName_);
        DARABONBA_PTR_TO_JSON(regionId, regionId_);
        DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(workspace, workspace_);
      };
      friend void from_json(const Darabonba::Json& j, MemoryStores& obj) { 
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(memoryStoreName, memoryStoreName_);
        DARABONBA_PTR_FROM_JSON(regionId, regionId_);
        DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(workspace, workspace_);
      };
      MemoryStores() = default ;
      MemoryStores(const MemoryStores &) = default ;
      MemoryStores(MemoryStores &&) = default ;
      MemoryStores(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MemoryStores() = default ;
      MemoryStores& operator=(const MemoryStores &) = default ;
      MemoryStores& operator=(MemoryStores &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->memoryStoreName_ == nullptr && this->regionId_ == nullptr && this->updateTime_ == nullptr && this->workspace_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline MemoryStores& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline MemoryStores& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // memoryStoreName Field Functions 
      bool hasMemoryStoreName() const { return this->memoryStoreName_ != nullptr;};
      void deleteMemoryStoreName() { this->memoryStoreName_ = nullptr;};
      inline string getMemoryStoreName() const { DARABONBA_PTR_GET_DEFAULT(memoryStoreName_, "") };
      inline MemoryStores& setMemoryStoreName(string memoryStoreName) { DARABONBA_PTR_SET_VALUE(memoryStoreName_, memoryStoreName) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline MemoryStores& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline MemoryStores& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // workspace Field Functions 
      bool hasWorkspace() const { return this->workspace_ != nullptr;};
      void deleteWorkspace() { this->workspace_ = nullptr;};
      inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
      inline MemoryStores& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


    protected:
      // Use the UTC time format: yyyy-MM-ddTHH:mm:ssZ
      shared_ptr<string> createTime_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> memoryStoreName_ {};
      shared_ptr<string> regionId_ {};
      // Use the UTC time format: yyyy-MM-ddTHH:mm:ssZ
      shared_ptr<string> updateTime_ {};
      shared_ptr<string> workspace_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->memoryStores_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListMemoryStoresResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // memoryStores Field Functions 
    bool hasMemoryStores() const { return this->memoryStores_ != nullptr;};
    void deleteMemoryStores() { this->memoryStores_ = nullptr;};
    inline const vector<ListMemoryStoresResponseBody::MemoryStores> & getMemoryStores() const { DARABONBA_PTR_GET_CONST(memoryStores_, vector<ListMemoryStoresResponseBody::MemoryStores>) };
    inline vector<ListMemoryStoresResponseBody::MemoryStores> getMemoryStores() { DARABONBA_PTR_GET(memoryStores_, vector<ListMemoryStoresResponseBody::MemoryStores>) };
    inline ListMemoryStoresResponseBody& setMemoryStores(const vector<ListMemoryStoresResponseBody::MemoryStores> & memoryStores) { DARABONBA_PTR_SET_VALUE(memoryStores_, memoryStores) };
    inline ListMemoryStoresResponseBody& setMemoryStores(vector<ListMemoryStoresResponseBody::MemoryStores> && memoryStores) { DARABONBA_PTR_SET_RVALUE(memoryStores_, memoryStores) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListMemoryStoresResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMemoryStoresResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<vector<ListMemoryStoresResponseBody::MemoryStores>> memoryStores_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
