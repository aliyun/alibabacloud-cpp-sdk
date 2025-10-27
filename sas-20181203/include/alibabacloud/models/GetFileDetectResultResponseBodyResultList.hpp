// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILEDETECTRESULTRESPONSEBODYRESULTLIST_HPP_
#define ALIBABACLOUD_MODELS_GETFILEDETECTRESULTRESPONSEBODYRESULTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetFileDetectResultResponseBodyResultList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFileDetectResultResponseBodyResultList& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Compress, compress_);
      DARABONBA_PTR_TO_JSON(Ext, ext_);
      DARABONBA_PTR_TO_JSON(HashKey, hashKey_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(VirusType, virusType_);
    };
    friend void from_json(const Darabonba::Json& j, GetFileDetectResultResponseBodyResultList& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Compress, compress_);
      DARABONBA_PTR_FROM_JSON(Ext, ext_);
      DARABONBA_PTR_FROM_JSON(HashKey, hashKey_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(VirusType, virusType_);
    };
    GetFileDetectResultResponseBodyResultList() = default ;
    GetFileDetectResultResponseBodyResultList(const GetFileDetectResultResponseBodyResultList &) = default ;
    GetFileDetectResultResponseBodyResultList(GetFileDetectResultResponseBodyResultList &&) = default ;
    GetFileDetectResultResponseBodyResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFileDetectResultResponseBodyResultList() = default ;
    GetFileDetectResultResponseBodyResultList& operator=(const GetFileDetectResultResponseBodyResultList &) = default ;
    GetFileDetectResultResponseBodyResultList& operator=(GetFileDetectResultResponseBodyResultList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->compress_ == nullptr && return this->ext_ == nullptr && return this->hashKey_ == nullptr && return this->message_ == nullptr && return this->result_ == nullptr
        && return this->score_ == nullptr && return this->virusType_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetFileDetectResultResponseBodyResultList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // compress Field Functions 
    bool hasCompress() const { return this->compress_ != nullptr;};
    void deleteCompress() { this->compress_ = nullptr;};
    inline bool compress() const { DARABONBA_PTR_GET_DEFAULT(compress_, false) };
    inline GetFileDetectResultResponseBodyResultList& setCompress(bool compress) { DARABONBA_PTR_SET_VALUE(compress_, compress) };


    // ext Field Functions 
    bool hasExt() const { return this->ext_ != nullptr;};
    void deleteExt() { this->ext_ = nullptr;};
    inline string ext() const { DARABONBA_PTR_GET_DEFAULT(ext_, "") };
    inline GetFileDetectResultResponseBodyResultList& setExt(string ext) { DARABONBA_PTR_SET_VALUE(ext_, ext) };


    // hashKey Field Functions 
    bool hasHashKey() const { return this->hashKey_ != nullptr;};
    void deleteHashKey() { this->hashKey_ = nullptr;};
    inline string hashKey() const { DARABONBA_PTR_GET_DEFAULT(hashKey_, "") };
    inline GetFileDetectResultResponseBodyResultList& setHashKey(string hashKey) { DARABONBA_PTR_SET_VALUE(hashKey_, hashKey) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetFileDetectResultResponseBodyResultList& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline int32_t result() const { DARABONBA_PTR_GET_DEFAULT(result_, 0) };
    inline GetFileDetectResultResponseBodyResultList& setResult(int32_t result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline int32_t score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0) };
    inline GetFileDetectResultResponseBodyResultList& setScore(int32_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // virusType Field Functions 
    bool hasVirusType() const { return this->virusType_ != nullptr;};
    void deleteVirusType() { this->virusType_ = nullptr;};
    inline string virusType() const { DARABONBA_PTR_GET_DEFAULT(virusType_, "") };
    inline GetFileDetectResultResponseBodyResultList& setVirusType(string virusType) { DARABONBA_PTR_SET_VALUE(virusType_, virusType) };


  protected:
    // The status code returned. The status code **200** indicates that the request was successful. Other status codes indicate that the request failed. You can identify the cause of the failure based on the status code.
    std::shared_ptr<string> code_ = nullptr;
    // Whether to identify as a compressed package. Valid values:
    // - **true**: Yes.
    // - **false**: No.
    std::shared_ptr<bool> compress_ = nullptr;
    // The extended information about the file detection result.
    std::shared_ptr<string> ext_ = nullptr;
    // The identifier of the file. Only MD5 hash values are supported.
    std::shared_ptr<string> hashKey_ = nullptr;
    // The error message returned.
    std::shared_ptr<string> message_ = nullptr;
    // The file detection result. Valid values:
    // 
    // *   **0**: The file is normal.
    // *   **1**: The file is suspicious.
    // *   **3**: The detection is in progress.
    std::shared_ptr<int32_t> result_ = nullptr;
    // The score of file detection result.
    // 
    // > A higher score indicates a more suspicious file.
    std::shared_ptr<int32_t> score_ = nullptr;
    // The type of the virus. Valid values:
    // 
    // *   **Trojan**: trojan horse
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
