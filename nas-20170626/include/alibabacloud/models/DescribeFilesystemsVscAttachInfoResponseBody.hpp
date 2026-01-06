// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSVSCATTACHINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSVSCATTACHINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeFilesystemsVscAttachInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFilesystemsVscAttachInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VscAttachInfo, vscAttachInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFilesystemsVscAttachInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VscAttachInfo, vscAttachInfo_);
    };
    DescribeFilesystemsVscAttachInfoResponseBody() = default ;
    DescribeFilesystemsVscAttachInfoResponseBody(const DescribeFilesystemsVscAttachInfoResponseBody &) = default ;
    DescribeFilesystemsVscAttachInfoResponseBody(DescribeFilesystemsVscAttachInfoResponseBody &&) = default ;
    DescribeFilesystemsVscAttachInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFilesystemsVscAttachInfoResponseBody() = default ;
    DescribeFilesystemsVscAttachInfoResponseBody& operator=(const DescribeFilesystemsVscAttachInfoResponseBody &) = default ;
    DescribeFilesystemsVscAttachInfoResponseBody& operator=(DescribeFilesystemsVscAttachInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VscAttachInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VscAttachInfo& obj) { 
        DARABONBA_PTR_TO_JSON(VscAttachInfo, vscAttachInfo_);
      };
      friend void from_json(const Darabonba::Json& j, VscAttachInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(VscAttachInfo, vscAttachInfo_);
      };
      VscAttachInfo() = default ;
      VscAttachInfo(const VscAttachInfo &) = default ;
      VscAttachInfo(VscAttachInfo &&) = default ;
      VscAttachInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VscAttachInfo() = default ;
      VscAttachInfo& operator=(const VscAttachInfo &) = default ;
      VscAttachInfo& operator=(VscAttachInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VscAttachInfoItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VscAttachInfoItem& obj) { 
          DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(VscId, vscId_);
        };
        friend void from_json(const Darabonba::Json& j, VscAttachInfoItem& obj) { 
          DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(VscId, vscId_);
        };
        VscAttachInfoItem() = default ;
        VscAttachInfoItem(const VscAttachInfoItem &) = default ;
        VscAttachInfoItem(VscAttachInfoItem &&) = default ;
        VscAttachInfoItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VscAttachInfoItem() = default ;
        VscAttachInfoItem& operator=(const VscAttachInfoItem &) = default ;
        VscAttachInfoItem& operator=(VscAttachInfoItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->fileSystemId_ == nullptr
        && this->status_ == nullptr && this->vscId_ == nullptr; };
        // fileSystemId Field Functions 
        bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
        void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
        inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
        inline VscAttachInfoItem& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline VscAttachInfoItem& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // vscId Field Functions 
        bool hasVscId() const { return this->vscId_ != nullptr;};
        void deleteVscId() { this->vscId_ = nullptr;};
        inline string getVscId() const { DARABONBA_PTR_GET_DEFAULT(vscId_, "") };
        inline VscAttachInfoItem& setVscId(string vscId) { DARABONBA_PTR_SET_VALUE(vscId_, vscId) };


      protected:
        // The ID of the file system.
        shared_ptr<string> fileSystemId_ {};
        // The association status of the file system and virtual channel. Valid values:
        // 
        // *   Attaching: The association is being made.
        // *   Attached: The association is complete.
        // *   Detaching: The association is being canceled.
        // *   Detached: The association is canceled.
        // *   Failed: The association failed.
        shared_ptr<string> status_ {};
        // The ID of the virtual storage channel.
        shared_ptr<string> vscId_ {};
      };

      virtual bool empty() const override { return this->vscAttachInfo_ == nullptr; };
      // vscAttachInfo Field Functions 
      bool hasVscAttachInfo() const { return this->vscAttachInfo_ != nullptr;};
      void deleteVscAttachInfo() { this->vscAttachInfo_ = nullptr;};
      inline const vector<VscAttachInfo::VscAttachInfoItem> & getVscAttachInfo() const { DARABONBA_PTR_GET_CONST(vscAttachInfo_, vector<VscAttachInfo::VscAttachInfoItem>) };
      inline vector<VscAttachInfo::VscAttachInfoItem> getVscAttachInfo() { DARABONBA_PTR_GET(vscAttachInfo_, vector<VscAttachInfo::VscAttachInfoItem>) };
      inline VscAttachInfo& setVscAttachInfo(const vector<VscAttachInfo::VscAttachInfoItem> & vscAttachInfo) { DARABONBA_PTR_SET_VALUE(vscAttachInfo_, vscAttachInfo) };
      inline VscAttachInfo& setVscAttachInfo(vector<VscAttachInfo::VscAttachInfoItem> && vscAttachInfo) { DARABONBA_PTR_SET_RVALUE(vscAttachInfo_, vscAttachInfo) };


    protected:
      shared_ptr<vector<VscAttachInfo::VscAttachInfoItem>> vscAttachInfo_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->vscAttachInfo_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeFilesystemsVscAttachInfoResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeFilesystemsVscAttachInfoResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFilesystemsVscAttachInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeFilesystemsVscAttachInfoResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vscAttachInfo Field Functions 
    bool hasVscAttachInfo() const { return this->vscAttachInfo_ != nullptr;};
    void deleteVscAttachInfo() { this->vscAttachInfo_ = nullptr;};
    inline const DescribeFilesystemsVscAttachInfoResponseBody::VscAttachInfo & getVscAttachInfo() const { DARABONBA_PTR_GET_CONST(vscAttachInfo_, DescribeFilesystemsVscAttachInfoResponseBody::VscAttachInfo) };
    inline DescribeFilesystemsVscAttachInfoResponseBody::VscAttachInfo getVscAttachInfo() { DARABONBA_PTR_GET(vscAttachInfo_, DescribeFilesystemsVscAttachInfoResponseBody::VscAttachInfo) };
    inline DescribeFilesystemsVscAttachInfoResponseBody& setVscAttachInfo(const DescribeFilesystemsVscAttachInfoResponseBody::VscAttachInfo & vscAttachInfo) { DARABONBA_PTR_SET_VALUE(vscAttachInfo_, vscAttachInfo) };
    inline DescribeFilesystemsVscAttachInfoResponseBody& setVscAttachInfo(DescribeFilesystemsVscAttachInfoResponseBody::VscAttachInfo && vscAttachInfo) { DARABONBA_PTR_SET_RVALUE(vscAttachInfo_, vscAttachInfo) };


  protected:
    // The number of directories to return for each query.
    // 
    // Valid values: 10 to 1000.
    // 
    // Default value: 10.
    shared_ptr<int32_t> maxResults_ {};
    // Query token, which is the NextToken value returned from the previous API call.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of associated information.
    shared_ptr<int32_t> totalCount_ {};
    // A collection of file system and virtual channel association data.
    shared_ptr<DescribeFilesystemsVscAttachInfoResponseBody::VscAttachInfo> vscAttachInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
