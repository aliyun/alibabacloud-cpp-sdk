// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHUNKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCHUNKSREQUEST_HPP_
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
  class ListChunksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListChunksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Fields, fields_);
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(Filed, filed_);
      DARABONBA_PTR_TO_JSON(IndexId, indexId_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListChunksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Fields, fields_);
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(Filed, filed_);
      DARABONBA_PTR_FROM_JSON(IndexId, indexId_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListChunksRequest() = default ;
    ListChunksRequest(const ListChunksRequest &) = default ;
    ListChunksRequest(ListChunksRequest &&) = default ;
    ListChunksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListChunksRequest() = default ;
    ListChunksRequest& operator=(const ListChunksRequest &) = default ;
    ListChunksRequest& operator=(ListChunksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fields_ == nullptr
        && this->fileId_ == nullptr && this->filed_ == nullptr && this->indexId_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr; };
    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline const vector<string> & getFields() const { DARABONBA_PTR_GET_CONST(fields_, vector<string>) };
    inline vector<string> getFields() { DARABONBA_PTR_GET(fields_, vector<string>) };
    inline ListChunksRequest& setFields(const vector<string> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
    inline ListChunksRequest& setFields(vector<string> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
    inline ListChunksRequest& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // filed Field Functions 
    bool hasFiled() const { return this->filed_ != nullptr;};
    void deleteFiled() { this->filed_ = nullptr;};
    inline string getFiled() const { DARABONBA_PTR_GET_DEFAULT(filed_, "") };
    inline ListChunksRequest& setFiled(string filed) { DARABONBA_PTR_SET_VALUE(filed_, filed) };


    // indexId Field Functions 
    bool hasIndexId() const { return this->indexId_ != nullptr;};
    void deleteIndexId() { this->indexId_ = nullptr;};
    inline string getIndexId() const { DARABONBA_PTR_GET_DEFAULT(indexId_, "") };
    inline ListChunksRequest& setIndexId(string indexId) { DARABONBA_PTR_SET_VALUE(indexId_, indexId) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline ListChunksRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListChunksRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // An array of field names used to filter non-private fields (those not prefixed with an underscore _) in the Metadata field returned by this operation. By default, Fields is empty, and all non-private fields in Metadata are returned. To return only specific non-private fields in Metadata, such as title, pass title in this parameter.
    // 
    // Default value: empty.
    shared_ptr<vector<string>> fields_ {};
    // <props="china">
    // 
    // The file ID, which is the `FileId` returned by the **AddFile** operation. This field is not required for data query or image Q&A knowledge bases. This field is required for document search or audio/video search knowledge bases. You can also obtain the file ID by clicking the ID icon next to the file name on the Files tab of [Application Data](https://bailian.console.aliyun.com/?tab=app#/data-center). You can use the file ID to filter the returned chunks. Default value: empty.
    // 
    // 
    // 
    // 
    // <props="intl">
    // 
    // The file ID, which is the `FileId` returned by the **AddFile** operation. This field is not required for data query or image Q&A knowledge bases. This field is required for document search knowledge bases. You can also obtain the file ID by clicking the ID icon next to the file name on the Files tab of
    // [Application Data](https://modelstudio.console.alibabacloud.com/?tab=app#/data-center). You can use the file ID to filter the returned chunks. Default value: empty.
    // 
    // .
    shared_ptr<string> fileId_ {};
    // The file ID field in the legacy Model Studio SDK. The usage and default value are identical to those of the `FileId` field. If you are using the following versions (or later) of the Model Studio SDK, use the `FileId` field instead. If you are using the SWIFT Model Studio SDK, continue to use this field.
    // 
    // - Java (async): 1.0.18
    // - Java: 1.10.2
    // - TypeScript: 1.10.2
    // - Go: 1.10.2
    // - PHP: 1.10.2
    // - Python: 1.10.2
    // - C#: 1.10.2
    // - C++: 1.10.17
    // 
    // > **How to check the Model Studio SDK version**: Visit the <props="china">[Model Studio SDK center](https://api.aliyun.com/api-tools/sdk/bailian?version=2023-12-29)<props="intl">[Model Studio SDK center](https://api.alibabacloud.com/api-tools/sdk/bailian?version=2023-12-29), click "**Install**" in the left-side navigation pane, set the API version to "**2023-12-29**", select your programming language, and then click "**History Versions**" to view the version.
    shared_ptr<string> filed_ {};
    // The knowledge base ID, which is the `Data.Id` returned by the **CreateIndex** operation.
    // 
    // This parameter is required.
    shared_ptr<string> indexId_ {};
    // The page number to query. Minimum value: 1. Default value: 1.
    shared_ptr<int32_t> pageNum_ {};
    // The number of text chunks to display per page in a paged query. Maximum value: 100. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
