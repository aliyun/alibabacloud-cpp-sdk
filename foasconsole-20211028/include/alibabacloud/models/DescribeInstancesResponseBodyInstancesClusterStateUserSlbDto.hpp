// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESCLUSTERSTATEUSERSLBDTO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESCLUSTERSTATEUSERSLBDTO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstancesResponseBodyInstancesClusterStateUserSlbDtoUserSlbListeners.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20211028
{
namespace Models
{
  class DescribeInstancesResponseBodyInstancesClusterStateUserSlbDto : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesResponseBodyInstancesClusterStateUserSlbDto& obj) { 
      DARABONBA_PTR_TO_JSON(ExistSlb, existSlb_);
      DARABONBA_PTR_TO_JSON(SlbId, slbId_);
      DARABONBA_PTR_TO_JSON(SlbIp, slbIp_);
      DARABONBA_PTR_TO_JSON(SlbStatus, slbStatus_);
      DARABONBA_PTR_TO_JSON(UserSlbListeners, userSlbListeners_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesResponseBodyInstancesClusterStateUserSlbDto& obj) { 
      DARABONBA_PTR_FROM_JSON(ExistSlb, existSlb_);
      DARABONBA_PTR_FROM_JSON(SlbId, slbId_);
      DARABONBA_PTR_FROM_JSON(SlbIp, slbIp_);
      DARABONBA_PTR_FROM_JSON(SlbStatus, slbStatus_);
      DARABONBA_PTR_FROM_JSON(UserSlbListeners, userSlbListeners_);
    };
    DescribeInstancesResponseBodyInstancesClusterStateUserSlbDto() = default ;
    DescribeInstancesResponseBodyInstancesClusterStateUserSlbDto(const DescribeInstancesResponseBodyInstancesClusterStateUserSlbDto &) = default ;
    DescribeInstancesResponseBodyInstancesClusterStateUserSlbDto(DescribeInstancesResponseBodyInstancesClusterStateUserSlbDto &&) = default ;
    DescribeInstancesResponseBodyInstancesClusterStateUserSlbDto(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesResponseBodyInstancesClusterStateUserSlbDto() = default ;
    DescribeInstancesResponseBodyInstancesClusterStateUserSlbDto& operator=(const DescribeInstancesResponseBodyInstancesClusterStateUserSlbDto &) = default ;
    DescribeInstancesResponseBodyInstancesClusterStateUserSlbDto& operator=(DescribeInstancesResponseBodyInstancesClusterStateUserSlbDto &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->existSlb_ == nullptr
        && return this->slbId_ == nullptr && return this->slbIp_ == nullptr && return this->slbStatus_ == nullptr && return this->userSlbListeners_ == nullptr; };
    // existSlb Field Functions 
    bool hasExistSlb() const { return this->existSlb_ != nullptr;};
    void deleteExistSlb() { this->existSlb_ = nullptr;};
    inline bool existSlb() const { DARABONBA_PTR_GET_DEFAULT(existSlb_, false) };
    inline DescribeInstancesResponseBodyInstancesClusterStateUserSlbDto& setExistSlb(bool existSlb) { DARABONBA_PTR_SET_VALUE(existSlb_, existSlb) };


    // slbId Field Functions 
    bool hasSlbId() const { return this->slbId_ != nullptr;};
    void deleteSlbId() { this->slbId_ = nullptr;};
    inline string slbId() const { DARABONBA_PTR_GET_DEFAULT(slbId_, "") };
    inline DescribeInstancesResponseBodyInstancesClusterStateUserSlbDto& setSlbId(string slbId) { DARABONBA_PTR_SET_VALUE(slbId_, slbId) };


    // slbIp Field Functions 
    bool hasSlbIp() const { return this->slbIp_ != nullptr;};
    void deleteSlbIp() { this->slbIp_ = nullptr;};
    inline string slbIp() const { DARABONBA_PTR_GET_DEFAULT(slbIp_, "") };
    inline DescribeInstancesResponseBodyInstancesClusterStateUserSlbDto& setSlbIp(string slbIp) { DARABONBA_PTR_SET_VALUE(slbIp_, slbIp) };


    // slbStatus Field Functions 
    bool hasSlbStatus() const { return this->slbStatus_ != nullptr;};
    void deleteSlbStatus() { this->slbStatus_ = nullptr;};
    inline string slbStatus() const { DARABONBA_PTR_GET_DEFAULT(slbStatus_, "") };
    inline DescribeInstancesResponseBodyInstancesClusterStateUserSlbDto& setSlbStatus(string slbStatus) { DARABONBA_PTR_SET_VALUE(slbStatus_, slbStatus) };


    // userSlbListeners Field Functions 
    bool hasUserSlbListeners() const { return this->userSlbListeners_ != nullptr;};
    void deleteUserSlbListeners() { this->userSlbListeners_ = nullptr;};
    inline const vector<Models::DescribeInstancesResponseBodyInstancesClusterStateUserSlbDtoUserSlbListeners> & userSlbListeners() const { DARABONBA_PTR_GET_CONST(userSlbListeners_, vector<Models::DescribeInstancesResponseBodyInstancesClusterStateUserSlbDtoUserSlbListeners>) };
    inline vector<Models::DescribeInstancesResponseBodyInstancesClusterStateUserSlbDtoUserSlbListeners> userSlbListeners() { DARABONBA_PTR_GET(userSlbListeners_, vector<Models::DescribeInstancesResponseBodyInstancesClusterStateUserSlbDtoUserSlbListeners>) };
    inline DescribeInstancesResponseBodyInstancesClusterStateUserSlbDto& setUserSlbListeners(const vector<Models::DescribeInstancesResponseBodyInstancesClusterStateUserSlbDtoUserSlbListeners> & userSlbListeners) { DARABONBA_PTR_SET_VALUE(userSlbListeners_, userSlbListeners) };
    inline DescribeInstancesResponseBodyInstancesClusterStateUserSlbDto& setUserSlbListeners(vector<Models::DescribeInstancesResponseBodyInstancesClusterStateUserSlbDtoUserSlbListeners> && userSlbListeners) { DARABONBA_PTR_SET_RVALUE(userSlbListeners_, userSlbListeners) };


  protected:
    std::shared_ptr<bool> existSlb_ = nullptr;
    std::shared_ptr<string> slbId_ = nullptr;
    std::shared_ptr<string> slbIp_ = nullptr;
    std::shared_ptr<string> slbStatus_ = nullptr;
    std::shared_ptr<vector<Models::DescribeInstancesResponseBodyInstancesClusterStateUserSlbDtoUserSlbListeners>> userSlbListeners_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20211028
#endif
