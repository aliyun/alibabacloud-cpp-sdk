// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETK8SAPPPRECHECKRESULTRESPONSEBODYDATAJOBRESULTS_HPP_
#define ALIBABACLOUD_MODELS_GETK8SAPPPRECHECKRESULTRESPONSEBODYDATAJOBRESULTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class GetK8sAppPrecheckResultResponseBodyDataJobResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetK8sAppPrecheckResultResponseBodyDataJobResults& obj) { 
      DARABONBA_PTR_TO_JSON(Interrupted, interrupted_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Pass, pass_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
    };
    friend void from_json(const Darabonba::Json& j, GetK8sAppPrecheckResultResponseBodyDataJobResults& obj) { 
      DARABONBA_PTR_FROM_JSON(Interrupted, interrupted_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Pass, pass_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
    };
    GetK8sAppPrecheckResultResponseBodyDataJobResults() = default ;
    GetK8sAppPrecheckResultResponseBodyDataJobResults(const GetK8sAppPrecheckResultResponseBodyDataJobResults &) = default ;
    GetK8sAppPrecheckResultResponseBodyDataJobResults(GetK8sAppPrecheckResultResponseBodyDataJobResults &&) = default ;
    GetK8sAppPrecheckResultResponseBodyDataJobResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetK8sAppPrecheckResultResponseBodyDataJobResults() = default ;
    GetK8sAppPrecheckResultResponseBodyDataJobResults& operator=(const GetK8sAppPrecheckResultResponseBodyDataJobResults &) = default ;
    GetK8sAppPrecheckResultResponseBodyDataJobResults& operator=(GetK8sAppPrecheckResultResponseBodyDataJobResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->interrupted_ == nullptr
        && return this->name_ == nullptr && return this->pass_ == nullptr && return this->reason_ == nullptr; };
    // interrupted Field Functions 
    bool hasInterrupted() const { return this->interrupted_ != nullptr;};
    void deleteInterrupted() { this->interrupted_ = nullptr;};
    inline bool interrupted() const { DARABONBA_PTR_GET_DEFAULT(interrupted_, false) };
    inline GetK8sAppPrecheckResultResponseBodyDataJobResults& setInterrupted(bool interrupted) { DARABONBA_PTR_SET_VALUE(interrupted_, interrupted) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetK8sAppPrecheckResultResponseBodyDataJobResults& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pass Field Functions 
    bool hasPass() const { return this->pass_ != nullptr;};
    void deletePass() { this->pass_ = nullptr;};
    inline bool pass() const { DARABONBA_PTR_GET_DEFAULT(pass_, false) };
    inline GetK8sAppPrecheckResultResponseBodyDataJobResults& setPass(bool pass) { DARABONBA_PTR_SET_VALUE(pass_, pass) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline GetK8sAppPrecheckResultResponseBodyDataJobResults& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


  protected:
    // Specifies whether the precheck of the item was interrupted:
    // 
    // *   true: The precheck of the item was interrupted.
    // *   false: The precheck of the item was not interrupted.
    std::shared_ptr<bool> interrupted_ = nullptr;
    // The name of the precheck item.
    std::shared_ptr<string> name_ = nullptr;
    // Indicates whether the precheck item passed the precheck:
    // 
    // *   true: The precheck item passed the precheck.
    // *   false: The precheck item failed the precheck.
    std::shared_ptr<bool> pass_ = nullptr;
    // The reason why the precheck item failed the precheck or the precheck of the item was interrupted. This parameter is left empty when the application passed the precheck.
    std::shared_ptr<string> reason_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
