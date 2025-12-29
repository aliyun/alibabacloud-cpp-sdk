// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYBLACKLISTSTRATEGYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYBLACKLISTSTRATEGYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class QueryBlackListStrategyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryBlackListStrategyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryBlackListStrategyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    QueryBlackListStrategyRequest() = default ;
    QueryBlackListStrategyRequest(const QueryBlackListStrategyRequest &) = default ;
    QueryBlackListStrategyRequest(QueryBlackListStrategyRequest &&) = default ;
    QueryBlackListStrategyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryBlackListStrategyRequest() = default ;
    QueryBlackListStrategyRequest& operator=(const QueryBlackListStrategyRequest &) = default ;
    QueryBlackListStrategyRequest& operator=(QueryBlackListStrategyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline QueryBlackListStrategyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Region ID
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
