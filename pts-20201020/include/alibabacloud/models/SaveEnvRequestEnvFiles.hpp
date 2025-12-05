// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEENVREQUESTENVFILES_HPP_
#define ALIBABACLOUD_MODELS_SAVEENVREQUESTENVFILES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class SaveEnvRequestEnvFiles : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveEnvRequestEnvFiles& obj) { 
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FileOssAddress, fileOssAddress_);
    };
    friend void from_json(const Darabonba::Json& j, SaveEnvRequestEnvFiles& obj) { 
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FileOssAddress, fileOssAddress_);
    };
    SaveEnvRequestEnvFiles() = default ;
    SaveEnvRequestEnvFiles(const SaveEnvRequestEnvFiles &) = default ;
    SaveEnvRequestEnvFiles(SaveEnvRequestEnvFiles &&) = default ;
    SaveEnvRequestEnvFiles(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveEnvRequestEnvFiles() = default ;
    SaveEnvRequestEnvFiles& operator=(const SaveEnvRequestEnvFiles &) = default ;
    SaveEnvRequestEnvFiles& operator=(SaveEnvRequestEnvFiles &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileName_ == nullptr
        && return this->fileOssAddress_ == nullptr; };
    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline SaveEnvRequestEnvFiles& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileOssAddress Field Functions 
    bool hasFileOssAddress() const { return this->fileOssAddress_ != nullptr;};
    void deleteFileOssAddress() { this->fileOssAddress_ = nullptr;};
    inline string fileOssAddress() const { DARABONBA_PTR_GET_DEFAULT(fileOssAddress_, "") };
    inline SaveEnvRequestEnvFiles& setFileOssAddress(string fileOssAddress) { DARABONBA_PTR_SET_VALUE(fileOssAddress_, fileOssAddress) };


  protected:
    // The name of the file. Make sure that the file name is the same as the file name in the value of **FileOssAddress**.
    // 
    // This parameter is required.
    std::shared_ptr<string> fileName_ = nullptr;
    // The Object Storage Service (OSS) URL of the file. Make sure that the file is accessible from the Internet.
    // 
    // >  Only OSS URLs in the China (Shanghai) region are supported.
    // 
    // This parameter is required.
    std::shared_ptr<string> fileOssAddress_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
