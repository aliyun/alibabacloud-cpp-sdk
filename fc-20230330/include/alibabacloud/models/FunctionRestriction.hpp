// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FUNCTIONRESTRICTION_HPP_
#define ALIBABACLOUD_MODELS_FUNCTIONRESTRICTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class FunctionRestriction : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FunctionRestriction& obj) { 
      DARABONBA_PTR_TO_JSON(disable, disable_);
      DARABONBA_PTR_TO_JSON(lastModifiedTime, lastModifiedTime_);
      DARABONBA_PTR_TO_JSON(reason, reason_);
    };
    friend void from_json(const Darabonba::Json& j, FunctionRestriction& obj) { 
      DARABONBA_PTR_FROM_JSON(disable, disable_);
      DARABONBA_PTR_FROM_JSON(lastModifiedTime, lastModifiedTime_);
      DARABONBA_PTR_FROM_JSON(reason, reason_);
    };
    FunctionRestriction() = default ;
    FunctionRestriction(const FunctionRestriction &) = default ;
    FunctionRestriction(FunctionRestriction &&) = default ;
    FunctionRestriction(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FunctionRestriction() = default ;
    FunctionRestriction& operator=(const FunctionRestriction &) = default ;
    FunctionRestriction& operator=(FunctionRestriction &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->disable_ == nullptr
        && this->lastModifiedTime_ == nullptr && this->reason_ == nullptr; };
    // disable Field Functions 
    bool hasDisable() const { return this->disable_ != nullptr;};
    void deleteDisable() { this->disable_ = nullptr;};
    inline bool getDisable() const { DARABONBA_PTR_GET_DEFAULT(disable_, false) };
    inline FunctionRestriction& setDisable(bool disable) { DARABONBA_PTR_SET_VALUE(disable_, disable) };


    // lastModifiedTime Field Functions 
    bool hasLastModifiedTime() const { return this->lastModifiedTime_ != nullptr;};
    void deleteLastModifiedTime() { this->lastModifiedTime_ = nullptr;};
    inline string getLastModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifiedTime_, "") };
    inline FunctionRestriction& setLastModifiedTime(string lastModifiedTime) { DARABONBA_PTR_SET_VALUE(lastModifiedTime_, lastModifiedTime) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline FunctionRestriction& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


  protected:
    shared_ptr<bool> disable_ {};
    shared_ptr<string> lastModifiedTime_ {};
    shared_ptr<string> reason_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
