// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADROBOTTASKCALLEDFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPLOADROBOTTASKCALLEDFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class UploadRobotTaskCalledFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadRobotTaskCalledFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TtsParam, ttsParam_);
      DARABONBA_PTR_TO_JSON(TtsParamHead, ttsParamHead_);
    };
    friend void from_json(const Darabonba::Json& j, UploadRobotTaskCalledFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TtsParam, ttsParam_);
      DARABONBA_PTR_FROM_JSON(TtsParamHead, ttsParamHead_);
    };
    UploadRobotTaskCalledFileRequest() = default ;
    UploadRobotTaskCalledFileRequest(const UploadRobotTaskCalledFileRequest &) = default ;
    UploadRobotTaskCalledFileRequest(UploadRobotTaskCalledFileRequest &&) = default ;
    UploadRobotTaskCalledFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadRobotTaskCalledFileRequest() = default ;
    UploadRobotTaskCalledFileRequest& operator=(const UploadRobotTaskCalledFileRequest &) = default ;
    UploadRobotTaskCalledFileRequest& operator=(UploadRobotTaskCalledFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->calledNumber_ != nullptr
        && this->id_ != nullptr && this->ownerId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->ttsParam_ != nullptr
        && this->ttsParamHead_ != nullptr; };
    // calledNumber Field Functions 
    bool hasCalledNumber() const { return this->calledNumber_ != nullptr;};
    void deleteCalledNumber() { this->calledNumber_ = nullptr;};
    inline string calledNumber() const { DARABONBA_PTR_GET_DEFAULT(calledNumber_, "") };
    inline UploadRobotTaskCalledFileRequest& setCalledNumber(string calledNumber) { DARABONBA_PTR_SET_VALUE(calledNumber_, calledNumber) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UploadRobotTaskCalledFileRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UploadRobotTaskCalledFileRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UploadRobotTaskCalledFileRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UploadRobotTaskCalledFileRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // ttsParam Field Functions 
    bool hasTtsParam() const { return this->ttsParam_ != nullptr;};
    void deleteTtsParam() { this->ttsParam_ = nullptr;};
    inline string ttsParam() const { DARABONBA_PTR_GET_DEFAULT(ttsParam_, "") };
    inline UploadRobotTaskCalledFileRequest& setTtsParam(string ttsParam) { DARABONBA_PTR_SET_VALUE(ttsParam_, ttsParam) };


    // ttsParamHead Field Functions 
    bool hasTtsParamHead() const { return this->ttsParamHead_ != nullptr;};
    void deleteTtsParamHead() { this->ttsParamHead_ = nullptr;};
    inline string ttsParamHead() const { DARABONBA_PTR_GET_DEFAULT(ttsParamHead_, "") };
    inline UploadRobotTaskCalledFileRequest& setTtsParamHead(string ttsParamHead) { DARABONBA_PTR_SET_VALUE(ttsParamHead_, ttsParamHead) };


  protected:
    // The called numbers. Separate multiple called numbers with commas (,).
    // 
    // > After you create a robocall task, you must upload called numbers in batches. You can upload up to 300,000 called numbers for each task.
    // 
    // This parameter is required.
    std::shared_ptr<string> calledNumber_ = nullptr;
    // The unique ID of the robocall task. You can call the [CreateRobotTask](~~CreateRobotTask~~) operation to obtain the ID of the robocall task.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The values of the variable in the text-to-speech (TTS) template, in the JSON format. The variable values specified by the TtsParam parameter must match the variable names specified by the TtsParamHead parameter.
    // 
    // *   If all the called numbers carry the same variable values, you can set the value of the number field to **all** and upload only one copy of the variable values.
    // *   If only some of the called numbers carry the same variable values, you can set the value of the number field to **all** for these called numbers and set the value of the number field and variable values for other called numbers based on your business requirements. The system preferentially selects the values that you set for the called numbers.
    std::shared_ptr<string> ttsParam_ = nullptr;
    // The list of variable names carried in the robocall task, in the JSON format. The TtsParamHead parameter must be used together with the TtsParam parameter.
    std::shared_ptr<string> ttsParamHead_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
