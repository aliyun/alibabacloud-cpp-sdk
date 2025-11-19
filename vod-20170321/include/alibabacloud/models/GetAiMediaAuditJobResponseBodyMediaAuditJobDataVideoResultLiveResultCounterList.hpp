// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIMEDIAAUDITJOBRESPONSEBODYMEDIAAUDITJOBDATAVIDEORESULTLIVERESULTCOUNTERLIST_HPP_
#define ALIBABACLOUD_MODELS_GETAIMEDIAAUDITJOBRESPONSEBODYMEDIAAUDITJOBDATAVIDEORESULTLIVERESULTCOUNTERLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResultCounterList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResultCounterList& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Label, label_);
    };
    friend void from_json(const Darabonba::Json& j, GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResultCounterList& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
    };
    GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResultCounterList() = default ;
    GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResultCounterList(const GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResultCounterList &) = default ;
    GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResultCounterList(GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResultCounterList &&) = default ;
    GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResultCounterList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResultCounterList() = default ;
    GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResultCounterList& operator=(const GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResultCounterList &) = default ;
    GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResultCounterList& operator=(GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResultCounterList &&) = default ;
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
    inline GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResultCounterList& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResultCounterList& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


  protected:
    // The number of video snapshots.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The category of the review result. Valid values:
    // 
    // *   **normal**: normal content
    // *   **meaningless**: meaningless content, such as a black or white screen.
    // *   **PIP**: picture-in-picture
    // *   **smoking**: smoking
    // *   **drivelive**: live broadcasting in a running vehicle
    std::shared_ptr<string> label_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
