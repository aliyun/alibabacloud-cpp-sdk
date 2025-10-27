// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYREFRESHPROCESSINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYREFRESHPROCESSINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyRefreshProcessInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyRefreshProcessInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyRefreshProcessInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    ModifyRefreshProcessInfoRequest() = default ;
    ModifyRefreshProcessInfoRequest(const ModifyRefreshProcessInfoRequest &) = default ;
    ModifyRefreshProcessInfoRequest(ModifyRefreshProcessInfoRequest &&) = default ;
    ModifyRefreshProcessInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyRefreshProcessInfoRequest() = default ;
    ModifyRefreshProcessInfoRequest& operator=(const ModifyRefreshProcessInfoRequest &) = default ;
    ModifyRefreshProcessInfoRequest& operator=(ModifyRefreshProcessInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->uuid_ == nullptr; };
    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline ModifyRefreshProcessInfoRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The UUID of the server.
    // 
    // > You can call the [DescribeCloudCenterInstances](https://help.aliyun.com/document_detail/141932.html) operation to query the UUIDs of servers.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
