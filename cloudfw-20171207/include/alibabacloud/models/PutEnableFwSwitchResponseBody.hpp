// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTENABLEFWSWITCHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PUTENABLEFWSWITCHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PutEnableFwSwitchResponseBodyAbnormalResourceStatusList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class PutEnableFwSwitchResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutEnableFwSwitchResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AbnormalResourceStatusList, abnormalResourceStatusList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, PutEnableFwSwitchResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AbnormalResourceStatusList, abnormalResourceStatusList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    PutEnableFwSwitchResponseBody() = default ;
    PutEnableFwSwitchResponseBody(const PutEnableFwSwitchResponseBody &) = default ;
    PutEnableFwSwitchResponseBody(PutEnableFwSwitchResponseBody &&) = default ;
    PutEnableFwSwitchResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutEnableFwSwitchResponseBody() = default ;
    PutEnableFwSwitchResponseBody& operator=(const PutEnableFwSwitchResponseBody &) = default ;
    PutEnableFwSwitchResponseBody& operator=(PutEnableFwSwitchResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->abnormalResourceStatusList_ != nullptr
        && this->requestId_ != nullptr; };
    // abnormalResourceStatusList Field Functions 
    bool hasAbnormalResourceStatusList() const { return this->abnormalResourceStatusList_ != nullptr;};
    void deleteAbnormalResourceStatusList() { this->abnormalResourceStatusList_ = nullptr;};
    inline const vector<PutEnableFwSwitchResponseBodyAbnormalResourceStatusList> & abnormalResourceStatusList() const { DARABONBA_PTR_GET_CONST(abnormalResourceStatusList_, vector<PutEnableFwSwitchResponseBodyAbnormalResourceStatusList>) };
    inline vector<PutEnableFwSwitchResponseBodyAbnormalResourceStatusList> abnormalResourceStatusList() { DARABONBA_PTR_GET(abnormalResourceStatusList_, vector<PutEnableFwSwitchResponseBodyAbnormalResourceStatusList>) };
    inline PutEnableFwSwitchResponseBody& setAbnormalResourceStatusList(const vector<PutEnableFwSwitchResponseBodyAbnormalResourceStatusList> & abnormalResourceStatusList) { DARABONBA_PTR_SET_VALUE(abnormalResourceStatusList_, abnormalResourceStatusList) };
    inline PutEnableFwSwitchResponseBody& setAbnormalResourceStatusList(vector<PutEnableFwSwitchResponseBodyAbnormalResourceStatusList> && abnormalResourceStatusList) { DARABONBA_PTR_SET_RVALUE(abnormalResourceStatusList_, abnormalResourceStatusList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PutEnableFwSwitchResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status information of the asset when it is not synchronized to Cloud Firewall.
    std::shared_ptr<vector<PutEnableFwSwitchResponseBodyAbnormalResourceStatusList>> abnormalResourceStatusList_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
