// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECNAMEFLATTENINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECNAMEFLATTENINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdateCnameFlatteningRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCnameFlatteningRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FlattenMode, flattenMode_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCnameFlatteningRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FlattenMode, flattenMode_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    UpdateCnameFlatteningRequest() = default ;
    UpdateCnameFlatteningRequest(const UpdateCnameFlatteningRequest &) = default ;
    UpdateCnameFlatteningRequest(UpdateCnameFlatteningRequest &&) = default ;
    UpdateCnameFlatteningRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCnameFlatteningRequest() = default ;
    UpdateCnameFlatteningRequest& operator=(const UpdateCnameFlatteningRequest &) = default ;
    UpdateCnameFlatteningRequest& operator=(UpdateCnameFlatteningRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->flattenMode_ == nullptr
        && return this->siteId_ == nullptr; };
    // flattenMode Field Functions 
    bool hasFlattenMode() const { return this->flattenMode_ != nullptr;};
    void deleteFlattenMode() { this->flattenMode_ = nullptr;};
    inline string flattenMode() const { DARABONBA_PTR_GET_DEFAULT(flattenMode_, "") };
    inline UpdateCnameFlatteningRequest& setFlattenMode(string flattenMode) { DARABONBA_PTR_SET_VALUE(flattenMode_, flattenMode) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline UpdateCnameFlatteningRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // The CNAME flattening mode. Valid values:
    // 
    // *   flatten_all: flattens all CNAMEs.
    // *   flatten_at_root: flattens only the root domain. Default: flatten_at_root
    // 
    // This parameter is required.
    std::shared_ptr<string> flattenMode_ = nullptr;
    // The website ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> siteId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
