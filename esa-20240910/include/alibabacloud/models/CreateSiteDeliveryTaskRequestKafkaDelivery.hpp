// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESITEDELIVERYTASKREQUESTKAFKADELIVERY_HPP_
#define ALIBABACLOUD_MODELS_CREATESITEDELIVERYTASKREQUESTKAFKADELIVERY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateSiteDeliveryTaskRequestKafkaDelivery : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSiteDeliveryTaskRequestKafkaDelivery& obj) { 
      DARABONBA_PTR_TO_JSON(Balancer, balancer_);
      DARABONBA_PTR_TO_JSON(Brokers, brokers_);
      DARABONBA_PTR_TO_JSON(Compress, compress_);
      DARABONBA_PTR_TO_JSON(MachanismType, machanismType_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
      DARABONBA_PTR_TO_JSON(UserAuth, userAuth_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSiteDeliveryTaskRequestKafkaDelivery& obj) { 
      DARABONBA_PTR_FROM_JSON(Balancer, balancer_);
      DARABONBA_PTR_FROM_JSON(Brokers, brokers_);
      DARABONBA_PTR_FROM_JSON(Compress, compress_);
      DARABONBA_PTR_FROM_JSON(MachanismType, machanismType_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
      DARABONBA_PTR_FROM_JSON(UserAuth, userAuth_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    CreateSiteDeliveryTaskRequestKafkaDelivery() = default ;
    CreateSiteDeliveryTaskRequestKafkaDelivery(const CreateSiteDeliveryTaskRequestKafkaDelivery &) = default ;
    CreateSiteDeliveryTaskRequestKafkaDelivery(CreateSiteDeliveryTaskRequestKafkaDelivery &&) = default ;
    CreateSiteDeliveryTaskRequestKafkaDelivery(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSiteDeliveryTaskRequestKafkaDelivery() = default ;
    CreateSiteDeliveryTaskRequestKafkaDelivery& operator=(const CreateSiteDeliveryTaskRequestKafkaDelivery &) = default ;
    CreateSiteDeliveryTaskRequestKafkaDelivery& operator=(CreateSiteDeliveryTaskRequestKafkaDelivery &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->balancer_ != nullptr
        && this->brokers_ != nullptr && this->compress_ != nullptr && this->machanismType_ != nullptr && this->password_ != nullptr && this->topic_ != nullptr
        && this->userAuth_ != nullptr && this->userName_ != nullptr; };
    // balancer Field Functions 
    bool hasBalancer() const { return this->balancer_ != nullptr;};
    void deleteBalancer() { this->balancer_ = nullptr;};
    inline string balancer() const { DARABONBA_PTR_GET_DEFAULT(balancer_, "") };
    inline CreateSiteDeliveryTaskRequestKafkaDelivery& setBalancer(string balancer) { DARABONBA_PTR_SET_VALUE(balancer_, balancer) };


    // brokers Field Functions 
    bool hasBrokers() const { return this->brokers_ != nullptr;};
    void deleteBrokers() { this->brokers_ = nullptr;};
    inline const vector<string> & brokers() const { DARABONBA_PTR_GET_CONST(brokers_, vector<string>) };
    inline vector<string> brokers() { DARABONBA_PTR_GET(brokers_, vector<string>) };
    inline CreateSiteDeliveryTaskRequestKafkaDelivery& setBrokers(const vector<string> & brokers) { DARABONBA_PTR_SET_VALUE(brokers_, brokers) };
    inline CreateSiteDeliveryTaskRequestKafkaDelivery& setBrokers(vector<string> && brokers) { DARABONBA_PTR_SET_RVALUE(brokers_, brokers) };


    // compress Field Functions 
    bool hasCompress() const { return this->compress_ != nullptr;};
    void deleteCompress() { this->compress_ = nullptr;};
    inline string compress() const { DARABONBA_PTR_GET_DEFAULT(compress_, "") };
    inline CreateSiteDeliveryTaskRequestKafkaDelivery& setCompress(string compress) { DARABONBA_PTR_SET_VALUE(compress_, compress) };


    // machanismType Field Functions 
    bool hasMachanismType() const { return this->machanismType_ != nullptr;};
    void deleteMachanismType() { this->machanismType_ = nullptr;};
    inline string machanismType() const { DARABONBA_PTR_GET_DEFAULT(machanismType_, "") };
    inline CreateSiteDeliveryTaskRequestKafkaDelivery& setMachanismType(string machanismType) { DARABONBA_PTR_SET_VALUE(machanismType_, machanismType) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CreateSiteDeliveryTaskRequestKafkaDelivery& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string topic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline CreateSiteDeliveryTaskRequestKafkaDelivery& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


    // userAuth Field Functions 
    bool hasUserAuth() const { return this->userAuth_ != nullptr;};
    void deleteUserAuth() { this->userAuth_ = nullptr;};
    inline bool userAuth() const { DARABONBA_PTR_GET_DEFAULT(userAuth_, false) };
    inline CreateSiteDeliveryTaskRequestKafkaDelivery& setUserAuth(bool userAuth) { DARABONBA_PTR_SET_VALUE(userAuth_, userAuth) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline CreateSiteDeliveryTaskRequestKafkaDelivery& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The load balancing method.
    std::shared_ptr<string> balancer_ = nullptr;
    // The brokers.
    std::shared_ptr<vector<string>> brokers_ = nullptr;
    // The compression method.
    std::shared_ptr<string> compress_ = nullptr;
    // The encryption method.
    std::shared_ptr<string> machanismType_ = nullptr;
    // The password.
    std::shared_ptr<string> password_ = nullptr;
    // The topic.
    std::shared_ptr<string> topic_ = nullptr;
    // Specifies whether to enable authentication.
    std::shared_ptr<bool> userAuth_ = nullptr;
    // The username.
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
