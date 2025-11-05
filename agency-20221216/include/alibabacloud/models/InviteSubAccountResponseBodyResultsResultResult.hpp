// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVITESUBACCOUNTRESPONSEBODYRESULTSRESULTRESULT_HPP_
#define ALIBABACLOUD_MODELS_INVITESUBACCOUNTRESPONSEBODYRESULTSRESULTRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class InviteSubAccountResponseBodyResultsResultResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InviteSubAccountResponseBodyResultsResultResult& obj) { 
      DARABONBA_PTR_TO_JSON(Days, days_);
      DARABONBA_PTR_TO_JSON(InviteId, inviteId_);
      DARABONBA_PTR_TO_JSON(RegUrl, regUrl_);
    };
    friend void from_json(const Darabonba::Json& j, InviteSubAccountResponseBodyResultsResultResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Days, days_);
      DARABONBA_PTR_FROM_JSON(InviteId, inviteId_);
      DARABONBA_PTR_FROM_JSON(RegUrl, regUrl_);
    };
    InviteSubAccountResponseBodyResultsResultResult() = default ;
    InviteSubAccountResponseBodyResultsResultResult(const InviteSubAccountResponseBodyResultsResultResult &) = default ;
    InviteSubAccountResponseBodyResultsResultResult(InviteSubAccountResponseBodyResultsResultResult &&) = default ;
    InviteSubAccountResponseBodyResultsResultResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InviteSubAccountResponseBodyResultsResultResult() = default ;
    InviteSubAccountResponseBodyResultsResultResult& operator=(const InviteSubAccountResponseBodyResultsResultResult &) = default ;
    InviteSubAccountResponseBodyResultsResultResult& operator=(InviteSubAccountResponseBodyResultsResultResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->days_ == nullptr
        && return this->inviteId_ == nullptr && return this->regUrl_ == nullptr; };
    // days Field Functions 
    bool hasDays() const { return this->days_ != nullptr;};
    void deleteDays() { this->days_ = nullptr;};
    inline int32_t days() const { DARABONBA_PTR_GET_DEFAULT(days_, 0) };
    inline InviteSubAccountResponseBodyResultsResultResult& setDays(int32_t days) { DARABONBA_PTR_SET_VALUE(days_, days) };


    // inviteId Field Functions 
    bool hasInviteId() const { return this->inviteId_ != nullptr;};
    void deleteInviteId() { this->inviteId_ = nullptr;};
    inline int64_t inviteId() const { DARABONBA_PTR_GET_DEFAULT(inviteId_, 0L) };
    inline InviteSubAccountResponseBodyResultsResultResult& setInviteId(int64_t inviteId) { DARABONBA_PTR_SET_VALUE(inviteId_, inviteId) };


    // regUrl Field Functions 
    bool hasRegUrl() const { return this->regUrl_ != nullptr;};
    void deleteRegUrl() { this->regUrl_ = nullptr;};
    inline string regUrl() const { DARABONBA_PTR_GET_DEFAULT(regUrl_, "") };
    inline InviteSubAccountResponseBodyResultsResultResult& setRegUrl(string regUrl) { DARABONBA_PTR_SET_VALUE(regUrl_, regUrl) };


  protected:
    // Valid days of registration URL, count on daily basis.
    std::shared_ptr<int32_t> days_ = nullptr;
    // Invitation ID, The invitation status tracking code.
    std::shared_ptr<int64_t> inviteId_ = nullptr;
    // URL for Partner Customer Registration.
    std::shared_ptr<string> regUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
