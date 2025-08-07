// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICEUSAGESRESPONSEBODYSERVICEUSAGES_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICEUSAGESRESPONSEBODYSERVICEUSAGES_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class ListServiceUsagesResponseBodyServiceUsages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceUsagesResponseBodyServiceUsages& obj) { 
      DARABONBA_PTR_TO_JSON(Comments, comments_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SupplierName, supplierName_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UserAliUid, userAliUid_);
      DARABONBA_PTR_TO_JSON(UserInformation, userInformation_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceUsagesResponseBodyServiceUsages& obj) { 
      DARABONBA_PTR_FROM_JSON(Comments, comments_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SupplierName, supplierName_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UserAliUid, userAliUid_);
      DARABONBA_PTR_FROM_JSON(UserInformation, userInformation_);
    };
    ListServiceUsagesResponseBodyServiceUsages() = default ;
    ListServiceUsagesResponseBodyServiceUsages(const ListServiceUsagesResponseBodyServiceUsages &) = default ;
    ListServiceUsagesResponseBodyServiceUsages(ListServiceUsagesResponseBodyServiceUsages &&) = default ;
    ListServiceUsagesResponseBodyServiceUsages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceUsagesResponseBodyServiceUsages() = default ;
    ListServiceUsagesResponseBodyServiceUsages& operator=(const ListServiceUsagesResponseBodyServiceUsages &) = default ;
    ListServiceUsagesResponseBodyServiceUsages& operator=(ListServiceUsagesResponseBodyServiceUsages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->comments_ != nullptr
        && this->createTime_ != nullptr && this->serviceId_ != nullptr && this->serviceName_ != nullptr && this->status_ != nullptr && this->supplierName_ != nullptr
        && this->updateTime_ != nullptr && this->userAliUid_ != nullptr && this->userInformation_ != nullptr; };
    // comments Field Functions 
    bool hasComments() const { return this->comments_ != nullptr;};
    void deleteComments() { this->comments_ = nullptr;};
    inline string comments() const { DARABONBA_PTR_GET_DEFAULT(comments_, "") };
    inline ListServiceUsagesResponseBodyServiceUsages& setComments(string comments) { DARABONBA_PTR_SET_VALUE(comments_, comments) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListServiceUsagesResponseBodyServiceUsages& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline ListServiceUsagesResponseBodyServiceUsages& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline ListServiceUsagesResponseBodyServiceUsages& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListServiceUsagesResponseBodyServiceUsages& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // supplierName Field Functions 
    bool hasSupplierName() const { return this->supplierName_ != nullptr;};
    void deleteSupplierName() { this->supplierName_ = nullptr;};
    inline string supplierName() const { DARABONBA_PTR_GET_DEFAULT(supplierName_, "") };
    inline ListServiceUsagesResponseBodyServiceUsages& setSupplierName(string supplierName) { DARABONBA_PTR_SET_VALUE(supplierName_, supplierName) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListServiceUsagesResponseBodyServiceUsages& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // userAliUid Field Functions 
    bool hasUserAliUid() const { return this->userAliUid_ != nullptr;};
    void deleteUserAliUid() { this->userAliUid_ = nullptr;};
    inline int64_t userAliUid() const { DARABONBA_PTR_GET_DEFAULT(userAliUid_, 0L) };
    inline ListServiceUsagesResponseBodyServiceUsages& setUserAliUid(int64_t userAliUid) { DARABONBA_PTR_SET_VALUE(userAliUid_, userAliUid) };


    // userInformation Field Functions 
    bool hasUserInformation() const { return this->userInformation_ != nullptr;};
    void deleteUserInformation() { this->userInformation_ = nullptr;};
    inline const map<string, string> & userInformation() const { DARABONBA_PTR_GET_CONST(userInformation_, map<string, string>) };
    inline map<string, string> userInformation() { DARABONBA_PTR_GET(userInformation_, map<string, string>) };
    inline ListServiceUsagesResponseBodyServiceUsages& setUserInformation(const map<string, string> & userInformation) { DARABONBA_PTR_SET_VALUE(userInformation_, userInformation) };
    inline ListServiceUsagesResponseBodyServiceUsages& setUserInformation(map<string, string> && userInformation) { DARABONBA_PTR_SET_RVALUE(userInformation_, userInformation) };


  protected:
    // The review comment.
    std::shared_ptr<string> comments_ = nullptr;
    // The time when the application was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The service ID.
    std::shared_ptr<string> serviceId_ = nullptr;
    // The service name.
    std::shared_ptr<string> serviceName_ = nullptr;
    // The state of the service application. Valid values:
    // 
    // *   Submitted: The application is submitted for review.
    // *   Approved: The application is approved.
    // *   Rejected: The application is rejected.
    // *   Canceled: The application is canceled.
    std::shared_ptr<string> status_ = nullptr;
    // The name of the service provider.
    std::shared_ptr<string> supplierName_ = nullptr;
    // The time when the application was updated.
    std::shared_ptr<string> updateTime_ = nullptr;
    // The ID of the Alibaba Cloud account.
    std::shared_ptr<int64_t> userAliUid_ = nullptr;
    // The information about the applicants.
    std::shared_ptr<map<string, string>> userInformation_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
