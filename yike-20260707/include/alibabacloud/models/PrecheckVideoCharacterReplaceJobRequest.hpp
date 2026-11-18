// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRECHECKVIDEOCHARACTERREPLACEJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PRECHECKVIDEOCHARACTERREPLACEJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260707
{
namespace Models
{
  class PrecheckVideoCharacterReplaceJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PrecheckVideoCharacterReplaceJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppParams, appParams_);
    };
    friend void from_json(const Darabonba::Json& j, PrecheckVideoCharacterReplaceJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppParams, appParams_);
    };
    PrecheckVideoCharacterReplaceJobRequest() = default ;
    PrecheckVideoCharacterReplaceJobRequest(const PrecheckVideoCharacterReplaceJobRequest &) = default ;
    PrecheckVideoCharacterReplaceJobRequest(PrecheckVideoCharacterReplaceJobRequest &&) = default ;
    PrecheckVideoCharacterReplaceJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PrecheckVideoCharacterReplaceJobRequest() = default ;
    PrecheckVideoCharacterReplaceJobRequest& operator=(const PrecheckVideoCharacterReplaceJobRequest &) = default ;
    PrecheckVideoCharacterReplaceJobRequest& operator=(PrecheckVideoCharacterReplaceJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->appParams_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline PrecheckVideoCharacterReplaceJobRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appParams Field Functions 
    bool hasAppParams() const { return this->appParams_ != nullptr;};
    void deleteAppParams() { this->appParams_ = nullptr;};
    inline string getAppParams() const { DARABONBA_PTR_GET_DEFAULT(appParams_, "") };
    inline PrecheckVideoCharacterReplaceJobRequest& setAppParams(string appParams) { DARABONBA_PTR_SET_VALUE(appParams_, appParams) };


  protected:
    // The ID of the video character replacement application. Use a configured application.
    shared_ptr<string> appId_ {};
    // The application input parameters, which are provided as a JSON-serialized string. The field names and material requirements are subject to the input definition of the corresponding AppId.
    shared_ptr<string> appParams_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif
