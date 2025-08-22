// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSOURCEMAPINFORESPONSEBODYSOURCEMAPLIST_HPP_
#define ALIBABACLOUD_MODELS_GETSOURCEMAPINFORESPONSEBODYSOURCEMAPLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetSourceMapInfoResponseBodySourceMapList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSourceMapInfoResponseBodySourceMapList& obj) { 
      DARABONBA_PTR_TO_JSON(Fid, fid_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(UploadTime, uploadTime_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, GetSourceMapInfoResponseBodySourceMapList& obj) { 
      DARABONBA_PTR_FROM_JSON(Fid, fid_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(UploadTime, uploadTime_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    GetSourceMapInfoResponseBodySourceMapList() = default ;
    GetSourceMapInfoResponseBodySourceMapList(const GetSourceMapInfoResponseBodySourceMapList &) = default ;
    GetSourceMapInfoResponseBodySourceMapList(GetSourceMapInfoResponseBodySourceMapList &&) = default ;
    GetSourceMapInfoResponseBodySourceMapList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSourceMapInfoResponseBodySourceMapList() = default ;
    GetSourceMapInfoResponseBodySourceMapList& operator=(const GetSourceMapInfoResponseBodySourceMapList &) = default ;
    GetSourceMapInfoResponseBodySourceMapList& operator=(GetSourceMapInfoResponseBodySourceMapList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fid_ != nullptr
        && this->fileName_ != nullptr && this->size_ != nullptr && this->uploadTime_ != nullptr && this->version_ != nullptr; };
    // fid Field Functions 
    bool hasFid() const { return this->fid_ != nullptr;};
    void deleteFid() { this->fid_ = nullptr;};
    inline string fid() const { DARABONBA_PTR_GET_DEFAULT(fid_, "") };
    inline GetSourceMapInfoResponseBodySourceMapList& setFid(string fid) { DARABONBA_PTR_SET_VALUE(fid_, fid) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline GetSourceMapInfoResponseBodySourceMapList& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline string size() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
    inline GetSourceMapInfoResponseBodySourceMapList& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // uploadTime Field Functions 
    bool hasUploadTime() const { return this->uploadTime_ != nullptr;};
    void deleteUploadTime() { this->uploadTime_ = nullptr;};
    inline string uploadTime() const { DARABONBA_PTR_GET_DEFAULT(uploadTime_, "") };
    inline GetSourceMapInfoResponseBodySourceMapList& setUploadTime(string uploadTime) { DARABONBA_PTR_SET_VALUE(uploadTime_, uploadTime) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetSourceMapInfoResponseBodySourceMapList& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The ID of the SourceMap file.
    std::shared_ptr<string> fid_ = nullptr;
    // The name of the SourceMap file.
    std::shared_ptr<string> fileName_ = nullptr;
    // The size of the file. Unit: KB.
    std::shared_ptr<string> size_ = nullptr;
    // The timestamp that indicates when the file was uploaded.
    std::shared_ptr<string> uploadTime_ = nullptr;
    // The version of the file.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
