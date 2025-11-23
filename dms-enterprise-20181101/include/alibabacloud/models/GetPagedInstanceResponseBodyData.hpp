// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPAGEDINSTANCERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETPAGEDINSTANCERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetPagedInstanceResponseBodyDataInstance.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetPagedInstanceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPagedInstanceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Instance, instance_);
    };
    friend void from_json(const Darabonba::Json& j, GetPagedInstanceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Instance, instance_);
    };
    GetPagedInstanceResponseBodyData() = default ;
    GetPagedInstanceResponseBodyData(const GetPagedInstanceResponseBodyData &) = default ;
    GetPagedInstanceResponseBodyData(GetPagedInstanceResponseBodyData &&) = default ;
    GetPagedInstanceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPagedInstanceResponseBodyData() = default ;
    GetPagedInstanceResponseBodyData& operator=(const GetPagedInstanceResponseBodyData &) = default ;
    GetPagedInstanceResponseBodyData& operator=(GetPagedInstanceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instance_ == nullptr; };
    // instance Field Functions 
    bool hasInstance() const { return this->instance_ != nullptr;};
    void deleteInstance() { this->instance_ = nullptr;};
    inline const vector<Models::GetPagedInstanceResponseBodyDataInstance> & instance() const { DARABONBA_PTR_GET_CONST(instance_, vector<Models::GetPagedInstanceResponseBodyDataInstance>) };
    inline vector<Models::GetPagedInstanceResponseBodyDataInstance> instance() { DARABONBA_PTR_GET(instance_, vector<Models::GetPagedInstanceResponseBodyDataInstance>) };
    inline GetPagedInstanceResponseBodyData& setInstance(const vector<Models::GetPagedInstanceResponseBodyDataInstance> & instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };
    inline GetPagedInstanceResponseBodyData& setInstance(vector<Models::GetPagedInstanceResponseBodyDataInstance> && instance) { DARABONBA_PTR_SET_RVALUE(instance_, instance) };


  protected:
    // The information about the task.
    std::shared_ptr<vector<Models::GetPagedInstanceResponseBodyDataInstance>> instance_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
