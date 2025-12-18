// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMPLIANCEPACKTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMPLIANCEPACKTEMPLATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListCompliancePackTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCompliancePackTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CompliancePackTemplatesResult, compliancePackTemplatesResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCompliancePackTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CompliancePackTemplatesResult, compliancePackTemplatesResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListCompliancePackTemplatesResponseBody() = default ;
    ListCompliancePackTemplatesResponseBody(const ListCompliancePackTemplatesResponseBody &) = default ;
    ListCompliancePackTemplatesResponseBody(ListCompliancePackTemplatesResponseBody &&) = default ;
    ListCompliancePackTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCompliancePackTemplatesResponseBody() = default ;
    ListCompliancePackTemplatesResponseBody& operator=(const ListCompliancePackTemplatesResponseBody &) = default ;
    ListCompliancePackTemplatesResponseBody& operator=(ListCompliancePackTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->compliancePackTemplatesResult_ == nullptr
        && return this->requestId_ == nullptr; };
    // compliancePackTemplatesResult Field Functions 
    bool hasCompliancePackTemplatesResult() const { return this->compliancePackTemplatesResult_ != nullptr;};
    void deleteCompliancePackTemplatesResult() { this->compliancePackTemplatesResult_ = nullptr;};
    inline const ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResult & compliancePackTemplatesResult() const { DARABONBA_PTR_GET_CONST(compliancePackTemplatesResult_, ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResult) };
    inline ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResult compliancePackTemplatesResult() { DARABONBA_PTR_GET(compliancePackTemplatesResult_, ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResult) };
    inline ListCompliancePackTemplatesResponseBody& setCompliancePackTemplatesResult(const ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResult & compliancePackTemplatesResult) { DARABONBA_PTR_SET_VALUE(compliancePackTemplatesResult_, compliancePackTemplatesResult) };
    inline ListCompliancePackTemplatesResponseBody& setCompliancePackTemplatesResult(ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResult && compliancePackTemplatesResult) { DARABONBA_PTR_SET_RVALUE(compliancePackTemplatesResult_, compliancePackTemplatesResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCompliancePackTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the compliance package templates returned.
    std::shared_ptr<ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResult> compliancePackTemplatesResult_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
