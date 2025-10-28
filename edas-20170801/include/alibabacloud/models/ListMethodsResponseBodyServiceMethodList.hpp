// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMETHODSRESPONSEBODYSERVICEMETHODLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTMETHODSRESPONSEBODYSERVICEMETHODLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListMethodsResponseBodyServiceMethodListServiceMethod.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListMethodsResponseBodyServiceMethodList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMethodsResponseBodyServiceMethodList& obj) { 
      DARABONBA_PTR_TO_JSON(ServiceMethod, serviceMethod_);
    };
    friend void from_json(const Darabonba::Json& j, ListMethodsResponseBodyServiceMethodList& obj) { 
      DARABONBA_PTR_FROM_JSON(ServiceMethod, serviceMethod_);
    };
    ListMethodsResponseBodyServiceMethodList() = default ;
    ListMethodsResponseBodyServiceMethodList(const ListMethodsResponseBodyServiceMethodList &) = default ;
    ListMethodsResponseBodyServiceMethodList(ListMethodsResponseBodyServiceMethodList &&) = default ;
    ListMethodsResponseBodyServiceMethodList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMethodsResponseBodyServiceMethodList() = default ;
    ListMethodsResponseBodyServiceMethodList& operator=(const ListMethodsResponseBodyServiceMethodList &) = default ;
    ListMethodsResponseBodyServiceMethodList& operator=(ListMethodsResponseBodyServiceMethodList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->serviceMethod_ == nullptr; };
    // serviceMethod Field Functions 
    bool hasServiceMethod() const { return this->serviceMethod_ != nullptr;};
    void deleteServiceMethod() { this->serviceMethod_ = nullptr;};
    inline const vector<Models::ListMethodsResponseBodyServiceMethodListServiceMethod> & serviceMethod() const { DARABONBA_PTR_GET_CONST(serviceMethod_, vector<Models::ListMethodsResponseBodyServiceMethodListServiceMethod>) };
    inline vector<Models::ListMethodsResponseBodyServiceMethodListServiceMethod> serviceMethod() { DARABONBA_PTR_GET(serviceMethod_, vector<Models::ListMethodsResponseBodyServiceMethodListServiceMethod>) };
    inline ListMethodsResponseBodyServiceMethodList& setServiceMethod(const vector<Models::ListMethodsResponseBodyServiceMethodListServiceMethod> & serviceMethod) { DARABONBA_PTR_SET_VALUE(serviceMethod_, serviceMethod) };
    inline ListMethodsResponseBodyServiceMethodList& setServiceMethod(vector<Models::ListMethodsResponseBodyServiceMethodListServiceMethod> && serviceMethod) { DARABONBA_PTR_SET_RVALUE(serviceMethod_, serviceMethod) };


  protected:
    std::shared_ptr<vector<Models::ListMethodsResponseBodyServiceMethodListServiceMethod>> serviceMethod_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
