// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFLOWVERSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFLOWVERSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Fnf20190315
{
namespace Models
{
  class ListFlowVersionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFlowVersionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FlowVersions, flowVersions_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListFlowVersionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FlowVersions, flowVersions_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListFlowVersionsResponseBody() = default ;
    ListFlowVersionsResponseBody(const ListFlowVersionsResponseBody &) = default ;
    ListFlowVersionsResponseBody(ListFlowVersionsResponseBody &&) = default ;
    ListFlowVersionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFlowVersionsResponseBody() = default ;
    ListFlowVersionsResponseBody& operator=(const ListFlowVersionsResponseBody &) = default ;
    ListFlowVersionsResponseBody& operator=(ListFlowVersionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FlowVersions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FlowVersions& obj) { 
        DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, FlowVersions& obj) { 
        DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      FlowVersions() = default ;
      FlowVersions(const FlowVersions &) = default ;
      FlowVersions(FlowVersions &&) = default ;
      FlowVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FlowVersions() = default ;
      FlowVersions& operator=(const FlowVersions &) = default ;
      FlowVersions& operator=(FlowVersions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createdTime_ == nullptr
        && this->description_ == nullptr && this->version_ == nullptr; };
      // createdTime Field Functions 
      bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
      void deleteCreatedTime() { this->createdTime_ = nullptr;};
      inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
      inline FlowVersions& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline FlowVersions& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline FlowVersions& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      shared_ptr<string> createdTime_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->flowVersions_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // flowVersions Field Functions 
    bool hasFlowVersions() const { return this->flowVersions_ != nullptr;};
    void deleteFlowVersions() { this->flowVersions_ = nullptr;};
    inline const vector<ListFlowVersionsResponseBody::FlowVersions> & getFlowVersions() const { DARABONBA_PTR_GET_CONST(flowVersions_, vector<ListFlowVersionsResponseBody::FlowVersions>) };
    inline vector<ListFlowVersionsResponseBody::FlowVersions> getFlowVersions() { DARABONBA_PTR_GET(flowVersions_, vector<ListFlowVersionsResponseBody::FlowVersions>) };
    inline ListFlowVersionsResponseBody& setFlowVersions(const vector<ListFlowVersionsResponseBody::FlowVersions> & flowVersions) { DARABONBA_PTR_SET_VALUE(flowVersions_, flowVersions) };
    inline ListFlowVersionsResponseBody& setFlowVersions(vector<ListFlowVersionsResponseBody::FlowVersions> && flowVersions) { DARABONBA_PTR_SET_RVALUE(flowVersions_, flowVersions) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListFlowVersionsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFlowVersionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListFlowVersionsResponseBody::FlowVersions>> flowVersions_ {};
    // list token
    shared_ptr<string> nextToken_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Fnf20190315
#endif
