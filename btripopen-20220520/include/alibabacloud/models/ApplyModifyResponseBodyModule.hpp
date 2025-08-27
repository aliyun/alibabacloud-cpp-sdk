// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYMODIFYRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_APPLYMODIFYRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ApplyModifyResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyModifyResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(apply_id, applyId_);
      DARABONBA_PTR_TO_JSON(thirdpart_apply_id, thirdpartApplyId_);
      DARABONBA_PTR_TO_JSON(thirdpart_business_id, thirdpartBusinessId_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyModifyResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(apply_id, applyId_);
      DARABONBA_PTR_FROM_JSON(thirdpart_apply_id, thirdpartApplyId_);
      DARABONBA_PTR_FROM_JSON(thirdpart_business_id, thirdpartBusinessId_);
    };
    ApplyModifyResponseBodyModule() = default ;
    ApplyModifyResponseBodyModule(const ApplyModifyResponseBodyModule &) = default ;
    ApplyModifyResponseBodyModule(ApplyModifyResponseBodyModule &&) = default ;
    ApplyModifyResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyModifyResponseBodyModule() = default ;
    ApplyModifyResponseBodyModule& operator=(const ApplyModifyResponseBodyModule &) = default ;
    ApplyModifyResponseBodyModule& operator=(ApplyModifyResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applyId_ != nullptr
        && this->thirdpartApplyId_ != nullptr && this->thirdpartBusinessId_ != nullptr; };
    // applyId Field Functions 
    bool hasApplyId() const { return this->applyId_ != nullptr;};
    void deleteApplyId() { this->applyId_ = nullptr;};
    inline int64_t applyId() const { DARABONBA_PTR_GET_DEFAULT(applyId_, 0L) };
    inline ApplyModifyResponseBodyModule& setApplyId(int64_t applyId) { DARABONBA_PTR_SET_VALUE(applyId_, applyId) };


    // thirdpartApplyId Field Functions 
    bool hasThirdpartApplyId() const { return this->thirdpartApplyId_ != nullptr;};
    void deleteThirdpartApplyId() { this->thirdpartApplyId_ = nullptr;};
    inline string thirdpartApplyId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartApplyId_, "") };
    inline ApplyModifyResponseBodyModule& setThirdpartApplyId(string thirdpartApplyId) { DARABONBA_PTR_SET_VALUE(thirdpartApplyId_, thirdpartApplyId) };


    // thirdpartBusinessId Field Functions 
    bool hasThirdpartBusinessId() const { return this->thirdpartBusinessId_ != nullptr;};
    void deleteThirdpartBusinessId() { this->thirdpartBusinessId_ = nullptr;};
    inline string thirdpartBusinessId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartBusinessId_, "") };
    inline ApplyModifyResponseBodyModule& setThirdpartBusinessId(string thirdpartBusinessId) { DARABONBA_PTR_SET_VALUE(thirdpartBusinessId_, thirdpartBusinessId) };


  protected:
    std::shared_ptr<int64_t> applyId_ = nullptr;
    std::shared_ptr<string> thirdpartApplyId_ = nullptr;
    std::shared_ptr<string> thirdpartBusinessId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
