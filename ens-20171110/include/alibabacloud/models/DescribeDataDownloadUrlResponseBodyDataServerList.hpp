// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATADOWNLOADURLRESPONSEBODYDATASERVERLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATADOWNLOADURLRESPONSEBODYDATASERVERLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeDataDownloadURLResponseBodyDataServerList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataDownloadURLResponseBodyDataServerList& obj) { 
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataDownloadURLResponseBodyDataServerList& obj) { 
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeDataDownloadURLResponseBodyDataServerList() = default ;
    DescribeDataDownloadURLResponseBodyDataServerList(const DescribeDataDownloadURLResponseBodyDataServerList &) = default ;
    DescribeDataDownloadURLResponseBodyDataServerList(DescribeDataDownloadURLResponseBodyDataServerList &&) = default ;
    DescribeDataDownloadURLResponseBodyDataServerList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataDownloadURLResponseBodyDataServerList() = default ;
    DescribeDataDownloadURLResponseBodyDataServerList& operator=(const DescribeDataDownloadURLResponseBodyDataServerList &) = default ;
    DescribeDataDownloadURLResponseBodyDataServerList& operator=(DescribeDataDownloadURLResponseBodyDataServerList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->host_ == nullptr
        && return this->regionId_ == nullptr; };
    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline DescribeDataDownloadURLResponseBodyDataServerList& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDataDownloadURLResponseBodyDataServerList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The host address of the file server.
    std::shared_ptr<string> host_ = nullptr;
    // The ID of the Edge Node Service (ENS) node.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
