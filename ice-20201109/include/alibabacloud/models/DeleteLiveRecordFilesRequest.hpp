// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETELIVERECORDFILESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETELIVERECORDFILESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class DeleteLiveRecordFilesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteLiveRecordFilesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RecordIds, recordIds_);
      DARABONBA_PTR_TO_JSON(RemoveFile, removeFile_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteLiveRecordFilesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RecordIds, recordIds_);
      DARABONBA_PTR_FROM_JSON(RemoveFile, removeFile_);
    };
    DeleteLiveRecordFilesRequest() = default ;
    DeleteLiveRecordFilesRequest(const DeleteLiveRecordFilesRequest &) = default ;
    DeleteLiveRecordFilesRequest(DeleteLiveRecordFilesRequest &&) = default ;
    DeleteLiveRecordFilesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteLiveRecordFilesRequest() = default ;
    DeleteLiveRecordFilesRequest& operator=(const DeleteLiveRecordFilesRequest &) = default ;
    DeleteLiveRecordFilesRequest& operator=(DeleteLiveRecordFilesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->recordIds_ == nullptr
        && this->removeFile_ == nullptr; };
    // recordIds Field Functions 
    bool hasRecordIds() const { return this->recordIds_ != nullptr;};
    void deleteRecordIds() { this->recordIds_ = nullptr;};
    inline const vector<string> & getRecordIds() const { DARABONBA_PTR_GET_CONST(recordIds_, vector<string>) };
    inline vector<string> getRecordIds() { DARABONBA_PTR_GET(recordIds_, vector<string>) };
    inline DeleteLiveRecordFilesRequest& setRecordIds(const vector<string> & recordIds) { DARABONBA_PTR_SET_VALUE(recordIds_, recordIds) };
    inline DeleteLiveRecordFilesRequest& setRecordIds(vector<string> && recordIds) { DARABONBA_PTR_SET_RVALUE(recordIds_, recordIds) };


    // removeFile Field Functions 
    bool hasRemoveFile() const { return this->removeFile_ != nullptr;};
    void deleteRemoveFile() { this->removeFile_ = nullptr;};
    inline bool getRemoveFile() const { DARABONBA_PTR_GET_DEFAULT(removeFile_, false) };
    inline DeleteLiveRecordFilesRequest& setRemoveFile(bool removeFile) { DARABONBA_PTR_SET_VALUE(removeFile_, removeFile) };


  protected:
    // The collection of IDs of recording files.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> recordIds_ {};
    // Specifies whether to delete the original files in OSS.
    shared_ptr<bool> removeFile_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
