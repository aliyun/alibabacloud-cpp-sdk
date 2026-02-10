// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNBINDAEGISREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNBINDAEGISREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class UnbindAegisRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnbindAegisRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Uuids, uuids_);
    };
    friend void from_json(const Darabonba::Json& j, UnbindAegisRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Uuids, uuids_);
    };
    UnbindAegisRequest() = default ;
    UnbindAegisRequest(const UnbindAegisRequest &) = default ;
    UnbindAegisRequest(UnbindAegisRequest &&) = default ;
    UnbindAegisRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnbindAegisRequest() = default ;
    UnbindAegisRequest& operator=(const UnbindAegisRequest &) = default ;
    UnbindAegisRequest& operator=(UnbindAegisRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->uuids_ == nullptr; };
    // uuids Field Functions 
    bool hasUuids() const { return this->uuids_ != nullptr;};
    void deleteUuids() { this->uuids_ = nullptr;};
    inline string getUuids() const { DARABONBA_PTR_GET_DEFAULT(uuids_, "") };
    inline UnbindAegisRequest& setUuids(string uuids) { DARABONBA_PTR_SET_VALUE(uuids_, uuids) };


  protected:
    // The UUID of the server that you want to unbind. Separate multiple UUIDs with commas (,).
    // 
    // > You can call the [DescribeCloudCenterInstances](~~DescribeCloudCenterInstances~~) operation to query the UUIDs of servers.
    // 
    // This parameter is required.
    shared_ptr<string> uuids_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
