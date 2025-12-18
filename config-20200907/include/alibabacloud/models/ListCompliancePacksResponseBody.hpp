// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMPLIANCEPACKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMPLIANCEPACKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListCompliancePacksResponseBodyCompliancePacksResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListCompliancePacksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCompliancePacksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CompliancePacksResult, compliancePacksResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCompliancePacksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CompliancePacksResult, compliancePacksResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListCompliancePacksResponseBody() = default ;
    ListCompliancePacksResponseBody(const ListCompliancePacksResponseBody &) = default ;
    ListCompliancePacksResponseBody(ListCompliancePacksResponseBody &&) = default ;
    ListCompliancePacksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCompliancePacksResponseBody() = default ;
    ListCompliancePacksResponseBody& operator=(const ListCompliancePacksResponseBody &) = default ;
    ListCompliancePacksResponseBody& operator=(ListCompliancePacksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->compliancePacksResult_ == nullptr
        && return this->requestId_ == nullptr; };
    // compliancePacksResult Field Functions 
    bool hasCompliancePacksResult() const { return this->compliancePacksResult_ != nullptr;};
    void deleteCompliancePacksResult() { this->compliancePacksResult_ = nullptr;};
    inline const ListCompliancePacksResponseBodyCompliancePacksResult & compliancePacksResult() const { DARABONBA_PTR_GET_CONST(compliancePacksResult_, ListCompliancePacksResponseBodyCompliancePacksResult) };
    inline ListCompliancePacksResponseBodyCompliancePacksResult compliancePacksResult() { DARABONBA_PTR_GET(compliancePacksResult_, ListCompliancePacksResponseBodyCompliancePacksResult) };
    inline ListCompliancePacksResponseBody& setCompliancePacksResult(const ListCompliancePacksResponseBodyCompliancePacksResult & compliancePacksResult) { DARABONBA_PTR_SET_VALUE(compliancePacksResult_, compliancePacksResult) };
    inline ListCompliancePacksResponseBody& setCompliancePacksResult(ListCompliancePacksResponseBodyCompliancePacksResult && compliancePacksResult) { DARABONBA_PTR_SET_RVALUE(compliancePacksResult_, compliancePacksResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCompliancePacksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The compliance packages returned.
    std::shared_ptr<ListCompliancePacksResponseBodyCompliancePacksResult> compliancePacksResult_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
