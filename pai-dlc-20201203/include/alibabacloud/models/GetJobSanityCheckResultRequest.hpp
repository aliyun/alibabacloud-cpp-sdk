// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBSANITYCHECKRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETJOBSANITYCHECKRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class GetJobSanityCheckResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobSanityCheckResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SanityCheckNumber, sanityCheckNumber_);
      DARABONBA_PTR_TO_JSON(SanityCheckPhase, sanityCheckPhase_);
      DARABONBA_PTR_TO_JSON(Token, token_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobSanityCheckResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SanityCheckNumber, sanityCheckNumber_);
      DARABONBA_PTR_FROM_JSON(SanityCheckPhase, sanityCheckPhase_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
    };
    GetJobSanityCheckResultRequest() = default ;
    GetJobSanityCheckResultRequest(const GetJobSanityCheckResultRequest &) = default ;
    GetJobSanityCheckResultRequest(GetJobSanityCheckResultRequest &&) = default ;
    GetJobSanityCheckResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobSanityCheckResultRequest() = default ;
    GetJobSanityCheckResultRequest& operator=(const GetJobSanityCheckResultRequest &) = default ;
    GetJobSanityCheckResultRequest& operator=(GetJobSanityCheckResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sanityCheckNumber_ == nullptr
        && this->sanityCheckPhase_ == nullptr && this->token_ == nullptr; };
    // sanityCheckNumber Field Functions 
    bool hasSanityCheckNumber() const { return this->sanityCheckNumber_ != nullptr;};
    void deleteSanityCheckNumber() { this->sanityCheckNumber_ = nullptr;};
    inline int32_t getSanityCheckNumber() const { DARABONBA_PTR_GET_DEFAULT(sanityCheckNumber_, 0) };
    inline GetJobSanityCheckResultRequest& setSanityCheckNumber(int32_t sanityCheckNumber) { DARABONBA_PTR_SET_VALUE(sanityCheckNumber_, sanityCheckNumber) };


    // sanityCheckPhase Field Functions 
    bool hasSanityCheckPhase() const { return this->sanityCheckPhase_ != nullptr;};
    void deleteSanityCheckPhase() { this->sanityCheckPhase_ = nullptr;};
    inline string getSanityCheckPhase() const { DARABONBA_PTR_GET_DEFAULT(sanityCheckPhase_, "") };
    inline GetJobSanityCheckResultRequest& setSanityCheckPhase(string sanityCheckPhase) { DARABONBA_PTR_SET_VALUE(sanityCheckPhase_, sanityCheckPhase) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline GetJobSanityCheckResultRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


  protected:
    // The nth time for which the job sanity check is performed.
    // 
    // This parameter is required.
    shared_ptr<int32_t> sanityCheckNumber_ {};
    // The phase in which the job sanity check is performed.
    // 
    // *   CheckInit
    // *   DeviceCheck
    // *   SingleNodeCommCheck
    // *   TwoNodeCommCheck
    // *   AllNodeCommCheck
    shared_ptr<string> sanityCheckPhase_ {};
    // The token information for job sharing. For more information about how to obtain the token information, see [GetToken](https://help.aliyun.com/document_detail/2557812.html).
    shared_ptr<string> token_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
