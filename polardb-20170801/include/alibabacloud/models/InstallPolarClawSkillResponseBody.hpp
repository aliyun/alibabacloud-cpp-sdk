// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTALLPOLARCLAWSKILLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_INSTALLPOLARCLAWSKILLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class InstallPolarClawSkillResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstallPolarClawSkillResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Ok, ok_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Slug, slug_);
      DARABONBA_PTR_TO_JSON(TargetDir, targetDir_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, InstallPolarClawSkillResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Ok, ok_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Slug, slug_);
      DARABONBA_PTR_FROM_JSON(TargetDir, targetDir_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    InstallPolarClawSkillResponseBody() = default ;
    InstallPolarClawSkillResponseBody(const InstallPolarClawSkillResponseBody &) = default ;
    InstallPolarClawSkillResponseBody(InstallPolarClawSkillResponseBody &&) = default ;
    InstallPolarClawSkillResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstallPolarClawSkillResponseBody() = default ;
    InstallPolarClawSkillResponseBody& operator=(const InstallPolarClawSkillResponseBody &) = default ;
    InstallPolarClawSkillResponseBody& operator=(InstallPolarClawSkillResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->ok_ == nullptr && this->requestId_ == nullptr && this->slug_ == nullptr
        && this->targetDir_ == nullptr && this->version_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline InstallPolarClawSkillResponseBody& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline InstallPolarClawSkillResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline InstallPolarClawSkillResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // ok Field Functions 
    bool hasOk() const { return this->ok_ != nullptr;};
    void deleteOk() { this->ok_ = nullptr;};
    inline bool getOk() const { DARABONBA_PTR_GET_DEFAULT(ok_, false) };
    inline InstallPolarClawSkillResponseBody& setOk(bool ok) { DARABONBA_PTR_SET_VALUE(ok_, ok) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline InstallPolarClawSkillResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // slug Field Functions 
    bool hasSlug() const { return this->slug_ != nullptr;};
    void deleteSlug() { this->slug_ = nullptr;};
    inline string getSlug() const { DARABONBA_PTR_GET_DEFAULT(slug_, "") };
    inline InstallPolarClawSkillResponseBody& setSlug(string slug) { DARABONBA_PTR_SET_VALUE(slug_, slug) };


    // targetDir Field Functions 
    bool hasTargetDir() const { return this->targetDir_ != nullptr;};
    void deleteTargetDir() { this->targetDir_ = nullptr;};
    inline string getTargetDir() const { DARABONBA_PTR_GET_DEFAULT(targetDir_, "") };
    inline InstallPolarClawSkillResponseBody& setTargetDir(string targetDir) { DARABONBA_PTR_SET_VALUE(targetDir_, targetDir) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline InstallPolarClawSkillResponseBody& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The application ID.
    shared_ptr<string> applicationId_ {};
    // The response status code.
    shared_ptr<int32_t> code_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // Indicates whether the operation was successful.
    shared_ptr<bool> ok_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The identifier of the installed Skill.
    shared_ptr<string> slug_ {};
    // The installation directory.
    shared_ptr<string> targetDir_ {};
    // The version number of the installed Skill.
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
