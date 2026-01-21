// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMETRICRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEMETRICRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DeleteMetricRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMetricRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMetricRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteMetricRulesRequest() = default ;
    DeleteMetricRulesRequest(const DeleteMetricRulesRequest &) = default ;
    DeleteMetricRulesRequest(DeleteMetricRulesRequest &&) = default ;
    DeleteMetricRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMetricRulesRequest() = default ;
    DeleteMetricRulesRequest& operator=(const DeleteMetricRulesRequest &) = default ;
    DeleteMetricRulesRequest& operator=(DeleteMetricRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && this->regionId_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline const vector<string> & getId() const { DARABONBA_PTR_GET_CONST(id_, vector<string>) };
    inline vector<string> getId() { DARABONBA_PTR_GET(id_, vector<string>) };
    inline DeleteMetricRulesRequest& setId(const vector<string> & id) { DARABONBA_PTR_SET_VALUE(id_, id) };
    inline DeleteMetricRulesRequest& setId(vector<string> && id) { DARABONBA_PTR_SET_RVALUE(id_, id) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteMetricRulesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    shared_ptr<vector<string>> id_ {};
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
