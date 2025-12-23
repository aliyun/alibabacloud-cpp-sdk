// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPLACEAPPGROUPCOMMODITYCODERESPONSEBODYRESULTQUOTA_HPP_
#define ALIBABACLOUD_MODELS_REPLACEAPPGROUPCOMMODITYCODERESPONSEBODYRESULTQUOTA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class ReplaceAppGroupCommodityCodeResponseBodyResultQuota : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReplaceAppGroupCommodityCodeResponseBodyResultQuota& obj) { 
      DARABONBA_PTR_TO_JSON(computeResource, computeResource_);
      DARABONBA_PTR_TO_JSON(docSize, docSize_);
      DARABONBA_PTR_TO_JSON(spec, spec_);
    };
    friend void from_json(const Darabonba::Json& j, ReplaceAppGroupCommodityCodeResponseBodyResultQuota& obj) { 
      DARABONBA_PTR_FROM_JSON(computeResource, computeResource_);
      DARABONBA_PTR_FROM_JSON(docSize, docSize_);
      DARABONBA_PTR_FROM_JSON(spec, spec_);
    };
    ReplaceAppGroupCommodityCodeResponseBodyResultQuota() = default ;
    ReplaceAppGroupCommodityCodeResponseBodyResultQuota(const ReplaceAppGroupCommodityCodeResponseBodyResultQuota &) = default ;
    ReplaceAppGroupCommodityCodeResponseBodyResultQuota(ReplaceAppGroupCommodityCodeResponseBodyResultQuota &&) = default ;
    ReplaceAppGroupCommodityCodeResponseBodyResultQuota(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReplaceAppGroupCommodityCodeResponseBodyResultQuota() = default ;
    ReplaceAppGroupCommodityCodeResponseBodyResultQuota& operator=(const ReplaceAppGroupCommodityCodeResponseBodyResultQuota &) = default ;
    ReplaceAppGroupCommodityCodeResponseBodyResultQuota& operator=(ReplaceAppGroupCommodityCodeResponseBodyResultQuota &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->computeResource_ == nullptr
        && return this->docSize_ == nullptr && return this->spec_ == nullptr; };
    // computeResource Field Functions 
    bool hasComputeResource() const { return this->computeResource_ != nullptr;};
    void deleteComputeResource() { this->computeResource_ = nullptr;};
    inline int32_t computeResource() const { DARABONBA_PTR_GET_DEFAULT(computeResource_, 0) };
    inline ReplaceAppGroupCommodityCodeResponseBodyResultQuota& setComputeResource(int32_t computeResource) { DARABONBA_PTR_SET_VALUE(computeResource_, computeResource) };


    // docSize Field Functions 
    bool hasDocSize() const { return this->docSize_ != nullptr;};
    void deleteDocSize() { this->docSize_ = nullptr;};
    inline int32_t docSize() const { DARABONBA_PTR_GET_DEFAULT(docSize_, 0) };
    inline ReplaceAppGroupCommodityCodeResponseBodyResultQuota& setDocSize(int32_t docSize) { DARABONBA_PTR_SET_VALUE(docSize_, docSize) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string spec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline ReplaceAppGroupCommodityCodeResponseBodyResultQuota& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


  protected:
    // The number of computing resources configured.
    std::shared_ptr<int32_t> computeResource_ = nullptr;
    // The storage capacity.
    std::shared_ptr<int32_t> docSize_ = nullptr;
    // The specifications configured.
    std::shared_ptr<string> spec_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
