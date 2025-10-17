// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERVERSIONZONALRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERVERSIONZONALRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBClusterVersionZonalResponseBodyDBRevisionVersionList.hpp>
#include <alibabacloud/models/DescribeDBClusterVersionZonalResponseBodyProxyRevisionVersionList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBClusterVersionZonalResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterVersionZonalResponseBody& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterVersionZonalResponseBody& obj) { 
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
    DescribeDBClusterVersionZonalResponseBody() = default ;
    DescribeDBClusterVersionZonalResponseBody(const DescribeDBClusterVersionZonalResponseBody &) = default ;
    DescribeDBClusterVersionZonalResponseBody(DescribeDBClusterVersionZonalResponseBody &&) = default ;
    DescribeDBClusterVersionZonalResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterVersionZonalResponseBody() = default ;
    DescribeDBClusterVersionZonalResponseBody& operator=(const DescribeDBClusterVersionZonalResponseBody &) = default ;
    DescribeDBClusterVersionZonalResponseBody& operator=(DescribeDBClusterVersionZonalResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && return this->DBLatestVersion_ == nullptr && return this->DBMinorVersion_ == nullptr && return this->DBRevisionVersion_ == nullptr && return this->DBRevisionVersionList_ == nullptr && return this->DBVersion_ == nullptr
        && return this->DBVersionStatus_ == nullptr && return this->isLatestVersion_ == nullptr && return this->isProxyLatestVersion_ == nullptr && return this->proxyLatestVersion_ == nullptr && return this->proxyRevisionVersion_ == nullptr
        && return this->proxyRevisionVersionList_ == nullptr && return this->proxyVersionStatus_ == nullptr && return this->requestId_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeDBClusterVersionZonalResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBLatestVersion Field Functions 
    bool hasDBLatestVersion() const { return this->DBLatestVersion_ != nullptr;};
    void deleteDBLatestVersion() { this->DBLatestVersion_ = nullptr;};
    inline string DBLatestVersion() const { DARABONBA_PTR_GET_DEFAULT(DBLatestVersion_, "") };
    inline DescribeDBClusterVersionZonalResponseBody& setDBLatestVersion(string DBLatestVersion) { DARABONBA_PTR_SET_VALUE(DBLatestVersion_, DBLatestVersion) };


    // DBMinorVersion Field Functions 
    bool hasDBMinorVersion() const { return this->DBMinorVersion_ != nullptr;};
    void deleteDBMinorVersion() { this->DBMinorVersion_ = nullptr;};
    inline string DBMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(DBMinorVersion_, "") };
    inline DescribeDBClusterVersionZonalResponseBody& setDBMinorVersion(string DBMinorVersion) { DARABONBA_PTR_SET_VALUE(DBMinorVersion_, DBMinorVersion) };


    // DBRevisionVersion Field Functions 
    bool hasDBRevisionVersion() const { return this->DBRevisionVersion_ != nullptr;};
    void deleteDBRevisionVersion() { this->DBRevisionVersion_ = nullptr;};
    inline string DBRevisionVersion() const { DARABONBA_PTR_GET_DEFAULT(DBRevisionVersion_, "") };
    inline DescribeDBClusterVersionZonalResponseBody& setDBRevisionVersion(string DBRevisionVersion) { DARABONBA_PTR_SET_VALUE(DBRevisionVersion_, DBRevisionVersion) };


    // DBRevisionVersionList Field Functions 
    bool hasDBRevisionVersionList() const { return this->DBRevisionVersionList_ != nullptr;};
    void deleteDBRevisionVersionList() { this->DBRevisionVersionList_ = nullptr;};
    inline const vector<DescribeDBClusterVersionZonalResponseBodyDBRevisionVersionList> & DBRevisionVersionList() const { DARABONBA_PTR_GET_CONST(DBRevisionVersionList_, vector<DescribeDBClusterVersionZonalResponseBodyDBRevisionVersionList>) };
    inline vector<DescribeDBClusterVersionZonalResponseBodyDBRevisionVersionList> DBRevisionVersionList() { DARABONBA_PTR_GET(DBRevisionVersionList_, vector<DescribeDBClusterVersionZonalResponseBodyDBRevisionVersionList>) };
    inline DescribeDBClusterVersionZonalResponseBody& setDBRevisionVersionList(const vector<DescribeDBClusterVersionZonalResponseBodyDBRevisionVersionList> & DBRevisionVersionList) { DARABONBA_PTR_SET_VALUE(DBRevisionVersionList_, DBRevisionVersionList) };
    inline DescribeDBClusterVersionZonalResponseBody& setDBRevisionVersionList(vector<DescribeDBClusterVersionZonalResponseBodyDBRevisionVersionList> && DBRevisionVersionList) { DARABONBA_PTR_SET_RVALUE(DBRevisionVersionList_, DBRevisionVersionList) };


    // DBVersion Field Functions 
    bool hasDBVersion() const { return this->DBVersion_ != nullptr;};
    void deleteDBVersion() { this->DBVersion_ = nullptr;};
    inline string DBVersion() const { DARABONBA_PTR_GET_DEFAULT(DBVersion_, "") };
    inline DescribeDBClusterVersionZonalResponseBody& setDBVersion(string DBVersion) { DARABONBA_PTR_SET_VALUE(DBVersion_, DBVersion) };


    // DBVersionStatus Field Functions 
    bool hasDBVersionStatus() const { return this->DBVersionStatus_ != nullptr;};
    void deleteDBVersionStatus() { this->DBVersionStatus_ = nullptr;};
    inline string DBVersionStatus() const { DARABONBA_PTR_GET_DEFAULT(DBVersionStatus_, "") };
    inline DescribeDBClusterVersionZonalResponseBody& setDBVersionStatus(string DBVersionStatus) { DARABONBA_PTR_SET_VALUE(DBVersionStatus_, DBVersionStatus) };


    // isLatestVersion Field Functions 
    bool hasIsLatestVersion() const { return this->isLatestVersion_ != nullptr;};
    void deleteIsLatestVersion() { this->isLatestVersion_ = nullptr;};
    inline string isLatestVersion() const { DARABONBA_PTR_GET_DEFAULT(isLatestVersion_, "") };
    inline DescribeDBClusterVersionZonalResponseBody& setIsLatestVersion(string isLatestVersion) { DARABONBA_PTR_SET_VALUE(isLatestVersion_, isLatestVersion) };


    // isProxyLatestVersion Field Functions 
    bool hasIsProxyLatestVersion() const { return this->isProxyLatestVersion_ != nullptr;};
    void deleteIsProxyLatestVersion() { this->isProxyLatestVersion_ = nullptr;};
    inline string isProxyLatestVersion() const { DARABONBA_PTR_GET_DEFAULT(isProxyLatestVersion_, "") };
    inline DescribeDBClusterVersionZonalResponseBody& setIsProxyLatestVersion(string isProxyLatestVersion) { DARABONBA_PTR_SET_VALUE(isProxyLatestVersion_, isProxyLatestVersion) };


    // proxyLatestVersion Field Functions 
    bool hasProxyLatestVersion() const { return this->proxyLatestVersion_ != nullptr;};
    void deleteProxyLatestVersion() { this->proxyLatestVersion_ = nullptr;};
    inline string proxyLatestVersion() const { DARABONBA_PTR_GET_DEFAULT(proxyLatestVersion_, "") };
    inline DescribeDBClusterVersionZonalResponseBody& setProxyLatestVersion(string proxyLatestVersion) { DARABONBA_PTR_SET_VALUE(proxyLatestVersion_, proxyLatestVersion) };


    // proxyRevisionVersion Field Functions 
    bool hasProxyRevisionVersion() const { return this->proxyRevisionVersion_ != nullptr;};
    void deleteProxyRevisionVersion() { this->proxyRevisionVersion_ = nullptr;};
    inline string proxyRevisionVersion() const { DARABONBA_PTR_GET_DEFAULT(proxyRevisionVersion_, "") };
    inline DescribeDBClusterVersionZonalResponseBody& setProxyRevisionVersion(string proxyRevisionVersion) { DARABONBA_PTR_SET_VALUE(proxyRevisionVersion_, proxyRevisionVersion) };


    // proxyRevisionVersionList Field Functions 
    bool hasProxyRevisionVersionList() const { return this->proxyRevisionVersionList_ != nullptr;};
    void deleteProxyRevisionVersionList() { this->proxyRevisionVersionList_ = nullptr;};
    inline const vector<DescribeDBClusterVersionZonalResponseBodyProxyRevisionVersionList> & proxyRevisionVersionList() const { DARABONBA_PTR_GET_CONST(proxyRevisionVersionList_, vector<DescribeDBClusterVersionZonalResponseBodyProxyRevisionVersionList>) };
    inline vector<DescribeDBClusterVersionZonalResponseBodyProxyRevisionVersionList> proxyRevisionVersionList() { DARABONBA_PTR_GET(proxyRevisionVersionList_, vector<DescribeDBClusterVersionZonalResponseBodyProxyRevisionVersionList>) };
    inline DescribeDBClusterVersionZonalResponseBody& setProxyRevisionVersionList(const vector<DescribeDBClusterVersionZonalResponseBodyProxyRevisionVersionList> & proxyRevisionVersionList) { DARABONBA_PTR_SET_VALUE(proxyRevisionVersionList_, proxyRevisionVersionList) };
    inline DescribeDBClusterVersionZonalResponseBody& setProxyRevisionVersionList(vector<DescribeDBClusterVersionZonalResponseBodyProxyRevisionVersionList> && proxyRevisionVersionList) { DARABONBA_PTR_SET_RVALUE(proxyRevisionVersionList_, proxyRevisionVersionList) };


    // proxyVersionStatus Field Functions 
    bool hasProxyVersionStatus() const { return this->proxyVersionStatus_ != nullptr;};
    void deleteProxyVersionStatus() { this->proxyVersionStatus_ = nullptr;};
    inline string proxyVersionStatus() const { DARABONBA_PTR_GET_DEFAULT(proxyVersionStatus_, "") };
    inline DescribeDBClusterVersionZonalResponseBody& setProxyVersionStatus(string proxyVersionStatus) { DARABONBA_PTR_SET_VALUE(proxyVersionStatus_, proxyVersionStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBClusterVersionZonalResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> DBClusterId_ = nullptr;
    std::shared_ptr<string> DBLatestVersion_ = nullptr;
    std::shared_ptr<string> DBMinorVersion_ = nullptr;
    std::shared_ptr<string> DBRevisionVersion_ = nullptr;
    std::shared_ptr<vector<DescribeDBClusterVersionZonalResponseBodyDBRevisionVersionList>> DBRevisionVersionList_ = nullptr;
    std::shared_ptr<string> DBVersion_ = nullptr;
    std::shared_ptr<string> DBVersionStatus_ = nullptr;
    std::shared_ptr<string> isLatestVersion_ = nullptr;
    std::shared_ptr<string> isProxyLatestVersion_ = nullptr;
    std::shared_ptr<string> proxyLatestVersion_ = nullptr;
    std::shared_ptr<string> proxyRevisionVersion_ = nullptr;
    std::shared_ptr<vector<DescribeDBClusterVersionZonalResponseBodyProxyRevisionVersionList>> proxyRevisionVersionList_ = nullptr;
    std::shared_ptr<string> proxyVersionStatus_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
