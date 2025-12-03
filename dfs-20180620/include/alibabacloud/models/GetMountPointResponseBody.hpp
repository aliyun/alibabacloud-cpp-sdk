// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMOUNTPOINTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMOUNTPOINTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetMountPointResponseBodyMountPoint.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class GetMountPointResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMountPointResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MountPoint, mountPoint_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMountPointResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MountPoint, mountPoint_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetMountPointResponseBody() = default ;
    GetMountPointResponseBody(const GetMountPointResponseBody &) = default ;
    GetMountPointResponseBody(GetMountPointResponseBody &&) = default ;
    GetMountPointResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMountPointResponseBody() = default ;
    GetMountPointResponseBody& operator=(const GetMountPointResponseBody &) = default ;
    GetMountPointResponseBody& operator=(GetMountPointResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mountPoint_ == nullptr
        && return this->requestId_ == nullptr; };
    // mountPoint Field Functions 
    bool hasMountPoint() const { return this->mountPoint_ != nullptr;};
    void deleteMountPoint() { this->mountPoint_ = nullptr;};
    inline const GetMountPointResponseBodyMountPoint & mountPoint() const { DARABONBA_PTR_GET_CONST(mountPoint_, GetMountPointResponseBodyMountPoint) };
    inline GetMountPointResponseBodyMountPoint mountPoint() { DARABONBA_PTR_GET(mountPoint_, GetMountPointResponseBodyMountPoint) };
    inline GetMountPointResponseBody& setMountPoint(const GetMountPointResponseBodyMountPoint & mountPoint) { DARABONBA_PTR_SET_VALUE(mountPoint_, mountPoint) };
    inline GetMountPointResponseBody& setMountPoint(GetMountPointResponseBodyMountPoint && mountPoint) { DARABONBA_PTR_SET_RVALUE(mountPoint_, mountPoint) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMountPointResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GetMountPointResponseBodyMountPoint> mountPoint_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
