// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTASSETCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTASSETCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class ListAssetCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAssetCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AssetCountList, assetCountList_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ShowSize, showSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAssetCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetCountList, assetCountList_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ShowSize, showSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAssetCountResponseBody() = default ;
    ListAssetCountResponseBody(const ListAssetCountResponseBody &) = default ;
    ListAssetCountResponseBody(ListAssetCountResponseBody &&) = default ;
    ListAssetCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAssetCountResponseBody() = default ;
    ListAssetCountResponseBody& operator=(const ListAssetCountResponseBody &) = default ;
    ListAssetCountResponseBody& operator=(ListAssetCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AssetCountList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AssetCountList& obj) { 
        DARABONBA_PTR_TO_JSON(AliyunAssetCount, aliyunAssetCount_);
        DARABONBA_PTR_TO_JSON(CertificateCount, certificateCount_);
        DARABONBA_PTR_TO_JSON(CountDate, countDate_);
        DARABONBA_PTR_TO_JSON(DomainAssetCount, domainAssetCount_);
        DARABONBA_PTR_TO_JSON(MultiCloudAssetCount, multiCloudAssetCount_);
        DARABONBA_PTR_TO_JSON(Points, points_);
      };
      friend void from_json(const Darabonba::Json& j, AssetCountList& obj) { 
        DARABONBA_PTR_FROM_JSON(AliyunAssetCount, aliyunAssetCount_);
        DARABONBA_PTR_FROM_JSON(CertificateCount, certificateCount_);
        DARABONBA_PTR_FROM_JSON(CountDate, countDate_);
        DARABONBA_PTR_FROM_JSON(DomainAssetCount, domainAssetCount_);
        DARABONBA_PTR_FROM_JSON(MultiCloudAssetCount, multiCloudAssetCount_);
        DARABONBA_PTR_FROM_JSON(Points, points_);
      };
      AssetCountList() = default ;
      AssetCountList(const AssetCountList &) = default ;
      AssetCountList(AssetCountList &&) = default ;
      AssetCountList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AssetCountList() = default ;
      AssetCountList& operator=(const AssetCountList &) = default ;
      AssetCountList& operator=(AssetCountList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aliyunAssetCount_ == nullptr
        && this->certificateCount_ == nullptr && this->countDate_ == nullptr && this->domainAssetCount_ == nullptr && this->multiCloudAssetCount_ == nullptr && this->points_ == nullptr; };
      // aliyunAssetCount Field Functions 
      bool hasAliyunAssetCount() const { return this->aliyunAssetCount_ != nullptr;};
      void deleteAliyunAssetCount() { this->aliyunAssetCount_ = nullptr;};
      inline int64_t getAliyunAssetCount() const { DARABONBA_PTR_GET_DEFAULT(aliyunAssetCount_, 0L) };
      inline AssetCountList& setAliyunAssetCount(int64_t aliyunAssetCount) { DARABONBA_PTR_SET_VALUE(aliyunAssetCount_, aliyunAssetCount) };


      // certificateCount Field Functions 
      bool hasCertificateCount() const { return this->certificateCount_ != nullptr;};
      void deleteCertificateCount() { this->certificateCount_ = nullptr;};
      inline int32_t getCertificateCount() const { DARABONBA_PTR_GET_DEFAULT(certificateCount_, 0) };
      inline AssetCountList& setCertificateCount(int32_t certificateCount) { DARABONBA_PTR_SET_VALUE(certificateCount_, certificateCount) };


      // countDate Field Functions 
      bool hasCountDate() const { return this->countDate_ != nullptr;};
      void deleteCountDate() { this->countDate_ = nullptr;};
      inline int64_t getCountDate() const { DARABONBA_PTR_GET_DEFAULT(countDate_, 0L) };
      inline AssetCountList& setCountDate(int64_t countDate) { DARABONBA_PTR_SET_VALUE(countDate_, countDate) };


      // domainAssetCount Field Functions 
      bool hasDomainAssetCount() const { return this->domainAssetCount_ != nullptr;};
      void deleteDomainAssetCount() { this->domainAssetCount_ = nullptr;};
      inline int32_t getDomainAssetCount() const { DARABONBA_PTR_GET_DEFAULT(domainAssetCount_, 0) };
      inline AssetCountList& setDomainAssetCount(int32_t domainAssetCount) { DARABONBA_PTR_SET_VALUE(domainAssetCount_, domainAssetCount) };


      // multiCloudAssetCount Field Functions 
      bool hasMultiCloudAssetCount() const { return this->multiCloudAssetCount_ != nullptr;};
      void deleteMultiCloudAssetCount() { this->multiCloudAssetCount_ = nullptr;};
      inline int64_t getMultiCloudAssetCount() const { DARABONBA_PTR_GET_DEFAULT(multiCloudAssetCount_, 0L) };
      inline AssetCountList& setMultiCloudAssetCount(int64_t multiCloudAssetCount) { DARABONBA_PTR_SET_VALUE(multiCloudAssetCount_, multiCloudAssetCount) };


      // points Field Functions 
      bool hasPoints() const { return this->points_ != nullptr;};
      void deletePoints() { this->points_ = nullptr;};
      inline int64_t getPoints() const { DARABONBA_PTR_GET_DEFAULT(points_, 0L) };
      inline AssetCountList& setPoints(int64_t points) { DARABONBA_PTR_SET_VALUE(points_, points) };


    protected:
      shared_ptr<int64_t> aliyunAssetCount_ {};
      shared_ptr<int32_t> certificateCount_ {};
      shared_ptr<int64_t> countDate_ {};
      shared_ptr<int32_t> domainAssetCount_ {};
      shared_ptr<int64_t> multiCloudAssetCount_ {};
      shared_ptr<int64_t> points_ {};
    };

    virtual bool empty() const override { return this->assetCountList_ == nullptr
        && this->currentPage_ == nullptr && this->requestId_ == nullptr && this->showSize_ == nullptr && this->totalCount_ == nullptr; };
    // assetCountList Field Functions 
    bool hasAssetCountList() const { return this->assetCountList_ != nullptr;};
    void deleteAssetCountList() { this->assetCountList_ = nullptr;};
    inline const vector<ListAssetCountResponseBody::AssetCountList> & getAssetCountList() const { DARABONBA_PTR_GET_CONST(assetCountList_, vector<ListAssetCountResponseBody::AssetCountList>) };
    inline vector<ListAssetCountResponseBody::AssetCountList> getAssetCountList() { DARABONBA_PTR_GET(assetCountList_, vector<ListAssetCountResponseBody::AssetCountList>) };
    inline ListAssetCountResponseBody& setAssetCountList(const vector<ListAssetCountResponseBody::AssetCountList> & assetCountList) { DARABONBA_PTR_SET_VALUE(assetCountList_, assetCountList) };
    inline ListAssetCountResponseBody& setAssetCountList(vector<ListAssetCountResponseBody::AssetCountList> && assetCountList) { DARABONBA_PTR_SET_RVALUE(assetCountList_, assetCountList) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline ListAssetCountResponseBody& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAssetCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // showSize Field Functions 
    bool hasShowSize() const { return this->showSize_ != nullptr;};
    void deleteShowSize() { this->showSize_ = nullptr;};
    inline int64_t getShowSize() const { DARABONBA_PTR_GET_DEFAULT(showSize_, 0L) };
    inline ListAssetCountResponseBody& setShowSize(int64_t showSize) { DARABONBA_PTR_SET_VALUE(showSize_, showSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListAssetCountResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListAssetCountResponseBody::AssetCountList>> assetCountList_ {};
    shared_ptr<int64_t> currentPage_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> showSize_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
