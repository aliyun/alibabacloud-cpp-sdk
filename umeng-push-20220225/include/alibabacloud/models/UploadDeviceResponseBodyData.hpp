// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADDEVICERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_UPLOADDEVICERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengPush20220225
{
namespace Models
{
  class UploadDeviceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadDeviceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
    };
    friend void from_json(const Darabonba::Json& j, UploadDeviceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
    };
    UploadDeviceResponseBodyData() = default ;
    UploadDeviceResponseBodyData(const UploadDeviceResponseBodyData &) = default ;
    UploadDeviceResponseBodyData(UploadDeviceResponseBodyData &&) = default ;
    UploadDeviceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadDeviceResponseBodyData() = default ;
    UploadDeviceResponseBodyData& operator=(const UploadDeviceResponseBodyData &) = default ;
    UploadDeviceResponseBodyData& operator=(UploadDeviceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileId_ == nullptr; };
    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline string fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
    inline UploadDeviceResponseBodyData& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


  protected:
    std::shared_ptr<string> fileId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengPush20220225
#endif
