// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATECOORDINATIONCODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATECOORDINATIONCODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class GenerateCoordinationCodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateCoordinationCodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OwnerUserId, ownerUserId_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateCoordinationCodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OwnerUserId, ownerUserId_);
    };
    GenerateCoordinationCodeRequest() = default ;
    GenerateCoordinationCodeRequest(const GenerateCoordinationCodeRequest &) = default ;
    GenerateCoordinationCodeRequest(GenerateCoordinationCodeRequest &&) = default ;
    GenerateCoordinationCodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateCoordinationCodeRequest() = default ;
    GenerateCoordinationCodeRequest& operator=(const GenerateCoordinationCodeRequest &) = default ;
    GenerateCoordinationCodeRequest& operator=(GenerateCoordinationCodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->ownerUserId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GenerateCoordinationCodeRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ownerUserId Field Functions 
    bool hasOwnerUserId() const { return this->ownerUserId_ != nullptr;};
    void deleteOwnerUserId() { this->ownerUserId_ = nullptr;};
    inline string ownerUserId() const { DARABONBA_PTR_GET_DEFAULT(ownerUserId_, "") };
    inline GenerateCoordinationCodeRequest& setOwnerUserId(string ownerUserId) { DARABONBA_PTR_SET_VALUE(ownerUserId_, ownerUserId) };


  protected:
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the user to whom the current instance is assigned.
    std::shared_ptr<string> ownerUserId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
