// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRULESCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRULESCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetRulesCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRulesCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalSystemClientRuleCount, totalSystemClientRuleCount_);
      DARABONBA_PTR_TO_JSON(TotalUserDefineRuleCount, totalUserDefineRuleCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetRulesCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalSystemClientRuleCount, totalSystemClientRuleCount_);
      DARABONBA_PTR_FROM_JSON(TotalUserDefineRuleCount, totalUserDefineRuleCount_);
    };
    GetRulesCountResponseBody() = default ;
    GetRulesCountResponseBody(const GetRulesCountResponseBody &) = default ;
    GetRulesCountResponseBody(GetRulesCountResponseBody &&) = default ;
    GetRulesCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRulesCountResponseBody() = default ;
    GetRulesCountResponseBody& operator=(const GetRulesCountResponseBody &) = default ;
    GetRulesCountResponseBody& operator=(GetRulesCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->totalSystemClientRuleCount_ == nullptr && return this->totalUserDefineRuleCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRulesCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalSystemClientRuleCount Field Functions 
    bool hasTotalSystemClientRuleCount() const { return this->totalSystemClientRuleCount_ != nullptr;};
    void deleteTotalSystemClientRuleCount() { this->totalSystemClientRuleCount_ = nullptr;};
    inline int64_t totalSystemClientRuleCount() const { DARABONBA_PTR_GET_DEFAULT(totalSystemClientRuleCount_, 0L) };
    inline GetRulesCountResponseBody& setTotalSystemClientRuleCount(int64_t totalSystemClientRuleCount) { DARABONBA_PTR_SET_VALUE(totalSystemClientRuleCount_, totalSystemClientRuleCount) };


    // totalUserDefineRuleCount Field Functions 
    bool hasTotalUserDefineRuleCount() const { return this->totalUserDefineRuleCount_ != nullptr;};
    void deleteTotalUserDefineRuleCount() { this->totalUserDefineRuleCount_ = nullptr;};
    inline int64_t totalUserDefineRuleCount() const { DARABONBA_PTR_GET_DEFAULT(totalUserDefineRuleCount_, 0L) };
    inline GetRulesCountResponseBody& setTotalUserDefineRuleCount(int64_t totalUserDefineRuleCount) { DARABONBA_PTR_SET_VALUE(totalUserDefineRuleCount_, totalUserDefineRuleCount) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of system defense rules.
    std::shared_ptr<int64_t> totalSystemClientRuleCount_ = nullptr;
    // The total number of custom defense rules.
    std::shared_ptr<int64_t> totalUserDefineRuleCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
