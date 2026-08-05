// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTABLESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTABLESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchplat20240401
{
namespace Models
{
  class GetTablesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTablesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(params, params_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTablesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(params, params_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
    };
    GetTablesRequest() = default ;
    GetTablesRequest(const GetTablesRequest &) = default ;
    GetTablesRequest(GetTablesRequest &&) = default ;
    GetTablesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTablesRequest() = default ;
    GetTablesRequest& operator=(const GetTablesRequest &) = default ;
    GetTablesRequest& operator=(GetTablesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->params_ == nullptr
        && this->regionId_ == nullptr; };
    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline string getParams() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
    inline GetTablesRequest& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetTablesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The data source parameters.
    // 
    // This parameter is required.
    shared_ptr<string> params_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchplat20240401
#endif
