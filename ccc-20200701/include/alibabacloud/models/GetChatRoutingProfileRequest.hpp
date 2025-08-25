// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHATROUTINGPROFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCHATROUTINGPROFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetChatRoutingProfileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetChatRoutingProfileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetChatRoutingProfileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    GetChatRoutingProfileRequest() = default ;
    GetChatRoutingProfileRequest(const GetChatRoutingProfileRequest &) = default ;
    GetChatRoutingProfileRequest(GetChatRoutingProfileRequest &&) = default ;
    GetChatRoutingProfileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetChatRoutingProfileRequest() = default ;
    GetChatRoutingProfileRequest& operator=(const GetChatRoutingProfileRequest &) = default ;
    GetChatRoutingProfileRequest& operator=(GetChatRoutingProfileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetChatRoutingProfileRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
