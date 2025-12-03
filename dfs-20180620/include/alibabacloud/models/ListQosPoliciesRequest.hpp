// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQOSPOLICIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTQOSPOLICIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class ListQosPoliciesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQosPoliciesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FederationId, federationId_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(InputRegionId, inputRegionId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListQosPoliciesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FederationId, federationId_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(InputRegionId, inputRegionId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    ListQosPoliciesRequest() = default ;
    ListQosPoliciesRequest(const ListQosPoliciesRequest &) = default ;
    ListQosPoliciesRequest(ListQosPoliciesRequest &&) = default ;
    ListQosPoliciesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQosPoliciesRequest() = default ;
    ListQosPoliciesRequest& operator=(const ListQosPoliciesRequest &) = default ;
    ListQosPoliciesRequest& operator=(ListQosPoliciesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->federationId_ == nullptr
        && return this->fileSystemId_ == nullptr && return this->inputRegionId_ == nullptr && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr; };
    // federationId Field Functions 
    bool hasFederationId() const { return this->federationId_ != nullptr;};
    void deleteFederationId() { this->federationId_ = nullptr;};
    inline string federationId() const { DARABONBA_PTR_GET_DEFAULT(federationId_, "") };
    inline ListQosPoliciesRequest& setFederationId(string federationId) { DARABONBA_PTR_SET_VALUE(federationId_, federationId) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline ListQosPoliciesRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // inputRegionId Field Functions 
    bool hasInputRegionId() const { return this->inputRegionId_ != nullptr;};
    void deleteInputRegionId() { this->inputRegionId_ = nullptr;};
    inline string inputRegionId() const { DARABONBA_PTR_GET_DEFAULT(inputRegionId_, "") };
    inline ListQosPoliciesRequest& setInputRegionId(string inputRegionId) { DARABONBA_PTR_SET_VALUE(inputRegionId_, inputRegionId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListQosPoliciesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListQosPoliciesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    std::shared_ptr<string> federationId_ = nullptr;
    std::shared_ptr<string> fileSystemId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> inputRegionId_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
