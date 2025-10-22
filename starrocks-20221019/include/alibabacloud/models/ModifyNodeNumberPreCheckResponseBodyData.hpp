// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYNODENUMBERPRECHECKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_MODIFYNODENUMBERPRECHECKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class ModifyNodeNumberPreCheckResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyNodeNumberPreCheckResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Allow, allow_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyNodeNumberPreCheckResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Allow, allow_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
    };
    ModifyNodeNumberPreCheckResponseBodyData() = default ;
    ModifyNodeNumberPreCheckResponseBodyData(const ModifyNodeNumberPreCheckResponseBodyData &) = default ;
    ModifyNodeNumberPreCheckResponseBodyData(ModifyNodeNumberPreCheckResponseBodyData &&) = default ;
    ModifyNodeNumberPreCheckResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyNodeNumberPreCheckResponseBodyData() = default ;
    ModifyNodeNumberPreCheckResponseBodyData& operator=(const ModifyNodeNumberPreCheckResponseBodyData &) = default ;
    ModifyNodeNumberPreCheckResponseBodyData& operator=(ModifyNodeNumberPreCheckResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allow_ == nullptr
        && return this->reason_ == nullptr; };
    // allow Field Functions 
    bool hasAllow() const { return this->allow_ != nullptr;};
    void deleteAllow() { this->allow_ = nullptr;};
    inline bool allow() const { DARABONBA_PTR_GET_DEFAULT(allow_, false) };
    inline ModifyNodeNumberPreCheckResponseBodyData& setAllow(bool allow) { DARABONBA_PTR_SET_VALUE(allow_, allow) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline ModifyNodeNumberPreCheckResponseBodyData& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


  protected:
    // Indicates whether the number of nodes can be modified.
    std::shared_ptr<bool> allow_ = nullptr;
    // The reason why the number of nodes cannot be modified.
    std::shared_ptr<string> reason_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
