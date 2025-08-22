// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADRESPONSEBODYUPLOADRESULT_HPP_
#define ALIBABACLOUD_MODELS_UPLOADRESPONSEBODYUPLOADRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class UploadResponseBodyUploadResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadResponseBodyUploadResult& obj) { 
      DARABONBA_PTR_TO_JSON(Fid, fid_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(UploadTime, uploadTime_);
    };
    friend void from_json(const Darabonba::Json& j, UploadResponseBodyUploadResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Fid, fid_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(UploadTime, uploadTime_);
    };
    UploadResponseBodyUploadResult() = default ;
    UploadResponseBodyUploadResult(const UploadResponseBodyUploadResult &) = default ;
    UploadResponseBodyUploadResult(UploadResponseBodyUploadResult &&) = default ;
    UploadResponseBodyUploadResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadResponseBodyUploadResult() = default ;
    UploadResponseBodyUploadResult& operator=(const UploadResponseBodyUploadResult &) = default ;
    UploadResponseBodyUploadResult& operator=(UploadResponseBodyUploadResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fid_ != nullptr
        && this->fileName_ != nullptr && this->uploadTime_ != nullptr; };
    // fid Field Functions 
    bool hasFid() const { return this->fid_ != nullptr;};
    void deleteFid() { this->fid_ = nullptr;};
    inline string fid() const { DARABONBA_PTR_GET_DEFAULT(fid_, "") };
    inline UploadResponseBodyUploadResult& setFid(string fid) { DARABONBA_PTR_SET_VALUE(fid_, fid) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline UploadResponseBodyUploadResult& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // uploadTime Field Functions 
    bool hasUploadTime() const { return this->uploadTime_ != nullptr;};
    void deleteUploadTime() { this->uploadTime_ = nullptr;};
    inline string uploadTime() const { DARABONBA_PTR_GET_DEFAULT(uploadTime_, "") };
    inline UploadResponseBodyUploadResult& setUploadTime(string uploadTime) { DARABONBA_PTR_SET_VALUE(uploadTime_, uploadTime) };


  protected:
    // The ID of the SourceMap file.
    std::shared_ptr<string> fid_ = nullptr;
    // The name of the SourceMap file.
    std::shared_ptr<string> fileName_ = nullptr;
    // The time when the file was uploaded.
    std::shared_ptr<string> uploadTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
