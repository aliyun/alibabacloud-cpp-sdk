// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHDOMAINSRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_PUSHDOMAINSRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PushDomainsResponseBodyModuleFailedResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class PushDomainsResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushDomainsResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(FailedResults, failedResults_);
      DARABONBA_PTR_TO_JSON(OutBizId, outBizId_);
      DARABONBA_PTR_TO_JSON(PushNo, pushNo_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(SuccessDomains, successDomains_);
    };
    friend void from_json(const Darabonba::Json& j, PushDomainsResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedResults, failedResults_);
      DARABONBA_PTR_FROM_JSON(OutBizId, outBizId_);
      DARABONBA_PTR_FROM_JSON(PushNo, pushNo_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(SuccessDomains, successDomains_);
    };
    PushDomainsResponseBodyModule() = default ;
    PushDomainsResponseBodyModule(const PushDomainsResponseBodyModule &) = default ;
    PushDomainsResponseBodyModule(PushDomainsResponseBodyModule &&) = default ;
    PushDomainsResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushDomainsResponseBodyModule() = default ;
    PushDomainsResponseBodyModule& operator=(const PushDomainsResponseBodyModule &) = default ;
    PushDomainsResponseBodyModule& operator=(PushDomainsResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failedResults_ == nullptr
        && return this->outBizId_ == nullptr && return this->pushNo_ == nullptr && return this->success_ == nullptr && return this->successDomains_ == nullptr; };
    // failedResults Field Functions 
    bool hasFailedResults() const { return this->failedResults_ != nullptr;};
    void deleteFailedResults() { this->failedResults_ = nullptr;};
    inline const vector<Models::PushDomainsResponseBodyModuleFailedResults> & failedResults() const { DARABONBA_PTR_GET_CONST(failedResults_, vector<Models::PushDomainsResponseBodyModuleFailedResults>) };
    inline vector<Models::PushDomainsResponseBodyModuleFailedResults> failedResults() { DARABONBA_PTR_GET(failedResults_, vector<Models::PushDomainsResponseBodyModuleFailedResults>) };
    inline PushDomainsResponseBodyModule& setFailedResults(const vector<Models::PushDomainsResponseBodyModuleFailedResults> & failedResults) { DARABONBA_PTR_SET_VALUE(failedResults_, failedResults) };
    inline PushDomainsResponseBodyModule& setFailedResults(vector<Models::PushDomainsResponseBodyModuleFailedResults> && failedResults) { DARABONBA_PTR_SET_RVALUE(failedResults_, failedResults) };


    // outBizId Field Functions 
    bool hasOutBizId() const { return this->outBizId_ != nullptr;};
    void deleteOutBizId() { this->outBizId_ = nullptr;};
    inline string outBizId() const { DARABONBA_PTR_GET_DEFAULT(outBizId_, "") };
    inline PushDomainsResponseBodyModule& setOutBizId(string outBizId) { DARABONBA_PTR_SET_VALUE(outBizId_, outBizId) };


    // pushNo Field Functions 
    bool hasPushNo() const { return this->pushNo_ != nullptr;};
    void deletePushNo() { this->pushNo_ = nullptr;};
    inline string pushNo() const { DARABONBA_PTR_GET_DEFAULT(pushNo_, "") };
    inline PushDomainsResponseBodyModule& setPushNo(string pushNo) { DARABONBA_PTR_SET_VALUE(pushNo_, pushNo) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline PushDomainsResponseBodyModule& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // successDomains Field Functions 
    bool hasSuccessDomains() const { return this->successDomains_ != nullptr;};
    void deleteSuccessDomains() { this->successDomains_ = nullptr;};
    inline const vector<string> & successDomains() const { DARABONBA_PTR_GET_CONST(successDomains_, vector<string>) };
    inline vector<string> successDomains() { DARABONBA_PTR_GET(successDomains_, vector<string>) };
    inline PushDomainsResponseBodyModule& setSuccessDomains(const vector<string> & successDomains) { DARABONBA_PTR_SET_VALUE(successDomains_, successDomains) };
    inline PushDomainsResponseBodyModule& setSuccessDomains(vector<string> && successDomains) { DARABONBA_PTR_SET_RVALUE(successDomains_, successDomains) };


  protected:
    std::shared_ptr<vector<Models::PushDomainsResponseBodyModuleFailedResults>> failedResults_ = nullptr;
    std::shared_ptr<string> outBizId_ = nullptr;
    std::shared_ptr<string> pushNo_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<vector<string>> successDomains_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
