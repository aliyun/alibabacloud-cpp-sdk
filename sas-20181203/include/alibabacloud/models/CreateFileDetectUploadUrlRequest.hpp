// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFILEDETECTUPLOADURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFILEDETECTUPLOADURLREQUEST_HPP_
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
  class CreateFileDetectUploadUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFileDetectUploadUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HashKeyContextList, hashKeyContextList_);
      DARABONBA_PTR_TO_JSON(HashKeyList, hashKeyList_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFileDetectUploadUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HashKeyContextList, hashKeyContextList_);
      DARABONBA_PTR_FROM_JSON(HashKeyList, hashKeyList_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateFileDetectUploadUrlRequest() = default ;
    CreateFileDetectUploadUrlRequest(const CreateFileDetectUploadUrlRequest &) = default ;
    CreateFileDetectUploadUrlRequest(CreateFileDetectUploadUrlRequest &&) = default ;
    CreateFileDetectUploadUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFileDetectUploadUrlRequest() = default ;
    CreateFileDetectUploadUrlRequest& operator=(const CreateFileDetectUploadUrlRequest &) = default ;
    CreateFileDetectUploadUrlRequest& operator=(CreateFileDetectUploadUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class HashKeyContextList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HashKeyContextList& obj) { 
        DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
        DARABONBA_PTR_TO_JSON(HashKey, hashKey_);
      };
      friend void from_json(const Darabonba::Json& j, HashKeyContextList& obj) { 
        DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
        DARABONBA_PTR_FROM_JSON(HashKey, hashKey_);
      };
      HashKeyContextList() = default ;
      HashKeyContextList(const HashKeyContextList &) = default ;
      HashKeyContextList(HashKeyContextList &&) = default ;
      HashKeyContextList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HashKeyContextList() = default ;
      HashKeyContextList& operator=(const HashKeyContextList &) = default ;
      HashKeyContextList& operator=(HashKeyContextList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fileSize_ == nullptr
        && this->hashKey_ == nullptr; };
      // fileSize Field Functions 
      bool hasFileSize() const { return this->fileSize_ != nullptr;};
      void deleteFileSize() { this->fileSize_ = nullptr;};
      inline int32_t getFileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0) };
      inline HashKeyContextList& setFileSize(int32_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


      // hashKey Field Functions 
      bool hasHashKey() const { return this->hashKey_ != nullptr;};
      void deleteHashKey() { this->hashKey_ = nullptr;};
      inline string getHashKey() const { DARABONBA_PTR_GET_DEFAULT(hashKey_, "") };
      inline HashKeyContextList& setHashKey(string hashKey) { DARABONBA_PTR_SET_VALUE(hashKey_, hashKey) };


    protected:
      // The size of the file. Unit: bytes.
      shared_ptr<int32_t> fileSize_ {};
      // The hash value of the file.
      shared_ptr<string> hashKey_ {};
    };

    virtual bool empty() const override { return this->hashKeyContextList_ == nullptr
        && this->hashKeyList_ == nullptr && this->type_ == nullptr; };
    // hashKeyContextList Field Functions 
    bool hasHashKeyContextList() const { return this->hashKeyContextList_ != nullptr;};
    void deleteHashKeyContextList() { this->hashKeyContextList_ = nullptr;};
    inline const vector<CreateFileDetectUploadUrlRequest::HashKeyContextList> & getHashKeyContextList() const { DARABONBA_PTR_GET_CONST(hashKeyContextList_, vector<CreateFileDetectUploadUrlRequest::HashKeyContextList>) };
    inline vector<CreateFileDetectUploadUrlRequest::HashKeyContextList> getHashKeyContextList() { DARABONBA_PTR_GET(hashKeyContextList_, vector<CreateFileDetectUploadUrlRequest::HashKeyContextList>) };
    inline CreateFileDetectUploadUrlRequest& setHashKeyContextList(const vector<CreateFileDetectUploadUrlRequest::HashKeyContextList> & hashKeyContextList) { DARABONBA_PTR_SET_VALUE(hashKeyContextList_, hashKeyContextList) };
    inline CreateFileDetectUploadUrlRequest& setHashKeyContextList(vector<CreateFileDetectUploadUrlRequest::HashKeyContextList> && hashKeyContextList) { DARABONBA_PTR_SET_RVALUE(hashKeyContextList_, hashKeyContextList) };


    // hashKeyList Field Functions 
    bool hasHashKeyList() const { return this->hashKeyList_ != nullptr;};
    void deleteHashKeyList() { this->hashKeyList_ = nullptr;};
    inline const vector<string> & getHashKeyList() const { DARABONBA_PTR_GET_CONST(hashKeyList_, vector<string>) };
    inline vector<string> getHashKeyList() { DARABONBA_PTR_GET(hashKeyList_, vector<string>) };
    inline CreateFileDetectUploadUrlRequest& setHashKeyList(const vector<string> & hashKeyList) { DARABONBA_PTR_SET_VALUE(hashKeyList_, hashKeyList) };
    inline CreateFileDetectUploadUrlRequest& setHashKeyList(vector<string> && hashKeyList) { DARABONBA_PTR_SET_RVALUE(hashKeyList_, hashKeyList) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline CreateFileDetectUploadUrlRequest& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The hash values of files.
    // 
    // > You must specify at least one of the **HashKeyList** and **HashKeyContextList** parameters.
    shared_ptr<vector<CreateFileDetectUploadUrlRequest::HashKeyContextList>> hashKeyContextList_ {};
    // The identifiers of files. Only MD5 hash values are supported.
    // 
    // > You must specify at least one of the **HashKeyList** and **HashKeyContextList** parameters.
    shared_ptr<vector<string>> hashKeyList_ {};
    // The type of the file. Valid values:
    // 
    // *   **0**: unknown file
    // *   **1**: binary file
    // *   **2**: webshell file
    // *   **4**: script file
    // 
    // > If you do not know the type of the file, set this parameter to **0**.
    // 
    // This parameter is required.
    shared_ptr<int32_t> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
