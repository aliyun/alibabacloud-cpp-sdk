// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODYDATACLUSTERINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODYDATACLUSTERINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListInstancesResponseBodyDataClusterInfoMilvusResourceInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Milvus20231012
{
namespace Models
{
  class ListInstancesResponseBodyDataClusterInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesResponseBodyDataClusterInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AttuPort, attuPort_);
      DARABONBA_PTR_TO_JSON(InternetUrl, internetUrl_);
      DARABONBA_PTR_TO_JSON(IntranetUrl, intranetUrl_);
      DARABONBA_PTR_TO_JSON(MilvusResourceInfoList, milvusResourceInfoList_);
      DARABONBA_PTR_TO_JSON(ProxyPort, proxyPort_);
      DARABONBA_PTR_TO_JSON(TotalCuNum, totalCuNum_);
      DARABONBA_PTR_TO_JSON(TotalDiskSize, totalDiskSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesResponseBodyDataClusterInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AttuPort, attuPort_);
      DARABONBA_PTR_FROM_JSON(InternetUrl, internetUrl_);
      DARABONBA_PTR_FROM_JSON(IntranetUrl, intranetUrl_);
      DARABONBA_PTR_FROM_JSON(MilvusResourceInfoList, milvusResourceInfoList_);
      DARABONBA_PTR_FROM_JSON(ProxyPort, proxyPort_);
      DARABONBA_PTR_FROM_JSON(TotalCuNum, totalCuNum_);
      DARABONBA_PTR_FROM_JSON(TotalDiskSize, totalDiskSize_);
    };
    ListInstancesResponseBodyDataClusterInfo() = default ;
    ListInstancesResponseBodyDataClusterInfo(const ListInstancesResponseBodyDataClusterInfo &) = default ;
    ListInstancesResponseBodyDataClusterInfo(ListInstancesResponseBodyDataClusterInfo &&) = default ;
    ListInstancesResponseBodyDataClusterInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesResponseBodyDataClusterInfo() = default ;
    ListInstancesResponseBodyDataClusterInfo& operator=(const ListInstancesResponseBodyDataClusterInfo &) = default ;
    ListInstancesResponseBodyDataClusterInfo& operator=(ListInstancesResponseBodyDataClusterInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attuPort_ != nullptr
        && this->internetUrl_ != nullptr && this->intranetUrl_ != nullptr && this->milvusResourceInfoList_ != nullptr && this->proxyPort_ != nullptr && this->totalCuNum_ != nullptr
        && this->totalDiskSize_ != nullptr; };
    // attuPort Field Functions 
    bool hasAttuPort() const { return this->attuPort_ != nullptr;};
    void deleteAttuPort() { this->attuPort_ = nullptr;};
    inline int32_t attuPort() const { DARABONBA_PTR_GET_DEFAULT(attuPort_, 0) };
    inline ListInstancesResponseBodyDataClusterInfo& setAttuPort(int32_t attuPort) { DARABONBA_PTR_SET_VALUE(attuPort_, attuPort) };


    // internetUrl Field Functions 
    bool hasInternetUrl() const { return this->internetUrl_ != nullptr;};
    void deleteInternetUrl() { this->internetUrl_ = nullptr;};
    inline string internetUrl() const { DARABONBA_PTR_GET_DEFAULT(internetUrl_, "") };
    inline ListInstancesResponseBodyDataClusterInfo& setInternetUrl(string internetUrl) { DARABONBA_PTR_SET_VALUE(internetUrl_, internetUrl) };


    // intranetUrl Field Functions 
    bool hasIntranetUrl() const { return this->intranetUrl_ != nullptr;};
    void deleteIntranetUrl() { this->intranetUrl_ = nullptr;};
    inline string intranetUrl() const { DARABONBA_PTR_GET_DEFAULT(intranetUrl_, "") };
    inline ListInstancesResponseBodyDataClusterInfo& setIntranetUrl(string intranetUrl) { DARABONBA_PTR_SET_VALUE(intranetUrl_, intranetUrl) };


    // milvusResourceInfoList Field Functions 
    bool hasMilvusResourceInfoList() const { return this->milvusResourceInfoList_ != nullptr;};
    void deleteMilvusResourceInfoList() { this->milvusResourceInfoList_ = nullptr;};
    inline const vector<Models::ListInstancesResponseBodyDataClusterInfoMilvusResourceInfoList> & milvusResourceInfoList() const { DARABONBA_PTR_GET_CONST(milvusResourceInfoList_, vector<Models::ListInstancesResponseBodyDataClusterInfoMilvusResourceInfoList>) };
    inline vector<Models::ListInstancesResponseBodyDataClusterInfoMilvusResourceInfoList> milvusResourceInfoList() { DARABONBA_PTR_GET(milvusResourceInfoList_, vector<Models::ListInstancesResponseBodyDataClusterInfoMilvusResourceInfoList>) };
    inline ListInstancesResponseBodyDataClusterInfo& setMilvusResourceInfoList(const vector<Models::ListInstancesResponseBodyDataClusterInfoMilvusResourceInfoList> & milvusResourceInfoList) { DARABONBA_PTR_SET_VALUE(milvusResourceInfoList_, milvusResourceInfoList) };
    inline ListInstancesResponseBodyDataClusterInfo& setMilvusResourceInfoList(vector<Models::ListInstancesResponseBodyDataClusterInfoMilvusResourceInfoList> && milvusResourceInfoList) { DARABONBA_PTR_SET_RVALUE(milvusResourceInfoList_, milvusResourceInfoList) };


    // proxyPort Field Functions 
    bool hasProxyPort() const { return this->proxyPort_ != nullptr;};
    void deleteProxyPort() { this->proxyPort_ = nullptr;};
    inline int32_t proxyPort() const { DARABONBA_PTR_GET_DEFAULT(proxyPort_, 0) };
    inline ListInstancesResponseBodyDataClusterInfo& setProxyPort(int32_t proxyPort) { DARABONBA_PTR_SET_VALUE(proxyPort_, proxyPort) };


    // totalCuNum Field Functions 
    bool hasTotalCuNum() const { return this->totalCuNum_ != nullptr;};
    void deleteTotalCuNum() { this->totalCuNum_ = nullptr;};
    inline int32_t totalCuNum() const { DARABONBA_PTR_GET_DEFAULT(totalCuNum_, 0) };
    inline ListInstancesResponseBodyDataClusterInfo& setTotalCuNum(int32_t totalCuNum) { DARABONBA_PTR_SET_VALUE(totalCuNum_, totalCuNum) };


    // totalDiskSize Field Functions 
    bool hasTotalDiskSize() const { return this->totalDiskSize_ != nullptr;};
    void deleteTotalDiskSize() { this->totalDiskSize_ = nullptr;};
    inline int32_t totalDiskSize() const { DARABONBA_PTR_GET_DEFAULT(totalDiskSize_, 0) };
    inline ListInstancesResponseBodyDataClusterInfo& setTotalDiskSize(int32_t totalDiskSize) { DARABONBA_PTR_SET_VALUE(totalDiskSize_, totalDiskSize) };


  protected:
    // The port of the Attu component.
    std::shared_ptr<int32_t> attuPort_ = nullptr;
    // The public IP address.
    std::shared_ptr<string> internetUrl_ = nullptr;
    // The internal endpoint.
    std::shared_ptr<string> intranetUrl_ = nullptr;
    // The resource details.
    std::shared_ptr<vector<Models::ListInstancesResponseBodyDataClusterInfoMilvusResourceInfoList>> milvusResourceInfoList_ = nullptr;
    // The proxy port.
    std::shared_ptr<int32_t> proxyPort_ = nullptr;
    // The number of CUs.
    std::shared_ptr<int32_t> totalCuNum_ = nullptr;
    // The total capacity of the disk.
    std::shared_ptr<int32_t> totalDiskSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Milvus20231012
#endif
