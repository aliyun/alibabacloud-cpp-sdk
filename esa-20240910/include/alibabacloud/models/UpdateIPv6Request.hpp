// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEIPV6REQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEIPV6REQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdateIPv6Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateIPv6Request& obj) { 
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateIPv6Request& obj) { 
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    UpdateIPv6Request() = default ;
    UpdateIPv6Request(const UpdateIPv6Request &) = default ;
    UpdateIPv6Request(UpdateIPv6Request &&) = default ;
    UpdateIPv6Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateIPv6Request() = default ;
    UpdateIPv6Request& operator=(const UpdateIPv6Request &) = default ;
    UpdateIPv6Request& operator=(UpdateIPv6Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enable_ == nullptr
        && this->region_ == nullptr && this->siteId_ == nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline string getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, "") };
    inline UpdateIPv6Request& setEnable(string enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline UpdateIPv6Request& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline UpdateIPv6Request& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // Specifies whether to enable IPv6. Valid values:
    // 
    // *   **on**
    // *   **off**
    // 
    // This parameter is required.
    shared_ptr<string> enable_ {};
    shared_ptr<string> region_ {};
    // The website ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
