// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EVENTFILTERCONFIG_HPP_
#define ALIBABACLOUD_MODELS_EVENTFILTERCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class EventFilterConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EventFilterConfig& obj) { 
      DARABONBA_PTR_TO_JSON(branch, branch_);
    };
    friend void from_json(const Darabonba::Json& j, EventFilterConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(branch, branch_);
    };
    EventFilterConfig() = default ;
    EventFilterConfig(const EventFilterConfig &) = default ;
    EventFilterConfig(EventFilterConfig &&) = default ;
    EventFilterConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EventFilterConfig() = default ;
    EventFilterConfig& operator=(const EventFilterConfig &) = default ;
    EventFilterConfig& operator=(EventFilterConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->branch_ != nullptr; };
    // branch Field Functions 
    bool hasBranch() const { return this->branch_ != nullptr;};
    void deleteBranch() { this->branch_ = nullptr;};
    inline const BranchFilter & branch() const { DARABONBA_PTR_GET_CONST(branch_, BranchFilter) };
    inline BranchFilter branch() { DARABONBA_PTR_GET(branch_, BranchFilter) };
    inline EventFilterConfig& setBranch(const BranchFilter & branch) { DARABONBA_PTR_SET_VALUE(branch_, branch) };
    inline EventFilterConfig& setBranch(BranchFilter && branch) { DARABONBA_PTR_SET_RVALUE(branch_, branch) };


  protected:
    std::shared_ptr<BranchFilter> branch_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
