// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWINDOWCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETWINDOWCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tdsr20200101
{
namespace Models
{
  class GetWindowConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWindowConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PreviewToken, previewToken_);
    };
    friend void from_json(const Darabonba::Json& j, GetWindowConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PreviewToken, previewToken_);
    };
    GetWindowConfigRequest() = default ;
    GetWindowConfigRequest(const GetWindowConfigRequest &) = default ;
    GetWindowConfigRequest(GetWindowConfigRequest &&) = default ;
    GetWindowConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWindowConfigRequest() = default ;
    GetWindowConfigRequest& operator=(const GetWindowConfigRequest &) = default ;
    GetWindowConfigRequest& operator=(GetWindowConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->previewToken_ == nullptr; };
    // previewToken Field Functions 
    bool hasPreviewToken() const { return this->previewToken_ != nullptr;};
    void deletePreviewToken() { this->previewToken_ = nullptr;};
    inline string previewToken() const { DARABONBA_PTR_GET_DEFAULT(previewToken_, "") };
    inline GetWindowConfigRequest& setPreviewToken(string previewToken) { DARABONBA_PTR_SET_VALUE(previewToken_, previewToken) };


  protected:
    std::shared_ptr<string> previewToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tdsr20200101
#endif
