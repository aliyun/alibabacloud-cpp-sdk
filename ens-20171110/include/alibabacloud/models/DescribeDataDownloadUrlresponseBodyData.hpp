// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATADOWNLOADURLRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATADOWNLOADURLRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDataDownloadURLResponseBodyDataServerList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeDataDownloadURLResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataDownloadURLResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(ServerList, serverList_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataDownloadURLResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(ServerList, serverList_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    DescribeDataDownloadURLResponseBodyData() = default ;
    DescribeDataDownloadURLResponseBodyData(const DescribeDataDownloadURLResponseBodyData &) = default ;
    DescribeDataDownloadURLResponseBodyData(DescribeDataDownloadURLResponseBodyData &&) = default ;
    DescribeDataDownloadURLResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataDownloadURLResponseBodyData() = default ;
    DescribeDataDownloadURLResponseBodyData& operator=(const DescribeDataDownloadURLResponseBodyData &) = default ;
    DescribeDataDownloadURLResponseBodyData& operator=(DescribeDataDownloadURLResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->expireTime_ != nullptr
        && this->serverList_ != nullptr && this->url_ != nullptr; };
    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeDataDownloadURLResponseBodyData& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // serverList Field Functions 
    bool hasServerList() const { return this->serverList_ != nullptr;};
    void deleteServerList() { this->serverList_ = nullptr;};
    inline const vector<Models::DescribeDataDownloadURLResponseBodyDataServerList> & serverList() const { DARABONBA_PTR_GET_CONST(serverList_, vector<Models::DescribeDataDownloadURLResponseBodyDataServerList>) };
    inline vector<Models::DescribeDataDownloadURLResponseBodyDataServerList> serverList() { DARABONBA_PTR_GET(serverList_, vector<Models::DescribeDataDownloadURLResponseBodyDataServerList>) };
    inline DescribeDataDownloadURLResponseBodyData& setServerList(const vector<Models::DescribeDataDownloadURLResponseBodyDataServerList> & serverList) { DARABONBA_PTR_SET_VALUE(serverList_, serverList) };
    inline DescribeDataDownloadURLResponseBodyData& setServerList(vector<Models::DescribeDataDownloadURLResponseBodyDataServerList> && serverList) { DARABONBA_PTR_SET_RVALUE(serverList_, serverList) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline DescribeDataDownloadURLResponseBodyData& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // The time when the data file expires. The time is displayed in UTC.
    std::shared_ptr<string> expireTime_ = nullptr;
    // The file servers.
    std::shared_ptr<vector<Models::DescribeDataDownloadURLResponseBodyDataServerList>> serverList_ = nullptr;
    // The download URL of the data file.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
