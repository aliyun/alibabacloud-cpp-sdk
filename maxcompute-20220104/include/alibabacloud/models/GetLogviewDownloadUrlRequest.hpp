// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLOGVIEWDOWNLOADURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETLOGVIEWDOWNLOADURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetLogviewDownloadUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLogviewDownloadUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(useVpcEndpoint, useVpcEndpoint_);
    };
    friend void from_json(const Darabonba::Json& j, GetLogviewDownloadUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(useVpcEndpoint, useVpcEndpoint_);
    };
    GetLogviewDownloadUrlRequest() = default ;
    GetLogviewDownloadUrlRequest(const GetLogviewDownloadUrlRequest &) = default ;
    GetLogviewDownloadUrlRequest(GetLogviewDownloadUrlRequest &&) = default ;
    GetLogviewDownloadUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLogviewDownloadUrlRequest() = default ;
    GetLogviewDownloadUrlRequest& operator=(const GetLogviewDownloadUrlRequest &) = default ;
    GetLogviewDownloadUrlRequest& operator=(GetLogviewDownloadUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->useVpcEndpoint_ == nullptr; };
    // useVpcEndpoint Field Functions 
    bool hasUseVpcEndpoint() const { return this->useVpcEndpoint_ != nullptr;};
    void deleteUseVpcEndpoint() { this->useVpcEndpoint_ = nullptr;};
    inline bool getUseVpcEndpoint() const { DARABONBA_PTR_GET_DEFAULT(useVpcEndpoint_, false) };
    inline GetLogviewDownloadUrlRequest& setUseVpcEndpoint(bool useVpcEndpoint) { DARABONBA_PTR_SET_VALUE(useVpcEndpoint_, useVpcEndpoint) };


  protected:
    // Specifies whether to use the OSS VPC endpoint to generate the download link. Valid values:
    // - false: Uses the default OSS endpoint.
    // - true: Uses the OSS VPC endpoint configured on the server. The download client must have network access to this endpoint.
    // Default value: false. If this parameter is set to true and no OSS VPC endpoint is configured on the server, link generation fails and does not automatically fall back.
    shared_ptr<bool> useVpcEndpoint_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
