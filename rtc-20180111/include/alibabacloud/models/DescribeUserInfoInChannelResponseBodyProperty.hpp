// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERINFOINCHANNELRESPONSEBODYPROPERTY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERINFOINCHANNELRESPONSEBODYPROPERTY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeUserInfoInChannelResponseBodyProperty : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserInfoInChannelResponseBodyProperty& obj) { 
      DARABONBA_PTR_TO_JSON(Join, join_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(Session, session_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserInfoInChannelResponseBodyProperty& obj) { 
      DARABONBA_PTR_FROM_JSON(Join, join_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(Session, session_);
    };
    DescribeUserInfoInChannelResponseBodyProperty() = default ;
    DescribeUserInfoInChannelResponseBodyProperty(const DescribeUserInfoInChannelResponseBodyProperty &) = default ;
    DescribeUserInfoInChannelResponseBodyProperty(DescribeUserInfoInChannelResponseBodyProperty &&) = default ;
    DescribeUserInfoInChannelResponseBodyProperty(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserInfoInChannelResponseBodyProperty() = default ;
    DescribeUserInfoInChannelResponseBodyProperty& operator=(const DescribeUserInfoInChannelResponseBodyProperty &) = default ;
    DescribeUserInfoInChannelResponseBodyProperty& operator=(DescribeUserInfoInChannelResponseBodyProperty &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->join_ != nullptr
        && this->role_ != nullptr && this->session_ != nullptr; };
    // join Field Functions 
    bool hasJoin() const { return this->join_ != nullptr;};
    void deleteJoin() { this->join_ = nullptr;};
    inline int32_t join() const { DARABONBA_PTR_GET_DEFAULT(join_, 0) };
    inline DescribeUserInfoInChannelResponseBodyProperty& setJoin(int32_t join) { DARABONBA_PTR_SET_VALUE(join_, join) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline int32_t role() const { DARABONBA_PTR_GET_DEFAULT(role_, 0) };
    inline DescribeUserInfoInChannelResponseBodyProperty& setRole(int32_t role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // session Field Functions 
    bool hasSession() const { return this->session_ != nullptr;};
    void deleteSession() { this->session_ = nullptr;};
    inline string session() const { DARABONBA_PTR_GET_DEFAULT(session_, "") };
    inline DescribeUserInfoInChannelResponseBodyProperty& setSession(string session) { DARABONBA_PTR_SET_VALUE(session_, session) };


  protected:
    std::shared_ptr<int32_t> join_ = nullptr;
    std::shared_ptr<int32_t> role_ = nullptr;
    std::shared_ptr<string> session_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
