// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINACCESSMODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINACCESSMODEREQUEST_HPP_
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
  class DescribeDomainAccessModeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainAccessModeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainList, domainList_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainAccessModeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainList, domainList_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
    };
    DescribeDomainAccessModeRequest() = default ;
    DescribeDomainAccessModeRequest(const DescribeDomainAccessModeRequest &) = default ;
    DescribeDomainAccessModeRequest(DescribeDomainAccessModeRequest &&) = default ;
    DescribeDomainAccessModeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainAccessModeRequest() = default ;
    DescribeDomainAccessModeRequest& operator=(const DescribeDomainAccessModeRequest &) = default ;
    DescribeDomainAccessModeRequest& operator=(DescribeDomainAccessModeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainList_ != nullptr
        && this->sourceIp_ != nullptr; };
    // domainList Field Functions 
    bool hasDomainList() const { return this->domainList_ != nullptr;};
    void deleteDomainList() { this->domainList_ = nullptr;};
    inline const vector<string> & domainList() const { DARABONBA_PTR_GET_CONST(domainList_, vector<string>) };
    inline vector<string> domainList() { DARABONBA_PTR_GET(domainList_, vector<string>) };
    inline DescribeDomainAccessModeRequest& setDomainList(const vector<string> & domainList) { DARABONBA_PTR_SET_VALUE(domainList_, domainList) };
    inline DescribeDomainAccessModeRequest& setDomainList(vector<string> && domainList) { DARABONBA_PTR_SET_RVALUE(domainList_, domainList) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeDomainAccessModeRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<string>> domainList_ = nullptr;
    std::shared_ptr<string> sourceIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
