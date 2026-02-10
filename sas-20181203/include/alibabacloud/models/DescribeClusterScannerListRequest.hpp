// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERSCANNERLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERSCANNERLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeClusterScannerListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterScannerListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterIdList, clusterIdList_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(StatusList, statusList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterScannerListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterIdList, clusterIdList_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(StatusList, statusList_);
    };
    DescribeClusterScannerListRequest() = default ;
    DescribeClusterScannerListRequest(const DescribeClusterScannerListRequest &) = default ;
    DescribeClusterScannerListRequest(DescribeClusterScannerListRequest &&) = default ;
    DescribeClusterScannerListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterScannerListRequest() = default ;
    DescribeClusterScannerListRequest& operator=(const DescribeClusterScannerListRequest &) = default ;
    DescribeClusterScannerListRequest& operator=(DescribeClusterScannerListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterIdList_ == nullptr
        && this->lang_ == nullptr && this->statusList_ == nullptr; };
    // clusterIdList Field Functions 
    bool hasClusterIdList() const { return this->clusterIdList_ != nullptr;};
    void deleteClusterIdList() { this->clusterIdList_ = nullptr;};
    inline const vector<string> & getClusterIdList() const { DARABONBA_PTR_GET_CONST(clusterIdList_, vector<string>) };
    inline vector<string> getClusterIdList() { DARABONBA_PTR_GET(clusterIdList_, vector<string>) };
    inline DescribeClusterScannerListRequest& setClusterIdList(const vector<string> & clusterIdList) { DARABONBA_PTR_SET_VALUE(clusterIdList_, clusterIdList) };
    inline DescribeClusterScannerListRequest& setClusterIdList(vector<string> && clusterIdList) { DARABONBA_PTR_SET_RVALUE(clusterIdList_, clusterIdList) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeClusterScannerListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // statusList Field Functions 
    bool hasStatusList() const { return this->statusList_ != nullptr;};
    void deleteStatusList() { this->statusList_ = nullptr;};
    inline const vector<string> & getStatusList() const { DARABONBA_PTR_GET_CONST(statusList_, vector<string>) };
    inline vector<string> getStatusList() { DARABONBA_PTR_GET(statusList_, vector<string>) };
    inline DescribeClusterScannerListRequest& setStatusList(const vector<string> & statusList) { DARABONBA_PTR_SET_VALUE(statusList_, statusList) };
    inline DescribeClusterScannerListRequest& setStatusList(vector<string> && statusList) { DARABONBA_PTR_SET_RVALUE(statusList_, statusList) };


  protected:
    // List of cluster IDs.
    shared_ptr<vector<string>> clusterIdList_ {};
    // The language type for requests and responses.
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // List of scanner statuses. Values:
    // - **online**: Running
    // - **offline**: Offline
    // - **not_installed**: Not Installed
    shared_ptr<vector<string>> statusList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
