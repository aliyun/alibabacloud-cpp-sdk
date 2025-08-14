// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOUPONRESPONSEBODYDATASHAREUIDLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOUPONRESPONSEBODYDATASHAREUIDLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class DescribeCouponResponseBodyDataShareUidList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCouponResponseBodyDataShareUidList& obj) { 
      DARABONBA_PTR_TO_JSON(Uid, uid_);
      DARABONBA_PTR_TO_JSON(UserNick, userNick_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCouponResponseBodyDataShareUidList& obj) { 
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
      DARABONBA_PTR_FROM_JSON(UserNick, userNick_);
    };
    DescribeCouponResponseBodyDataShareUidList() = default ;
    DescribeCouponResponseBodyDataShareUidList(const DescribeCouponResponseBodyDataShareUidList &) = default ;
    DescribeCouponResponseBodyDataShareUidList(DescribeCouponResponseBodyDataShareUidList &&) = default ;
    DescribeCouponResponseBodyDataShareUidList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCouponResponseBodyDataShareUidList() = default ;
    DescribeCouponResponseBodyDataShareUidList& operator=(const DescribeCouponResponseBodyDataShareUidList &) = default ;
    DescribeCouponResponseBodyDataShareUidList& operator=(DescribeCouponResponseBodyDataShareUidList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->uid_ != nullptr
        && this->userNick_ != nullptr; };
    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline DescribeCouponResponseBodyDataShareUidList& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


    // userNick Field Functions 
    bool hasUserNick() const { return this->userNick_ != nullptr;};
    void deleteUserNick() { this->userNick_ = nullptr;};
    inline string userNick() const { DARABONBA_PTR_GET_DEFAULT(userNick_, "") };
    inline DescribeCouponResponseBodyDataShareUidList& setUserNick(string userNick) { DARABONBA_PTR_SET_VALUE(userNick_, userNick) };


  protected:
    std::shared_ptr<string> uid_ = nullptr;
    std::shared_ptr<string> userNick_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
