// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYQUOTARESPONSEBODYDATASALETAG_HPP_
#define ALIBABACLOUD_MODELS_QUERYQUOTARESPONSEBODYDATASALETAG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class QueryQuotaResponseBodyDataSaleTag : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryQuotaResponseBodyDataSaleTag& obj) { 
      DARABONBA_PTR_TO_JSON(resourceIds, resourceIds_);
      DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, QueryQuotaResponseBodyDataSaleTag& obj) { 
      DARABONBA_PTR_FROM_JSON(resourceIds, resourceIds_);
      DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
    };
    QueryQuotaResponseBodyDataSaleTag() = default ;
    QueryQuotaResponseBodyDataSaleTag(const QueryQuotaResponseBodyDataSaleTag &) = default ;
    QueryQuotaResponseBodyDataSaleTag(QueryQuotaResponseBodyDataSaleTag &&) = default ;
    QueryQuotaResponseBodyDataSaleTag(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryQuotaResponseBodyDataSaleTag() = default ;
    QueryQuotaResponseBodyDataSaleTag& operator=(const QueryQuotaResponseBodyDataSaleTag &) = default ;
    QueryQuotaResponseBodyDataSaleTag& operator=(QueryQuotaResponseBodyDataSaleTag &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resourceIds_ != nullptr
        && this->resourceType_ != nullptr; };
    // resourceIds Field Functions 
    bool hasResourceIds() const { return this->resourceIds_ != nullptr;};
    void deleteResourceIds() { this->resourceIds_ = nullptr;};
    inline const vector<string> & resourceIds() const { DARABONBA_PTR_GET_CONST(resourceIds_, vector<string>) };
    inline vector<string> resourceIds() { DARABONBA_PTR_GET(resourceIds_, vector<string>) };
    inline QueryQuotaResponseBodyDataSaleTag& setResourceIds(const vector<string> & resourceIds) { DARABONBA_PTR_SET_VALUE(resourceIds_, resourceIds) };
    inline QueryQuotaResponseBodyDataSaleTag& setResourceIds(vector<string> && resourceIds) { DARABONBA_PTR_SET_RVALUE(resourceIds_, resourceIds) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline QueryQuotaResponseBodyDataSaleTag& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The identifier of a MaxCompute quota object. This identifier exists in the Alibaba Cloud sales bill. You can use this identifier to associate the cost of a quota object with a tag.
    std::shared_ptr<vector<string>> resourceIds_ = nullptr;
    // The object type. Valid values: quota and project.
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
