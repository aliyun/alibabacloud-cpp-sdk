// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEIDCPROBEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEIDCPROBEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DeleteIdcProbeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteIdcProbeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteIdcProbeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DeleteIdcProbeRequest() = default ;
    DeleteIdcProbeRequest(const DeleteIdcProbeRequest &) = default ;
    DeleteIdcProbeRequest(DeleteIdcProbeRequest &&) = default ;
    DeleteIdcProbeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteIdcProbeRequest() = default ;
    DeleteIdcProbeRequest& operator=(const DeleteIdcProbeRequest &) = default ;
    DeleteIdcProbeRequest& operator=(DeleteIdcProbeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->uuid_ == nullptr; };
    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DeleteIdcProbeRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The UUID of the server.
    // 
    // >  You can call the [DescribeCloudCenterInstances](~~DescribeCloudCenterInstances~~) operation to query the UUIDs of servers.
    // 
    // This parameter is required.
    shared_ptr<string> uuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
