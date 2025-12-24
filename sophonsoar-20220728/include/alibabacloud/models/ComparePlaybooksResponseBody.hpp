// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMPAREPLAYBOOKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_COMPAREPLAYBOOKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ComparePlaybooksResponseBodyCompareResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class ComparePlaybooksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ComparePlaybooksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CompareResult, compareResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ComparePlaybooksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CompareResult, compareResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ComparePlaybooksResponseBody() = default ;
    ComparePlaybooksResponseBody(const ComparePlaybooksResponseBody &) = default ;
    ComparePlaybooksResponseBody(ComparePlaybooksResponseBody &&) = default ;
    ComparePlaybooksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ComparePlaybooksResponseBody() = default ;
    ComparePlaybooksResponseBody& operator=(const ComparePlaybooksResponseBody &) = default ;
    ComparePlaybooksResponseBody& operator=(ComparePlaybooksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->compareResult_ == nullptr
        && return this->requestId_ == nullptr; };
    // compareResult Field Functions 
    bool hasCompareResult() const { return this->compareResult_ != nullptr;};
    void deleteCompareResult() { this->compareResult_ = nullptr;};
    inline const ComparePlaybooksResponseBodyCompareResult & compareResult() const { DARABONBA_PTR_GET_CONST(compareResult_, ComparePlaybooksResponseBodyCompareResult) };
    inline ComparePlaybooksResponseBodyCompareResult compareResult() { DARABONBA_PTR_GET(compareResult_, ComparePlaybooksResponseBodyCompareResult) };
    inline ComparePlaybooksResponseBody& setCompareResult(const ComparePlaybooksResponseBodyCompareResult & compareResult) { DARABONBA_PTR_SET_VALUE(compareResult_, compareResult) };
    inline ComparePlaybooksResponseBody& setCompareResult(ComparePlaybooksResponseBodyCompareResult && compareResult) { DARABONBA_PTR_SET_RVALUE(compareResult_, compareResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ComparePlaybooksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The comparison result.
    std::shared_ptr<ComparePlaybooksResponseBodyCompareResult> compareResult_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
