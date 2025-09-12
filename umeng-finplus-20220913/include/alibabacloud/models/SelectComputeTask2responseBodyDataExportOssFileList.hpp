// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SELECTCOMPUTETASK2RESPONSEBODYDATAEXPORTOSSFILELIST_HPP_
#define ALIBABACLOUD_MODELS_SELECTCOMPUTETASK2RESPONSEBODYDATAEXPORTOSSFILELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengFinplus20220913
{
namespace Models
{
  class SelectComputeTask2ResponseBodyDataExportOssFileList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SelectComputeTask2ResponseBodyDataExportOssFileList& obj) { 
      DARABONBA_PTR_TO_JSON(downLoadUrl, downLoadUrl_);
      DARABONBA_PTR_TO_JSON(password, password_);
    };
    friend void from_json(const Darabonba::Json& j, SelectComputeTask2ResponseBodyDataExportOssFileList& obj) { 
      DARABONBA_PTR_FROM_JSON(downLoadUrl, downLoadUrl_);
      DARABONBA_PTR_FROM_JSON(password, password_);
    };
    SelectComputeTask2ResponseBodyDataExportOssFileList() = default ;
    SelectComputeTask2ResponseBodyDataExportOssFileList(const SelectComputeTask2ResponseBodyDataExportOssFileList &) = default ;
    SelectComputeTask2ResponseBodyDataExportOssFileList(SelectComputeTask2ResponseBodyDataExportOssFileList &&) = default ;
    SelectComputeTask2ResponseBodyDataExportOssFileList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SelectComputeTask2ResponseBodyDataExportOssFileList() = default ;
    SelectComputeTask2ResponseBodyDataExportOssFileList& operator=(const SelectComputeTask2ResponseBodyDataExportOssFileList &) = default ;
    SelectComputeTask2ResponseBodyDataExportOssFileList& operator=(SelectComputeTask2ResponseBodyDataExportOssFileList &&) = default ;
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
    inline SelectComputeTask2ResponseBodyDataExportOssFileList& setDownLoadUrl(string downLoadUrl) { DARABONBA_PTR_SET_VALUE(downLoadUrl_, downLoadUrl) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline SelectComputeTask2ResponseBodyDataExportOssFileList& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


  protected:
    std::shared_ptr<string> downLoadUrl_ = nullptr;
    std::shared_ptr<string> password_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengFinplus20220913
#endif
