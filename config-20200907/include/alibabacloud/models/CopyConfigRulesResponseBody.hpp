// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COPYCONFIGRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_COPYCONFIGRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class CopyConfigRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CopyConfigRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CopyRulesResult, copyRulesResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CopyConfigRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CopyRulesResult, copyRulesResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CopyConfigRulesResponseBody() = default ;
    CopyConfigRulesResponseBody(const CopyConfigRulesResponseBody &) = default ;
    CopyConfigRulesResponseBody(CopyConfigRulesResponseBody &&) = default ;
    CopyConfigRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CopyConfigRulesResponseBody() = default ;
    CopyConfigRulesResponseBody& operator=(const CopyConfigRulesResponseBody &) = default ;
    CopyConfigRulesResponseBody& operator=(CopyConfigRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->copyRulesResult_ == nullptr
        && return this->requestId_ == nullptr; };
    // copyRulesResult Field Functions 
    bool hasCopyRulesResult() const { return this->copyRulesResult_ != nullptr;};
    void deleteCopyRulesResult() { this->copyRulesResult_ = nullptr;};
    inline bool copyRulesResult() const { DARABONBA_PTR_GET_DEFAULT(copyRulesResult_, false) };
    inline CopyConfigRulesResponseBody& setCopyRulesResult(bool copyRulesResult) { DARABONBA_PTR_SET_VALUE(copyRulesResult_, copyRulesResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CopyConfigRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether the rules are replicated. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> copyRulesResult_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
