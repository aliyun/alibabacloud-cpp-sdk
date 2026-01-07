// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACCOUNTCONTACTQUERYPAGELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ACCOUNTCONTACTQUERYPAGELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCenter20241209
{
namespace Models
{
  class AccountContactQueryPageListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AccountContactQueryPageListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(OrientedEcId, orientedEcId_);
      DARABONBA_PTR_TO_JSON(OrientedLeId, orientedLeId_);
      DARABONBA_PTR_TO_JSON(OrientedNbId, orientedNbId_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PrivateContact, privateContact_);
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(SharedContact, sharedContact_);
      DARABONBA_PTR_TO_JSON(ShowCompleteInfo, showCompleteInfo_);
    };
    friend void from_json(const Darabonba::Json& j, AccountContactQueryPageListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(OrientedEcId, orientedEcId_);
      DARABONBA_PTR_FROM_JSON(OrientedLeId, orientedLeId_);
      DARABONBA_PTR_FROM_JSON(OrientedNbId, orientedNbId_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PrivateContact, privateContact_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(SharedContact, sharedContact_);
      DARABONBA_PTR_FROM_JSON(ShowCompleteInfo, showCompleteInfo_);
    };
    AccountContactQueryPageListRequest() = default ;
    AccountContactQueryPageListRequest(const AccountContactQueryPageListRequest &) = default ;
    AccountContactQueryPageListRequest(AccountContactQueryPageListRequest &&) = default ;
    AccountContactQueryPageListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AccountContactQueryPageListRequest() = default ;
    AccountContactQueryPageListRequest& operator=(const AccountContactQueryPageListRequest &) = default ;
    AccountContactQueryPageListRequest& operator=(AccountContactQueryPageListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && this->orientedEcId_ == nullptr && this->orientedLeId_ == nullptr && this->orientedNbId_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr
        && this->privateContact_ == nullptr && this->query_ == nullptr && this->sharedContact_ == nullptr && this->showCompleteInfo_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline AccountContactQueryPageListRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // orientedEcId Field Functions 
    bool hasOrientedEcId() const { return this->orientedEcId_ != nullptr;};
    void deleteOrientedEcId() { this->orientedEcId_ = nullptr;};
    inline string getOrientedEcId() const { DARABONBA_PTR_GET_DEFAULT(orientedEcId_, "") };
    inline AccountContactQueryPageListRequest& setOrientedEcId(string orientedEcId) { DARABONBA_PTR_SET_VALUE(orientedEcId_, orientedEcId) };


    // orientedLeId Field Functions 
    bool hasOrientedLeId() const { return this->orientedLeId_ != nullptr;};
    void deleteOrientedLeId() { this->orientedLeId_ = nullptr;};
    inline string getOrientedLeId() const { DARABONBA_PTR_GET_DEFAULT(orientedLeId_, "") };
    inline AccountContactQueryPageListRequest& setOrientedLeId(string orientedLeId) { DARABONBA_PTR_SET_VALUE(orientedLeId_, orientedLeId) };


    // orientedNbId Field Functions 
    bool hasOrientedNbId() const { return this->orientedNbId_ != nullptr;};
    void deleteOrientedNbId() { this->orientedNbId_ = nullptr;};
    inline string getOrientedNbId() const { DARABONBA_PTR_GET_DEFAULT(orientedNbId_, "") };
    inline AccountContactQueryPageListRequest& setOrientedNbId(string orientedNbId) { DARABONBA_PTR_SET_VALUE(orientedNbId_, orientedNbId) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline AccountContactQueryPageListRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline AccountContactQueryPageListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // privateContact Field Functions 
    bool hasPrivateContact() const { return this->privateContact_ != nullptr;};
    void deletePrivateContact() { this->privateContact_ = nullptr;};
    inline bool getPrivateContact() const { DARABONBA_PTR_GET_DEFAULT(privateContact_, false) };
    inline AccountContactQueryPageListRequest& setPrivateContact(bool privateContact) { DARABONBA_PTR_SET_VALUE(privateContact_, privateContact) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline AccountContactQueryPageListRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // sharedContact Field Functions 
    bool hasSharedContact() const { return this->sharedContact_ != nullptr;};
    void deleteSharedContact() { this->sharedContact_ = nullptr;};
    inline bool getSharedContact() const { DARABONBA_PTR_GET_DEFAULT(sharedContact_, false) };
    inline AccountContactQueryPageListRequest& setSharedContact(bool sharedContact) { DARABONBA_PTR_SET_VALUE(sharedContact_, sharedContact) };


    // showCompleteInfo Field Functions 
    bool hasShowCompleteInfo() const { return this->showCompleteInfo_ != nullptr;};
    void deleteShowCompleteInfo() { this->showCompleteInfo_ = nullptr;};
    inline bool getShowCompleteInfo() const { DARABONBA_PTR_GET_DEFAULT(showCompleteInfo_, false) };
    inline AccountContactQueryPageListRequest& setShowCompleteInfo(bool showCompleteInfo) { DARABONBA_PTR_SET_VALUE(showCompleteInfo_, showCompleteInfo) };


  protected:
    shared_ptr<string> appName_ {};
    shared_ptr<string> orientedEcId_ {};
    shared_ptr<string> orientedLeId_ {};
    shared_ptr<string> orientedNbId_ {};
    shared_ptr<int32_t> pageNo_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<bool> privateContact_ {};
    shared_ptr<string> query_ {};
    shared_ptr<bool> sharedContact_ {};
    shared_ptr<bool> showCompleteInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCenter20241209
#endif
