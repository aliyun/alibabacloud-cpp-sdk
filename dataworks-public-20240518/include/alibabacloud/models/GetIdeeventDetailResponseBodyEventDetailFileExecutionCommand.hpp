// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIDEEVENTDETAILRESPONSEBODYEVENTDETAILFILEEXECUTIONCOMMAND_HPP_
#define ALIBABACLOUD_MODELS_GETIDEEVENTDETAILRESPONSEBODYEVENTDETAILFILEEXECUTIONCOMMAND_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetIDEEventDetailResponseBodyEventDetailFileExecutionCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIDEEventDetailResponseBodyEventDetailFileExecutionCommand& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(DataSourceName, dataSourceName_);
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(FileType, fileType_);
    };
    friend void from_json(const Darabonba::Json& j, GetIDEEventDetailResponseBodyEventDetailFileExecutionCommand& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(DataSourceName, dataSourceName_);
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(FileType, fileType_);
    };
    GetIDEEventDetailResponseBodyEventDetailFileExecutionCommand() = default ;
    GetIDEEventDetailResponseBodyEventDetailFileExecutionCommand(const GetIDEEventDetailResponseBodyEventDetailFileExecutionCommand &) = default ;
    GetIDEEventDetailResponseBodyEventDetailFileExecutionCommand(GetIDEEventDetailResponseBodyEventDetailFileExecutionCommand &&) = default ;
    GetIDEEventDetailResponseBodyEventDetailFileExecutionCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIDEEventDetailResponseBodyEventDetailFileExecutionCommand() = default ;
    GetIDEEventDetailResponseBodyEventDetailFileExecutionCommand& operator=(const GetIDEEventDetailResponseBodyEventDetailFileExecutionCommand &) = default ;
    GetIDEEventDetailResponseBodyEventDetailFileExecutionCommand& operator=(GetIDEEventDetailResponseBodyEventDetailFileExecutionCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->dataSourceName_ != nullptr && this->fileId_ != nullptr && this->fileType_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline GetIDEEventDetailResponseBodyEventDetailFileExecutionCommand& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // dataSourceName Field Functions 
    bool hasDataSourceName() const { return this->dataSourceName_ != nullptr;};
    void deleteDataSourceName() { this->dataSourceName_ = nullptr;};
    inline string dataSourceName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceName_, "") };
    inline GetIDEEventDetailResponseBodyEventDetailFileExecutionCommand& setDataSourceName(string dataSourceName) { DARABONBA_PTR_SET_VALUE(dataSourceName_, dataSourceName) };


    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline int64_t fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, 0L) };
    inline GetIDEEventDetailResponseBodyEventDetailFileExecutionCommand& setFileId(int64_t fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // fileType Field Functions 
    bool hasFileType() const { return this->fileType_ != nullptr;};
    void deleteFileType() { this->fileType_ = nullptr;};
    inline int64_t fileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, 0L) };
    inline GetIDEEventDetailResponseBodyEventDetailFileExecutionCommand& setFileType(int64_t fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


  protected:
    // The code in the file of the current version.
    std::shared_ptr<string> content_ = nullptr;
    // The name of the data source with which the file is associated.
    std::shared_ptr<string> dataSourceName_ = nullptr;
    // The file ID.
    std::shared_ptr<int64_t> fileId_ = nullptr;
    // The file type. The code for files varies based on the file type. For more information, see [DataWorks nodes](https://help.aliyun.com/document_detail/600169.html).
    std::shared_ptr<int64_t> fileType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
