// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIAGNOSTICRESULTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDIAGNOSTICRESULTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ListDiagnosticResultsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDiagnosticResultsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DiagType, diagType_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDiagnosticResultsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DiagType, diagType_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    ListDiagnosticResultsRequest() = default ;
    ListDiagnosticResultsRequest(const ListDiagnosticResultsRequest &) = default ;
    ListDiagnosticResultsRequest(ListDiagnosticResultsRequest &&) = default ;
    ListDiagnosticResultsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDiagnosticResultsRequest() = default ;
    ListDiagnosticResultsRequest& operator=(const ListDiagnosticResultsRequest &) = default ;
    ListDiagnosticResultsRequest& operator=(ListDiagnosticResultsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->diagType_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->resourceGroupId_ == nullptr; };
    // diagType Field Functions 
    bool hasDiagType() const { return this->diagType_ != nullptr;};
    void deleteDiagType() { this->diagType_ = nullptr;};
    inline string diagType() const { DARABONBA_PTR_GET_DEFAULT(diagType_, "") };
    inline ListDiagnosticResultsRequest& setDiagType(string diagType) { DARABONBA_PTR_SET_VALUE(diagType_, diagType) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListDiagnosticResultsRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDiagnosticResultsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListDiagnosticResultsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // Type of diagnosis, indicating which diagnostic rules are hit.
    std::shared_ptr<string> diagType_ = nullptr;
    // Number of items per page in a paginated query. The maximum value is 100.
    // 
    // Default value:
    // 
    // - If no value is set or the set value is less than 20, the default value is 20.
    // - If the set value is greater than 100, the default value is 100.
    std::shared_ptr<int64_t> maxResults_ = nullptr;
    // NextToken for the next page. Include this value when requesting the next page.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
