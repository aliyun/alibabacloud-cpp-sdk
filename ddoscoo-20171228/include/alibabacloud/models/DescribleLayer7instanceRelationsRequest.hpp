// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBLELAYER7INSTANCERELATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBLELAYER7INSTANCERELATIONSREQUEST_HPP_
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
  class DescribleLayer7InstanceRelationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribleLayer7InstanceRelationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainList, domainList_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribleLayer7InstanceRelationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainList, domainList_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
    };
    DescribleLayer7InstanceRelationsRequest() = default ;
    DescribleLayer7InstanceRelationsRequest(const DescribleLayer7InstanceRelationsRequest &) = default ;
    DescribleLayer7InstanceRelationsRequest(DescribleLayer7InstanceRelationsRequest &&) = default ;
    DescribleLayer7InstanceRelationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribleLayer7InstanceRelationsRequest() = default ;
    DescribleLayer7InstanceRelationsRequest& operator=(const DescribleLayer7InstanceRelationsRequest &) = default ;
    DescribleLayer7InstanceRelationsRequest& operator=(DescribleLayer7InstanceRelationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainList_ != nullptr
        && this->resourceGroupId_ != nullptr && this->sourceIp_ != nullptr; };
    // domainList Field Functions 
    bool hasDomainList() const { return this->domainList_ != nullptr;};
    void deleteDomainList() { this->domainList_ = nullptr;};
    inline const vector<string> & domainList() const { DARABONBA_PTR_GET_CONST(domainList_, vector<string>) };
    inline vector<string> domainList() { DARABONBA_PTR_GET(domainList_, vector<string>) };
    inline DescribleLayer7InstanceRelationsRequest& setDomainList(const vector<string> & domainList) { DARABONBA_PTR_SET_VALUE(domainList_, domainList) };
    inline DescribleLayer7InstanceRelationsRequest& setDomainList(vector<string> && domainList) { DARABONBA_PTR_SET_RVALUE(domainList_, domainList) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribleLayer7InstanceRelationsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribleLayer7InstanceRelationsRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<string>> domainList_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> sourceIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
