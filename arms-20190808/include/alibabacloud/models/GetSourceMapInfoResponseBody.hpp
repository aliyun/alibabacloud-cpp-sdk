// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSOURCEMAPINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSOURCEMAPINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetSourceMapInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSourceMapInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SourceMapList, sourceMapList_);
    };
    friend void from_json(const Darabonba::Json& j, GetSourceMapInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SourceMapList, sourceMapList_);
    };
    GetSourceMapInfoResponseBody() = default ;
    GetSourceMapInfoResponseBody(const GetSourceMapInfoResponseBody &) = default ;
    GetSourceMapInfoResponseBody(GetSourceMapInfoResponseBody &&) = default ;
    GetSourceMapInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSourceMapInfoResponseBody() = default ;
    GetSourceMapInfoResponseBody& operator=(const GetSourceMapInfoResponseBody &) = default ;
    GetSourceMapInfoResponseBody& operator=(GetSourceMapInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SourceMapList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SourceMapList& obj) { 
        DARABONBA_PTR_TO_JSON(Fid, fid_);
        DARABONBA_PTR_TO_JSON(FileName, fileName_);
        DARABONBA_PTR_TO_JSON(Size, size_);
        DARABONBA_PTR_TO_JSON(UploadTime, uploadTime_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, SourceMapList& obj) { 
        DARABONBA_PTR_FROM_JSON(Fid, fid_);
        DARABONBA_PTR_FROM_JSON(FileName, fileName_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
        DARABONBA_PTR_FROM_JSON(UploadTime, uploadTime_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      SourceMapList() = default ;
      SourceMapList(const SourceMapList &) = default ;
      SourceMapList(SourceMapList &&) = default ;
      SourceMapList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SourceMapList() = default ;
      SourceMapList& operator=(const SourceMapList &) = default ;
      SourceMapList& operator=(SourceMapList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fid_ == nullptr
        && this->fileName_ == nullptr && this->size_ == nullptr && this->uploadTime_ == nullptr && this->version_ == nullptr; };
      // fid Field Functions 
      bool hasFid() const { return this->fid_ != nullptr;};
      void deleteFid() { this->fid_ = nullptr;};
      inline string getFid() const { DARABONBA_PTR_GET_DEFAULT(fid_, "") };
      inline SourceMapList& setFid(string fid) { DARABONBA_PTR_SET_VALUE(fid_, fid) };


      // fileName Field Functions 
      bool hasFileName() const { return this->fileName_ != nullptr;};
      void deleteFileName() { this->fileName_ = nullptr;};
      inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
      inline SourceMapList& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline string getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
      inline SourceMapList& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // uploadTime Field Functions 
      bool hasUploadTime() const { return this->uploadTime_ != nullptr;};
      void deleteUploadTime() { this->uploadTime_ = nullptr;};
      inline string getUploadTime() const { DARABONBA_PTR_GET_DEFAULT(uploadTime_, "") };
      inline SourceMapList& setUploadTime(string uploadTime) { DARABONBA_PTR_SET_VALUE(uploadTime_, uploadTime) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline SourceMapList& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // The ID of the SourceMap file.
      shared_ptr<string> fid_ {};
      // The name of the SourceMap file.
      shared_ptr<string> fileName_ {};
      // The size of the file. Unit: KB.
      shared_ptr<string> size_ {};
      // The timestamp that indicates when the file was uploaded.
      shared_ptr<string> uploadTime_ {};
      // The version of the file.
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->sourceMapList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSourceMapInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sourceMapList Field Functions 
    bool hasSourceMapList() const { return this->sourceMapList_ != nullptr;};
    void deleteSourceMapList() { this->sourceMapList_ = nullptr;};
    inline const vector<GetSourceMapInfoResponseBody::SourceMapList> & getSourceMapList() const { DARABONBA_PTR_GET_CONST(sourceMapList_, vector<GetSourceMapInfoResponseBody::SourceMapList>) };
    inline vector<GetSourceMapInfoResponseBody::SourceMapList> getSourceMapList() { DARABONBA_PTR_GET(sourceMapList_, vector<GetSourceMapInfoResponseBody::SourceMapList>) };
    inline GetSourceMapInfoResponseBody& setSourceMapList(const vector<GetSourceMapInfoResponseBody::SourceMapList> & sourceMapList) { DARABONBA_PTR_SET_VALUE(sourceMapList_, sourceMapList) };
    inline GetSourceMapInfoResponseBody& setSourceMapList(vector<GetSourceMapInfoResponseBody::SourceMapList> && sourceMapList) { DARABONBA_PTR_SET_RVALUE(sourceMapList_, sourceMapList) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The details of the SourceMap file.
    shared_ptr<vector<GetSourceMapInfoResponseBody::SourceMapList>> sourceMapList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
