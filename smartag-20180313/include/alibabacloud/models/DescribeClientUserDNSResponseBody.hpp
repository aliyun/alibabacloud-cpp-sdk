// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLIENTUSERDNSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLIENTUSERDNSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class DescribeClientUserDNSResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClientUserDNSResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppDNS, appDNS_);
      DARABONBA_PTR_TO_JSON(RecoveredDNS, recoveredDNS_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClientUserDNSResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppDNS, appDNS_);
      DARABONBA_PTR_FROM_JSON(RecoveredDNS, recoveredDNS_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeClientUserDNSResponseBody() = default ;
    DescribeClientUserDNSResponseBody(const DescribeClientUserDNSResponseBody &) = default ;
    DescribeClientUserDNSResponseBody(DescribeClientUserDNSResponseBody &&) = default ;
    DescribeClientUserDNSResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClientUserDNSResponseBody() = default ;
    DescribeClientUserDNSResponseBody& operator=(const DescribeClientUserDNSResponseBody &) = default ;
    DescribeClientUserDNSResponseBody& operator=(DescribeClientUserDNSResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appDNS_ == nullptr
        && this->recoveredDNS_ == nullptr && this->requestId_ == nullptr; };
    // appDNS Field Functions 
    bool hasAppDNS() const { return this->appDNS_ != nullptr;};
    void deleteAppDNS() { this->appDNS_ = nullptr;};
    inline const vector<string> & getAppDNS() const { DARABONBA_PTR_GET_CONST(appDNS_, vector<string>) };
    inline vector<string> getAppDNS() { DARABONBA_PTR_GET(appDNS_, vector<string>) };
    inline DescribeClientUserDNSResponseBody& setAppDNS(const vector<string> & appDNS) { DARABONBA_PTR_SET_VALUE(appDNS_, appDNS) };
    inline DescribeClientUserDNSResponseBody& setAppDNS(vector<string> && appDNS) { DARABONBA_PTR_SET_RVALUE(appDNS_, appDNS) };


    // recoveredDNS Field Functions 
    bool hasRecoveredDNS() const { return this->recoveredDNS_ != nullptr;};
    void deleteRecoveredDNS() { this->recoveredDNS_ = nullptr;};
    inline const vector<string> & getRecoveredDNS() const { DARABONBA_PTR_GET_CONST(recoveredDNS_, vector<string>) };
    inline vector<string> getRecoveredDNS() { DARABONBA_PTR_GET(recoveredDNS_, vector<string>) };
    inline DescribeClientUserDNSResponseBody& setRecoveredDNS(const vector<string> & recoveredDNS) { DARABONBA_PTR_SET_VALUE(recoveredDNS_, recoveredDNS) };
    inline DescribeClientUserDNSResponseBody& setRecoveredDNS(vector<string> && recoveredDNS) { DARABONBA_PTR_SET_RVALUE(recoveredDNS_, recoveredDNS) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeClientUserDNSResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The active and standby DNS servers that the SAG app instance uses when it connects to private networks.
    shared_ptr<vector<string>> appDNS_ {};
    // The active and standby DNS servers that the SAG app instance uses when it disconnects from private networks.
    shared_ptr<vector<string>> recoveredDNS_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
