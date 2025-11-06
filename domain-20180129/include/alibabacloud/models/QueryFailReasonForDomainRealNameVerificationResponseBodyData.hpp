// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYFAILREASONFORDOMAINREALNAMEVERIFICATIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYFAILREASONFORDOMAINREALNAMEVERIFICATIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryFailReasonForDomainRealNameVerificationResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryFailReasonForDomainRealNameVerificationResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Date, date_);
      DARABONBA_PTR_TO_JSON(DomainNameVerificationStatus, domainNameVerificationStatus_);
      DARABONBA_PTR_TO_JSON(FailReason, failReason_);
    };
    friend void from_json(const Darabonba::Json& j, QueryFailReasonForDomainRealNameVerificationResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Date, date_);
      DARABONBA_PTR_FROM_JSON(DomainNameVerificationStatus, domainNameVerificationStatus_);
      DARABONBA_PTR_FROM_JSON(FailReason, failReason_);
    };
    QueryFailReasonForDomainRealNameVerificationResponseBodyData() = default ;
    QueryFailReasonForDomainRealNameVerificationResponseBodyData(const QueryFailReasonForDomainRealNameVerificationResponseBodyData &) = default ;
    QueryFailReasonForDomainRealNameVerificationResponseBodyData(QueryFailReasonForDomainRealNameVerificationResponseBodyData &&) = default ;
    QueryFailReasonForDomainRealNameVerificationResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryFailReasonForDomainRealNameVerificationResponseBodyData() = default ;
    QueryFailReasonForDomainRealNameVerificationResponseBodyData& operator=(const QueryFailReasonForDomainRealNameVerificationResponseBodyData &) = default ;
    QueryFailReasonForDomainRealNameVerificationResponseBodyData& operator=(QueryFailReasonForDomainRealNameVerificationResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->date_ == nullptr
        && return this->domainNameVerificationStatus_ == nullptr && return this->failReason_ == nullptr; };
    // date Field Functions 
    bool hasDate() const { return this->date_ != nullptr;};
    void deleteDate() { this->date_ = nullptr;};
    inline string date() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
    inline QueryFailReasonForDomainRealNameVerificationResponseBodyData& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


    // domainNameVerificationStatus Field Functions 
    bool hasDomainNameVerificationStatus() const { return this->domainNameVerificationStatus_ != nullptr;};
    void deleteDomainNameVerificationStatus() { this->domainNameVerificationStatus_ = nullptr;};
    inline string domainNameVerificationStatus() const { DARABONBA_PTR_GET_DEFAULT(domainNameVerificationStatus_, "") };
    inline QueryFailReasonForDomainRealNameVerificationResponseBodyData& setDomainNameVerificationStatus(string domainNameVerificationStatus) { DARABONBA_PTR_SET_VALUE(domainNameVerificationStatus_, domainNameVerificationStatus) };


    // failReason Field Functions 
    bool hasFailReason() const { return this->failReason_ != nullptr;};
    void deleteFailReason() { this->failReason_ = nullptr;};
    inline string failReason() const { DARABONBA_PTR_GET_DEFAULT(failReason_, "") };
    inline QueryFailReasonForDomainRealNameVerificationResponseBodyData& setFailReason(string failReason) { DARABONBA_PTR_SET_VALUE(failReason_, failReason) };


  protected:
    std::shared_ptr<string> date_ = nullptr;
    std::shared_ptr<string> domainNameVerificationStatus_ = nullptr;
    std::shared_ptr<string> failReason_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
