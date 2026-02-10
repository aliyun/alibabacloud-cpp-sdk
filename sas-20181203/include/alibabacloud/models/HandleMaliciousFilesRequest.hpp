// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HANDLEMALICIOUSFILESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_HANDLEMALICIOUSFILESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class HandleMaliciousFilesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HandleMaliciousFilesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileIdList, fileIdList_);
      DARABONBA_PTR_TO_JSON(Operation, operation_);
    };
    friend void from_json(const Darabonba::Json& j, HandleMaliciousFilesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileIdList, fileIdList_);
      DARABONBA_PTR_FROM_JSON(Operation, operation_);
    };
    HandleMaliciousFilesRequest() = default ;
    HandleMaliciousFilesRequest(const HandleMaliciousFilesRequest &) = default ;
    HandleMaliciousFilesRequest(HandleMaliciousFilesRequest &&) = default ;
    HandleMaliciousFilesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HandleMaliciousFilesRequest() = default ;
    HandleMaliciousFilesRequest& operator=(const HandleMaliciousFilesRequest &) = default ;
    HandleMaliciousFilesRequest& operator=(HandleMaliciousFilesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileIdList_ == nullptr
        && this->operation_ == nullptr; };
    // fileIdList Field Functions 
    bool hasFileIdList() const { return this->fileIdList_ != nullptr;};
    void deleteFileIdList() { this->fileIdList_ = nullptr;};
    inline const vector<int64_t> & getFileIdList() const { DARABONBA_PTR_GET_CONST(fileIdList_, vector<int64_t>) };
    inline vector<int64_t> getFileIdList() { DARABONBA_PTR_GET(fileIdList_, vector<int64_t>) };
    inline HandleMaliciousFilesRequest& setFileIdList(const vector<int64_t> & fileIdList) { DARABONBA_PTR_SET_VALUE(fileIdList_, fileIdList) };
    inline HandleMaliciousFilesRequest& setFileIdList(vector<int64_t> && fileIdList) { DARABONBA_PTR_SET_RVALUE(fileIdList_, fileIdList) };


    // operation Field Functions 
    bool hasOperation() const { return this->operation_ != nullptr;};
    void deleteOperation() { this->operation_ = nullptr;};
    inline string getOperation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
    inline HandleMaliciousFilesRequest& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


  protected:
    // List of file IDs to be processed.
    // > You can call [ListAgentlessMaliciousFiles](~~ListAgentlessMaliciousFiles~~) to get the IDs.
    // > -
    shared_ptr<vector<int64_t>> fileIdList_ {};
    // Type of operation:
    // - addWhitelist: Add to whitelist
    // - offWhitelist: Remove from whitelist
    shared_ptr<string> operation_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
