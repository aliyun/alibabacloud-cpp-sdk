// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTDOWNLOADURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTDOWNLOADURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20210422
{
namespace Models
{
  class GetAgentDownloadUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgentDownloadUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgentDownloadUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetAgentDownloadUrlRequest() = default ;
    GetAgentDownloadUrlRequest(const GetAgentDownloadUrlRequest &) = default ;
    GetAgentDownloadUrlRequest(GetAgentDownloadUrlRequest &&) = default ;
    GetAgentDownloadUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgentDownloadUrlRequest() = default ;
    GetAgentDownloadUrlRequest& operator=(const GetAgentDownloadUrlRequest &) = default ;
    GetAgentDownloadUrlRequest& operator=(GetAgentDownloadUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetAgentDownloadUrlRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20210422
#endif
