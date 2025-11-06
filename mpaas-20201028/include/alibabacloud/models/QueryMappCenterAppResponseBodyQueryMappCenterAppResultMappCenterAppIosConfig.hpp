// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMAPPCENTERAPPRESPONSEBODYQUERYMAPPCENTERAPPRESULTMAPPCENTERAPPIOSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_QUERYMAPPCENTERAPPRESPONSEBODYQUERYMAPPCENTERAPPRESULTMAPPCENTERAPPIOSCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class QueryMappCenterAppResponseBodyQueryMappCenterAppResultMappCenterAppIosConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMappCenterAppResponseBodyQueryMappCenterAppResultMappCenterAppIosConfig& obj) { 
      DARABONBA_PTR_TO_JSON(BundleId, bundleId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMappCenterAppResponseBodyQueryMappCenterAppResultMappCenterAppIosConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(BundleId, bundleId_);
    };
    QueryMappCenterAppResponseBodyQueryMappCenterAppResultMappCenterAppIosConfig() = default ;
    QueryMappCenterAppResponseBodyQueryMappCenterAppResultMappCenterAppIosConfig(const QueryMappCenterAppResponseBodyQueryMappCenterAppResultMappCenterAppIosConfig &) = default ;
    QueryMappCenterAppResponseBodyQueryMappCenterAppResultMappCenterAppIosConfig(QueryMappCenterAppResponseBodyQueryMappCenterAppResultMappCenterAppIosConfig &&) = default ;
    QueryMappCenterAppResponseBodyQueryMappCenterAppResultMappCenterAppIosConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMappCenterAppResponseBodyQueryMappCenterAppResultMappCenterAppIosConfig() = default ;
    QueryMappCenterAppResponseBodyQueryMappCenterAppResultMappCenterAppIosConfig& operator=(const QueryMappCenterAppResponseBodyQueryMappCenterAppResultMappCenterAppIosConfig &) = default ;
    QueryMappCenterAppResponseBodyQueryMappCenterAppResultMappCenterAppIosConfig& operator=(QueryMappCenterAppResponseBodyQueryMappCenterAppResultMappCenterAppIosConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bundleId_ == nullptr; };
    // bundleId Field Functions 
    bool hasBundleId() const { return this->bundleId_ != nullptr;};
    void deleteBundleId() { this->bundleId_ = nullptr;};
    inline string bundleId() const { DARABONBA_PTR_GET_DEFAULT(bundleId_, "") };
    inline QueryMappCenterAppResponseBodyQueryMappCenterAppResultMappCenterAppIosConfig& setBundleId(string bundleId) { DARABONBA_PTR_SET_VALUE(bundleId_, bundleId) };


  protected:
    std::shared_ptr<string> bundleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
