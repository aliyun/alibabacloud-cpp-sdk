// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLIENTUSERDEFINERULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCLIENTUSERDEFINERULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetClientUserDefineRuleResponseBodyUserDefineRuleDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetClientUserDefineRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClientUserDefineRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserDefineRuleDetail, userDefineRuleDetail_);
    };
    friend void from_json(const Darabonba::Json& j, GetClientUserDefineRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserDefineRuleDetail, userDefineRuleDetail_);
    };
    GetClientUserDefineRuleResponseBody() = default ;
    GetClientUserDefineRuleResponseBody(const GetClientUserDefineRuleResponseBody &) = default ;
    GetClientUserDefineRuleResponseBody(GetClientUserDefineRuleResponseBody &&) = default ;
    GetClientUserDefineRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClientUserDefineRuleResponseBody() = default ;
    GetClientUserDefineRuleResponseBody& operator=(const GetClientUserDefineRuleResponseBody &) = default ;
    GetClientUserDefineRuleResponseBody& operator=(GetClientUserDefineRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->userDefineRuleDetail_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetClientUserDefineRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userDefineRuleDetail Field Functions 
    bool hasUserDefineRuleDetail() const { return this->userDefineRuleDetail_ != nullptr;};
    void deleteUserDefineRuleDetail() { this->userDefineRuleDetail_ = nullptr;};
    inline const GetClientUserDefineRuleResponseBodyUserDefineRuleDetail & userDefineRuleDetail() const { DARABONBA_PTR_GET_CONST(userDefineRuleDetail_, GetClientUserDefineRuleResponseBodyUserDefineRuleDetail) };
    inline GetClientUserDefineRuleResponseBodyUserDefineRuleDetail userDefineRuleDetail() { DARABONBA_PTR_GET(userDefineRuleDetail_, GetClientUserDefineRuleResponseBodyUserDefineRuleDetail) };
    inline GetClientUserDefineRuleResponseBody& setUserDefineRuleDetail(const GetClientUserDefineRuleResponseBodyUserDefineRuleDetail & userDefineRuleDetail) { DARABONBA_PTR_SET_VALUE(userDefineRuleDetail_, userDefineRuleDetail) };
    inline GetClientUserDefineRuleResponseBody& setUserDefineRuleDetail(GetClientUserDefineRuleResponseBodyUserDefineRuleDetail && userDefineRuleDetail) { DARABONBA_PTR_SET_RVALUE(userDefineRuleDetail_, userDefineRuleDetail) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the custom defense rule.
    std::shared_ptr<GetClientUserDefineRuleResponseBodyUserDefineRuleDetail> userDefineRuleDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
