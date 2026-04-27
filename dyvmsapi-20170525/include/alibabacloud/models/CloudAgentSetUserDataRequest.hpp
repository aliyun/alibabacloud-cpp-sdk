// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDAGENTSETUSERDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLOUDAGENTSETUSERDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class CloudAgentSetUserDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudAgentSetUserDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Cno, cno_);
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, CloudAgentSetUserDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Cno, cno_);
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    CloudAgentSetUserDataRequest() = default ;
    CloudAgentSetUserDataRequest(const CloudAgentSetUserDataRequest &) = default ;
    CloudAgentSetUserDataRequest(CloudAgentSetUserDataRequest &&) = default ;
    CloudAgentSetUserDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudAgentSetUserDataRequest() = default ;
    CloudAgentSetUserDataRequest& operator=(const CloudAgentSetUserDataRequest &) = default ;
    CloudAgentSetUserDataRequest& operator=(CloudAgentSetUserDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cno_ == nullptr
        && this->direction_ == nullptr && this->enterpriseId_ == nullptr && this->userData_ == nullptr; };
    // cno Field Functions 
    bool hasCno() const { return this->cno_ != nullptr;};
    void deleteCno() { this->cno_ = nullptr;};
    inline string getCno() const { DARABONBA_PTR_GET_DEFAULT(cno_, "") };
    inline CloudAgentSetUserDataRequest& setCno(string cno) { DARABONBA_PTR_SET_VALUE(cno_, cno) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline int64_t getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, 0L) };
    inline CloudAgentSetUserDataRequest& setDirection(int64_t direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // enterpriseId Field Functions 
    bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
    void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
    inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
    inline CloudAgentSetUserDataRequest& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline CloudAgentSetUserDataRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // 座席工号；取值3-10位正整数
    // 
    // This parameter is required.
    shared_ptr<string> cno_ {};
    // 随路数据方向；取值说明：1： 座席侧，2： 非座席侧
    // 
    // This parameter is required.
    shared_ptr<int64_t> direction_ {};
    // 呼叫中心 id
    // 
    // This parameter is required.
    shared_ptr<int64_t> enterpriseId_ {};
    // json格式字符串,传入的值会打入通道变量,格式：json字符串{"key":"value"} 随路数据数据格式：key=value,不支持数组，嵌套。
    // 
    // This parameter is required.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
