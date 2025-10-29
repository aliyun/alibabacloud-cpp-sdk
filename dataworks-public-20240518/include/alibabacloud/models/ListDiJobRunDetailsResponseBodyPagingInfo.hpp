// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIJOBRUNDETAILSRESPONSEBODYPAGINGINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTDIJOBRUNDETAILSRESPONSEBODYPAGINGINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDIJobRunDetailsResponseBodyPagingInfoJobRunInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDIJobRunDetailsResponseBodyPagingInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDIJobRunDetailsResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_TO_JSON(JobRunInfos, jobRunInfos_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDIJobRunDetailsResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(JobRunInfos, jobRunInfos_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDIJobRunDetailsResponseBodyPagingInfo() = default ;
    ListDIJobRunDetailsResponseBodyPagingInfo(const ListDIJobRunDetailsResponseBodyPagingInfo &) = default ;
    ListDIJobRunDetailsResponseBodyPagingInfo(ListDIJobRunDetailsResponseBodyPagingInfo &&) = default ;
    ListDIJobRunDetailsResponseBodyPagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDIJobRunDetailsResponseBodyPagingInfo() = default ;
    ListDIJobRunDetailsResponseBodyPagingInfo& operator=(const ListDIJobRunDetailsResponseBodyPagingInfo &) = default ;
    ListDIJobRunDetailsResponseBodyPagingInfo& operator=(ListDIJobRunDetailsResponseBodyPagingInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobRunInfos_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->totalCount_ == nullptr; };
    // jobRunInfos Field Functions 
    bool hasJobRunInfos() const { return this->jobRunInfos_ != nullptr;};
    void deleteJobRunInfos() { this->jobRunInfos_ = nullptr;};
    inline const vector<Models::ListDIJobRunDetailsResponseBodyPagingInfoJobRunInfos> & jobRunInfos() const { DARABONBA_PTR_GET_CONST(jobRunInfos_, vector<Models::ListDIJobRunDetailsResponseBodyPagingInfoJobRunInfos>) };
    inline vector<Models::ListDIJobRunDetailsResponseBodyPagingInfoJobRunInfos> jobRunInfos() { DARABONBA_PTR_GET(jobRunInfos_, vector<Models::ListDIJobRunDetailsResponseBodyPagingInfoJobRunInfos>) };
    inline ListDIJobRunDetailsResponseBodyPagingInfo& setJobRunInfos(const vector<Models::ListDIJobRunDetailsResponseBodyPagingInfoJobRunInfos> & jobRunInfos) { DARABONBA_PTR_SET_VALUE(jobRunInfos_, jobRunInfos) };
    inline ListDIJobRunDetailsResponseBodyPagingInfo& setJobRunInfos(vector<Models::ListDIJobRunDetailsResponseBodyPagingInfoJobRunInfos> && jobRunInfos) { DARABONBA_PTR_SET_RVALUE(jobRunInfos_, jobRunInfos) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline ListDIJobRunDetailsResponseBodyPagingInfo& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListDIJobRunDetailsResponseBodyPagingInfo& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListDIJobRunDetailsResponseBodyPagingInfo& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The running information about the synchronization task.
    std::shared_ptr<vector<Models::ListDIJobRunDetailsResponseBodyPagingInfoJobRunInfos>> jobRunInfos_ = nullptr;
    // The page number.
    std::shared_ptr<string> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<string> pageSize_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<string> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
