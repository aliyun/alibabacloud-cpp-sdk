// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMPRESSFILEDETECTRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMPRESSFILEDETECTRESULTRESPONSEBODY_HPP_
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
  class ListCompressFileDetectResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCompressFileDetectResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultList, resultList_);
    };
    friend void from_json(const Darabonba::Json& j, ListCompressFileDetectResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultList, resultList_);
    };
    ListCompressFileDetectResultResponseBody() = default ;
    ListCompressFileDetectResultResponseBody(const ListCompressFileDetectResultResponseBody &) = default ;
    ListCompressFileDetectResultResponseBody(ListCompressFileDetectResultResponseBody &&) = default ;
    ListCompressFileDetectResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCompressFileDetectResultResponseBody() = default ;
    ListCompressFileDetectResultResponseBody& operator=(const ListCompressFileDetectResultResponseBody &) = default ;
    ListCompressFileDetectResultResponseBody& operator=(ListCompressFileDetectResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultList& obj) { 
        DARABONBA_PTR_TO_JSON(Ext, ext_);
        DARABONBA_PTR_TO_JSON(HashKey, hashKey_);
        DARABONBA_PTR_TO_JSON(Path, path_);
        DARABONBA_PTR_TO_JSON(Result, result_);
        DARABONBA_PTR_TO_JSON(Score, score_);
        DARABONBA_PTR_TO_JSON(VirusType, virusType_);
      };
      friend void from_json(const Darabonba::Json& j, ResultList& obj) { 
        DARABONBA_PTR_FROM_JSON(Ext, ext_);
        DARABONBA_PTR_FROM_JSON(HashKey, hashKey_);
        DARABONBA_PTR_FROM_JSON(Path, path_);
        DARABONBA_PTR_FROM_JSON(Result, result_);
        DARABONBA_PTR_FROM_JSON(Score, score_);
        DARABONBA_PTR_FROM_JSON(VirusType, virusType_);
      };
      ResultList() = default ;
      ResultList(const ResultList &) = default ;
      ResultList(ResultList &&) = default ;
      ResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResultList() = default ;
      ResultList& operator=(const ResultList &) = default ;
      ResultList& operator=(ResultList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ext_ == nullptr
        && this->hashKey_ == nullptr && this->path_ == nullptr && this->result_ == nullptr && this->score_ == nullptr && this->virusType_ == nullptr; };
      // ext Field Functions 
      bool hasExt() const { return this->ext_ != nullptr;};
      void deleteExt() { this->ext_ = nullptr;};
      inline string getExt() const { DARABONBA_PTR_GET_DEFAULT(ext_, "") };
      inline ResultList& setExt(string ext) { DARABONBA_PTR_SET_VALUE(ext_, ext) };


      // hashKey Field Functions 
      bool hasHashKey() const { return this->hashKey_ != nullptr;};
      void deleteHashKey() { this->hashKey_ = nullptr;};
      inline string getHashKey() const { DARABONBA_PTR_GET_DEFAULT(hashKey_, "") };
      inline ResultList& setHashKey(string hashKey) { DARABONBA_PTR_SET_VALUE(hashKey_, hashKey) };


      // path Field Functions 
      bool hasPath() const { return this->path_ != nullptr;};
      void deletePath() { this->path_ = nullptr;};
      inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
      inline ResultList& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline int32_t getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, 0) };
      inline ResultList& setResult(int32_t result) { DARABONBA_PTR_SET_VALUE(result_, result) };


      // score Field Functions 
      bool hasScore() const { return this->score_ != nullptr;};
      void deleteScore() { this->score_ = nullptr;};
      inline int32_t getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0) };
      inline ResultList& setScore(int32_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


      // virusType Field Functions 
      bool hasVirusType() const { return this->virusType_ != nullptr;};
      void deleteVirusType() { this->virusType_ = nullptr;};
      inline string getVirusType() const { DARABONBA_PTR_GET_DEFAULT(virusType_, "") };
      inline ResultList& setVirusType(string virusType) { DARABONBA_PTR_SET_VALUE(virusType_, virusType) };


    protected:
      // The extended information about the file detection result.
      shared_ptr<string> ext_ {};
      // The identifier of the file.
      shared_ptr<string> hashKey_ {};
      // The path to the file within the package.
      shared_ptr<string> path_ {};
      // The file detection result. Valid values:
      // 
      // *   **0**: The file is normal.
      // *   **1**: The file is suspicious.
      // *   **3**: The detection is in progress.
      shared_ptr<int32_t> result_ {};
      // The score of the file detection result. The following list describes mappings between the score ranges and risk levels:
      // 
      // *   0 to 60: normal
      // *   61 to 70: risky
      // *   71 to 80: suspicious
      // *   81 to 100: malicious
      // 
      // >  A higher score indicates a more suspicious file.
      shared_ptr<int32_t> score_ {};
      // The type of the virus. Valid values:
      // 
      // *   **Trojan**: self-mutating trojan
      // *   **WebShell**: webshell
      // *   **Backdoor**: backdoor program
      // *   **RansomWare**: ransomware
      // *   **Scanner**: scanner
      // *   **Stealer**: tool that is used to steal information
      // *   **Malbaseware**: tainted basic software
      // *   **Hacktool**: attacker tool
      // *   **Engtest**: engine test program
      // *   **Downloader**: trojan downloader
      // *   **Virus**: infectious virus
      // *   **Miner**: mining program
      // *   **Worm**: worm
      // *   **DDoS**: DDoS trojan
      // *   **Malware**: malicious program
      // *   **Backdoor**: reverse shell
      // *   **RiskWare**: software that has risks
      // *   **Proxytool**: proxy
      // *   **Suspicious**: suspicious program
      // *   **MalScript**: malicious script
      // *   **Rootkit**: rootkit
      // *   **Exploit**: exploit
      shared_ptr<string> virusType_ {};
    };

    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The page number.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pageInfo_ == nullptr
        && this->requestId_ == nullptr && this->resultList_ == nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListCompressFileDetectResultResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListCompressFileDetectResultResponseBody::PageInfo) };
    inline ListCompressFileDetectResultResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListCompressFileDetectResultResponseBody::PageInfo) };
    inline ListCompressFileDetectResultResponseBody& setPageInfo(const ListCompressFileDetectResultResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListCompressFileDetectResultResponseBody& setPageInfo(ListCompressFileDetectResultResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCompressFileDetectResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultList Field Functions 
    bool hasResultList() const { return this->resultList_ != nullptr;};
    void deleteResultList() { this->resultList_ = nullptr;};
    inline const vector<ListCompressFileDetectResultResponseBody::ResultList> & getResultList() const { DARABONBA_PTR_GET_CONST(resultList_, vector<ListCompressFileDetectResultResponseBody::ResultList>) };
    inline vector<ListCompressFileDetectResultResponseBody::ResultList> getResultList() { DARABONBA_PTR_GET(resultList_, vector<ListCompressFileDetectResultResponseBody::ResultList>) };
    inline ListCompressFileDetectResultResponseBody& setResultList(const vector<ListCompressFileDetectResultResponseBody::ResultList> & resultList) { DARABONBA_PTR_SET_VALUE(resultList_, resultList) };
    inline ListCompressFileDetectResultResponseBody& setResultList(vector<ListCompressFileDetectResultResponseBody::ResultList> && resultList) { DARABONBA_PTR_SET_RVALUE(resultList_, resultList) };


  protected:
    // The pagination information.
    shared_ptr<ListCompressFileDetectResultResponseBody::PageInfo> pageInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The detection results of files.
    shared_ptr<vector<ListCompressFileDetectResultResponseBody::ResultList>> resultList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
