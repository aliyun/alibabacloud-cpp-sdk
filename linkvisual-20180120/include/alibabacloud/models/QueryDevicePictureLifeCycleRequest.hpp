// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDEVICEPICTURELIFECYCLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYDEVICEPICTURELIFECYCLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class QueryDevicePictureLifeCycleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDevicePictureLifeCycleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IotId, iotId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDevicePictureLifeCycleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IotId, iotId_);
    };
    QueryDevicePictureLifeCycleRequest() = default ;
    QueryDevicePictureLifeCycleRequest(const QueryDevicePictureLifeCycleRequest &) = default ;
    QueryDevicePictureLifeCycleRequest(QueryDevicePictureLifeCycleRequest &&) = default ;
    QueryDevicePictureLifeCycleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDevicePictureLifeCycleRequest() = default ;
    QueryDevicePictureLifeCycleRequest& operator=(const QueryDevicePictureLifeCycleRequest &) = default ;
    QueryDevicePictureLifeCycleRequest& operator=(QueryDevicePictureLifeCycleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->iotId_ == nullptr; };
    // iotId Field Functions 
    bool hasIotId() const { return this->iotId_ != nullptr;};
    void deleteIotId() { this->iotId_ = nullptr;};
    inline string getIotId() const { DARABONBA_PTR_GET_DEFAULT(iotId_, "") };
    inline QueryDevicePictureLifeCycleRequest& setIotId(string iotId) { DARABONBA_PTR_SET_VALUE(iotId_, iotId) };


  protected:
    // The ID of the IPC device. The ID is issued by IoT Platform and uniquely identifies the device. You can call the IoT Platform [QueryDeviceDetail](https://help.aliyun.com/document_detail/69594.html) operation to query the ID.
    // 
    // This parameter is required.
    shared_ptr<string> iotId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
