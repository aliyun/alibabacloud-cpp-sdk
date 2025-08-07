// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFILERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFILERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class DescribeFileResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFileResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FileType, fileType_);
      DARABONBA_PTR_TO_JSON(Parser, parser_);
      DARABONBA_PTR_TO_JSON(SizeInBytes, sizeInBytes_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFileResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FileType, fileType_);
      DARABONBA_PTR_FROM_JSON(Parser, parser_);
      DARABONBA_PTR_FROM_JSON(SizeInBytes, sizeInBytes_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    DescribeFileResponseBodyData() = default ;
    DescribeFileResponseBodyData(const DescribeFileResponseBodyData &) = default ;
    DescribeFileResponseBodyData(DescribeFileResponseBodyData &&) = default ;
    DescribeFileResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFileResponseBodyData() = default ;
    DescribeFileResponseBodyData& operator=(const DescribeFileResponseBodyData &) = default ;
    DescribeFileResponseBodyData& operator=(DescribeFileResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->categoryId_ != nullptr
        && this->createTime_ != nullptr && this->fileId_ != nullptr && this->fileName_ != nullptr && this->fileType_ != nullptr && this->parser_ != nullptr
        && this->sizeInBytes_ != nullptr && this->status_ != nullptr && this->tags_ != nullptr; };
    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline string categoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, "") };
    inline DescribeFileResponseBodyData& setCategoryId(string categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeFileResponseBodyData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline string fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
    inline DescribeFileResponseBodyData& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline DescribeFileResponseBodyData& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileType Field Functions 
    bool hasFileType() const { return this->fileType_ != nullptr;};
    void deleteFileType() { this->fileType_ = nullptr;};
    inline string fileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
    inline DescribeFileResponseBodyData& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


    // parser Field Functions 
    bool hasParser() const { return this->parser_ != nullptr;};
    void deleteParser() { this->parser_ = nullptr;};
    inline string parser() const { DARABONBA_PTR_GET_DEFAULT(parser_, "") };
    inline DescribeFileResponseBodyData& setParser(string parser) { DARABONBA_PTR_SET_VALUE(parser_, parser) };


    // sizeInBytes Field Functions 
    bool hasSizeInBytes() const { return this->sizeInBytes_ != nullptr;};
    void deleteSizeInBytes() { this->sizeInBytes_ = nullptr;};
    inline int64_t sizeInBytes() const { DARABONBA_PTR_GET_DEFAULT(sizeInBytes_, 0L) };
    inline DescribeFileResponseBodyData& setSizeInBytes(int64_t sizeInBytes) { DARABONBA_PTR_SET_VALUE(sizeInBytes_, sizeInBytes) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeFileResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<string> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
    inline vector<string> tags() { DARABONBA_PTR_GET(tags_, vector<string>) };
    inline DescribeFileResponseBodyData& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeFileResponseBodyData& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The ID of the category to which the document belongs.
    std::shared_ptr<string> categoryId_ = nullptr;
    // The timestamp when the document was uploaded to Model Studio. Format: yyyy-MM-dd HH:mm:ss. Time zone: UTC + 8.
    std::shared_ptr<string> createTime_ = nullptr;
    // The primary key ID of the document.
    std::shared_ptr<string> fileId_ = nullptr;
    // The name of the document.
    std::shared_ptr<string> fileName_ = nullptr;
    // The file type of the document. The value is an extension. Valid values: pdf, docx, doc, txt, md, pptx, and ppt.
    std::shared_ptr<string> fileType_ = nullptr;
    // The parser that is used to parse the document. Valid value:
    // 
    // *   DASHSCOPE_DOCMIND: The default document parser.
    std::shared_ptr<string> parser_ = nullptr;
    // The size of the document. Unit: bytes.
    std::shared_ptr<int64_t> sizeInBytes_ = nullptr;
    // The status of the document. Valid values:
    // 
    // *   INIT: pending parsing.
    // *   PARSING
    // *   PARSE_SUCCESS
    // *   PARSE_FAILED
    std::shared_ptr<string> status_ = nullptr;
    // The tags that are associated with the document. A document can be associated with multiple tags.
    std::shared_ptr<vector<string>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
