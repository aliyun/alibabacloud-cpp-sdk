// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETCDNDOMAINSTAGINGCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SETCDNDOMAINSTAGINGCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SetCdnDomainStagingConfigResponseBodyDomainConfigList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class SetCdnDomainStagingConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetCdnDomainStagingConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainConfigList, domainConfigList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SetCdnDomainStagingConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainConfigList, domainConfigList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SetCdnDomainStagingConfigResponseBody() = default ;
    SetCdnDomainStagingConfigResponseBody(const SetCdnDomainStagingConfigResponseBody &) = default ;
    SetCdnDomainStagingConfigResponseBody(SetCdnDomainStagingConfigResponseBody &&) = default ;
    SetCdnDomainStagingConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetCdnDomainStagingConfigResponseBody() = default ;
    SetCdnDomainStagingConfigResponseBody& operator=(const SetCdnDomainStagingConfigResponseBody &) = default ;
    SetCdnDomainStagingConfigResponseBody& operator=(SetCdnDomainStagingConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainConfigList_ == nullptr
        && return this->requestId_ == nullptr; };
    // domainConfigList Field Functions 
    bool hasDomainConfigList() const { return this->domainConfigList_ != nullptr;};
    void deleteDomainConfigList() { this->domainConfigList_ = nullptr;};
    inline const vector<SetCdnDomainStagingConfigResponseBodyDomainConfigList> & domainConfigList() const { DARABONBA_PTR_GET_CONST(domainConfigList_, vector<SetCdnDomainStagingConfigResponseBodyDomainConfigList>) };
    inline vector<SetCdnDomainStagingConfigResponseBodyDomainConfigList> domainConfigList() { DARABONBA_PTR_GET(domainConfigList_, vector<SetCdnDomainStagingConfigResponseBodyDomainConfigList>) };
    inline SetCdnDomainStagingConfigResponseBody& setDomainConfigList(const vector<SetCdnDomainStagingConfigResponseBodyDomainConfigList> & domainConfigList) { DARABONBA_PTR_SET_VALUE(domainConfigList_, domainConfigList) };
    inline SetCdnDomainStagingConfigResponseBody& setDomainConfigList(vector<SetCdnDomainStagingConfigResponseBodyDomainConfigList> && domainConfigList) { DARABONBA_PTR_SET_RVALUE(domainConfigList_, domainConfigList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SetCdnDomainStagingConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of domain configurations.
    std::shared_ptr<vector<SetCdnDomainStagingConfigResponseBodyDomainConfigList>> domainConfigList_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
