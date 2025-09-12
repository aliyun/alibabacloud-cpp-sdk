// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SELECTCOMPUTETASKRESPONSEBODYDATAEXPORTOSSFILELIST_HPP_
#define ALIBABACLOUD_MODELS_SELECTCOMPUTETASKRESPONSEBODYDATAEXPORTOSSFILELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengFinplus20220913
{
namespace Models
{
  class SelectComputeTaskResponseBodyDataExportOssFileList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SelectComputeTaskResponseBodyDataExportOssFileList& obj) { 
      DARABONBA_PTR_TO_JSON(downLoadUrl, downLoadUrl_);
      DARABONBA_PTR_TO_JSON(password, password_);
    };
    friend void from_json(const Darabonba::Json& j, SelectComputeTaskResponseBodyDataExportOssFileList& obj) { 
      DARABONBA_PTR_FROM_JSON(downLoadUrl, downLoadUrl_);
      DARABONBA_PTR_FROM_JSON(password, password_);
    };
    SelectComputeTaskResponseBodyDataExportOssFileList() = default ;
    SelectComputeTaskResponseBodyDataExportOssFileList(const SelectComputeTaskResponseBodyDataExportOssFileList &) = default ;
    SelectComputeTaskResponseBodyDataExportOssFileList(SelectComputeTaskResponseBodyDataExportOssFileList &&) = default ;
    SelectComputeTaskResponseBodyDataExportOssFileList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SelectComputeTaskResponseBodyDataExportOssFileList() = default ;
    SelectComputeTaskResponseBodyDataExportOssFileList& operator=(const SelectComputeTaskResponseBodyDataExportOssFileList &) = default ;
    SelectComputeTaskResponseBodyDataExportOssFileList& operator=(SelectComputeTaskResponseBodyDataExportOssFileList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->downLoadUrl_ != nullptr
        && this->password_ != nullptr; };
    // downLoadUrl Field Functions 
    bool hasDownLoadUrl() const { return this->downLoadUrl_ != nullptr;};
    void deleteDownLoadUrl() { this->downLoadUrl_ = nullptr;};
    inline string downLoadUrl() const { DARABONBA_PTR_GET_DEFAULT(downLoadUrl_, "") };
    inline SelectComputeTaskResponseBodyDataExportOssFileList& setDownLoadUrl(string downLoadUrl) { DARABONBA_PTR_SET_VALUE(downLoadUrl_, downLoadUrl) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline SelectComputeTaskResponseBodyDataExportOssFileList& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


  protected:
    std::shared_ptr<string> downLoadUrl_ = nullptr;
    std::shared_ptr<string> password_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengFinplus20220913
#endif
