// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERVERSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBClusterVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DBLatestVersion, DBLatestVersion_);
      DARABONBA_PTR_TO_JSON(DBMinorVersion, DBMinorVersion_);
      DARABONBA_PTR_TO_JSON(DBRevisionVersion, DBRevisionVersion_);
      DARABONBA_PTR_TO_JSON(DBRevisionVersionList, DBRevisionVersionList_);
      DARABONBA_PTR_TO_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_TO_JSON(DBVersionStatus, DBVersionStatus_);
      DARABONBA_PTR_TO_JSON(IsLatestVersion, isLatestVersion_);
      DARABONBA_PTR_TO_JSON(IsProxyLatestVersion, isProxyLatestVersion_);
      DARABONBA_PTR_TO_JSON(ProxyLatestVersion, proxyLatestVersion_);
      DARABONBA_PTR_TO_JSON(ProxyRevisionVersion, proxyRevisionVersion_);
      DARABONBA_PTR_TO_JSON(ProxyRevisionVersionList, proxyRevisionVersionList_);
      DARABONBA_PTR_TO_JSON(ProxyVersionStatus, proxyVersionStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DBLatestVersion, DBLatestVersion_);
      DARABONBA_PTR_FROM_JSON(DBMinorVersion, DBMinorVersion_);
      DARABONBA_PTR_FROM_JSON(DBRevisionVersion, DBRevisionVersion_);
      DARABONBA_PTR_FROM_JSON(DBRevisionVersionList, DBRevisionVersionList_);
      DARABONBA_PTR_FROM_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_FROM_JSON(DBVersionStatus, DBVersionStatus_);
      DARABONBA_PTR_FROM_JSON(IsLatestVersion, isLatestVersion_);
      DARABONBA_PTR_FROM_JSON(IsProxyLatestVersion, isProxyLatestVersion_);
      DARABONBA_PTR_FROM_JSON(ProxyLatestVersion, proxyLatestVersion_);
      DARABONBA_PTR_FROM_JSON(ProxyRevisionVersion, proxyRevisionVersion_);
      DARABONBA_PTR_FROM_JSON(ProxyRevisionVersionList, proxyRevisionVersionList_);
      DARABONBA_PTR_FROM_JSON(ProxyVersionStatus, proxyVersionStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBClusterVersionResponseBody() = default ;
    DescribeDBClusterVersionResponseBody(const DescribeDBClusterVersionResponseBody &) = default ;
    DescribeDBClusterVersionResponseBody(DescribeDBClusterVersionResponseBody &&) = default ;
    DescribeDBClusterVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterVersionResponseBody() = default ;
    DescribeDBClusterVersionResponseBody& operator=(const DescribeDBClusterVersionResponseBody &) = default ;
    DescribeDBClusterVersionResponseBody& operator=(DescribeDBClusterVersionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ProxyRevisionVersionList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProxyRevisionVersionList& obj) { 
        DARABONBA_PTR_TO_JSON(ReleaseNote, releaseNote_);
        DARABONBA_PTR_TO_JSON(ReleaseType, releaseType_);
        DARABONBA_PTR_TO_JSON(RevisionVersionCode, revisionVersionCode_);
        DARABONBA_PTR_TO_JSON(RevisionVersionName, revisionVersionName_);
      };
      friend void from_json(const Darabonba::Json& j, ProxyRevisionVersionList& obj) { 
        DARABONBA_PTR_FROM_JSON(ReleaseNote, releaseNote_);
        DARABONBA_PTR_FROM_JSON(ReleaseType, releaseType_);
        DARABONBA_PTR_FROM_JSON(RevisionVersionCode, revisionVersionCode_);
        DARABONBA_PTR_FROM_JSON(RevisionVersionName, revisionVersionName_);
      };
      ProxyRevisionVersionList() = default ;
      ProxyRevisionVersionList(const ProxyRevisionVersionList &) = default ;
      ProxyRevisionVersionList(ProxyRevisionVersionList &&) = default ;
      ProxyRevisionVersionList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProxyRevisionVersionList() = default ;
      ProxyRevisionVersionList& operator=(const ProxyRevisionVersionList &) = default ;
      ProxyRevisionVersionList& operator=(ProxyRevisionVersionList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->releaseNote_ == nullptr
        && this->releaseType_ == nullptr && this->revisionVersionCode_ == nullptr && this->revisionVersionName_ == nullptr; };
      // releaseNote Field Functions 
      bool hasReleaseNote() const { return this->releaseNote_ != nullptr;};
      void deleteReleaseNote() { this->releaseNote_ = nullptr;};
      inline string getReleaseNote() const { DARABONBA_PTR_GET_DEFAULT(releaseNote_, "") };
      inline ProxyRevisionVersionList& setReleaseNote(string releaseNote) { DARABONBA_PTR_SET_VALUE(releaseNote_, releaseNote) };


      // releaseType Field Functions 
      bool hasReleaseType() const { return this->releaseType_ != nullptr;};
      void deleteReleaseType() { this->releaseType_ = nullptr;};
      inline string getReleaseType() const { DARABONBA_PTR_GET_DEFAULT(releaseType_, "") };
      inline ProxyRevisionVersionList& setReleaseType(string releaseType) { DARABONBA_PTR_SET_VALUE(releaseType_, releaseType) };


      // revisionVersionCode Field Functions 
      bool hasRevisionVersionCode() const { return this->revisionVersionCode_ != nullptr;};
      void deleteRevisionVersionCode() { this->revisionVersionCode_ = nullptr;};
      inline string getRevisionVersionCode() const { DARABONBA_PTR_GET_DEFAULT(revisionVersionCode_, "") };
      inline ProxyRevisionVersionList& setRevisionVersionCode(string revisionVersionCode) { DARABONBA_PTR_SET_VALUE(revisionVersionCode_, revisionVersionCode) };


      // revisionVersionName Field Functions 
      bool hasRevisionVersionName() const { return this->revisionVersionName_ != nullptr;};
      void deleteRevisionVersionName() { this->revisionVersionName_ = nullptr;};
      inline string getRevisionVersionName() const { DARABONBA_PTR_GET_DEFAULT(revisionVersionName_, "") };
      inline ProxyRevisionVersionList& setRevisionVersionName(string revisionVersionName) { DARABONBA_PTR_SET_VALUE(revisionVersionName_, revisionVersionName) };


    protected:
      // The release notes for the PolarProxy revision version.
      shared_ptr<string> releaseNote_ {};
      // The release type. Valid values:
      // 
      // *   **LTS**: a long-term version
      // *   **BETA**: a preview version
      shared_ptr<string> releaseType_ {};
      // The PolarProxy revision version code. You can use this code to specify the PolarProxy revision version.
      shared_ptr<string> revisionVersionCode_ {};
      // The PolarProxy revision version number.
      shared_ptr<string> revisionVersionName_ {};
    };

    class DBRevisionVersionList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DBRevisionVersionList& obj) { 
        DARABONBA_PTR_TO_JSON(ReleaseNote, releaseNote_);
        DARABONBA_PTR_TO_JSON(ReleaseType, releaseType_);
        DARABONBA_PTR_TO_JSON(RevisionVersionCode, revisionVersionCode_);
        DARABONBA_PTR_TO_JSON(RevisionVersionName, revisionVersionName_);
      };
      friend void from_json(const Darabonba::Json& j, DBRevisionVersionList& obj) { 
        DARABONBA_PTR_FROM_JSON(ReleaseNote, releaseNote_);
        DARABONBA_PTR_FROM_JSON(ReleaseType, releaseType_);
        DARABONBA_PTR_FROM_JSON(RevisionVersionCode, revisionVersionCode_);
        DARABONBA_PTR_FROM_JSON(RevisionVersionName, revisionVersionName_);
      };
      DBRevisionVersionList() = default ;
      DBRevisionVersionList(const DBRevisionVersionList &) = default ;
      DBRevisionVersionList(DBRevisionVersionList &&) = default ;
      DBRevisionVersionList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DBRevisionVersionList() = default ;
      DBRevisionVersionList& operator=(const DBRevisionVersionList &) = default ;
      DBRevisionVersionList& operator=(DBRevisionVersionList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->releaseNote_ == nullptr
        && this->releaseType_ == nullptr && this->revisionVersionCode_ == nullptr && this->revisionVersionName_ == nullptr; };
      // releaseNote Field Functions 
      bool hasReleaseNote() const { return this->releaseNote_ != nullptr;};
      void deleteReleaseNote() { this->releaseNote_ = nullptr;};
      inline string getReleaseNote() const { DARABONBA_PTR_GET_DEFAULT(releaseNote_, "") };
      inline DBRevisionVersionList& setReleaseNote(string releaseNote) { DARABONBA_PTR_SET_VALUE(releaseNote_, releaseNote) };


      // releaseType Field Functions 
      bool hasReleaseType() const { return this->releaseType_ != nullptr;};
      void deleteReleaseType() { this->releaseType_ = nullptr;};
      inline string getReleaseType() const { DARABONBA_PTR_GET_DEFAULT(releaseType_, "") };
      inline DBRevisionVersionList& setReleaseType(string releaseType) { DARABONBA_PTR_SET_VALUE(releaseType_, releaseType) };


      // revisionVersionCode Field Functions 
      bool hasRevisionVersionCode() const { return this->revisionVersionCode_ != nullptr;};
      void deleteRevisionVersionCode() { this->revisionVersionCode_ = nullptr;};
      inline string getRevisionVersionCode() const { DARABONBA_PTR_GET_DEFAULT(revisionVersionCode_, "") };
      inline DBRevisionVersionList& setRevisionVersionCode(string revisionVersionCode) { DARABONBA_PTR_SET_VALUE(revisionVersionCode_, revisionVersionCode) };


      // revisionVersionName Field Functions 
      bool hasRevisionVersionName() const { return this->revisionVersionName_ != nullptr;};
      void deleteRevisionVersionName() { this->revisionVersionName_ = nullptr;};
      inline string getRevisionVersionName() const { DARABONBA_PTR_GET_DEFAULT(revisionVersionName_, "") };
      inline DBRevisionVersionList& setRevisionVersionName(string revisionVersionName) { DARABONBA_PTR_SET_VALUE(revisionVersionName_, revisionVersionName) };


    protected:
      // The release notes for the database engine revision version.
      shared_ptr<string> releaseNote_ {};
      // The release status of the database engine revision version. Valid values:
      // 
      // *   **Stable**: The database engine revision version is stable.
      // *   **Old**: The database engine revision version is outdated. We recommend that you do not update the database engine to this revision version.
      // *   **HighRisk**: The database engine revision version has critical defects. We recommend that you do not update the database engine to this revision version.
      // *   **Beta**: The database engine revision version is a Beta version.
      shared_ptr<string> releaseType_ {};
      // The code of the database engine revision version. You can use the code to specify the database engine revision version.
      shared_ptr<string> revisionVersionCode_ {};
      // The database engine revision version number.
      shared_ptr<string> revisionVersionName_ {};
    };

    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->DBLatestVersion_ == nullptr && this->DBMinorVersion_ == nullptr && this->DBRevisionVersion_ == nullptr && this->DBRevisionVersionList_ == nullptr && this->DBVersion_ == nullptr
        && this->DBVersionStatus_ == nullptr && this->isLatestVersion_ == nullptr && this->isProxyLatestVersion_ == nullptr && this->proxyLatestVersion_ == nullptr && this->proxyRevisionVersion_ == nullptr
        && this->proxyRevisionVersionList_ == nullptr && this->proxyVersionStatus_ == nullptr && this->requestId_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeDBClusterVersionResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBLatestVersion Field Functions 
    bool hasDBLatestVersion() const { return this->DBLatestVersion_ != nullptr;};
    void deleteDBLatestVersion() { this->DBLatestVersion_ = nullptr;};
    inline string getDBLatestVersion() const { DARABONBA_PTR_GET_DEFAULT(DBLatestVersion_, "") };
    inline DescribeDBClusterVersionResponseBody& setDBLatestVersion(string DBLatestVersion) { DARABONBA_PTR_SET_VALUE(DBLatestVersion_, DBLatestVersion) };


    // DBMinorVersion Field Functions 
    bool hasDBMinorVersion() const { return this->DBMinorVersion_ != nullptr;};
    void deleteDBMinorVersion() { this->DBMinorVersion_ = nullptr;};
    inline string getDBMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(DBMinorVersion_, "") };
    inline DescribeDBClusterVersionResponseBody& setDBMinorVersion(string DBMinorVersion) { DARABONBA_PTR_SET_VALUE(DBMinorVersion_, DBMinorVersion) };


    // DBRevisionVersion Field Functions 
    bool hasDBRevisionVersion() const { return this->DBRevisionVersion_ != nullptr;};
    void deleteDBRevisionVersion() { this->DBRevisionVersion_ = nullptr;};
    inline string getDBRevisionVersion() const { DARABONBA_PTR_GET_DEFAULT(DBRevisionVersion_, "") };
    inline DescribeDBClusterVersionResponseBody& setDBRevisionVersion(string DBRevisionVersion) { DARABONBA_PTR_SET_VALUE(DBRevisionVersion_, DBRevisionVersion) };


    // DBRevisionVersionList Field Functions 
    bool hasDBRevisionVersionList() const { return this->DBRevisionVersionList_ != nullptr;};
    void deleteDBRevisionVersionList() { this->DBRevisionVersionList_ = nullptr;};
    inline const vector<DescribeDBClusterVersionResponseBody::DBRevisionVersionList> & getDBRevisionVersionList() const { DARABONBA_PTR_GET_CONST(DBRevisionVersionList_, vector<DescribeDBClusterVersionResponseBody::DBRevisionVersionList>) };
    inline vector<DescribeDBClusterVersionResponseBody::DBRevisionVersionList> getDBRevisionVersionList() { DARABONBA_PTR_GET(DBRevisionVersionList_, vector<DescribeDBClusterVersionResponseBody::DBRevisionVersionList>) };
    inline DescribeDBClusterVersionResponseBody& setDBRevisionVersionList(const vector<DescribeDBClusterVersionResponseBody::DBRevisionVersionList> & dBRevisionVersionList) { DARABONBA_PTR_SET_VALUE(DBRevisionVersionList_, dBRevisionVersionList) };
    inline DescribeDBClusterVersionResponseBody& setDBRevisionVersionList(vector<DescribeDBClusterVersionResponseBody::DBRevisionVersionList> && dBRevisionVersionList) { DARABONBA_PTR_SET_RVALUE(DBRevisionVersionList_, dBRevisionVersionList) };


    // DBVersion Field Functions 
    bool hasDBVersion() const { return this->DBVersion_ != nullptr;};
    void deleteDBVersion() { this->DBVersion_ = nullptr;};
    inline string getDBVersion() const { DARABONBA_PTR_GET_DEFAULT(DBVersion_, "") };
    inline DescribeDBClusterVersionResponseBody& setDBVersion(string DBVersion) { DARABONBA_PTR_SET_VALUE(DBVersion_, DBVersion) };


    // DBVersionStatus Field Functions 
    bool hasDBVersionStatus() const { return this->DBVersionStatus_ != nullptr;};
    void deleteDBVersionStatus() { this->DBVersionStatus_ = nullptr;};
    inline string getDBVersionStatus() const { DARABONBA_PTR_GET_DEFAULT(DBVersionStatus_, "") };
    inline DescribeDBClusterVersionResponseBody& setDBVersionStatus(string DBVersionStatus) { DARABONBA_PTR_SET_VALUE(DBVersionStatus_, DBVersionStatus) };


    // isLatestVersion Field Functions 
    bool hasIsLatestVersion() const { return this->isLatestVersion_ != nullptr;};
    void deleteIsLatestVersion() { this->isLatestVersion_ = nullptr;};
    inline string getIsLatestVersion() const { DARABONBA_PTR_GET_DEFAULT(isLatestVersion_, "") };
    inline DescribeDBClusterVersionResponseBody& setIsLatestVersion(string isLatestVersion) { DARABONBA_PTR_SET_VALUE(isLatestVersion_, isLatestVersion) };


    // isProxyLatestVersion Field Functions 
    bool hasIsProxyLatestVersion() const { return this->isProxyLatestVersion_ != nullptr;};
    void deleteIsProxyLatestVersion() { this->isProxyLatestVersion_ = nullptr;};
    inline string getIsProxyLatestVersion() const { DARABONBA_PTR_GET_DEFAULT(isProxyLatestVersion_, "") };
    inline DescribeDBClusterVersionResponseBody& setIsProxyLatestVersion(string isProxyLatestVersion) { DARABONBA_PTR_SET_VALUE(isProxyLatestVersion_, isProxyLatestVersion) };


    // proxyLatestVersion Field Functions 
    bool hasProxyLatestVersion() const { return this->proxyLatestVersion_ != nullptr;};
    void deleteProxyLatestVersion() { this->proxyLatestVersion_ = nullptr;};
    inline string getProxyLatestVersion() const { DARABONBA_PTR_GET_DEFAULT(proxyLatestVersion_, "") };
    inline DescribeDBClusterVersionResponseBody& setProxyLatestVersion(string proxyLatestVersion) { DARABONBA_PTR_SET_VALUE(proxyLatestVersion_, proxyLatestVersion) };


    // proxyRevisionVersion Field Functions 
    bool hasProxyRevisionVersion() const { return this->proxyRevisionVersion_ != nullptr;};
    void deleteProxyRevisionVersion() { this->proxyRevisionVersion_ = nullptr;};
    inline string getProxyRevisionVersion() const { DARABONBA_PTR_GET_DEFAULT(proxyRevisionVersion_, "") };
    inline DescribeDBClusterVersionResponseBody& setProxyRevisionVersion(string proxyRevisionVersion) { DARABONBA_PTR_SET_VALUE(proxyRevisionVersion_, proxyRevisionVersion) };


    // proxyRevisionVersionList Field Functions 
    bool hasProxyRevisionVersionList() const { return this->proxyRevisionVersionList_ != nullptr;};
    void deleteProxyRevisionVersionList() { this->proxyRevisionVersionList_ = nullptr;};
    inline const vector<DescribeDBClusterVersionResponseBody::ProxyRevisionVersionList> & getProxyRevisionVersionList() const { DARABONBA_PTR_GET_CONST(proxyRevisionVersionList_, vector<DescribeDBClusterVersionResponseBody::ProxyRevisionVersionList>) };
    inline vector<DescribeDBClusterVersionResponseBody::ProxyRevisionVersionList> getProxyRevisionVersionList() { DARABONBA_PTR_GET(proxyRevisionVersionList_, vector<DescribeDBClusterVersionResponseBody::ProxyRevisionVersionList>) };
    inline DescribeDBClusterVersionResponseBody& setProxyRevisionVersionList(const vector<DescribeDBClusterVersionResponseBody::ProxyRevisionVersionList> & proxyRevisionVersionList) { DARABONBA_PTR_SET_VALUE(proxyRevisionVersionList_, proxyRevisionVersionList) };
    inline DescribeDBClusterVersionResponseBody& setProxyRevisionVersionList(vector<DescribeDBClusterVersionResponseBody::ProxyRevisionVersionList> && proxyRevisionVersionList) { DARABONBA_PTR_SET_RVALUE(proxyRevisionVersionList_, proxyRevisionVersionList) };


    // proxyVersionStatus Field Functions 
    bool hasProxyVersionStatus() const { return this->proxyVersionStatus_ != nullptr;};
    void deleteProxyVersionStatus() { this->proxyVersionStatus_ = nullptr;};
    inline string getProxyVersionStatus() const { DARABONBA_PTR_GET_DEFAULT(proxyVersionStatus_, "") };
    inline DescribeDBClusterVersionResponseBody& setProxyVersionStatus(string proxyVersionStatus) { DARABONBA_PTR_SET_VALUE(proxyVersionStatus_, proxyVersionStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBClusterVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of cluster.
    shared_ptr<string> DBClusterId_ {};
    // The latest version of the database engine.
    shared_ptr<string> DBLatestVersion_ {};
    // The minor version of the database engine.
    // 
    // - If DBVersion is 8.0, the valid values of this parameter are:
    //   - 8.0.2
    //   - 8.0.1
    // - If DBVersion is 5.7, set the value of this parameter to 5.7.28.
    // - If DBVersion is 5.6, the value of this parameter is 5.6.16.
    shared_ptr<string> DBMinorVersion_ {};
    // The revision version of the database engine.
    // >For a cluster of the PolarDB for MySQL 5.6, the DBRevisionVersion parameter returns the revision version information only if the Revision Version is released later than August 31, 2020. Otherwise, this parameter returns an empty value.
    shared_ptr<string> DBRevisionVersion_ {};
    // The versions to which the cluster can be upgraded.
    shared_ptr<vector<DescribeDBClusterVersionResponseBody::DBRevisionVersionList>> DBRevisionVersionList_ {};
    // The version of the database engine. Valid values:
    // 
    // - 5.6
    // - 5.7
    // - 8.0
    shared_ptr<string> DBVersion_ {};
    // The status of the minor version. Valid values:
    // 
    // *   **Stable**: The minor version is stable.
    // *   **Old**: The minor version is outdated. We recommend that you upgrade the cluster to the latest version.
    // *   **HighRisk**: The minor version has critical defects. We recommend that you immediately update the cluster to the latest minor version.
    // 
    // >  For more information about how to update the minor version, see [Minor version update](https://help.aliyun.com/document_detail/158572.html).
    shared_ptr<string> DBVersionStatus_ {};
    // Indicates whether the kernel is of the latest version. Valid values:
    // 
    // - true
    // - false
    shared_ptr<string> isLatestVersion_ {};
    // Indicates whether PolarProxy uses the latest version. Valid values:
    // 
    // - true
    // - false
    shared_ptr<string> isProxyLatestVersion_ {};
    // The latest version of PolarProxy.
    shared_ptr<string> proxyLatestVersion_ {};
    // The revision version of the database engine.
    shared_ptr<string> proxyRevisionVersion_ {};
    // The release status of the PolarProxy version. Valid values:
    // 
    // *   **Stable**: The PolarProxy revision version is stable.
    // *   **Old**: The PolarProxy revision version is outdated. We recommend that you do not update the PolarProxy to this revision version.
    // *   **HighRisk**: The PolarProxy revision version has critical defects. We recommend that you do not update the PolarProxy to this revision version.
    // *   **Beta**: The PolarProxy revision version is a Beta version.
    shared_ptr<vector<DescribeDBClusterVersionResponseBody::ProxyRevisionVersionList>> proxyRevisionVersionList_ {};
    // The status of PolarProxy. Valid values:
    // 
    // - Stable: The minor version is stable.
    // - Old: The minor version is outdated. We recommend that you upgrade the cluster to the latest version.
    // - HighRisk: The minor version has critical defects. We recommend that you immediately upgrade the cluster to the latest version.
    // - Beta: The minor version is a beta version.
    shared_ptr<string> proxyVersionStatus_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
