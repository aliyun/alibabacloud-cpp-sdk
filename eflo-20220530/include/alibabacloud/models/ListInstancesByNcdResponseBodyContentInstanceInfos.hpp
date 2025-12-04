// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESBYNCDRESPONSEBODYCONTENTINSTANCEINFOS_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESBYNCDRESPONSEBODYCONTENTINSTANCEINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class ListInstancesByNcdResponseBodyContentInstanceInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesByNcdResponseBodyContentInstanceInfos& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Ncd, ncd_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesByNcdResponseBodyContentInstanceInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Ncd, ncd_);
    };
    ListInstancesByNcdResponseBodyContentInstanceInfos() = default ;
    ListInstancesByNcdResponseBodyContentInstanceInfos(const ListInstancesByNcdResponseBodyContentInstanceInfos &) = default ;
    ListInstancesByNcdResponseBodyContentInstanceInfos(ListInstancesByNcdResponseBodyContentInstanceInfos &&) = default ;
    ListInstancesByNcdResponseBodyContentInstanceInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesByNcdResponseBodyContentInstanceInfos() = default ;
    ListInstancesByNcdResponseBodyContentInstanceInfos& operator=(const ListInstancesByNcdResponseBodyContentInstanceInfos &) = default ;
    ListInstancesByNcdResponseBodyContentInstanceInfos& operator=(ListInstancesByNcdResponseBodyContentInstanceInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->ncd_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListInstancesByNcdResponseBodyContentInstanceInfos& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ncd Field Functions 
    bool hasNcd() const { return this->ncd_ != nullptr;};
    void deleteNcd() { this->ncd_ = nullptr;};
    inline int32_t ncd() const { DARABONBA_PTR_GET_DEFAULT(ncd_, 0) };
    inline ListInstancesByNcdResponseBodyContentInstanceInfos& setNcd(int32_t ncd) { DARABONBA_PTR_SET_VALUE(ncd_, ncd) };


  protected:
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // network communication distance
    std::shared_ptr<int32_t> ncd_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
