// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGGREGATECOMPLIANCEPACKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAGGREGATECOMPLIANCEPACKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAggregateCompliancePacksResponseBodyCompliancePacksResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListAggregateCompliancePacksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAggregateCompliancePacksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CompliancePacksResult, compliancePacksResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAggregateCompliancePacksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CompliancePacksResult, compliancePacksResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAggregateCompliancePacksResponseBody() = default ;
    ListAggregateCompliancePacksResponseBody(const ListAggregateCompliancePacksResponseBody &) = default ;
    ListAggregateCompliancePacksResponseBody(ListAggregateCompliancePacksResponseBody &&) = default ;
    ListAggregateCompliancePacksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAggregateCompliancePacksResponseBody() = default ;
    ListAggregateCompliancePacksResponseBody& operator=(const ListAggregateCompliancePacksResponseBody &) = default ;
    ListAggregateCompliancePacksResponseBody& operator=(ListAggregateCompliancePacksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->compliancePacksResult_ == nullptr
        && return this->requestId_ == nullptr; };
    // compliancePacksResult Field Functions 
    bool hasCompliancePacksResult() const { return this->compliancePacksResult_ != nullptr;};
    void deleteCompliancePacksResult() { this->compliancePacksResult_ = nullptr;};
    inline const ListAggregateCompliancePacksResponseBodyCompliancePacksResult & compliancePacksResult() const { DARABONBA_PTR_GET_CONST(compliancePacksResult_, ListAggregateCompliancePacksResponseBodyCompliancePacksResult) };
    inline ListAggregateCompliancePacksResponseBodyCompliancePacksResult compliancePacksResult() { DARABONBA_PTR_GET(compliancePacksResult_, ListAggregateCompliancePacksResponseBodyCompliancePacksResult) };
    inline ListAggregateCompliancePacksResponseBody& setCompliancePacksResult(const ListAggregateCompliancePacksResponseBodyCompliancePacksResult & compliancePacksResult) { DARABONBA_PTR_SET_VALUE(compliancePacksResult_, compliancePacksResult) };
    inline ListAggregateCompliancePacksResponseBody& setCompliancePacksResult(ListAggregateCompliancePacksResponseBodyCompliancePacksResult && compliancePacksResult) { DARABONBA_PTR_SET_RVALUE(compliancePacksResult_, compliancePacksResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAggregateCompliancePacksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The compliance packages returned.
    std::shared_ptr<ListAggregateCompliancePacksResponseBodyCompliancePacksResult> compliancePacksResult_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
