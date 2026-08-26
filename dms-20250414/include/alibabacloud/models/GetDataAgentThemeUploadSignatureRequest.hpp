// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAAGENTTHEMEUPLOADSIGNATUREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDATAAGENTTHEMEUPLOADSIGNATUREREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class GetDataAgentThemeUploadSignatureRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataAgentThemeUploadSignatureRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ThemeId, themeId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataAgentThemeUploadSignatureRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ThemeId, themeId_);
    };
    GetDataAgentThemeUploadSignatureRequest() = default ;
    GetDataAgentThemeUploadSignatureRequest(const GetDataAgentThemeUploadSignatureRequest &) = default ;
    GetDataAgentThemeUploadSignatureRequest(GetDataAgentThemeUploadSignatureRequest &&) = default ;
    GetDataAgentThemeUploadSignatureRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataAgentThemeUploadSignatureRequest() = default ;
    GetDataAgentThemeUploadSignatureRequest& operator=(const GetDataAgentThemeUploadSignatureRequest &) = default ;
    GetDataAgentThemeUploadSignatureRequest& operator=(GetDataAgentThemeUploadSignatureRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->themeId_ == nullptr; };
    // themeId Field Functions 
    bool hasThemeId() const { return this->themeId_ != nullptr;};
    void deleteThemeId() { this->themeId_ = nullptr;};
    inline string getThemeId() const { DARABONBA_PTR_GET_DEFAULT(themeId_, "") };
    inline GetDataAgentThemeUploadSignatureRequest& setThemeId(string themeId) { DARABONBA_PTR_SET_VALUE(themeId_, themeId) };


  protected:
    // The theme UUID. By default, you do not need to specify this parameter because the backend automatically generates and returns a UUID. Specify this parameter to regenerate a signature only when the previous signature has expired.
    shared_ptr<string> themeId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
