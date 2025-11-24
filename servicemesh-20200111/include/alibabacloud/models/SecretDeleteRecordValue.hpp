// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SECRETDELETERECORDVALUE_HPP_
#define ALIBABACLOUD_MODELS_SECRETDELETERECORDVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class SecretDeleteRecordValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SecretDeleteRecordValue& obj) { 
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
    };
    friend void from_json(const Darabonba::Json& j, SecretDeleteRecordValue& obj) { 
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
    };
    SecretDeleteRecordValue() = default ;
    SecretDeleteRecordValue(const SecretDeleteRecordValue &) = default ;
    SecretDeleteRecordValue(SecretDeleteRecordValue &&) = default ;
    SecretDeleteRecordValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SecretDeleteRecordValue() = default ;
    SecretDeleteRecordValue& operator=(const SecretDeleteRecordValue &) = default ;
    SecretDeleteRecordValue& operator=(SecretDeleteRecordValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->state_ == nullptr
        && return this->clusterId_ == nullptr && return this->message_ == nullptr; };
    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline SecretDeleteRecordValue& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline SecretDeleteRecordValue& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SecretDeleteRecordValue& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


  protected:
    // The result of deleting the secret. Valid values:
    // 
    // *   `success`: The secret was deleted.
    // *   `fail`: The secret failed to be deleted.
    std::shared_ptr<string> state_ = nullptr;
    // The ID of the cluster.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The error message returned when exceptions occur. Otherwise, an empty value is returned.
    std::shared_ptr<string> message_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
