// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_THIRDIMMEDIATEMSGPUSHRESPONSEBODYMODEL_HPP_
#define ALIBABACLOUD_MODELS_THIRDIMMEDIATEMSGPUSHRESPONSEBODYMODEL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ThirdImmediateMsgPushResponseBodyModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ThirdImmediateMsgPushResponseBodyModel& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ThirdImmediateMsgPushResponseBodyModel& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ThirdImmediateMsgPushResponseBodyModel() = default ;
    ThirdImmediateMsgPushResponseBodyModel(const ThirdImmediateMsgPushResponseBodyModel &) = default ;
    ThirdImmediateMsgPushResponseBodyModel(ThirdImmediateMsgPushResponseBodyModel &&) = default ;
    ThirdImmediateMsgPushResponseBodyModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ThirdImmediateMsgPushResponseBodyModel() = default ;
    ThirdImmediateMsgPushResponseBodyModel& operator=(const ThirdImmediateMsgPushResponseBodyModel &) = default ;
    ThirdImmediateMsgPushResponseBodyModel& operator=(ThirdImmediateMsgPushResponseBodyModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->success_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ThirdImmediateMsgPushResponseBodyModel& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ThirdImmediateMsgPushResponseBodyModel& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
