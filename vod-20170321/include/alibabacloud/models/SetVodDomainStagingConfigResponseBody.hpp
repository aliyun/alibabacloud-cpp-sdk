// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETVODDOMAINSTAGINGCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SETVODDOMAINSTAGINGCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SetVodDomainStagingConfigResponseBodyDomainConfigList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SetVodDomainStagingConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetVodDomainStagingConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainConfigList, domainConfigList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SetVodDomainStagingConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainConfigList, domainConfigList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SetVodDomainStagingConfigResponseBody() = default ;
    SetVodDomainStagingConfigResponseBody(const SetVodDomainStagingConfigResponseBody &) = default ;
    SetVodDomainStagingConfigResponseBody(SetVodDomainStagingConfigResponseBody &&) = default ;
    SetVodDomainStagingConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetVodDomainStagingConfigResponseBody() = default ;
    SetVodDomainStagingConfigResponseBody& operator=(const SetVodDomainStagingConfigResponseBody &) = default ;
    SetVodDomainStagingConfigResponseBody& operator=(SetVodDomainStagingConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainConfigList_ != nullptr
        && this->requestId_ != nullptr; };
    // domainConfigList Field Functions 
    bool hasDomainConfigList() const { return this->domainConfigList_ != nullptr;};
    void deleteDomainConfigList() { this->domainConfigList_ = nullptr;};
    inline const vector<SetVodDomainStagingConfigResponseBodyDomainConfigList> & domainConfigList() const { DARABONBA_PTR_GET_CONST(domainConfigList_, vector<SetVodDomainStagingConfigResponseBodyDomainConfigList>) };
    inline vector<SetVodDomainStagingConfigResponseBodyDomainConfigList> domainConfigList() { DARABONBA_PTR_GET(domainConfigList_, vector<SetVodDomainStagingConfigResponseBodyDomainConfigList>) };
    inline SetVodDomainStagingConfigResponseBody& setDomainConfigList(const vector<SetVodDomainStagingConfigResponseBodyDomainConfigList> & domainConfigList) { DARABONBA_PTR_SET_VALUE(domainConfigList_, domainConfigList) };
    inline SetVodDomainStagingConfigResponseBody& setDomainConfigList(vector<SetVodDomainStagingConfigResponseBodyDomainConfigList> && domainConfigList) { DARABONBA_PTR_SET_RVALUE(domainConfigList_, domainConfigList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SetVodDomainStagingConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<SetVodDomainStagingConfigResponseBodyDomainConfigList>> domainConfigList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
