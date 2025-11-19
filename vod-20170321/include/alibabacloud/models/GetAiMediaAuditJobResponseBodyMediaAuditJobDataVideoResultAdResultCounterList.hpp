// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIMEDIAAUDITJOBRESPONSEBODYMEDIAAUDITJOBDATAVIDEORESULTADRESULTCOUNTERLIST_HPP_
#define ALIBABACLOUD_MODELS_GETAIMEDIAAUDITJOBRESPONSEBODYMEDIAAUDITJOBDATAVIDEORESULTADRESULTCOUNTERLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultAdResultCounterList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultAdResultCounterList& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Label, label_);
    };
    friend void from_json(const Darabonba::Json& j, GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultAdResultCounterList& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
    };
    GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultAdResultCounterList() = default ;
    GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultAdResultCounterList(const GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultAdResultCounterList &) = default ;
    GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultAdResultCounterList(GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultAdResultCounterList &&) = default ;
    GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultAdResultCounterList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultAdResultCounterList() = default ;
    GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultAdResultCounterList& operator=(const GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultAdResultCounterList &) = default ;
    GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultAdResultCounterList& operator=(GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultAdResultCounterList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->label_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultAdResultCounterList& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultAdResultCounterList& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


  protected:
    // The number of video snapshots.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The categories of the ad review results. Valid values:
    // 
    // *   **normal**: normal content
    // *   **ad**: other ads
    // *   **politics**: political content
    // *   **porn**: pornographic content
    // *   **abuse**: abuse
    // *   **terrorism**: terrorist content
    // *   **contraband**: prohibited content
    // *   **spam**: spam content
    // *   **npx**: illegal ad
    // *   **qrcode**: QR code
    // *   **programCode**: mini program code
    std::shared_ptr<string> label_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
