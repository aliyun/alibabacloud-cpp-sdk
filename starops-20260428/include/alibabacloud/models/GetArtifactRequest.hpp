// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETARTIFACTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETARTIFACTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace STAROps20260428
{
namespace Models
{
  class GetArtifactRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetArtifactRequest& obj) { 
      DARABONBA_PTR_TO_JSON(artifactPath, artifactPath_);
    };
    friend void from_json(const Darabonba::Json& j, GetArtifactRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(artifactPath, artifactPath_);
    };
    GetArtifactRequest() = default ;
    GetArtifactRequest(const GetArtifactRequest &) = default ;
    GetArtifactRequest(GetArtifactRequest &&) = default ;
    GetArtifactRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetArtifactRequest() = default ;
    GetArtifactRequest& operator=(const GetArtifactRequest &) = default ;
    GetArtifactRequest& operator=(GetArtifactRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->artifactPath_ == nullptr; };
    // artifactPath Field Functions 
    bool hasArtifactPath() const { return this->artifactPath_ != nullptr;};
    void deleteArtifactPath() { this->artifactPath_ = nullptr;};
    inline string getArtifactPath() const { DARABONBA_PTR_GET_DEFAULT(artifactPath_, "") };
    inline GetArtifactRequest& setArtifactPath(string artifactPath) { DARABONBA_PTR_SET_VALUE(artifactPath_, artifactPath) };


  protected:
    // This parameter is required.
    shared_ptr<string> artifactPath_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace STAROps20260428
#endif
