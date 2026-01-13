// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEALGORITHMCUSTOMIZATIONSCRIPTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENERATEALGORITHMCUSTOMIZATIONSCRIPTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class GenerateAlgorithmCustomizationScriptResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateAlgorithmCustomizationScriptResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LogId, logId_);
      DARABONBA_PTR_TO_JSON(OssAddress, ossAddress_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateAlgorithmCustomizationScriptResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LogId, logId_);
      DARABONBA_PTR_FROM_JSON(OssAddress, ossAddress_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GenerateAlgorithmCustomizationScriptResponseBody() = default ;
    GenerateAlgorithmCustomizationScriptResponseBody(const GenerateAlgorithmCustomizationScriptResponseBody &) = default ;
    GenerateAlgorithmCustomizationScriptResponseBody(GenerateAlgorithmCustomizationScriptResponseBody &&) = default ;
    GenerateAlgorithmCustomizationScriptResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateAlgorithmCustomizationScriptResponseBody() = default ;
    GenerateAlgorithmCustomizationScriptResponseBody& operator=(const GenerateAlgorithmCustomizationScriptResponseBody &) = default ;
    GenerateAlgorithmCustomizationScriptResponseBody& operator=(GenerateAlgorithmCustomizationScriptResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logId_ == nullptr
        && this->ossAddress_ == nullptr && this->requestId_ == nullptr; };
    // logId Field Functions 
    bool hasLogId() const { return this->logId_ != nullptr;};
    void deleteLogId() { this->logId_ = nullptr;};
    inline string getLogId() const { DARABONBA_PTR_GET_DEFAULT(logId_, "") };
    inline GenerateAlgorithmCustomizationScriptResponseBody& setLogId(string logId) { DARABONBA_PTR_SET_VALUE(logId_, logId) };


    // ossAddress Field Functions 
    bool hasOssAddress() const { return this->ossAddress_ != nullptr;};
    void deleteOssAddress() { this->ossAddress_ = nullptr;};
    inline string getOssAddress() const { DARABONBA_PTR_GET_DEFAULT(ossAddress_, "") };
    inline GenerateAlgorithmCustomizationScriptResponseBody& setOssAddress(string ossAddress) { DARABONBA_PTR_SET_VALUE(ossAddress_, ossAddress) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GenerateAlgorithmCustomizationScriptResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> logId_ {};
    shared_ptr<string> ossAddress_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
