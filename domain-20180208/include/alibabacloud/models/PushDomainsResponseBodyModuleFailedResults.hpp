// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHDOMAINSRESPONSEBODYMODULEFAILEDRESULTS_HPP_
#define ALIBABACLOUD_MODELS_PUSHDOMAINSRESPONSEBODYMODULEFAILEDRESULTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class PushDomainsResponseBodyModuleFailedResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushDomainsResponseBodyModuleFailedResults& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
    };
    friend void from_json(const Darabonba::Json& j, PushDomainsResponseBodyModuleFailedResults& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
    };
    PushDomainsResponseBodyModuleFailedResults() = default ;
    PushDomainsResponseBodyModuleFailedResults(const PushDomainsResponseBodyModuleFailedResults &) = default ;
    PushDomainsResponseBodyModuleFailedResults(PushDomainsResponseBodyModuleFailedResults &&) = default ;
    PushDomainsResponseBodyModuleFailedResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushDomainsResponseBodyModuleFailedResults() = default ;
    PushDomainsResponseBodyModuleFailedResults& operator=(const PushDomainsResponseBodyModuleFailedResults &) = default ;
    PushDomainsResponseBodyModuleFailedResults& operator=(PushDomainsResponseBodyModuleFailedResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && return this->errorCode_ == nullptr && return this->errorMsg_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline PushDomainsResponseBodyModuleFailedResults& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline PushDomainsResponseBodyModuleFailedResults& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline PushDomainsResponseBodyModuleFailedResults& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


  protected:
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> errorMsg_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
