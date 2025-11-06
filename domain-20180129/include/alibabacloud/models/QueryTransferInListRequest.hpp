// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTRANSFERINLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYTRANSFERINLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryTransferInListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTransferInListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SimpleTransferInStatus, simpleTransferInStatus_);
      DARABONBA_PTR_TO_JSON(SubmissionEndDate, submissionEndDate_);
      DARABONBA_PTR_TO_JSON(SubmissionStartDate, submissionStartDate_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTransferInListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SimpleTransferInStatus, simpleTransferInStatus_);
      DARABONBA_PTR_FROM_JSON(SubmissionEndDate, submissionEndDate_);
      DARABONBA_PTR_FROM_JSON(SubmissionStartDate, submissionStartDate_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
    };
    QueryTransferInListRequest() = default ;
    QueryTransferInListRequest(const QueryTransferInListRequest &) = default ;
    QueryTransferInListRequest(QueryTransferInListRequest &&) = default ;
    QueryTransferInListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTransferInListRequest() = default ;
    QueryTransferInListRequest& operator=(const QueryTransferInListRequest &) = default ;
    QueryTransferInListRequest& operator=(QueryTransferInListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && return this->lang_ == nullptr && return this->pageNum_ == nullptr && return this->pageSize_ == nullptr && return this->simpleTransferInStatus_ == nullptr && return this->submissionEndDate_ == nullptr
        && return this->submissionStartDate_ == nullptr && return this->userClientIp_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline QueryTransferInListRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline QueryTransferInListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline QueryTransferInListRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryTransferInListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // simpleTransferInStatus Field Functions 
    bool hasSimpleTransferInStatus() const { return this->simpleTransferInStatus_ != nullptr;};
    void deleteSimpleTransferInStatus() { this->simpleTransferInStatus_ = nullptr;};
    inline string simpleTransferInStatus() const { DARABONBA_PTR_GET_DEFAULT(simpleTransferInStatus_, "") };
    inline QueryTransferInListRequest& setSimpleTransferInStatus(string simpleTransferInStatus) { DARABONBA_PTR_SET_VALUE(simpleTransferInStatus_, simpleTransferInStatus) };


    // submissionEndDate Field Functions 
    bool hasSubmissionEndDate() const { return this->submissionEndDate_ != nullptr;};
    void deleteSubmissionEndDate() { this->submissionEndDate_ = nullptr;};
    inline int64_t submissionEndDate() const { DARABONBA_PTR_GET_DEFAULT(submissionEndDate_, 0L) };
    inline QueryTransferInListRequest& setSubmissionEndDate(int64_t submissionEndDate) { DARABONBA_PTR_SET_VALUE(submissionEndDate_, submissionEndDate) };


    // submissionStartDate Field Functions 
    bool hasSubmissionStartDate() const { return this->submissionStartDate_ != nullptr;};
    void deleteSubmissionStartDate() { this->submissionStartDate_ = nullptr;};
    inline int64_t submissionStartDate() const { DARABONBA_PTR_GET_DEFAULT(submissionStartDate_, 0L) };
    inline QueryTransferInListRequest& setSubmissionStartDate(int64_t submissionStartDate) { DARABONBA_PTR_SET_VALUE(submissionStartDate_, submissionStartDate) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string userClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline QueryTransferInListRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


  protected:
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> simpleTransferInStatus_ = nullptr;
    std::shared_ptr<int64_t> submissionEndDate_ = nullptr;
    std::shared_ptr<int64_t> submissionStartDate_ = nullptr;
    std::shared_ptr<string> userClientIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
