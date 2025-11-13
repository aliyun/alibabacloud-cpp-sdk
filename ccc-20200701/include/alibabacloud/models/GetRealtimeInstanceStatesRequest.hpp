// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREALTIMEINSTANCESTATESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETREALTIMEINSTANCESTATESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetRealtimeInstanceStatesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRealtimeInstanceStatesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
    };
    friend void from_json(const Darabonba::Json& j, GetRealtimeInstanceStatesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
    };
    GetRealtimeInstanceStatesRequest() = default ;
    GetRealtimeInstanceStatesRequest(const GetRealtimeInstanceStatesRequest &) = default ;
    GetRealtimeInstanceStatesRequest(GetRealtimeInstanceStatesRequest &&) = default ;
    GetRealtimeInstanceStatesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRealtimeInstanceStatesRequest() = default ;
    GetRealtimeInstanceStatesRequest& operator=(const GetRealtimeInstanceStatesRequest &) = default ;
    GetRealtimeInstanceStatesRequest& operator=(GetRealtimeInstanceStatesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->mediaType_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetRealtimeInstanceStatesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // mediaType Field Functions 
    bool hasMediaType() const { return this->mediaType_ != nullptr;};
    void deleteMediaType() { this->mediaType_ = nullptr;};
    inline string mediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
    inline GetRealtimeInstanceStatesRequest& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> mediaType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
