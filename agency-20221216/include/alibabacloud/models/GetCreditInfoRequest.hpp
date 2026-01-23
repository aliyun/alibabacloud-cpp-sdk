// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCREDITINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCREDITINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class GetCreditInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCreditInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, GetCreditInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
    };
    GetCreditInfoRequest() = default ;
    GetCreditInfoRequest(const GetCreditInfoRequest &) = default ;
    GetCreditInfoRequest(GetCreditInfoRequest &&) = default ;
    GetCreditInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCreditInfoRequest() = default ;
    GetCreditInfoRequest& operator=(const GetCreditInfoRequest &) = default ;
    GetCreditInfoRequest& operator=(GetCreditInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->uid_ == nullptr; };
    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline int64_t getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, 0L) };
    inline GetCreditInfoRequest& setUid(int64_t uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    // Sub Account UID
    // 
    // This parameter is required.
    shared_ptr<int64_t> uid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
