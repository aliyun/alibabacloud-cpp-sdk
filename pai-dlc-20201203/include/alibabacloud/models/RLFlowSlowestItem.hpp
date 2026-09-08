// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RLFLOWSLOWESTITEM_HPP_
#define ALIBABACLOUD_MODELS_RLFLOWSLOWESTITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class RLFlowSlowestItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RLFlowSlowestItem& obj) { 
      DARABONBA_PTR_TO_JSON(PromptUid, promptUid_);
      DARABONBA_PTR_TO_JSON(SampleIndex, sampleIndex_);
      DARABONBA_PTR_TO_JSON(Sec, sec_);
    };
    friend void from_json(const Darabonba::Json& j, RLFlowSlowestItem& obj) { 
      DARABONBA_PTR_FROM_JSON(PromptUid, promptUid_);
      DARABONBA_PTR_FROM_JSON(SampleIndex, sampleIndex_);
      DARABONBA_PTR_FROM_JSON(Sec, sec_);
    };
    RLFlowSlowestItem() = default ;
    RLFlowSlowestItem(const RLFlowSlowestItem &) = default ;
    RLFlowSlowestItem(RLFlowSlowestItem &&) = default ;
    RLFlowSlowestItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RLFlowSlowestItem() = default ;
    RLFlowSlowestItem& operator=(const RLFlowSlowestItem &) = default ;
    RLFlowSlowestItem& operator=(RLFlowSlowestItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->promptUid_ == nullptr
        && this->sampleIndex_ == nullptr && this->sec_ == nullptr; };
    // promptUid Field Functions 
    bool hasPromptUid() const { return this->promptUid_ != nullptr;};
    void deletePromptUid() { this->promptUid_ = nullptr;};
    inline string getPromptUid() const { DARABONBA_PTR_GET_DEFAULT(promptUid_, "") };
    inline RLFlowSlowestItem& setPromptUid(string promptUid) { DARABONBA_PTR_SET_VALUE(promptUid_, promptUid) };


    // sampleIndex Field Functions 
    bool hasSampleIndex() const { return this->sampleIndex_ != nullptr;};
    void deleteSampleIndex() { this->sampleIndex_ = nullptr;};
    inline string getSampleIndex() const { DARABONBA_PTR_GET_DEFAULT(sampleIndex_, "") };
    inline RLFlowSlowestItem& setSampleIndex(string sampleIndex) { DARABONBA_PTR_SET_VALUE(sampleIndex_, sampleIndex) };


    // sec Field Functions 
    bool hasSec() const { return this->sec_ != nullptr;};
    void deleteSec() { this->sec_ = nullptr;};
    inline double getSec() const { DARABONBA_PTR_GET_DEFAULT(sec_, 0.0) };
    inline RLFlowSlowestItem& setSec(double sec) { DARABONBA_PTR_SET_VALUE(sec_, sec) };


  protected:
    // The UID of the sample.
    shared_ptr<string> promptUid_ {};
    // The ordinal number of the event trace.
    shared_ptr<string> sampleIndex_ {};
    // The execution duration of the stage, in seconds.
    shared_ptr<double> sec_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
