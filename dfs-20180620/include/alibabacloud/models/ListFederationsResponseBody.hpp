// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFEDERATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFEDERATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class ListFederationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFederationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Federations, federations_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListFederationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Federations, federations_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListFederationsResponseBody() = default ;
    ListFederationsResponseBody(const ListFederationsResponseBody &) = default ;
    ListFederationsResponseBody(ListFederationsResponseBody &&) = default ;
    ListFederationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFederationsResponseBody() = default ;
    ListFederationsResponseBody& operator=(const ListFederationsResponseBody &) = default ;
    ListFederationsResponseBody& operator=(ListFederationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Federations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Federations& obj) { 
        DARABONBA_PTR_TO_JSON(FederationId, federationId_);
        DARABONBA_PTR_TO_JSON(FileSystemIds, fileSystemIds_);
      };
      friend void from_json(const Darabonba::Json& j, Federations& obj) { 
        DARABONBA_PTR_FROM_JSON(FederationId, federationId_);
        DARABONBA_PTR_FROM_JSON(FileSystemIds, fileSystemIds_);
      };
      Federations() = default ;
      Federations(const Federations &) = default ;
      Federations(Federations &&) = default ;
      Federations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Federations() = default ;
      Federations& operator=(const Federations &) = default ;
      Federations& operator=(Federations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->federationId_ == nullptr
        && this->fileSystemIds_ == nullptr; };
      // federationId Field Functions 
      bool hasFederationId() const { return this->federationId_ != nullptr;};
      void deleteFederationId() { this->federationId_ = nullptr;};
      inline string getFederationId() const { DARABONBA_PTR_GET_DEFAULT(federationId_, "") };
      inline Federations& setFederationId(string federationId) { DARABONBA_PTR_SET_VALUE(federationId_, federationId) };


      // fileSystemIds Field Functions 
      bool hasFileSystemIds() const { return this->fileSystemIds_ != nullptr;};
      void deleteFileSystemIds() { this->fileSystemIds_ = nullptr;};
      inline string getFileSystemIds() const { DARABONBA_PTR_GET_DEFAULT(fileSystemIds_, "") };
      inline Federations& setFileSystemIds(string fileSystemIds) { DARABONBA_PTR_SET_VALUE(fileSystemIds_, fileSystemIds) };


    protected:
      shared_ptr<string> federationId_ {};
      shared_ptr<string> fileSystemIds_ {};
    };

    virtual bool empty() const override { return this->federations_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // federations Field Functions 
    bool hasFederations() const { return this->federations_ != nullptr;};
    void deleteFederations() { this->federations_ = nullptr;};
    inline const vector<ListFederationsResponseBody::Federations> & getFederations() const { DARABONBA_PTR_GET_CONST(federations_, vector<ListFederationsResponseBody::Federations>) };
    inline vector<ListFederationsResponseBody::Federations> getFederations() { DARABONBA_PTR_GET(federations_, vector<ListFederationsResponseBody::Federations>) };
    inline ListFederationsResponseBody& setFederations(const vector<ListFederationsResponseBody::Federations> & federations) { DARABONBA_PTR_SET_VALUE(federations_, federations) };
    inline ListFederationsResponseBody& setFederations(vector<ListFederationsResponseBody::Federations> && federations) { DARABONBA_PTR_SET_RVALUE(federations_, federations) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListFederationsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListFederationsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFederationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListFederationsResponseBody::Federations>> federations_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
