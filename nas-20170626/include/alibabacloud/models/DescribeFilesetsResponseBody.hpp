// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFILESETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFILESETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeFilesetsResponseBodyEntries.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeFilesetsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFilesetsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Entries, entries_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFilesetsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Entries, entries_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeFilesetsResponseBody() = default ;
    DescribeFilesetsResponseBody(const DescribeFilesetsResponseBody &) = default ;
    DescribeFilesetsResponseBody(DescribeFilesetsResponseBody &&) = default ;
    DescribeFilesetsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFilesetsResponseBody() = default ;
    DescribeFilesetsResponseBody& operator=(const DescribeFilesetsResponseBody &) = default ;
    DescribeFilesetsResponseBody& operator=(DescribeFilesetsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->entries_ == nullptr
        && return this->fileSystemId_ == nullptr && return this->nextToken_ == nullptr && return this->requestId_ == nullptr; };
    // entries Field Functions 
    bool hasEntries() const { return this->entries_ != nullptr;};
    void deleteEntries() { this->entries_ = nullptr;};
    inline const DescribeFilesetsResponseBodyEntries & entries() const { DARABONBA_PTR_GET_CONST(entries_, DescribeFilesetsResponseBodyEntries) };
    inline DescribeFilesetsResponseBodyEntries entries() { DARABONBA_PTR_GET(entries_, DescribeFilesetsResponseBodyEntries) };
    inline DescribeFilesetsResponseBody& setEntries(const DescribeFilesetsResponseBodyEntries & entries) { DARABONBA_PTR_SET_VALUE(entries_, entries) };
    inline DescribeFilesetsResponseBody& setEntries(DescribeFilesetsResponseBodyEntries && entries) { DARABONBA_PTR_SET_RVALUE(entries_, entries) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline DescribeFilesetsResponseBody& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeFilesetsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFilesetsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The fileset information.
    std::shared_ptr<DescribeFilesetsResponseBodyEntries> entries_ = nullptr;
    // The ID of the file system.
    // 
    // *   The IDs of CPFS file systems must start with `cpfs-`. Example: cpfs-099394bd928c\\*\\*\\*\\*.
    // *   The IDs of CPFS for LINGJUN file systems must start with `bmcpfs-`. Example: bmcpfs-290w65p03ok64ya\\*\\*\\*\\*.
    // 
    // >  CPFS is not supported on the international site.
    std::shared_ptr<string> fileSystemId_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
