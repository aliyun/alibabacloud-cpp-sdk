// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUDIOFILESRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_LISTAUDIOFILESRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListAudioFilesResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAudioFilesResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(AudioFileName, audioFileName_);
      DARABONBA_PTR_TO_JSON(AudioResourceId, audioResourceId_);
      DARABONBA_PTR_TO_JSON(AuditResult, auditResult_);
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OssFileKey, ossFileKey_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UpdatedTime, updatedTime_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, ListAudioFilesResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioFileName, audioFileName_);
      DARABONBA_PTR_FROM_JSON(AudioResourceId, audioResourceId_);
      DARABONBA_PTR_FROM_JSON(AuditResult, auditResult_);
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OssFileKey, ossFileKey_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UpdatedTime, updatedTime_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    ListAudioFilesResponseBodyDataList() = default ;
    ListAudioFilesResponseBodyDataList(const ListAudioFilesResponseBodyDataList &) = default ;
    ListAudioFilesResponseBodyDataList(ListAudioFilesResponseBodyDataList &&) = default ;
    ListAudioFilesResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAudioFilesResponseBodyDataList() = default ;
    ListAudioFilesResponseBodyDataList& operator=(const ListAudioFilesResponseBodyDataList &) = default ;
    ListAudioFilesResponseBodyDataList& operator=(ListAudioFilesResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->audioFileName_ != nullptr
        && this->audioResourceId_ != nullptr && this->auditResult_ != nullptr && this->createdTime_ != nullptr && this->instanceId_ != nullptr && this->name_ != nullptr
        && this->ossFileKey_ != nullptr && this->status_ != nullptr && this->updatedTime_ != nullptr && this->usage_ != nullptr; };
    // audioFileName Field Functions 
    bool hasAudioFileName() const { return this->audioFileName_ != nullptr;};
    void deleteAudioFileName() { this->audioFileName_ = nullptr;};
    inline string audioFileName() const { DARABONBA_PTR_GET_DEFAULT(audioFileName_, "") };
    inline ListAudioFilesResponseBodyDataList& setAudioFileName(string audioFileName) { DARABONBA_PTR_SET_VALUE(audioFileName_, audioFileName) };


    // audioResourceId Field Functions 
    bool hasAudioResourceId() const { return this->audioResourceId_ != nullptr;};
    void deleteAudioResourceId() { this->audioResourceId_ = nullptr;};
    inline string audioResourceId() const { DARABONBA_PTR_GET_DEFAULT(audioResourceId_, "") };
    inline ListAudioFilesResponseBodyDataList& setAudioResourceId(string audioResourceId) { DARABONBA_PTR_SET_VALUE(audioResourceId_, audioResourceId) };


    // auditResult Field Functions 
    bool hasAuditResult() const { return this->auditResult_ != nullptr;};
    void deleteAuditResult() { this->auditResult_ = nullptr;};
    inline string auditResult() const { DARABONBA_PTR_GET_DEFAULT(auditResult_, "") };
    inline ListAudioFilesResponseBodyDataList& setAuditResult(string auditResult) { DARABONBA_PTR_SET_VALUE(auditResult_, auditResult) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline ListAudioFilesResponseBodyDataList& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListAudioFilesResponseBodyDataList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListAudioFilesResponseBodyDataList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ossFileKey Field Functions 
    bool hasOssFileKey() const { return this->ossFileKey_ != nullptr;};
    void deleteOssFileKey() { this->ossFileKey_ = nullptr;};
    inline string ossFileKey() const { DARABONBA_PTR_GET_DEFAULT(ossFileKey_, "") };
    inline ListAudioFilesResponseBodyDataList& setOssFileKey(string ossFileKey) { DARABONBA_PTR_SET_VALUE(ossFileKey_, ossFileKey) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListAudioFilesResponseBodyDataList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updatedTime Field Functions 
    bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
    void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
    inline string updatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, "") };
    inline ListAudioFilesResponseBodyDataList& setUpdatedTime(string updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline string usage() const { DARABONBA_PTR_GET_DEFAULT(usage_, "") };
    inline ListAudioFilesResponseBodyDataList& setUsage(string usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


  protected:
    std::shared_ptr<string> audioFileName_ = nullptr;
    std::shared_ptr<string> audioResourceId_ = nullptr;
    std::shared_ptr<string> auditResult_ = nullptr;
    std::shared_ptr<string> createdTime_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> ossFileKey_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> updatedTime_ = nullptr;
    std::shared_ptr<string> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
