// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATEAGENTCLIENTINSTALLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_OPERATEAGENTCLIENTINSTALLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/OperateAgentClientInstallResponseBodyAegisCelintInstallResposeList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class OperateAgentClientInstallResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperateAgentClientInstallResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AegisCelintInstallResposeList, aegisCelintInstallResposeList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, OperateAgentClientInstallResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AegisCelintInstallResposeList, aegisCelintInstallResposeList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    OperateAgentClientInstallResponseBody() = default ;
    OperateAgentClientInstallResponseBody(const OperateAgentClientInstallResponseBody &) = default ;
    OperateAgentClientInstallResponseBody(OperateAgentClientInstallResponseBody &&) = default ;
    OperateAgentClientInstallResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperateAgentClientInstallResponseBody() = default ;
    OperateAgentClientInstallResponseBody& operator=(const OperateAgentClientInstallResponseBody &) = default ;
    OperateAgentClientInstallResponseBody& operator=(OperateAgentClientInstallResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aegisCelintInstallResposeList_ != nullptr
        && this->requestId_ != nullptr; };
    // aegisCelintInstallResposeList Field Functions 
    bool hasAegisCelintInstallResposeList() const { return this->aegisCelintInstallResposeList_ != nullptr;};
    void deleteAegisCelintInstallResposeList() { this->aegisCelintInstallResposeList_ = nullptr;};
    inline const vector<OperateAgentClientInstallResponseBodyAegisCelintInstallResposeList> & aegisCelintInstallResposeList() const { DARABONBA_PTR_GET_CONST(aegisCelintInstallResposeList_, vector<OperateAgentClientInstallResponseBodyAegisCelintInstallResposeList>) };
    inline vector<OperateAgentClientInstallResponseBodyAegisCelintInstallResposeList> aegisCelintInstallResposeList() { DARABONBA_PTR_GET(aegisCelintInstallResposeList_, vector<OperateAgentClientInstallResponseBodyAegisCelintInstallResposeList>) };
    inline OperateAgentClientInstallResponseBody& setAegisCelintInstallResposeList(const vector<OperateAgentClientInstallResponseBodyAegisCelintInstallResposeList> & aegisCelintInstallResposeList) { DARABONBA_PTR_SET_VALUE(aegisCelintInstallResposeList_, aegisCelintInstallResposeList) };
    inline OperateAgentClientInstallResponseBody& setAegisCelintInstallResposeList(vector<OperateAgentClientInstallResponseBodyAegisCelintInstallResposeList> && aegisCelintInstallResposeList) { DARABONBA_PTR_SET_RVALUE(aegisCelintInstallResposeList_, aegisCelintInstallResposeList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline OperateAgentClientInstallResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the returned results.
    std::shared_ptr<vector<OperateAgentClientInstallResponseBodyAegisCelintInstallResposeList>> aegisCelintInstallResposeList_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
