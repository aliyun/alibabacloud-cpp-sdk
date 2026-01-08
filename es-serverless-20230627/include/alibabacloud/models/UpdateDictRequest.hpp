// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDICTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDICTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EsServerless20230627
{
namespace Models
{
  class UpdateDictRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDictRequest& obj) { 
      DARABONBA_PTR_TO_JSON(allowCover, allowCover_);
      DARABONBA_PTR_TO_JSON(files, files_);
      DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(dryRun, dryRun_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDictRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(allowCover, allowCover_);
      DARABONBA_PTR_FROM_JSON(files, files_);
      DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(dryRun, dryRun_);
    };
    UpdateDictRequest() = default ;
    UpdateDictRequest(const UpdateDictRequest &) = default ;
    UpdateDictRequest(UpdateDictRequest &&) = default ;
    UpdateDictRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDictRequest() = default ;
    UpdateDictRequest& operator=(const UpdateDictRequest &) = default ;
    UpdateDictRequest& operator=(UpdateDictRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Files : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Files& obj) { 
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(ossObject, ossObject_);
      };
      friend void from_json(const Darabonba::Json& j, Files& obj) { 
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(ossObject, ossObject_);
      };
      Files() = default ;
      Files(const Files &) = default ;
      Files(Files &&) = default ;
      Files(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Files() = default ;
      Files& operator=(const Files &) = default ;
      Files& operator=(Files &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class OssObject : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OssObject& obj) { 
          DARABONBA_PTR_TO_JSON(bucketName, bucketName_);
          DARABONBA_PTR_TO_JSON(key, key_);
        };
        friend void from_json(const Darabonba::Json& j, OssObject& obj) { 
          DARABONBA_PTR_FROM_JSON(bucketName, bucketName_);
          DARABONBA_PTR_FROM_JSON(key, key_);
        };
        OssObject() = default ;
        OssObject(const OssObject &) = default ;
        OssObject(OssObject &&) = default ;
        OssObject(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OssObject() = default ;
        OssObject& operator=(const OssObject &) = default ;
        OssObject& operator=(OssObject &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bucketName_ == nullptr
        && this->key_ == nullptr; };
        // bucketName Field Functions 
        bool hasBucketName() const { return this->bucketName_ != nullptr;};
        void deleteBucketName() { this->bucketName_ = nullptr;};
        inline string getBucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
        inline OssObject& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline OssObject& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      protected:
        shared_ptr<string> bucketName_ {};
        shared_ptr<string> key_ {};
      };

      virtual bool empty() const override { return this->name_ == nullptr
        && this->ossObject_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Files& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // ossObject Field Functions 
      bool hasOssObject() const { return this->ossObject_ != nullptr;};
      void deleteOssObject() { this->ossObject_ = nullptr;};
      inline const Files::OssObject & getOssObject() const { DARABONBA_PTR_GET_CONST(ossObject_, Files::OssObject) };
      inline Files::OssObject getOssObject() { DARABONBA_PTR_GET(ossObject_, Files::OssObject) };
      inline Files& setOssObject(const Files::OssObject & ossObject) { DARABONBA_PTR_SET_VALUE(ossObject_, ossObject) };
      inline Files& setOssObject(Files::OssObject && ossObject) { DARABONBA_PTR_SET_RVALUE(ossObject_, ossObject) };


    protected:
      shared_ptr<string> name_ {};
      shared_ptr<Files::OssObject> ossObject_ {};
    };

    virtual bool empty() const override { return this->allowCover_ == nullptr
        && this->files_ == nullptr && this->sourceType_ == nullptr && this->type_ == nullptr && this->dryRun_ == nullptr; };
    // allowCover Field Functions 
    bool hasAllowCover() const { return this->allowCover_ != nullptr;};
    void deleteAllowCover() { this->allowCover_ = nullptr;};
    inline bool getAllowCover() const { DARABONBA_PTR_GET_DEFAULT(allowCover_, false) };
    inline UpdateDictRequest& setAllowCover(bool allowCover) { DARABONBA_PTR_SET_VALUE(allowCover_, allowCover) };


    // files Field Functions 
    bool hasFiles() const { return this->files_ != nullptr;};
    void deleteFiles() { this->files_ = nullptr;};
    inline const vector<UpdateDictRequest::Files> & getFiles() const { DARABONBA_PTR_GET_CONST(files_, vector<UpdateDictRequest::Files>) };
    inline vector<UpdateDictRequest::Files> getFiles() { DARABONBA_PTR_GET(files_, vector<UpdateDictRequest::Files>) };
    inline UpdateDictRequest& setFiles(const vector<UpdateDictRequest::Files> & files) { DARABONBA_PTR_SET_VALUE(files_, files) };
    inline UpdateDictRequest& setFiles(vector<UpdateDictRequest::Files> && files) { DARABONBA_PTR_SET_RVALUE(files_, files) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline UpdateDictRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateDictRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateDictRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


  protected:
    shared_ptr<bool> allowCover_ {};
    // This parameter is required.
    shared_ptr<vector<UpdateDictRequest::Files>> files_ {};
    shared_ptr<string> sourceType_ {};
    shared_ptr<string> type_ {};
    shared_ptr<bool> dryRun_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EsServerless20230627
#endif
