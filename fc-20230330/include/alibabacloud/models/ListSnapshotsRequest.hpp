// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSNAPSHOTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSNAPSHOTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class ListSnapshotsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSnapshotsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(functionName, functionName_);
      DARABONBA_PTR_TO_JSON(limit, limit_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(qualifier, qualifier_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSnapshotsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(functionName, functionName_);
      DARABONBA_PTR_FROM_JSON(limit, limit_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(qualifier, qualifier_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
    };
    ListSnapshotsRequest() = default ;
    ListSnapshotsRequest(const ListSnapshotsRequest &) = default ;
    ListSnapshotsRequest(ListSnapshotsRequest &&) = default ;
    ListSnapshotsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSnapshotsRequest() = default ;
    ListSnapshotsRequest& operator=(const ListSnapshotsRequest &) = default ;
    ListSnapshotsRequest& operator=(ListSnapshotsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->functionName_ == nullptr
        && this->limit_ == nullptr && this->nextToken_ == nullptr && this->qualifier_ == nullptr && this->sessionId_ == nullptr; };
    // functionName Field Functions 
    bool hasFunctionName() const { return this->functionName_ != nullptr;};
    void deleteFunctionName() { this->functionName_ = nullptr;};
    inline string getFunctionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
    inline ListSnapshotsRequest& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int32_t getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0) };
    inline ListSnapshotsRequest& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSnapshotsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // qualifier Field Functions 
    bool hasQualifier() const { return this->qualifier_ != nullptr;};
    void deleteQualifier() { this->qualifier_ = nullptr;};
    inline string getQualifier() const { DARABONBA_PTR_GET_DEFAULT(qualifier_, "") };
    inline ListSnapshotsRequest& setQualifier(string qualifier) { DARABONBA_PTR_SET_VALUE(qualifier_, qualifier) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline ListSnapshotsRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    // The function name.
    shared_ptr<string> functionName_ {};
    // The maximum number of snapshots to return. Valid values: 1 to 100. Default value: 20.
    shared_ptr<int32_t> limit_ {};
    // The pagination token used to retrieve more results.
    shared_ptr<string> nextToken_ {};
    // The function alias.
    shared_ptr<string> qualifier_ {};
    // The source session ID from which the snapshot was created. When specified, functionName must also be specified.
    shared_ptr<string> sessionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
