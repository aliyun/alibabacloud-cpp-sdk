// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITDOCTRANSLATETASKREQUESTEXT_HPP_
#define ALIBABACLOUD_MODELS_SUBMITDOCTRANSLATETASKREQUESTEXT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SubmitDocTranslateTaskRequestExtTerminologies.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AnyTrans20250707
{
namespace Models
{
  class SubmitDocTranslateTaskRequestExt : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitDocTranslateTaskRequestExt& obj) { 
      DARABONBA_PTR_TO_JSON(domainHint, domainHint_);
      DARABONBA_PTR_TO_JSON(terminologies, terminologies_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitDocTranslateTaskRequestExt& obj) { 
      DARABONBA_PTR_FROM_JSON(domainHint, domainHint_);
      DARABONBA_PTR_FROM_JSON(terminologies, terminologies_);
    };
    SubmitDocTranslateTaskRequestExt() = default ;
    SubmitDocTranslateTaskRequestExt(const SubmitDocTranslateTaskRequestExt &) = default ;
    SubmitDocTranslateTaskRequestExt(SubmitDocTranslateTaskRequestExt &&) = default ;
    SubmitDocTranslateTaskRequestExt(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitDocTranslateTaskRequestExt() = default ;
    SubmitDocTranslateTaskRequestExt& operator=(const SubmitDocTranslateTaskRequestExt &) = default ;
    SubmitDocTranslateTaskRequestExt& operator=(SubmitDocTranslateTaskRequestExt &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainHint_ != nullptr
        && this->terminologies_ != nullptr; };
    // domainHint Field Functions 
    bool hasDomainHint() const { return this->domainHint_ != nullptr;};
    void deleteDomainHint() { this->domainHint_ = nullptr;};
    inline string domainHint() const { DARABONBA_PTR_GET_DEFAULT(domainHint_, "") };
    inline SubmitDocTranslateTaskRequestExt& setDomainHint(string domainHint) { DARABONBA_PTR_SET_VALUE(domainHint_, domainHint) };


    // terminologies Field Functions 
    bool hasTerminologies() const { return this->terminologies_ != nullptr;};
    void deleteTerminologies() { this->terminologies_ = nullptr;};
    inline const vector<Models::SubmitDocTranslateTaskRequestExtTerminologies> & terminologies() const { DARABONBA_PTR_GET_CONST(terminologies_, vector<Models::SubmitDocTranslateTaskRequestExtTerminologies>) };
    inline vector<Models::SubmitDocTranslateTaskRequestExtTerminologies> terminologies() { DARABONBA_PTR_GET(terminologies_, vector<Models::SubmitDocTranslateTaskRequestExtTerminologies>) };
    inline SubmitDocTranslateTaskRequestExt& setTerminologies(const vector<Models::SubmitDocTranslateTaskRequestExtTerminologies> & terminologies) { DARABONBA_PTR_SET_VALUE(terminologies_, terminologies) };
    inline SubmitDocTranslateTaskRequestExt& setTerminologies(vector<Models::SubmitDocTranslateTaskRequestExtTerminologies> && terminologies) { DARABONBA_PTR_SET_RVALUE(terminologies_, terminologies) };


  protected:
    std::shared_ptr<string> domainHint_ = nullptr;
    std::shared_ptr<vector<Models::SubmitDocTranslateTaskRequestExtTerminologies>> terminologies_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AnyTrans20250707
#endif
