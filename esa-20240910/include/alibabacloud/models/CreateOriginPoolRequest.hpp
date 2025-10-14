// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORIGINPOOLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEORIGINPOOLREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateOriginPoolRequestOrigins.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateOriginPoolRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOriginPoolRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Origins, origins_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOriginPoolRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Origins, origins_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    CreateOriginPoolRequest() = default ;
    CreateOriginPoolRequest(const CreateOriginPoolRequest &) = default ;
    CreateOriginPoolRequest(CreateOriginPoolRequest &&) = default ;
    CreateOriginPoolRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOriginPoolRequest() = default ;
    CreateOriginPoolRequest& operator=(const CreateOriginPoolRequest &) = default ;
    CreateOriginPoolRequest& operator=(CreateOriginPoolRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enabled_ == nullptr
        && return this->name_ == nullptr && return this->origins_ == nullptr && return this->siteId_ == nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline CreateOriginPoolRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateOriginPoolRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // origins Field Functions 
    bool hasOrigins() const { return this->origins_ != nullptr;};
    void deleteOrigins() { this->origins_ = nullptr;};
    inline const vector<CreateOriginPoolRequestOrigins> & origins() const { DARABONBA_PTR_GET_CONST(origins_, vector<CreateOriginPoolRequestOrigins>) };
    inline vector<CreateOriginPoolRequestOrigins> origins() { DARABONBA_PTR_GET(origins_, vector<CreateOriginPoolRequestOrigins>) };
    inline CreateOriginPoolRequest& setOrigins(const vector<CreateOriginPoolRequestOrigins> & origins) { DARABONBA_PTR_SET_VALUE(origins_, origins) };
    inline CreateOriginPoolRequest& setOrigins(vector<CreateOriginPoolRequestOrigins> && origins) { DARABONBA_PTR_SET_RVALUE(origins_, origins) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline CreateOriginPoolRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // Whether the origin address pool is enabled:
    // 
    // - true: Enabled;
    // - false: Disabled.
    std::shared_ptr<bool> enabled_ = nullptr;
    // The name of the origin address pool, which must be unique within a site.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // Information about the origins added to the origin address pool, with multiple origins passed as an array.
    std::shared_ptr<vector<CreateOriginPoolRequestOrigins>> origins_ = nullptr;
    // The site ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) API.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> siteId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
