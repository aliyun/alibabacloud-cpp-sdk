// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PAUSECLIENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PAUSECLIENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class PauseClientRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PauseClientRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Uuids, uuids_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, PauseClientRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Uuids, uuids_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    PauseClientRequest() = default ;
    PauseClientRequest(const PauseClientRequest &) = default ;
    PauseClientRequest(PauseClientRequest &&) = default ;
    PauseClientRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PauseClientRequest() = default ;
    PauseClientRequest& operator=(const PauseClientRequest &) = default ;
    PauseClientRequest& operator=(PauseClientRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->uuids_ == nullptr
        && this->value_ == nullptr; };
    // uuids Field Functions 
    bool hasUuids() const { return this->uuids_ != nullptr;};
    void deleteUuids() { this->uuids_ = nullptr;};
    inline string getUuids() const { DARABONBA_PTR_GET_DEFAULT(uuids_, "") };
    inline PauseClientRequest& setUuids(string uuids) { DARABONBA_PTR_SET_VALUE(uuids_, uuids) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline PauseClientRequest& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The UUIDs of servers for which you want to enable or disable the Security Center agent.
    // 
    // This parameter is required.
    shared_ptr<string> uuids_ {};
    // The status of the Security Center agent. Valid values:
    // 
    // *   **0**: disabled
    // *   **1**: enabled
    // 
    // This parameter is required.
    shared_ptr<string> value_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
