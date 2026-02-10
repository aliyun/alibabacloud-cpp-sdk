// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILEDETECTRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFILEDETECTRESULTRESPONSEBODY_HPP_
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
  class GetFileDetectResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFileDetectResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultList, resultList_);
    };
    friend void from_json(const Darabonba::Json& j, GetFileDetectResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultList, resultList_);
    };
    GetFileDetectResultResponseBody() = default ;
    GetFileDetectResultResponseBody(const GetFileDetectResultResponseBody &) = default ;
    GetFileDetectResultResponseBody(GetFileDetectResultResponseBody &&) = default ;
    GetFileDetectResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFileDetectResultResponseBody() = default ;
    GetFileDetectResultResponseBody& operator=(const GetFileDetectResultResponseBody &) = default ;
    GetFileDetectResultResponseBody& operator=(GetFileDetectResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultList& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(Compress, compress_);
        DARABONBA_PTR_TO_JSON(Ext, ext_);
        DARABONBA_PTR_TO_JSON(HashKey, hashKey_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(Result, result_);
        DARABONBA_PTR_TO_JSON(Score, score_);
        DARABONBA_PTR_TO_JSON(VirusType, virusType_);
      };
      friend void from_json(const Darabonba::Json& j, ResultList& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(Compress, compress_);
        DARABONBA_PTR_FROM_JSON(Ext, ext_);
        DARABONBA_PTR_FROM_JSON(HashKey, hashKey_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
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
      virtual bool empty() const override { return this->code_ == nullptr
        && this->compress_ == nullptr && this->ext_ == nullptr && this->hashKey_ == nullptr && this->message_ == nullptr && this->result_ == nullptr
        && this->score_ == nullptr && this->virusType_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline ResultList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // compress Field Functions 
      bool hasCompress() const { return this->compress_ != nullptr;};
      void deleteCompress() { this->compress_ = nullptr;};
      inline bool getCompress() const { DARABONBA_PTR_GET_DEFAULT(compress_, false) };
      inline ResultList& setCompress(bool compress) { DARABONBA_PTR_SET_VALUE(compress_, compress) };


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


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline ResultList& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


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
      // The status code returned. The status code **200** indicates that the request was successful. Other status codes indicate that the request failed. You can identify the cause of the failure based on the status code.
      shared_ptr<string> code_ {};
      // Whether to identify as a compressed package. Valid values:
      // - **true**: Yes.
      // - **false**: No.
      shared_ptr<bool> compress_ {};
      // The extended information about the file detection result.
      shared_ptr<string> ext_ {};
      // The identifier of the file. Only MD5 hash values are supported.
      shared_ptr<string> hashKey_ {};
      // The error message returned.
      shared_ptr<string> message_ {};
      // The file detection result. Valid values:
      // 
      // *   **0**: The file is normal.
      // *   **1**: The file is suspicious.
      // *   **3**: The detection is in progress.
      shared_ptr<int32_t> result_ {};
      // The score of file detection result.
      // 
      // > A higher score indicates a more suspicious file.
      shared_ptr<int32_t> score_ {};
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
      shared_ptr<string> virusType_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFileDetectResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultList Field Functions 
    bool hasResultList() const { return this->resultList_ != nullptr;};
    void deleteResultList() { this->resultList_ = nullptr;};
    inline const vector<GetFileDetectResultResponseBody::ResultList> & getResultList() const { DARABONBA_PTR_GET_CONST(resultList_, vector<GetFileDetectResultResponseBody::ResultList>) };
    inline vector<GetFileDetectResultResponseBody::ResultList> getResultList() { DARABONBA_PTR_GET(resultList_, vector<GetFileDetectResultResponseBody::ResultList>) };
    inline GetFileDetectResultResponseBody& setResultList(const vector<GetFileDetectResultResponseBody::ResultList> & resultList) { DARABONBA_PTR_SET_VALUE(resultList_, resultList) };
    inline GetFileDetectResultResponseBody& setResultList(vector<GetFileDetectResultResponseBody::ResultList> && resultList) { DARABONBA_PTR_SET_RVALUE(resultList_, resultList) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // An array that consists of file detection results.
    shared_ptr<vector<GetFileDetectResultResponseBody::ResultList>> resultList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
