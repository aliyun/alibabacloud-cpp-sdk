// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDSHAREREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDSHAREREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class AddShareReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddShareReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthPoint, authPoint_);
      DARABONBA_PTR_TO_JSON(ExpireDate, expireDate_);
      DARABONBA_PTR_TO_JSON(ShareToId, shareToId_);
      DARABONBA_PTR_TO_JSON(ShareToType, shareToType_);
      DARABONBA_PTR_TO_JSON(WorksId, worksId_);
    };
    friend void from_json(const Darabonba::Json& j, AddShareReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthPoint, authPoint_);
      DARABONBA_PTR_FROM_JSON(ExpireDate, expireDate_);
      DARABONBA_PTR_FROM_JSON(ShareToId, shareToId_);
      DARABONBA_PTR_FROM_JSON(ShareToType, shareToType_);
      DARABONBA_PTR_FROM_JSON(WorksId, worksId_);
    };
    AddShareReportRequest() = default ;
    AddShareReportRequest(const AddShareReportRequest &) = default ;
    AddShareReportRequest(AddShareReportRequest &&) = default ;
    AddShareReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddShareReportRequest() = default ;
    AddShareReportRequest& operator=(const AddShareReportRequest &) = default ;
    AddShareReportRequest& operator=(AddShareReportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authPoint_ != nullptr
        && this->expireDate_ != nullptr && this->shareToId_ != nullptr && this->shareToType_ != nullptr && this->worksId_ != nullptr; };
    // authPoint Field Functions 
    bool hasAuthPoint() const { return this->authPoint_ != nullptr;};
    void deleteAuthPoint() { this->authPoint_ = nullptr;};
    inline int32_t authPoint() const { DARABONBA_PTR_GET_DEFAULT(authPoint_, 0) };
    inline AddShareReportRequest& setAuthPoint(int32_t authPoint) { DARABONBA_PTR_SET_VALUE(authPoint_, authPoint) };


    // expireDate Field Functions 
    bool hasExpireDate() const { return this->expireDate_ != nullptr;};
    void deleteExpireDate() { this->expireDate_ = nullptr;};
    inline int64_t expireDate() const { DARABONBA_PTR_GET_DEFAULT(expireDate_, 0L) };
    inline AddShareReportRequest& setExpireDate(int64_t expireDate) { DARABONBA_PTR_SET_VALUE(expireDate_, expireDate) };


    // shareToId Field Functions 
    bool hasShareToId() const { return this->shareToId_ != nullptr;};
    void deleteShareToId() { this->shareToId_ = nullptr;};
    inline string shareToId() const { DARABONBA_PTR_GET_DEFAULT(shareToId_, "") };
    inline AddShareReportRequest& setShareToId(string shareToId) { DARABONBA_PTR_SET_VALUE(shareToId_, shareToId) };


    // shareToType Field Functions 
    bool hasShareToType() const { return this->shareToType_ != nullptr;};
    void deleteShareToType() { this->shareToType_ = nullptr;};
    inline int32_t shareToType() const { DARABONBA_PTR_GET_DEFAULT(shareToType_, 0) };
    inline AddShareReportRequest& setShareToType(int32_t shareToType) { DARABONBA_PTR_SET_VALUE(shareToType_, shareToType) };


    // worksId Field Functions 
    bool hasWorksId() const { return this->worksId_ != nullptr;};
    void deleteWorksId() { this->worksId_ = nullptr;};
    inline string worksId() const { DARABONBA_PTR_GET_DEFAULT(worksId_, "") };
    inline AddShareReportRequest& setWorksId(string worksId) { DARABONBA_PTR_SET_VALUE(worksId_, worksId) };


  protected:
    // The scope of authorization. Valid values:
    // 
    // *   1: view only
    // *   3: View and export
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> authPoint_ = nullptr;
    // The validity period of the share. The value is a timestamp in milliseconds.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> expireDate_ = nullptr;
    // The ID of the person to be shared, which may be the user ID of the Quick BI or the user group ID.
    // 
    // *   If ShareToType is 0 (user), ShareTo is the user ID.
    // *   When ShareToType is set to 1 (user group), ShareTo is the user group ID.
    // *   When ShareToType=2 (organization), ShareTo is the ID of the organization.
    std::shared_ptr<string> shareToId_ = nullptr;
    // The share type of the template. Valid values:
    // 
    // *   0: user
    // *   1: user group
    // *   2: organization
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> shareToType_ = nullptr;
    // The ID of the shared work. The works here include BI portal, dashboards, spreadsheets, and self-service access.
    // 
    // This parameter is required.
    std::shared_ptr<string> worksId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
