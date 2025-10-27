// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCREATEVULWHITELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCREATEVULWHITELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyCreateVulWhitelistResponseBodyVulWhitelistList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyCreateVulWhitelistResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCreateVulWhitelistResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VulWhitelistList, vulWhitelistList_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCreateVulWhitelistResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VulWhitelistList, vulWhitelistList_);
    };
    ModifyCreateVulWhitelistResponseBody() = default ;
    ModifyCreateVulWhitelistResponseBody(const ModifyCreateVulWhitelistResponseBody &) = default ;
    ModifyCreateVulWhitelistResponseBody(ModifyCreateVulWhitelistResponseBody &&) = default ;
    ModifyCreateVulWhitelistResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCreateVulWhitelistResponseBody() = default ;
    ModifyCreateVulWhitelistResponseBody& operator=(const ModifyCreateVulWhitelistResponseBody &) = default ;
    ModifyCreateVulWhitelistResponseBody& operator=(ModifyCreateVulWhitelistResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->vulWhitelistList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyCreateVulWhitelistResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vulWhitelistList Field Functions 
    bool hasVulWhitelistList() const { return this->vulWhitelistList_ != nullptr;};
    void deleteVulWhitelistList() { this->vulWhitelistList_ = nullptr;};
    inline const vector<ModifyCreateVulWhitelistResponseBodyVulWhitelistList> & vulWhitelistList() const { DARABONBA_PTR_GET_CONST(vulWhitelistList_, vector<ModifyCreateVulWhitelistResponseBodyVulWhitelistList>) };
    inline vector<ModifyCreateVulWhitelistResponseBodyVulWhitelistList> vulWhitelistList() { DARABONBA_PTR_GET(vulWhitelistList_, vector<ModifyCreateVulWhitelistResponseBodyVulWhitelistList>) };
    inline ModifyCreateVulWhitelistResponseBody& setVulWhitelistList(const vector<ModifyCreateVulWhitelistResponseBodyVulWhitelistList> & vulWhitelistList) { DARABONBA_PTR_SET_VALUE(vulWhitelistList_, vulWhitelistList) };
    inline ModifyCreateVulWhitelistResponseBody& setVulWhitelistList(vector<ModifyCreateVulWhitelistResponseBodyVulWhitelistList> && vulWhitelistList) { DARABONBA_PTR_SET_RVALUE(vulWhitelistList_, vulWhitelistList) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // An array that consists of the information about the whitelist.
    std::shared_ptr<vector<ModifyCreateVulWhitelistResponseBodyVulWhitelistList>> vulWhitelistList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
