// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListInstanceResponseBodyDataInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class ListInstanceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Instances, instances_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
    };
    ListInstanceResponseBodyData() = default ;
    ListInstanceResponseBodyData(const ListInstanceResponseBodyData &) = default ;
    ListInstanceResponseBodyData(ListInstanceResponseBodyData &&) = default ;
    ListInstanceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceResponseBodyData() = default ;
    ListInstanceResponseBodyData& operator=(const ListInstanceResponseBodyData &) = default ;
    ListInstanceResponseBodyData& operator=(ListInstanceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instances_ == nullptr; };
    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<Models::ListInstanceResponseBodyDataInstances> & instances() const { DARABONBA_PTR_GET_CONST(instances_, vector<Models::ListInstanceResponseBodyDataInstances>) };
    inline vector<Models::ListInstanceResponseBodyDataInstances> instances() { DARABONBA_PTR_GET(instances_, vector<Models::ListInstanceResponseBodyDataInstances>) };
    inline ListInstanceResponseBodyData& setInstances(const vector<Models::ListInstanceResponseBodyDataInstances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline ListInstanceResponseBodyData& setInstances(vector<Models::ListInstanceResponseBodyDataInstances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


  protected:
    std::shared_ptr<vector<Models::ListInstanceResponseBodyDataInstances>> instances_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
