// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUPLOADLINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETUPLOADLINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class GetUploadLinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUploadLinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(UploadUrl, uploadUrl_);
    };
    friend void from_json(const Darabonba::Json& j, GetUploadLinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(UploadUrl, uploadUrl_);
    };
    GetUploadLinkRequest() = default ;
    GetUploadLinkRequest(const GetUploadLinkRequest &) = default ;
    GetUploadLinkRequest(GetUploadLinkRequest &&) = default ;
    GetUploadLinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUploadLinkRequest() = default ;
    GetUploadLinkRequest& operator=(const GetUploadLinkRequest &) = default ;
    GetUploadLinkRequest& operator=(GetUploadLinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->uploadUrl_ == nullptr; };
    // uploadUrl Field Functions 
    bool hasUploadUrl() const { return this->uploadUrl_ != nullptr;};
    void deleteUploadUrl() { this->uploadUrl_ = nullptr;};
    inline string getUploadUrl() const { DARABONBA_PTR_GET_DEFAULT(uploadUrl_, "") };
    inline GetUploadLinkRequest& setUploadUrl(string uploadUrl) { DARABONBA_PTR_SET_VALUE(uploadUrl_, uploadUrl) };


  protected:
    shared_ptr<string> uploadUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
