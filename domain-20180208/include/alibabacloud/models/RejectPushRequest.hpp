// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REJECTPUSHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REJECTPUSHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class RejectPushRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RejectPushRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PushNo, pushNo_);
    };
    friend void from_json(const Darabonba::Json& j, RejectPushRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PushNo, pushNo_);
    };
    RejectPushRequest() = default ;
    RejectPushRequest(const RejectPushRequest &) = default ;
    RejectPushRequest(RejectPushRequest &&) = default ;
    RejectPushRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RejectPushRequest() = default ;
    RejectPushRequest& operator=(const RejectPushRequest &) = default ;
    RejectPushRequest& operator=(RejectPushRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pushNo_ == nullptr; };
    // pushNo Field Functions 
    bool hasPushNo() const { return this->pushNo_ != nullptr;};
    void deletePushNo() { this->pushNo_ = nullptr;};
    inline string getPushNo() const { DARABONBA_PTR_GET_DEFAULT(pushNo_, "") };
    inline RejectPushRequest& setPushNo(string pushNo) { DARABONBA_PTR_SET_VALUE(pushNo_, pushNo) };


  protected:
    // Push编号
    // 
    // This parameter is required.
    shared_ptr<string> pushNo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
