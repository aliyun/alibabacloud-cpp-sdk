// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMODELCONNECTIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMODELCONNECTIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class ListModelConnectionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListModelConnectionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(includeModels, includeModels_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(protocol, protocol_);
      DARABONBA_PTR_TO_JSON(providerType, providerType_);
      DARABONBA_PTR_TO_JSON(searchType, searchType_);
    };
    friend void from_json(const Darabonba::Json& j, ListModelConnectionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(includeModels, includeModels_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(providerType, providerType_);
      DARABONBA_PTR_FROM_JSON(searchType, searchType_);
    };
    ListModelConnectionsRequest() = default ;
    ListModelConnectionsRequest(const ListModelConnectionsRequest &) = default ;
    ListModelConnectionsRequest(ListModelConnectionsRequest &&) = default ;
    ListModelConnectionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListModelConnectionsRequest() = default ;
    ListModelConnectionsRequest& operator=(const ListModelConnectionsRequest &) = default ;
    ListModelConnectionsRequest& operator=(ListModelConnectionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->includeModels_ == nullptr
        && this->maxResults_ == nullptr && this->name_ == nullptr && this->nextToken_ == nullptr && this->protocol_ == nullptr && this->providerType_ == nullptr
        && this->searchType_ == nullptr; };
    // includeModels Field Functions 
    bool hasIncludeModels() const { return this->includeModels_ != nullptr;};
    void deleteIncludeModels() { this->includeModels_ = nullptr;};
    inline bool getIncludeModels() const { DARABONBA_PTR_GET_DEFAULT(includeModels_, false) };
    inline ListModelConnectionsRequest& setIncludeModels(bool includeModels) { DARABONBA_PTR_SET_VALUE(includeModels_, includeModels) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListModelConnectionsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListModelConnectionsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListModelConnectionsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline ListModelConnectionsRequest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // providerType Field Functions 
    bool hasProviderType() const { return this->providerType_ != nullptr;};
    void deleteProviderType() { this->providerType_ = nullptr;};
    inline string getProviderType() const { DARABONBA_PTR_GET_DEFAULT(providerType_, "") };
    inline ListModelConnectionsRequest& setProviderType(string providerType) { DARABONBA_PTR_SET_VALUE(providerType_, providerType) };


    // searchType Field Functions 
    bool hasSearchType() const { return this->searchType_ != nullptr;};
    void deleteSearchType() { this->searchType_ = nullptr;};
    inline string getSearchType() const { DARABONBA_PTR_GET_DEFAULT(searchType_, "") };
    inline ListModelConnectionsRequest& setSearchType(string searchType) { DARABONBA_PTR_SET_VALUE(searchType_, searchType) };


  protected:
    shared_ptr<bool> includeModels_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> protocol_ {};
    shared_ptr<string> providerType_ {};
    shared_ptr<string> searchType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
