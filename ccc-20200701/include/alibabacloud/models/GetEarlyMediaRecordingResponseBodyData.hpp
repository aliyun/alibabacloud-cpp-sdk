// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEARLYMEDIARECORDINGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETEARLYMEDIARECORDINGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetEarlyMediaRecordingResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEarlyMediaRecordingResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
    };
    friend void from_json(const Darabonba::Json& j, GetEarlyMediaRecordingResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
    };
    GetEarlyMediaRecordingResponseBodyData() = default ;
    GetEarlyMediaRecordingResponseBodyData(const GetEarlyMediaRecordingResponseBodyData &) = default ;
    GetEarlyMediaRecordingResponseBodyData(GetEarlyMediaRecordingResponseBodyData &&) = default ;
    GetEarlyMediaRecordingResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEarlyMediaRecordingResponseBodyData() = default ;
    GetEarlyMediaRecordingResponseBodyData& operator=(const GetEarlyMediaRecordingResponseBodyData &) = default ;
    GetEarlyMediaRecordingResponseBodyData& operator=(GetEarlyMediaRecordingResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fileName_ != nullptr
        && this->fileUrl_ != nullptr; };
    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline GetEarlyMediaRecordingResponseBodyData& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string fileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline GetEarlyMediaRecordingResponseBodyData& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


  protected:
    std::shared_ptr<string> fileName_ = nullptr;
    std::shared_ptr<string> fileUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
