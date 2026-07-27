// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETARTIFACTDOWNLOADURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETARTIFACTDOWNLOADURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace STAROps20260428
{
namespace Models
{
  class GetArtifactDownloadUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetArtifactDownloadUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(artifactPath, artifactPath_);
    };
    friend void from_json(const Darabonba::Json& j, GetArtifactDownloadUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(artifactPath, artifactPath_);
    };
    GetArtifactDownloadUrlRequest() = default ;
    GetArtifactDownloadUrlRequest(const GetArtifactDownloadUrlRequest &) = default ;
    GetArtifactDownloadUrlRequest(GetArtifactDownloadUrlRequest &&) = default ;
    GetArtifactDownloadUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetArtifactDownloadUrlRequest() = default ;
    GetArtifactDownloadUrlRequest& operator=(const GetArtifactDownloadUrlRequest &) = default ;
    GetArtifactDownloadUrlRequest& operator=(GetArtifactDownloadUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->artifactPath_ == nullptr; };
    // artifactPath Field Functions 
    bool hasArtifactPath() const { return this->artifactPath_ != nullptr;};
    void deleteArtifactPath() { this->artifactPath_ = nullptr;};
    inline string getArtifactPath() const { DARABONBA_PTR_GET_DEFAULT(artifactPath_, "") };
    inline GetArtifactDownloadUrlRequest& setArtifactPath(string artifactPath) { DARABONBA_PTR_SET_VALUE(artifactPath_, artifactPath) };


  protected:
    // This parameter is required.
    shared_ptr<string> artifactPath_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace STAROps20260428
#endif
