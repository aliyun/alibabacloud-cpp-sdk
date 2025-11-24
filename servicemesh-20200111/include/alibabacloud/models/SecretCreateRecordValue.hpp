// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SECRETCREATERECORDVALUE_HPP_
#define ALIBABACLOUD_MODELS_SECRETCREATERECORDVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class SecretCreateRecordValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SecretCreateRecordValue& obj) { 
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
    };
    friend void from_json(const Darabonba::Json& j, SecretCreateRecordValue& obj) { 
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
    };
    SecretCreateRecordValue() = default ;
    SecretCreateRecordValue(const SecretCreateRecordValue &) = default ;
    SecretCreateRecordValue(SecretCreateRecordValue &&) = default ;
    SecretCreateRecordValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SecretCreateRecordValue() = default ;
    SecretCreateRecordValue& operator=(const SecretCreateRecordValue &) = default ;
    SecretCreateRecordValue& operator=(SecretCreateRecordValue &&) = default ;
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
    inline SecretCreateRecordValue& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline SecretCreateRecordValue& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SecretCreateRecordValue& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


  protected:
    // The result of creating the secret. Valid values:
    // 
    // *   `success`: The secret was created.
    // *   `fail`: The secret failed to be created.
    std::shared_ptr<string> state_ = nullptr;
    // The ID of the cluster on the data plane.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The error message returned when exceptions occur. Otherwise, an empty value is returned.
    std::shared_ptr<string> message_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
