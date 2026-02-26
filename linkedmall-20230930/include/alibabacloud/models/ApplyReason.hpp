// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYREASON_HPP_
#define ALIBABACLOUD_MODELS_APPLYREASON_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class ApplyReason : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyReason& obj) { 
      DARABONBA_PTR_TO_JSON(reasonTextId, reasonTextId_);
      DARABONBA_PTR_TO_JSON(reasonTips, reasonTips_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyReason& obj) { 
      DARABONBA_PTR_FROM_JSON(reasonTextId, reasonTextId_);
      DARABONBA_PTR_FROM_JSON(reasonTips, reasonTips_);
    };
    ApplyReason() = default ;
    ApplyReason(const ApplyReason &) = default ;
    ApplyReason(ApplyReason &&) = default ;
    ApplyReason(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyReason() = default ;
    ApplyReason& operator=(const ApplyReason &) = default ;
    ApplyReason& operator=(ApplyReason &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->reasonTextId_ == nullptr
        && this->reasonTips_ == nullptr; };
    // reasonTextId Field Functions 
    bool hasReasonTextId() const { return this->reasonTextId_ != nullptr;};
    void deleteReasonTextId() { this->reasonTextId_ = nullptr;};
    inline int64_t getReasonTextId() const { DARABONBA_PTR_GET_DEFAULT(reasonTextId_, 0L) };
    inline ApplyReason& setReasonTextId(int64_t reasonTextId) { DARABONBA_PTR_SET_VALUE(reasonTextId_, reasonTextId) };


    // reasonTips Field Functions 
    bool hasReasonTips() const { return this->reasonTips_ != nullptr;};
    void deleteReasonTips() { this->reasonTips_ = nullptr;};
    inline string getReasonTips() const { DARABONBA_PTR_GET_DEFAULT(reasonTips_, "") };
    inline ApplyReason& setReasonTips(string reasonTips) { DARABONBA_PTR_SET_VALUE(reasonTips_, reasonTips) };


  protected:
    shared_ptr<int64_t> reasonTextId_ {};
    shared_ptr<string> reasonTips_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
