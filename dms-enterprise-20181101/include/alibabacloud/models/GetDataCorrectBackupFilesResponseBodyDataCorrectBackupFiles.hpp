// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATACORRECTBACKUPFILESRESPONSEBODYDATACORRECTBACKUPFILES_HPP_
#define ALIBABACLOUD_MODELS_GETDATACORRECTBACKUPFILESRESPONSEBODYDATACORRECTBACKUPFILES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDataCorrectBackupFilesResponseBodyDataCorrectBackupFiles : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataCorrectBackupFilesResponseBodyDataCorrectBackupFiles& obj) { 
      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataCorrectBackupFilesResponseBodyDataCorrectBackupFiles& obj) { 
      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
    };
    GetDataCorrectBackupFilesResponseBodyDataCorrectBackupFiles() = default ;
    GetDataCorrectBackupFilesResponseBodyDataCorrectBackupFiles(const GetDataCorrectBackupFilesResponseBodyDataCorrectBackupFiles &) = default ;
    GetDataCorrectBackupFilesResponseBodyDataCorrectBackupFiles(GetDataCorrectBackupFilesResponseBodyDataCorrectBackupFiles &&) = default ;
    GetDataCorrectBackupFilesResponseBodyDataCorrectBackupFiles(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataCorrectBackupFilesResponseBodyDataCorrectBackupFiles() = default ;
    GetDataCorrectBackupFilesResponseBodyDataCorrectBackupFiles& operator=(const GetDataCorrectBackupFilesResponseBodyDataCorrectBackupFiles &) = default ;
    GetDataCorrectBackupFilesResponseBodyDataCorrectBackupFiles& operator=(GetDataCorrectBackupFilesResponseBodyDataCorrectBackupFiles &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileUrl_ == nullptr; };
    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline const vector<string> & fileUrl() const { DARABONBA_PTR_GET_CONST(fileUrl_, vector<string>) };
    inline vector<string> fileUrl() { DARABONBA_PTR_GET(fileUrl_, vector<string>) };
    inline GetDataCorrectBackupFilesResponseBodyDataCorrectBackupFiles& setFileUrl(const vector<string> & fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };
    inline GetDataCorrectBackupFilesResponseBodyDataCorrectBackupFiles& setFileUrl(vector<string> && fileUrl) { DARABONBA_PTR_SET_RVALUE(fileUrl_, fileUrl) };


  protected:
    std::shared_ptr<vector<string>> fileUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
