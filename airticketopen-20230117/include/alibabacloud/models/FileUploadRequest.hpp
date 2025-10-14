// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FILEUPLOADREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FILEUPLOADREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class FileUploadRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FileUploadRequest& obj) { 
      DARABONBA_PTR_TO_JSON(file_content, fileContent_);
      DARABONBA_PTR_TO_JSON(order_num, orderNum_);
    };
    friend void from_json(const Darabonba::Json& j, FileUploadRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(file_content, fileContent_);
      DARABONBA_PTR_FROM_JSON(order_num, orderNum_);
    };
    FileUploadRequest() = default ;
    FileUploadRequest(const FileUploadRequest &) = default ;
    FileUploadRequest(FileUploadRequest &&) = default ;
    FileUploadRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FileUploadRequest() = default ;
    FileUploadRequest& operator=(const FileUploadRequest &) = default ;
    FileUploadRequest& operator=(FileUploadRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileContent_ == nullptr
        && return this->orderNum_ == nullptr; };
    // fileContent Field Functions 
    bool hasFileContent() const { return this->fileContent_ != nullptr;};
    void deleteFileContent() { this->fileContent_ = nullptr;};
    inline string fileContent() const { DARABONBA_PTR_GET_DEFAULT(fileContent_, "") };
    inline FileUploadRequest& setFileContent(string fileContent) { DARABONBA_PTR_SET_VALUE(fileContent_, fileContent) };


    // orderNum Field Functions 
    bool hasOrderNum() const { return this->orderNum_ != nullptr;};
    void deleteOrderNum() { this->orderNum_ = nullptr;};
    inline int64_t orderNum() const { DARABONBA_PTR_GET_DEFAULT(orderNum_, 0L) };
    inline FileUploadRequest& setOrderNum(int64_t orderNum) { DARABONBA_PTR_SET_VALUE(orderNum_, orderNum) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> fileContent_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> orderNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
