// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUSPEVENTQUARAFILESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUSPEVENTQUARAFILESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSuspEventQuaraFilesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSuspEventQuaraFilesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupingId, groupingId_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(QuaraTag, quaraTag_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSuspEventQuaraFilesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupingId, groupingId_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(QuaraTag, quaraTag_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeSuspEventQuaraFilesRequest() = default ;
    DescribeSuspEventQuaraFilesRequest(const DescribeSuspEventQuaraFilesRequest &) = default ;
    DescribeSuspEventQuaraFilesRequest(DescribeSuspEventQuaraFilesRequest &&) = default ;
    DescribeSuspEventQuaraFilesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSuspEventQuaraFilesRequest() = default ;
    DescribeSuspEventQuaraFilesRequest& operator=(const DescribeSuspEventQuaraFilesRequest &) = default ;
    DescribeSuspEventQuaraFilesRequest& operator=(DescribeSuspEventQuaraFilesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->from_ == nullptr && this->groupId_ == nullptr && this->groupingId_ == nullptr && this->pageSize_ == nullptr && this->quaraTag_ == nullptr
        && this->sourceIp_ == nullptr && this->status_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline string getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, "") };
    inline DescribeSuspEventQuaraFilesRequest& setCurrentPage(string currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline string getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, "") };
    inline DescribeSuspEventQuaraFilesRequest& setFrom(string from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeSuspEventQuaraFilesRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupingId Field Functions 
    bool hasGroupingId() const { return this->groupingId_ != nullptr;};
    void deleteGroupingId() { this->groupingId_ = nullptr;};
    inline int64_t getGroupingId() const { DARABONBA_PTR_GET_DEFAULT(groupingId_, 0L) };
    inline DescribeSuspEventQuaraFilesRequest& setGroupingId(int64_t groupingId) { DARABONBA_PTR_SET_VALUE(groupingId_, groupingId) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeSuspEventQuaraFilesRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // quaraTag Field Functions 
    bool hasQuaraTag() const { return this->quaraTag_ != nullptr;};
    void deleteQuaraTag() { this->quaraTag_ = nullptr;};
    inline string getQuaraTag() const { DARABONBA_PTR_GET_DEFAULT(quaraTag_, "") };
    inline DescribeSuspEventQuaraFilesRequest& setQuaraTag(string quaraTag) { DARABONBA_PTR_SET_VALUE(quaraTag_, quaraTag) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeSuspEventQuaraFilesRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeSuspEventQuaraFilesRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The number of the page to return.
    shared_ptr<string> currentPage_ {};
    // The ID of the request source. Set the value to **sas**.
    shared_ptr<string> from_ {};
    // The ID of the asset group.
    shared_ptr<string> groupId_ {};
    // The ID of the server group to which the server belongs. The quarantined file is located on the server.
    shared_ptr<int64_t> groupingId_ {};
    // The number of entries to return on each page.
    shared_ptr<string> pageSize_ {};
    // The unique ID of the quarantined file.
    shared_ptr<string> quaraTag_ {};
    // The source IP address of the request.
    shared_ptr<string> sourceIp_ {};
    // The status of the quarantined file that you want to query. Valid values:
    // 
    // *   **quaraFailed**: The file fails to be quarantined.
    // *   **quaraDone**: The file is quarantined.
    // *   **quaraing**: The file is being quarantined.
    // *   **rollbackFailed**: The system fails to cancel quarantining the file.
    // *   **rollbackDone**: The system cancelled quarantining the file.
    // *   **rollbacking**: The system is cancelling quarantining the file.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
