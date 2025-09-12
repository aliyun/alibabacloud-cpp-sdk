// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCUPRECHECKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCUPRECHECKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class ModifyCuPreCheckResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCuPreCheckResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Allow, allow_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCuPreCheckResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Allow, allow_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
    };
    ModifyCuPreCheckResponseBodyData() = default ;
    ModifyCuPreCheckResponseBodyData(const ModifyCuPreCheckResponseBodyData &) = default ;
    ModifyCuPreCheckResponseBodyData(ModifyCuPreCheckResponseBodyData &&) = default ;
    ModifyCuPreCheckResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCuPreCheckResponseBodyData() = default ;
    ModifyCuPreCheckResponseBodyData& operator=(const ModifyCuPreCheckResponseBodyData &) = default ;
    ModifyCuPreCheckResponseBodyData& operator=(ModifyCuPreCheckResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allow_ != nullptr
        && this->reason_ != nullptr; };
    // allow Field Functions 
    bool hasAllow() const { return this->allow_ != nullptr;};
    void deleteAllow() { this->allow_ = nullptr;};
    inline bool allow() const { DARABONBA_PTR_GET_DEFAULT(allow_, false) };
    inline ModifyCuPreCheckResponseBodyData& setAllow(bool allow) { DARABONBA_PTR_SET_VALUE(allow_, allow) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline ModifyCuPreCheckResponseBodyData& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


  protected:
    // Indicates whether the number of CUs can be modified.
    std::shared_ptr<bool> allow_ = nullptr;
    // The reason why the number of CUs cannot be modified.
    std::shared_ptr<string> reason_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
