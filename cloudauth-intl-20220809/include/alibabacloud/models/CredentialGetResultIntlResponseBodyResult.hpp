// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREDENTIALGETRESULTINTLRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_CREDENTIALGETRESULTINTLRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class CredentialGetResultIntlResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CredentialGetResultIntlResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(ExtIdInfo, extIdInfo_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubCode, subCode_);
    };
    friend void from_json(const Darabonba::Json& j, CredentialGetResultIntlResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(ExtIdInfo, extIdInfo_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubCode, subCode_);
    };
    CredentialGetResultIntlResponseBodyResult() = default ;
    CredentialGetResultIntlResponseBodyResult(const CredentialGetResultIntlResponseBodyResult &) = default ;
    CredentialGetResultIntlResponseBodyResult(CredentialGetResultIntlResponseBodyResult &&) = default ;
    CredentialGetResultIntlResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CredentialGetResultIntlResponseBodyResult() = default ;
    CredentialGetResultIntlResponseBodyResult& operator=(const CredentialGetResultIntlResponseBodyResult &) = default ;
    CredentialGetResultIntlResponseBodyResult& operator=(CredentialGetResultIntlResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->extIdInfo_ == nullptr
        && return this->status_ == nullptr && return this->subCode_ == nullptr; };
    // extIdInfo Field Functions 
    bool hasExtIdInfo() const { return this->extIdInfo_ != nullptr;};
    void deleteExtIdInfo() { this->extIdInfo_ = nullptr;};
    inline string extIdInfo() const { DARABONBA_PTR_GET_DEFAULT(extIdInfo_, "") };
    inline CredentialGetResultIntlResponseBodyResult& setExtIdInfo(string extIdInfo) { DARABONBA_PTR_SET_VALUE(extIdInfo_, extIdInfo) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CredentialGetResultIntlResponseBodyResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subCode Field Functions 
    bool hasSubCode() const { return this->subCode_ != nullptr;};
    void deleteSubCode() { this->subCode_ = nullptr;};
    inline string subCode() const { DARABONBA_PTR_GET_DEFAULT(subCode_, "") };
    inline CredentialGetResultIntlResponseBodyResult& setSubCode(string subCode) { DARABONBA_PTR_SET_VALUE(subCode_, subCode) };


  protected:
    // Identified key information, in JSON format.
    std::shared_ptr<string> extIdInfo_ = nullptr;
    // Task status:
    // - PROCESSING: In progress (please continue polling)
    // - SUCCESS: Execution succeeded
    // - FAILED: Execution failed
    std::shared_ptr<string> status_ = nullptr;
    // Authentication result description. For more information, see ResultObject.SubCode error codes.
    std::shared_ptr<string> subCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
