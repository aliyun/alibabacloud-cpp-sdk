// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OBTAINMQCONSOLELINKCMD_HPP_
#define ALIBABACLOUD_MODELS_OBTAINMQCONSOLELINKCMD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class ObtainMqConsoleLinkCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ObtainMqConsoleLinkCmd& obj) { 
      DARABONBA_PTR_TO_JSON(env, env_);
      DARABONBA_PTR_TO_JSON(groupType, groupType_);
      DARABONBA_PTR_TO_JSON(mqGroupId, mqGroupId_);
      DARABONBA_PTR_TO_JSON(pbcId, pbcId_);
      DARABONBA_PTR_TO_JSON(serviceName, serviceName_);
      DARABONBA_PTR_TO_JSON(topicName, topicName_);
    };
    friend void from_json(const Darabonba::Json& j, ObtainMqConsoleLinkCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(env, env_);
      DARABONBA_PTR_FROM_JSON(groupType, groupType_);
      DARABONBA_PTR_FROM_JSON(mqGroupId, mqGroupId_);
      DARABONBA_PTR_FROM_JSON(pbcId, pbcId_);
      DARABONBA_PTR_FROM_JSON(serviceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(topicName, topicName_);
    };
    ObtainMqConsoleLinkCmd() = default ;
    ObtainMqConsoleLinkCmd(const ObtainMqConsoleLinkCmd &) = default ;
    ObtainMqConsoleLinkCmd(ObtainMqConsoleLinkCmd &&) = default ;
    ObtainMqConsoleLinkCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ObtainMqConsoleLinkCmd() = default ;
    ObtainMqConsoleLinkCmd& operator=(const ObtainMqConsoleLinkCmd &) = default ;
    ObtainMqConsoleLinkCmd& operator=(ObtainMqConsoleLinkCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->env_ == nullptr
        && this->groupType_ == nullptr && this->mqGroupId_ == nullptr && this->pbcId_ == nullptr && this->serviceName_ == nullptr && this->topicName_ == nullptr; };
    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline ObtainMqConsoleLinkCmd& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // groupType Field Functions 
    bool hasGroupType() const { return this->groupType_ != nullptr;};
    void deleteGroupType() { this->groupType_ = nullptr;};
    inline string getGroupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, "") };
    inline ObtainMqConsoleLinkCmd& setGroupType(string groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


    // mqGroupId Field Functions 
    bool hasMqGroupId() const { return this->mqGroupId_ != nullptr;};
    void deleteMqGroupId() { this->mqGroupId_ = nullptr;};
    inline string getMqGroupId() const { DARABONBA_PTR_GET_DEFAULT(mqGroupId_, "") };
    inline ObtainMqConsoleLinkCmd& setMqGroupId(string mqGroupId) { DARABONBA_PTR_SET_VALUE(mqGroupId_, mqGroupId) };


    // pbcId Field Functions 
    bool hasPbcId() const { return this->pbcId_ != nullptr;};
    void deletePbcId() { this->pbcId_ = nullptr;};
    inline int64_t getPbcId() const { DARABONBA_PTR_GET_DEFAULT(pbcId_, 0L) };
    inline ObtainMqConsoleLinkCmd& setPbcId(int64_t pbcId) { DARABONBA_PTR_SET_VALUE(pbcId_, pbcId) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline ObtainMqConsoleLinkCmd& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // topicName Field Functions 
    bool hasTopicName() const { return this->topicName_ != nullptr;};
    void deleteTopicName() { this->topicName_ = nullptr;};
    inline string getTopicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
    inline ObtainMqConsoleLinkCmd& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


  protected:
    shared_ptr<string> env_ {};
    shared_ptr<string> groupType_ {};
    shared_ptr<string> mqGroupId_ {};
    shared_ptr<int64_t> pbcId_ {};
    shared_ptr<string> serviceName_ {};
    shared_ptr<string> topicName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
