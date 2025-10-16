// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERCONNECTTIMERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERCONNECTTIMERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeUserConnectTimeResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserConnectTimeResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(EndConnectTime, endConnectTime_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(OversoldGroupId, oversoldGroupId_);
      DARABONBA_PTR_TO_JSON(StartConnectTime, startConnectTime_);
      DARABONBA_PTR_TO_JSON(UserDesktopId, userDesktopId_);
      DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserConnectTimeResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(EndConnectTime, endConnectTime_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(OversoldGroupId, oversoldGroupId_);
      DARABONBA_PTR_FROM_JSON(StartConnectTime, startConnectTime_);
      DARABONBA_PTR_FROM_JSON(UserDesktopId, userDesktopId_);
      DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
    };
    DescribeUserConnectTimeResponseBodyData() = default ;
    DescribeUserConnectTimeResponseBodyData(const DescribeUserConnectTimeResponseBodyData &) = default ;
    DescribeUserConnectTimeResponseBodyData(DescribeUserConnectTimeResponseBodyData &&) = default ;
    DescribeUserConnectTimeResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserConnectTimeResponseBodyData() = default ;
    DescribeUserConnectTimeResponseBodyData& operator=(const DescribeUserConnectTimeResponseBodyData &) = default ;
    DescribeUserConnectTimeResponseBodyData& operator=(DescribeUserConnectTimeResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endConnectTime_ == nullptr
        && return this->endUserId_ == nullptr && return this->oversoldGroupId_ == nullptr && return this->startConnectTime_ == nullptr && return this->userDesktopId_ == nullptr && return this->userGroupId_ == nullptr; };
    // endConnectTime Field Functions 
    bool hasEndConnectTime() const { return this->endConnectTime_ != nullptr;};
    void deleteEndConnectTime() { this->endConnectTime_ = nullptr;};
    inline string endConnectTime() const { DARABONBA_PTR_GET_DEFAULT(endConnectTime_, "") };
    inline DescribeUserConnectTimeResponseBodyData& setEndConnectTime(string endConnectTime) { DARABONBA_PTR_SET_VALUE(endConnectTime_, endConnectTime) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string endUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline DescribeUserConnectTimeResponseBodyData& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // oversoldGroupId Field Functions 
    bool hasOversoldGroupId() const { return this->oversoldGroupId_ != nullptr;};
    void deleteOversoldGroupId() { this->oversoldGroupId_ = nullptr;};
    inline string oversoldGroupId() const { DARABONBA_PTR_GET_DEFAULT(oversoldGroupId_, "") };
    inline DescribeUserConnectTimeResponseBodyData& setOversoldGroupId(string oversoldGroupId) { DARABONBA_PTR_SET_VALUE(oversoldGroupId_, oversoldGroupId) };


    // startConnectTime Field Functions 
    bool hasStartConnectTime() const { return this->startConnectTime_ != nullptr;};
    void deleteStartConnectTime() { this->startConnectTime_ = nullptr;};
    inline string startConnectTime() const { DARABONBA_PTR_GET_DEFAULT(startConnectTime_, "") };
    inline DescribeUserConnectTimeResponseBodyData& setStartConnectTime(string startConnectTime) { DARABONBA_PTR_SET_VALUE(startConnectTime_, startConnectTime) };


    // userDesktopId Field Functions 
    bool hasUserDesktopId() const { return this->userDesktopId_ != nullptr;};
    void deleteUserDesktopId() { this->userDesktopId_ = nullptr;};
    inline string userDesktopId() const { DARABONBA_PTR_GET_DEFAULT(userDesktopId_, "") };
    inline DescribeUserConnectTimeResponseBodyData& setUserDesktopId(string userDesktopId) { DARABONBA_PTR_SET_VALUE(userDesktopId_, userDesktopId) };


    // userGroupId Field Functions 
    bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
    void deleteUserGroupId() { this->userGroupId_ = nullptr;};
    inline string userGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
    inline DescribeUserConnectTimeResponseBodyData& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


  protected:
    std::shared_ptr<string> endConnectTime_ = nullptr;
    std::shared_ptr<string> endUserId_ = nullptr;
    std::shared_ptr<string> oversoldGroupId_ = nullptr;
    std::shared_ptr<string> startConnectTime_ = nullptr;
    std::shared_ptr<string> userDesktopId_ = nullptr;
    std::shared_ptr<string> userGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
