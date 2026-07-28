// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTACKCONFIGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSTACKCONFIGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class ListStackConfigsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStackConfigsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ListStackConfigsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    ListStackConfigsRequest() = default ;
    ListStackConfigsRequest(const ListStackConfigsRequest &) = default ;
    ListStackConfigsRequest(ListStackConfigsRequest &&) = default ;
    ListStackConfigsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStackConfigsRequest() = default ;
    ListStackConfigsRequest& operator=(const ListStackConfigsRequest &) = default ;
    ListStackConfigsRequest& operator=(ListStackConfigsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->status_ == nullptr && this->version_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListStackConfigsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListStackConfigsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListStackConfigsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListStackConfigsRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The maximum number of records to read in this request. Default value: 20. Maximum value: 200.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token that marks the position from which to start reading. Leave empty to start from the beginning.
    shared_ptr<string> nextToken_ {};
    // The status of the stack configuration.
    // | Name | Description |
    // |------|------|
    // | Creating | Being created. |
    // | Created | Created. |
    // | Waiting | Waiting for deployment. |
    // | Deploying | Being deployed. |
    // | Deployed | Deployed. |
    // | Errored | Deployment failed. |
    // | Deleting | Being deleted. |
    // | Deleted | Deleted. |
    // | DeleteFailed | Deletion failed. |
    // | DetectTriggered | Drift detection triggered. |.
    shared_ptr<string> status_ {};
    // The version number of the stack configuration, such as v1. The initial value is v1. The version number increments each time the stack is updated or refreshed and the configuration changes.
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
