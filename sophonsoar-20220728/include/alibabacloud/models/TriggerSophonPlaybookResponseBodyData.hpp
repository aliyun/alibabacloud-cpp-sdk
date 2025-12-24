// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRIGGERSOPHONPLAYBOOKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_TRIGGERSOPHONPLAYBOOKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class TriggerSophonPlaybookResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TriggerSophonPlaybookResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(SophonTaskId, sophonTaskId_);
    };
    friend void from_json(const Darabonba::Json& j, TriggerSophonPlaybookResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(SophonTaskId, sophonTaskId_);
    };
    TriggerSophonPlaybookResponseBodyData() = default ;
    TriggerSophonPlaybookResponseBodyData(const TriggerSophonPlaybookResponseBodyData &) = default ;
    TriggerSophonPlaybookResponseBodyData(TriggerSophonPlaybookResponseBodyData &&) = default ;
    TriggerSophonPlaybookResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TriggerSophonPlaybookResponseBodyData() = default ;
    TriggerSophonPlaybookResponseBodyData& operator=(const TriggerSophonPlaybookResponseBodyData &) = default ;
    TriggerSophonPlaybookResponseBodyData& operator=(TriggerSophonPlaybookResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sophonTaskId_ == nullptr; };
    // sophonTaskId Field Functions 
    bool hasSophonTaskId() const { return this->sophonTaskId_ != nullptr;};
    void deleteSophonTaskId() { this->sophonTaskId_ = nullptr;};
    inline string sophonTaskId() const { DARABONBA_PTR_GET_DEFAULT(sophonTaskId_, "") };
    inline TriggerSophonPlaybookResponseBodyData& setSophonTaskId(string sophonTaskId) { DARABONBA_PTR_SET_VALUE(sophonTaskId_, sophonTaskId) };


  protected:
    // The custom ID. If you do not specify this parameter when the playbook is triggered, a random ID is generated for fault locating and troubleshooting.
    std::shared_ptr<string> sophonTaskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
