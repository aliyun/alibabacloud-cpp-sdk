// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIARESOURCEIDRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIARESOURCEIDRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class GetMediaResourceIdResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaResourceIdResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ResUrlDownload, resUrlDownload_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaResourceIdResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ResUrlDownload, resUrlDownload_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
    };
    GetMediaResourceIdResponseBodyData() = default ;
    GetMediaResourceIdResponseBodyData(const GetMediaResourceIdResponseBodyData &) = default ;
    GetMediaResourceIdResponseBodyData(GetMediaResourceIdResponseBodyData &&) = default ;
    GetMediaResourceIdResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaResourceIdResponseBodyData() = default ;
    GetMediaResourceIdResponseBodyData& operator=(const GetMediaResourceIdResponseBodyData &) = default ;
    GetMediaResourceIdResponseBodyData& operator=(GetMediaResourceIdResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resUrlDownload_ == nullptr
        && return this->resourceId_ == nullptr; };
    // resUrlDownload Field Functions 
    bool hasResUrlDownload() const { return this->resUrlDownload_ != nullptr;};
    void deleteResUrlDownload() { this->resUrlDownload_ = nullptr;};
    inline string resUrlDownload() const { DARABONBA_PTR_GET_DEFAULT(resUrlDownload_, "") };
    inline GetMediaResourceIdResponseBodyData& setResUrlDownload(string resUrlDownload) { DARABONBA_PTR_SET_VALUE(resUrlDownload_, resUrlDownload) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline int64_t resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, 0L) };
    inline GetMediaResourceIdResponseBodyData& setResourceId(int64_t resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


  protected:
    // The download URL of the resource.
    std::shared_ptr<string> resUrlDownload_ = nullptr;
    // The resource ID.
    std::shared_ptr<int64_t> resourceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
