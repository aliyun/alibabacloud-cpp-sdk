// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPODSOFINSTANCERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTPODSOFINSTANCERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class ListPodsOfInstanceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPodsOfInstanceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(pod, pod_);
    };
    friend void from_json(const Darabonba::Json& j, ListPodsOfInstanceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(pod, pod_);
    };
    ListPodsOfInstanceResponseBodyData() = default ;
    ListPodsOfInstanceResponseBodyData(const ListPodsOfInstanceResponseBodyData &) = default ;
    ListPodsOfInstanceResponseBodyData(ListPodsOfInstanceResponseBodyData &&) = default ;
    ListPodsOfInstanceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPodsOfInstanceResponseBodyData() = default ;
    ListPodsOfInstanceResponseBodyData& operator=(const ListPodsOfInstanceResponseBodyData &) = default ;
    ListPodsOfInstanceResponseBodyData& operator=(ListPodsOfInstanceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->namespace_ == nullptr
        && return this->pod_ == nullptr; };
    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ListPodsOfInstanceResponseBodyData& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // pod Field Functions 
    bool hasPod() const { return this->pod_ != nullptr;};
    void deletePod() { this->pod_ = nullptr;};
    inline string pod() const { DARABONBA_PTR_GET_DEFAULT(pod_, "") };
    inline ListPodsOfInstanceResponseBodyData& setPod(string pod) { DARABONBA_PTR_SET_VALUE(pod_, pod) };


  protected:
    std::shared_ptr<string> namespace_ = nullptr;
    std::shared_ptr<string> pod_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
