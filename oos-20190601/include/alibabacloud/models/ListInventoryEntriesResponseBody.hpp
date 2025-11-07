// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINVENTORYENTRIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINVENTORYENTRIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListInventoryEntriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInventoryEntriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CaptureTime, captureTime_);
      DARABONBA_PTR_TO_JSON(Entries, entries_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SchemaVersion, schemaVersion_);
      DARABONBA_PTR_TO_JSON(TypeName, typeName_);
    };
    friend void from_json(const Darabonba::Json& j, ListInventoryEntriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CaptureTime, captureTime_);
      DARABONBA_PTR_FROM_JSON(Entries, entries_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SchemaVersion, schemaVersion_);
      DARABONBA_PTR_FROM_JSON(TypeName, typeName_);
    };
    ListInventoryEntriesResponseBody() = default ;
    ListInventoryEntriesResponseBody(const ListInventoryEntriesResponseBody &) = default ;
    ListInventoryEntriesResponseBody(ListInventoryEntriesResponseBody &&) = default ;
    ListInventoryEntriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInventoryEntriesResponseBody() = default ;
    ListInventoryEntriesResponseBody& operator=(const ListInventoryEntriesResponseBody &) = default ;
    ListInventoryEntriesResponseBody& operator=(ListInventoryEntriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->captureTime_ == nullptr
        && return this->entries_ == nullptr && return this->instanceId_ == nullptr && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->requestId_ == nullptr
        && return this->schemaVersion_ == nullptr && return this->typeName_ == nullptr; };
    // captureTime Field Functions 
    bool hasCaptureTime() const { return this->captureTime_ != nullptr;};
    void deleteCaptureTime() { this->captureTime_ = nullptr;};
    inline string captureTime() const { DARABONBA_PTR_GET_DEFAULT(captureTime_, "") };
    inline ListInventoryEntriesResponseBody& setCaptureTime(string captureTime) { DARABONBA_PTR_SET_VALUE(captureTime_, captureTime) };


    // entries Field Functions 
    bool hasEntries() const { return this->entries_ != nullptr;};
    void deleteEntries() { this->entries_ = nullptr;};
    inline const vector<Darabonba::Json> & entries() const { DARABONBA_PTR_GET_CONST(entries_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> entries() { DARABONBA_PTR_GET(entries_, vector<Darabonba::Json>) };
    inline ListInventoryEntriesResponseBody& setEntries(const vector<Darabonba::Json> & entries) { DARABONBA_PTR_SET_VALUE(entries_, entries) };
    inline ListInventoryEntriesResponseBody& setEntries(vector<Darabonba::Json> && entries) { DARABONBA_PTR_SET_RVALUE(entries_, entries) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListInventoryEntriesResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListInventoryEntriesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListInventoryEntriesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInventoryEntriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // schemaVersion Field Functions 
    bool hasSchemaVersion() const { return this->schemaVersion_ != nullptr;};
    void deleteSchemaVersion() { this->schemaVersion_ = nullptr;};
    inline string schemaVersion() const { DARABONBA_PTR_GET_DEFAULT(schemaVersion_, "") };
    inline ListInventoryEntriesResponseBody& setSchemaVersion(string schemaVersion) { DARABONBA_PTR_SET_VALUE(schemaVersion_, schemaVersion) };


    // typeName Field Functions 
    bool hasTypeName() const { return this->typeName_ != nullptr;};
    void deleteTypeName() { this->typeName_ = nullptr;};
    inline string typeName() const { DARABONBA_PTR_GET_DEFAULT(typeName_, "") };
    inline ListInventoryEntriesResponseBody& setTypeName(string typeName) { DARABONBA_PTR_SET_VALUE(typeName_, typeName) };


  protected:
    // The time when the request was sent.
    std::shared_ptr<string> captureTime_ = nullptr;
    // The configurations of the component.
    std::shared_ptr<vector<Darabonba::Json>> entries_ = nullptr;
    // The ID of the ECS instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The returned value of NextToken is a pagination token, which can be used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The version number of the component.
    std::shared_ptr<string> schemaVersion_ = nullptr;
    // The name of the component.
    std::shared_ptr<string> typeName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
