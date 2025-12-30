// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIRTCLICENSEINFOLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAIRTCLICENSEINFOLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetAiRtcLicenseInfoListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAiRtcLicenseInfoListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LicenseItemId, licenseItemId_);
      DARABONBA_PTR_TO_JSON(NeedTotalCount, needTotalCount_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetAiRtcLicenseInfoListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LicenseItemId, licenseItemId_);
      DARABONBA_PTR_FROM_JSON(NeedTotalCount, needTotalCount_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetAiRtcLicenseInfoListRequest() = default ;
    GetAiRtcLicenseInfoListRequest(const GetAiRtcLicenseInfoListRequest &) = default ;
    GetAiRtcLicenseInfoListRequest(GetAiRtcLicenseInfoListRequest &&) = default ;
    GetAiRtcLicenseInfoListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAiRtcLicenseInfoListRequest() = default ;
    GetAiRtcLicenseInfoListRequest& operator=(const GetAiRtcLicenseInfoListRequest &) = default ;
    GetAiRtcLicenseInfoListRequest& operator=(GetAiRtcLicenseInfoListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->licenseItemId_ == nullptr
        && this->needTotalCount_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->status_ == nullptr && this->type_ == nullptr; };
    // licenseItemId Field Functions 
    bool hasLicenseItemId() const { return this->licenseItemId_ != nullptr;};
    void deleteLicenseItemId() { this->licenseItemId_ = nullptr;};
    inline string getLicenseItemId() const { DARABONBA_PTR_GET_DEFAULT(licenseItemId_, "") };
    inline GetAiRtcLicenseInfoListRequest& setLicenseItemId(string licenseItemId) { DARABONBA_PTR_SET_VALUE(licenseItemId_, licenseItemId) };


    // needTotalCount Field Functions 
    bool hasNeedTotalCount() const { return this->needTotalCount_ != nullptr;};
    void deleteNeedTotalCount() { this->needTotalCount_ = nullptr;};
    inline bool getNeedTotalCount() const { DARABONBA_PTR_GET_DEFAULT(needTotalCount_, false) };
    inline GetAiRtcLicenseInfoListRequest& setNeedTotalCount(bool needTotalCount) { DARABONBA_PTR_SET_VALUE(needTotalCount_, needTotalCount) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline GetAiRtcLicenseInfoListRequest& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline GetAiRtcLicenseInfoListRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetAiRtcLicenseInfoListRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline GetAiRtcLicenseInfoListRequest& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the batch.
    shared_ptr<string> licenseItemId_ {};
    // Specifies whether to include the total count of records in the response. Defaults to `true`.
    shared_ptr<bool> needTotalCount_ {};
    // The page number.
    shared_ptr<int64_t> pageNo_ {};
    // The number of entries per page.
    shared_ptr<int64_t> pageSize_ {};
    // The status of the batch. Valid values:
    // 
    // *   `1`: Active
    // *   `2`: Expired
    shared_ptr<int32_t> status_ {};
    // The type of license. Valid values:
    // 
    // *   `1`: Audio call
    // *   `2`: Vision call
    shared_ptr<int32_t> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
