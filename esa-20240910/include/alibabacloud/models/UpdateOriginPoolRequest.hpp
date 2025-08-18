// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEORIGINPOOLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEORIGINPOOLREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateOriginPoolRequestOrigins.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdateOriginPoolRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateOriginPoolRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Origins, origins_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateOriginPoolRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Origins, origins_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    UpdateOriginPoolRequest() = default ;
    UpdateOriginPoolRequest(const UpdateOriginPoolRequest &) = default ;
    UpdateOriginPoolRequest(UpdateOriginPoolRequest &&) = default ;
    UpdateOriginPoolRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateOriginPoolRequest() = default ;
    UpdateOriginPoolRequest& operator=(const UpdateOriginPoolRequest &) = default ;
    UpdateOriginPoolRequest& operator=(UpdateOriginPoolRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enabled_ != nullptr
        && this->id_ != nullptr && this->origins_ != nullptr && this->siteId_ != nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline UpdateOriginPoolRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateOriginPoolRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // origins Field Functions 
    bool hasOrigins() const { return this->origins_ != nullptr;};
    void deleteOrigins() { this->origins_ = nullptr;};
    inline const vector<UpdateOriginPoolRequestOrigins> & origins() const { DARABONBA_PTR_GET_CONST(origins_, vector<UpdateOriginPoolRequestOrigins>) };
    inline vector<UpdateOriginPoolRequestOrigins> origins() { DARABONBA_PTR_GET(origins_, vector<UpdateOriginPoolRequestOrigins>) };
    inline UpdateOriginPoolRequest& setOrigins(const vector<UpdateOriginPoolRequestOrigins> & origins) { DARABONBA_PTR_SET_VALUE(origins_, origins) };
    inline UpdateOriginPoolRequest& setOrigins(vector<UpdateOriginPoolRequestOrigins> && origins) { DARABONBA_PTR_SET_RVALUE(origins_, origins) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline UpdateOriginPoolRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // Whether the origin pool is enabled:
    // 
    // - true: Enabled;
    // - false: Disabled.
    std::shared_ptr<bool> enabled_ = nullptr;
    // The ID of the origin pool, which can be obtained by calling the [ListOriginPools](https://help.aliyun.com/document_detail/2863947.html) interface.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Information about the origins added to the origin pool. Multiple origins are passed as an array.
    std::shared_ptr<vector<UpdateOriginPoolRequestOrigins>> origins_ = nullptr;
    // The site ID, which can be obtained by calling the [ListSites](~~ListSites~~) interface.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> siteId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
