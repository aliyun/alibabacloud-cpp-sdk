// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKINSTANCESUPPORTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CHECKINSTANCESUPPORTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class CheckInstanceSupportResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckInstanceSupportResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(instance, instance_);
      DARABONBA_PTR_TO_JSON(reason, reason_);
      DARABONBA_PTR_TO_JSON(support, support_);
    };
    friend void from_json(const Darabonba::Json& j, CheckInstanceSupportResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(instance, instance_);
      DARABONBA_PTR_FROM_JSON(reason, reason_);
      DARABONBA_PTR_FROM_JSON(support, support_);
    };
    CheckInstanceSupportResponseBodyData() = default ;
    CheckInstanceSupportResponseBodyData(const CheckInstanceSupportResponseBodyData &) = default ;
    CheckInstanceSupportResponseBodyData(CheckInstanceSupportResponseBodyData &&) = default ;
    CheckInstanceSupportResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckInstanceSupportResponseBodyData() = default ;
    CheckInstanceSupportResponseBodyData& operator=(const CheckInstanceSupportResponseBodyData &) = default ;
    CheckInstanceSupportResponseBodyData& operator=(CheckInstanceSupportResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instance_ != nullptr
        && this->reason_ != nullptr && this->support_ != nullptr; };
    // instance Field Functions 
    bool hasInstance() const { return this->instance_ != nullptr;};
    void deleteInstance() { this->instance_ = nullptr;};
    inline string instance() const { DARABONBA_PTR_GET_DEFAULT(instance_, "") };
    inline CheckInstanceSupportResponseBodyData& setInstance(string instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline CheckInstanceSupportResponseBodyData& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // support Field Functions 
    bool hasSupport() const { return this->support_ != nullptr;};
    void deleteSupport() { this->support_ = nullptr;};
    inline bool support() const { DARABONBA_PTR_GET_DEFAULT(support_, false) };
    inline CheckInstanceSupportResponseBodyData& setSupport(bool support) { DARABONBA_PTR_SET_VALUE(support_, support) };


  protected:
    std::shared_ptr<string> instance_ = nullptr;
    std::shared_ptr<string> reason_ = nullptr;
    std::shared_ptr<bool> support_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
