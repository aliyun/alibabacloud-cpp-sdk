// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUSPENDTRAFFICRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_SUSPENDTRAFFICRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class SuspendTrafficResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SuspendTrafficResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(msg, msg_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, SuspendTrafficResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(msg, msg_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    SuspendTrafficResponseBodyData() = default ;
    SuspendTrafficResponseBodyData(const SuspendTrafficResponseBodyData &) = default ;
    SuspendTrafficResponseBodyData(SuspendTrafficResponseBodyData &&) = default ;
    SuspendTrafficResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SuspendTrafficResponseBodyData() = default ;
    SuspendTrafficResponseBodyData& operator=(const SuspendTrafficResponseBodyData &) = default ;
    SuspendTrafficResponseBodyData& operator=(SuspendTrafficResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->msg_ == nullptr
        && return this->success_ == nullptr; };
    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string msg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline SuspendTrafficResponseBodyData& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline SuspendTrafficResponseBodyData& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> msg_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
