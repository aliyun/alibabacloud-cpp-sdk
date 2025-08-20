// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIAGNOSTICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDIAGNOSTICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class ListDiagnosticsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDiagnosticsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DiagnosticKey, diagnosticKey_);
      DARABONBA_PTR_TO_JSON(DiagnosticProduct, diagnosticProduct_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListDiagnosticsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DiagnosticKey, diagnosticKey_);
      DARABONBA_PTR_FROM_JSON(DiagnosticProduct, diagnosticProduct_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListDiagnosticsRequest() = default ;
    ListDiagnosticsRequest(const ListDiagnosticsRequest &) = default ;
    ListDiagnosticsRequest(ListDiagnosticsRequest &&) = default ;
    ListDiagnosticsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDiagnosticsRequest() = default ;
    ListDiagnosticsRequest& operator=(const ListDiagnosticsRequest &) = default ;
    ListDiagnosticsRequest& operator=(ListDiagnosticsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->diagnosticKey_ != nullptr
        && this->diagnosticProduct_ != nullptr && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->status_ != nullptr; };
    // diagnosticKey Field Functions 
    bool hasDiagnosticKey() const { return this->diagnosticKey_ != nullptr;};
    void deleteDiagnosticKey() { this->diagnosticKey_ = nullptr;};
    inline string diagnosticKey() const { DARABONBA_PTR_GET_DEFAULT(diagnosticKey_, "") };
    inline ListDiagnosticsRequest& setDiagnosticKey(string diagnosticKey) { DARABONBA_PTR_SET_VALUE(diagnosticKey_, diagnosticKey) };


    // diagnosticProduct Field Functions 
    bool hasDiagnosticProduct() const { return this->diagnosticProduct_ != nullptr;};
    void deleteDiagnosticProduct() { this->diagnosticProduct_ = nullptr;};
    inline string diagnosticProduct() const { DARABONBA_PTR_GET_DEFAULT(diagnosticProduct_, "") };
    inline ListDiagnosticsRequest& setDiagnosticProduct(string diagnosticProduct) { DARABONBA_PTR_SET_VALUE(diagnosticProduct_, diagnosticProduct) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline string maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, "") };
    inline ListDiagnosticsRequest& setMaxResults(string maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDiagnosticsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListDiagnosticsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The keyword in the diagnosis.
    std::shared_ptr<string> diagnosticKey_ = nullptr;
    // The product that is diagnosed.
    std::shared_ptr<string> diagnosticProduct_ = nullptr;
    // The maximum number of results to be returned in a single call when NextToken is used for the query.
    // 
    // Valid values: 1 to 100.
    // 
    // Default value: 50.
    std::shared_ptr<string> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The diagnosis status.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
