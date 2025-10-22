// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEAGENTFROMSKILLGROUPRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_REMOVEAGENTFROMSKILLGROUPRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class RemoveAgentFromSkillGroupResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveAgentFromSkillGroupResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(SuccessCount, successCount_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveAgentFromSkillGroupResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(SuccessCount, successCount_);
    };
    RemoveAgentFromSkillGroupResponseBodyData() = default ;
    RemoveAgentFromSkillGroupResponseBodyData(const RemoveAgentFromSkillGroupResponseBodyData &) = default ;
    RemoveAgentFromSkillGroupResponseBodyData(RemoveAgentFromSkillGroupResponseBodyData &&) = default ;
    RemoveAgentFromSkillGroupResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveAgentFromSkillGroupResponseBodyData() = default ;
    RemoveAgentFromSkillGroupResponseBodyData& operator=(const RemoveAgentFromSkillGroupResponseBodyData &) = default ;
    RemoveAgentFromSkillGroupResponseBodyData& operator=(RemoveAgentFromSkillGroupResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->successCount_ == nullptr; };
    // successCount Field Functions 
    bool hasSuccessCount() const { return this->successCount_ != nullptr;};
    void deleteSuccessCount() { this->successCount_ = nullptr;};
    inline int32_t successCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0) };
    inline RemoveAgentFromSkillGroupResponseBodyData& setSuccessCount(int32_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


  protected:
    std::shared_ptr<int32_t> successCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
