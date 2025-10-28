// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONVERTABLEECURESPONSEBODYINSTANCELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTCONVERTABLEECURESPONSEBODYINSTANCELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListConvertableEcuResponseBodyInstanceListInstance.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListConvertableEcuResponseBodyInstanceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConvertableEcuResponseBodyInstanceList& obj) { 
      DARABONBA_PTR_TO_JSON(Instance, instance_);
    };
    friend void from_json(const Darabonba::Json& j, ListConvertableEcuResponseBodyInstanceList& obj) { 
      DARABONBA_PTR_FROM_JSON(Instance, instance_);
    };
    ListConvertableEcuResponseBodyInstanceList() = default ;
    ListConvertableEcuResponseBodyInstanceList(const ListConvertableEcuResponseBodyInstanceList &) = default ;
    ListConvertableEcuResponseBodyInstanceList(ListConvertableEcuResponseBodyInstanceList &&) = default ;
    ListConvertableEcuResponseBodyInstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConvertableEcuResponseBodyInstanceList() = default ;
    ListConvertableEcuResponseBodyInstanceList& operator=(const ListConvertableEcuResponseBodyInstanceList &) = default ;
    ListConvertableEcuResponseBodyInstanceList& operator=(ListConvertableEcuResponseBodyInstanceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instance_ == nullptr; };
    // instance Field Functions 
    bool hasInstance() const { return this->instance_ != nullptr;};
    void deleteInstance() { this->instance_ = nullptr;};
    inline const vector<Models::ListConvertableEcuResponseBodyInstanceListInstance> & instance() const { DARABONBA_PTR_GET_CONST(instance_, vector<Models::ListConvertableEcuResponseBodyInstanceListInstance>) };
    inline vector<Models::ListConvertableEcuResponseBodyInstanceListInstance> instance() { DARABONBA_PTR_GET(instance_, vector<Models::ListConvertableEcuResponseBodyInstanceListInstance>) };
    inline ListConvertableEcuResponseBodyInstanceList& setInstance(const vector<Models::ListConvertableEcuResponseBodyInstanceListInstance> & instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };
    inline ListConvertableEcuResponseBodyInstanceList& setInstance(vector<Models::ListConvertableEcuResponseBodyInstanceListInstance> && instance) { DARABONBA_PTR_SET_RVALUE(instance_, instance) };


  protected:
    std::shared_ptr<vector<Models::ListConvertableEcuResponseBodyInstanceListInstance>> instance_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
