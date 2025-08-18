// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETORIGINPOOLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETORIGINPOOLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetOriginPoolRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOriginPoolRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, GetOriginPoolRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    GetOriginPoolRequest() = default ;
    GetOriginPoolRequest(const GetOriginPoolRequest &) = default ;
    GetOriginPoolRequest(GetOriginPoolRequest &&) = default ;
    GetOriginPoolRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOriginPoolRequest() = default ;
    GetOriginPoolRequest& operator=(const GetOriginPoolRequest &) = default ;
    GetOriginPoolRequest& operator=(GetOriginPoolRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->siteId_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetOriginPoolRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline GetOriginPoolRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // The ID of the origin pool, which can be obtained by calling the [ListOriginPools](https://help.aliyun.com/document_detail/2863947.html) interface.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The ID of the site, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) interface.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> siteId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
