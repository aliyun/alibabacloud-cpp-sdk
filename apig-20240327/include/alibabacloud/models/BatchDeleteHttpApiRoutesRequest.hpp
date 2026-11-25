// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHDELETEHTTPAPIROUTESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHDELETEHTTPAPIROUTESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class BatchDeleteHttpApiRoutesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchDeleteHttpApiRoutesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(deleteAll, deleteAll_);
      DARABONBA_PTR_TO_JSON(routeIds, routeIds_);
    };
    friend void from_json(const Darabonba::Json& j, BatchDeleteHttpApiRoutesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(deleteAll, deleteAll_);
      DARABONBA_PTR_FROM_JSON(routeIds, routeIds_);
    };
    BatchDeleteHttpApiRoutesRequest() = default ;
    BatchDeleteHttpApiRoutesRequest(const BatchDeleteHttpApiRoutesRequest &) = default ;
    BatchDeleteHttpApiRoutesRequest(BatchDeleteHttpApiRoutesRequest &&) = default ;
    BatchDeleteHttpApiRoutesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchDeleteHttpApiRoutesRequest() = default ;
    BatchDeleteHttpApiRoutesRequest& operator=(const BatchDeleteHttpApiRoutesRequest &) = default ;
    BatchDeleteHttpApiRoutesRequest& operator=(BatchDeleteHttpApiRoutesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deleteAll_ == nullptr
        && this->routeIds_ == nullptr; };
    // deleteAll Field Functions 
    bool hasDeleteAll() const { return this->deleteAll_ != nullptr;};
    void deleteDeleteAll() { this->deleteAll_ = nullptr;};
    inline bool getDeleteAll() const { DARABONBA_PTR_GET_DEFAULT(deleteAll_, false) };
    inline BatchDeleteHttpApiRoutesRequest& setDeleteAll(bool deleteAll) { DARABONBA_PTR_SET_VALUE(deleteAll_, deleteAll) };


    // routeIds Field Functions 
    bool hasRouteIds() const { return this->routeIds_ != nullptr;};
    void deleteRouteIds() { this->routeIds_ = nullptr;};
    inline const vector<string> & getRouteIds() const { DARABONBA_PTR_GET_CONST(routeIds_, vector<string>) };
    inline vector<string> getRouteIds() { DARABONBA_PTR_GET(routeIds_, vector<string>) };
    inline BatchDeleteHttpApiRoutesRequest& setRouteIds(const vector<string> & routeIds) { DARABONBA_PTR_SET_VALUE(routeIds_, routeIds) };
    inline BatchDeleteHttpApiRoutesRequest& setRouteIds(vector<string> && routeIds) { DARABONBA_PTR_SET_RVALUE(routeIds_, routeIds) };


  protected:
    shared_ptr<bool> deleteAll_ {};
    shared_ptr<vector<string>> routeIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
