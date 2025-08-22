// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTDOWNLOADURLV2RESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTDOWNLOADURLV2RESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetAgentDownloadUrlV2ResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgentDownloadUrlV2ResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Url, url_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgentDownloadUrlV2ResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Url, url_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    GetAgentDownloadUrlV2ResponseBodyData() = default ;
    GetAgentDownloadUrlV2ResponseBodyData(const GetAgentDownloadUrlV2ResponseBodyData &) = default ;
    GetAgentDownloadUrlV2ResponseBodyData(GetAgentDownloadUrlV2ResponseBodyData &&) = default ;
    GetAgentDownloadUrlV2ResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgentDownloadUrlV2ResponseBodyData() = default ;
    GetAgentDownloadUrlV2ResponseBodyData& operator=(const GetAgentDownloadUrlV2ResponseBodyData &) = default ;
    GetAgentDownloadUrlV2ResponseBodyData& operator=(GetAgentDownloadUrlV2ResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->url_ != nullptr
        && this->version_ != nullptr; };
    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline GetAgentDownloadUrlV2ResponseBodyData& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetAgentDownloadUrlV2ResponseBodyData& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The download URL of the agent.
    std::shared_ptr<string> url_ = nullptr;
    // The version number of the agent.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
