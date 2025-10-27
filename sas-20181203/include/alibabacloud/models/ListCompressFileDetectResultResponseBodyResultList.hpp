// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMPRESSFILEDETECTRESULTRESPONSEBODYRESULTLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMPRESSFILEDETECTRESULTRESPONSEBODYRESULTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListCompressFileDetectResultResponseBodyResultList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCompressFileDetectResultResponseBodyResultList& obj) { 
      DARABONBA_PTR_TO_JSON(Ext, ext_);
      DARABONBA_PTR_TO_JSON(HashKey, hashKey_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(VirusType, virusType_);
    };
    friend void from_json(const Darabonba::Json& j, ListCompressFileDetectResultResponseBodyResultList& obj) { 
      DARABONBA_PTR_FROM_JSON(Ext, ext_);
      DARABONBA_PTR_FROM_JSON(HashKey, hashKey_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(VirusType, virusType_);
    };
    ListCompressFileDetectResultResponseBodyResultList() = default ;
    ListCompressFileDetectResultResponseBodyResultList(const ListCompressFileDetectResultResponseBodyResultList &) = default ;
    ListCompressFileDetectResultResponseBodyResultList(ListCompressFileDetectResultResponseBodyResultList &&) = default ;
    ListCompressFileDetectResultResponseBodyResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCompressFileDetectResultResponseBodyResultList() = default ;
    ListCompressFileDetectResultResponseBodyResultList& operator=(const ListCompressFileDetectResultResponseBodyResultList &) = default ;
    ListCompressFileDetectResultResponseBodyResultList& operator=(ListCompressFileDetectResultResponseBodyResultList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ext_ == nullptr
        && return this->hashKey_ == nullptr && return this->path_ == nullptr && return this->result_ == nullptr && return this->score_ == nullptr && return this->virusType_ == nullptr; };
    // ext Field Functions 
    bool hasExt() const { return this->ext_ != nullptr;};
    void deleteExt() { this->ext_ = nullptr;};
    inline string ext() const { DARABONBA_PTR_GET_DEFAULT(ext_, "") };
    inline ListCompressFileDetectResultResponseBodyResultList& setExt(string ext) { DARABONBA_PTR_SET_VALUE(ext_, ext) };


    // hashKey Field Functions 
    bool hasHashKey() const { return this->hashKey_ != nullptr;};
    void deleteHashKey() { this->hashKey_ = nullptr;};
    inline string hashKey() const { DARABONBA_PTR_GET_DEFAULT(hashKey_, "") };
    inline ListCompressFileDetectResultResponseBodyResultList& setHashKey(string hashKey) { DARABONBA_PTR_SET_VALUE(hashKey_, hashKey) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline ListCompressFileDetectResultResponseBodyResultList& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline int32_t result() const { DARABONBA_PTR_GET_DEFAULT(result_, 0) };
    inline ListCompressFileDetectResultResponseBodyResultList& setResult(int32_t result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline int32_t score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0) };
    inline ListCompressFileDetectResultResponseBodyResultList& setScore(int32_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // virusType Field Functions 
    bool hasVirusType() const { return this->virusType_ != nullptr;};
    void deleteVirusType() { this->virusType_ = nullptr;};
    inline string virusType() const { DARABONBA_PTR_GET_DEFAULT(virusType_, "") };
    inline ListCompressFileDetectResultResponseBodyResultList& setVirusType(string virusType) { DARABONBA_PTR_SET_VALUE(virusType_, virusType) };


  protected:
    // The extended information about the file detection result.
    std::shared_ptr<string> ext_ = nullptr;
    // The identifier of the file.
    std::shared_ptr<string> hashKey_ = nullptr;
    // The path to the file within the package.
    std::shared_ptr<string> path_ = nullptr;
    // The file detection result. Valid values:
    // 
    // *   **0**: The file is normal.
    // *   **1**: The file is suspicious.
    // *   **3**: The detection is in progress.
    std::shared_ptr<int32_t> result_ = nullptr;
    // The score of the file detection result. The following list describes mappings between the score ranges and risk levels:
    // 
    // *   0 to 60: normal
    // *   61 to 70: risky
    // *   71 to 80: suspicious
    // *   81 to 100: malicious
    // 
    // >  A higher score indicates a more suspicious file.
    std::shared_ptr<int32_t> score_ = nullptr;
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
    std::shared_ptr<string> virusType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
