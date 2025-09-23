// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGLAYER7BLACKWHITELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIGLAYER7BLACKWHITELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class ConfigLayer7BlackWhiteListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigLayer7BlackWhiteListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BlackList, blackList_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(WhiteList, whiteList_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigLayer7BlackWhiteListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BlackList, blackList_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(WhiteList, whiteList_);
    };
    ConfigLayer7BlackWhiteListRequest() = default ;
    ConfigLayer7BlackWhiteListRequest(const ConfigLayer7BlackWhiteListRequest &) = default ;
    ConfigLayer7BlackWhiteListRequest(ConfigLayer7BlackWhiteListRequest &&) = default ;
    ConfigLayer7BlackWhiteListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigLayer7BlackWhiteListRequest() = default ;
    ConfigLayer7BlackWhiteListRequest& operator=(const ConfigLayer7BlackWhiteListRequest &) = default ;
    ConfigLayer7BlackWhiteListRequest& operator=(ConfigLayer7BlackWhiteListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->blackList_ != nullptr
        && this->domain_ != nullptr && this->resourceGroupId_ != nullptr && this->whiteList_ != nullptr; };
    // blackList Field Functions 
    bool hasBlackList() const { return this->blackList_ != nullptr;};
    void deleteBlackList() { this->blackList_ = nullptr;};
    inline const vector<string> & blackList() const { DARABONBA_PTR_GET_CONST(blackList_, vector<string>) };
    inline vector<string> blackList() { DARABONBA_PTR_GET(blackList_, vector<string>) };
    inline ConfigLayer7BlackWhiteListRequest& setBlackList(const vector<string> & blackList) { DARABONBA_PTR_SET_VALUE(blackList_, blackList) };
    inline ConfigLayer7BlackWhiteListRequest& setBlackList(vector<string> && blackList) { DARABONBA_PTR_SET_RVALUE(blackList_, blackList) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline ConfigLayer7BlackWhiteListRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ConfigLayer7BlackWhiteListRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // whiteList Field Functions 
    bool hasWhiteList() const { return this->whiteList_ != nullptr;};
    void deleteWhiteList() { this->whiteList_ = nullptr;};
    inline const vector<string> & whiteList() const { DARABONBA_PTR_GET_CONST(whiteList_, vector<string>) };
    inline vector<string> whiteList() { DARABONBA_PTR_GET(whiteList_, vector<string>) };
    inline ConfigLayer7BlackWhiteListRequest& setWhiteList(const vector<string> & whiteList) { DARABONBA_PTR_SET_VALUE(whiteList_, whiteList) };
    inline ConfigLayer7BlackWhiteListRequest& setWhiteList(vector<string> && whiteList) { DARABONBA_PTR_SET_RVALUE(whiteList_, whiteList) };


  protected:
    std::shared_ptr<vector<string>> blackList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> domain_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<vector<string>> whiteList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
