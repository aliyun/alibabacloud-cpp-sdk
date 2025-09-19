// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUNIBACKUPDATABASERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUNIBACKUPDATABASERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeUniBackupDatabaseResponseBodyDatabaseList.hpp>
#include <alibabacloud/models/DescribeUniBackupDatabaseResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeUniBackupDatabaseResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUniBackupDatabaseResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DatabaseList, databaseList_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUniBackupDatabaseResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DatabaseList, databaseList_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeUniBackupDatabaseResponseBody() = default ;
    DescribeUniBackupDatabaseResponseBody(const DescribeUniBackupDatabaseResponseBody &) = default ;
    DescribeUniBackupDatabaseResponseBody(DescribeUniBackupDatabaseResponseBody &&) = default ;
    DescribeUniBackupDatabaseResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUniBackupDatabaseResponseBody() = default ;
    DescribeUniBackupDatabaseResponseBody& operator=(const DescribeUniBackupDatabaseResponseBody &) = default ;
    DescribeUniBackupDatabaseResponseBody& operator=(DescribeUniBackupDatabaseResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->databaseList_ != nullptr
        && this->pageInfo_ != nullptr && this->requestId_ != nullptr; };
    // databaseList Field Functions 
    bool hasDatabaseList() const { return this->databaseList_ != nullptr;};
    void deleteDatabaseList() { this->databaseList_ = nullptr;};
    inline const vector<DescribeUniBackupDatabaseResponseBodyDatabaseList> & databaseList() const { DARABONBA_PTR_GET_CONST(databaseList_, vector<DescribeUniBackupDatabaseResponseBodyDatabaseList>) };
    inline vector<DescribeUniBackupDatabaseResponseBodyDatabaseList> databaseList() { DARABONBA_PTR_GET(databaseList_, vector<DescribeUniBackupDatabaseResponseBodyDatabaseList>) };
    inline DescribeUniBackupDatabaseResponseBody& setDatabaseList(const vector<DescribeUniBackupDatabaseResponseBodyDatabaseList> & databaseList) { DARABONBA_PTR_SET_VALUE(databaseList_, databaseList) };
    inline DescribeUniBackupDatabaseResponseBody& setDatabaseList(vector<DescribeUniBackupDatabaseResponseBodyDatabaseList> && databaseList) { DARABONBA_PTR_SET_RVALUE(databaseList_, databaseList) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeUniBackupDatabaseResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeUniBackupDatabaseResponseBodyPageInfo) };
    inline DescribeUniBackupDatabaseResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeUniBackupDatabaseResponseBodyPageInfo) };
    inline DescribeUniBackupDatabaseResponseBody& setPageInfo(const DescribeUniBackupDatabaseResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeUniBackupDatabaseResponseBody& setPageInfo(DescribeUniBackupDatabaseResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUniBackupDatabaseResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the information about the databases.
    std::shared_ptr<vector<DescribeUniBackupDatabaseResponseBodyDatabaseList>> databaseList_ = nullptr;
    // The pagination information.
    std::shared_ptr<DescribeUniBackupDatabaseResponseBodyPageInfo> pageInfo_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
