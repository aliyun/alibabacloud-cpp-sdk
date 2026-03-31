// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COPYCOMPLIANCEPACKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_COPYCOMPLIANCEPACKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class CopyCompliancePacksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CopyCompliancePacksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CopyRulesResult, copyRulesResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CopyCompliancePacksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CopyRulesResult, copyRulesResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CopyCompliancePacksResponseBody() = default ;
    CopyCompliancePacksResponseBody(const CopyCompliancePacksResponseBody &) = default ;
    CopyCompliancePacksResponseBody(CopyCompliancePacksResponseBody &&) = default ;
    CopyCompliancePacksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CopyCompliancePacksResponseBody() = default ;
    CopyCompliancePacksResponseBody& operator=(const CopyCompliancePacksResponseBody &) = default ;
    CopyCompliancePacksResponseBody& operator=(CopyCompliancePacksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->copyRulesResult_ == nullptr
        && this->requestId_ == nullptr; };
    // copyRulesResult Field Functions 
    bool hasCopyRulesResult() const { return this->copyRulesResult_ != nullptr;};
    void deleteCopyRulesResult() { this->copyRulesResult_ = nullptr;};
    inline bool getCopyRulesResult() const { DARABONBA_PTR_GET_DEFAULT(copyRulesResult_, false) };
    inline CopyCompliancePacksResponseBody& setCopyRulesResult(bool copyRulesResult) { DARABONBA_PTR_SET_VALUE(copyRulesResult_, copyRulesResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CopyCompliancePacksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether the compliance packages are replicated. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> copyRulesResult_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
