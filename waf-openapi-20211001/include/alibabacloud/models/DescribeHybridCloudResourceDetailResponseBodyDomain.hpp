// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDRESOURCEDETAILRESPONSEBODYDOMAIN_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDRESOURCEDETAILRESPONSEBODYDOMAIN_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeHybridCloudResourceDetailResponseBodyDomainListen.hpp>
#include <alibabacloud/models/DescribeHybridCloudResourceDetailResponseBodyDomainRedirect.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeHybridCloudResourceDetailResponseBodyDomain : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridCloudResourceDetailResponseBodyDomain& obj) { 
      DARABONBA_PTR_TO_JSON(Cname, cname_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Listen, listen_);
      DARABONBA_PTR_TO_JSON(Redirect, redirect_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridCloudResourceDetailResponseBodyDomain& obj) { 
      DARABONBA_PTR_FROM_JSON(Cname, cname_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Listen, listen_);
      DARABONBA_PTR_FROM_JSON(Redirect, redirect_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
    };
    DescribeHybridCloudResourceDetailResponseBodyDomain() = default ;
    DescribeHybridCloudResourceDetailResponseBodyDomain(const DescribeHybridCloudResourceDetailResponseBodyDomain &) = default ;
    DescribeHybridCloudResourceDetailResponseBodyDomain(DescribeHybridCloudResourceDetailResponseBodyDomain &&) = default ;
    DescribeHybridCloudResourceDetailResponseBodyDomain(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridCloudResourceDetailResponseBodyDomain() = default ;
    DescribeHybridCloudResourceDetailResponseBodyDomain& operator=(const DescribeHybridCloudResourceDetailResponseBodyDomain &) = default ;
    DescribeHybridCloudResourceDetailResponseBodyDomain& operator=(DescribeHybridCloudResourceDetailResponseBodyDomain &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cname_ == nullptr
        && return this->domain_ == nullptr && return this->id_ == nullptr && return this->listen_ == nullptr && return this->redirect_ == nullptr && return this->resourceManagerResourceGroupId_ == nullptr
        && return this->status_ == nullptr && return this->uid_ == nullptr; };
    // cname Field Functions 
    bool hasCname() const { return this->cname_ != nullptr;};
    void deleteCname() { this->cname_ = nullptr;};
    inline string cname() const { DARABONBA_PTR_GET_DEFAULT(cname_, "") };
    inline DescribeHybridCloudResourceDetailResponseBodyDomain& setCname(string cname) { DARABONBA_PTR_SET_VALUE(cname_, cname) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeHybridCloudResourceDetailResponseBodyDomain& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeHybridCloudResourceDetailResponseBodyDomain& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // listen Field Functions 
    bool hasListen() const { return this->listen_ != nullptr;};
    void deleteListen() { this->listen_ = nullptr;};
    inline const Models::DescribeHybridCloudResourceDetailResponseBodyDomainListen & listen() const { DARABONBA_PTR_GET_CONST(listen_, Models::DescribeHybridCloudResourceDetailResponseBodyDomainListen) };
    inline Models::DescribeHybridCloudResourceDetailResponseBodyDomainListen listen() { DARABONBA_PTR_GET(listen_, Models::DescribeHybridCloudResourceDetailResponseBodyDomainListen) };
    inline DescribeHybridCloudResourceDetailResponseBodyDomain& setListen(const Models::DescribeHybridCloudResourceDetailResponseBodyDomainListen & listen) { DARABONBA_PTR_SET_VALUE(listen_, listen) };
    inline DescribeHybridCloudResourceDetailResponseBodyDomain& setListen(Models::DescribeHybridCloudResourceDetailResponseBodyDomainListen && listen) { DARABONBA_PTR_SET_RVALUE(listen_, listen) };


    // redirect Field Functions 
    bool hasRedirect() const { return this->redirect_ != nullptr;};
    void deleteRedirect() { this->redirect_ = nullptr;};
    inline const Models::DescribeHybridCloudResourceDetailResponseBodyDomainRedirect & redirect() const { DARABONBA_PTR_GET_CONST(redirect_, Models::DescribeHybridCloudResourceDetailResponseBodyDomainRedirect) };
    inline Models::DescribeHybridCloudResourceDetailResponseBodyDomainRedirect redirect() { DARABONBA_PTR_GET(redirect_, Models::DescribeHybridCloudResourceDetailResponseBodyDomainRedirect) };
    inline DescribeHybridCloudResourceDetailResponseBodyDomain& setRedirect(const Models::DescribeHybridCloudResourceDetailResponseBodyDomainRedirect & redirect) { DARABONBA_PTR_SET_VALUE(redirect_, redirect) };
    inline DescribeHybridCloudResourceDetailResponseBodyDomain& setRedirect(Models::DescribeHybridCloudResourceDetailResponseBodyDomainRedirect && redirect) { DARABONBA_PTR_SET_RVALUE(redirect_, redirect) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string resourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline DescribeHybridCloudResourceDetailResponseBodyDomain& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeHybridCloudResourceDetailResponseBodyDomain& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline DescribeHybridCloudResourceDetailResponseBodyDomain& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    // CNAME
    std::shared_ptr<string> cname_ = nullptr;
    std::shared_ptr<string> domain_ = nullptr;
    // id
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<Models::DescribeHybridCloudResourceDetailResponseBodyDomainListen> listen_ = nullptr;
    std::shared_ptr<Models::DescribeHybridCloudResourceDetailResponseBodyDomainRedirect> redirect_ = nullptr;
    std::shared_ptr<string> resourceManagerResourceGroupId_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> uid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
