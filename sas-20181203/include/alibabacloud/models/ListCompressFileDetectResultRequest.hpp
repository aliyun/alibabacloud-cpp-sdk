// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMPRESSFILEDETECTRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMPRESSFILEDETECTRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListCompressFileDetectResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCompressFileDetectResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(HashKey, hashKey_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, ListCompressFileDetectResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(HashKey, hashKey_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
    };
    ListCompressFileDetectResultRequest() = default ;
    ListCompressFileDetectResultRequest(const ListCompressFileDetectResultRequest &) = default ;
    ListCompressFileDetectResultRequest(ListCompressFileDetectResultRequest &&) = default ;
    ListCompressFileDetectResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCompressFileDetectResultRequest() = default ;
    ListCompressFileDetectResultRequest& operator=(const ListCompressFileDetectResultRequest &) = default ;
    ListCompressFileDetectResultRequest& operator=(ListCompressFileDetectResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->hashKey_ == nullptr && return this->pageSize_ == nullptr && return this->sourceIp_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListCompressFileDetectResultRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // hashKey Field Functions 
    bool hasHashKey() const { return this->hashKey_ != nullptr;};
    void deleteHashKey() { this->hashKey_ = nullptr;};
    inline string hashKey() const { DARABONBA_PTR_GET_DEFAULT(hashKey_, "") };
    inline ListCompressFileDetectResultRequest& setHashKey(string hashKey) { DARABONBA_PTR_SET_VALUE(hashKey_, hashKey) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCompressFileDetectResultRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline ListCompressFileDetectResultRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    // The page number. Default value: 1.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The identifier of the file. Only MD5 hash values are supported.
    std::shared_ptr<string> hashKey_ = nullptr;
    // The number of entries per page. Default value: 20.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The source IP address of the request.
    std::shared_ptr<string> sourceIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
