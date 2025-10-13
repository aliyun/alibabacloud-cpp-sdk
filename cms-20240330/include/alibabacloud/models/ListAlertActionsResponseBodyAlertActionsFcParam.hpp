// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTACTIONSRESPONSEBODYALERTACTIONSFCPARAM_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTACTIONSRESPONSEBODYALERTACTIONSFCPARAM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListAlertActionsResponseBodyAlertActionsFcParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertActionsResponseBodyAlertActionsFcParam& obj) { 
      DARABONBA_PTR_TO_JSON(function, function_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(service, service_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlertActionsResponseBodyAlertActionsFcParam& obj) { 
      DARABONBA_PTR_FROM_JSON(function, function_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(service, service_);
    };
    ListAlertActionsResponseBodyAlertActionsFcParam() = default ;
    ListAlertActionsResponseBodyAlertActionsFcParam(const ListAlertActionsResponseBodyAlertActionsFcParam &) = default ;
    ListAlertActionsResponseBodyAlertActionsFcParam(ListAlertActionsResponseBodyAlertActionsFcParam &&) = default ;
    ListAlertActionsResponseBodyAlertActionsFcParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertActionsResponseBodyAlertActionsFcParam() = default ;
    ListAlertActionsResponseBodyAlertActionsFcParam& operator=(const ListAlertActionsResponseBodyAlertActionsFcParam &) = default ;
    ListAlertActionsResponseBodyAlertActionsFcParam& operator=(ListAlertActionsResponseBodyAlertActionsFcParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->function_ == nullptr
        && return this->regionId_ == nullptr && return this->service_ == nullptr; };
    // function Field Functions 
    bool hasFunction() const { return this->function_ != nullptr;};
    void deleteFunction() { this->function_ = nullptr;};
    inline string function() const { DARABONBA_PTR_GET_DEFAULT(function_, "") };
    inline ListAlertActionsResponseBodyAlertActionsFcParam& setFunction(string function) { DARABONBA_PTR_SET_VALUE(function_, function) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListAlertActionsResponseBodyAlertActionsFcParam& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // service Field Functions 
    bool hasService() const { return this->service_ != nullptr;};
    void deleteService() { this->service_ = nullptr;};
    inline string service() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
    inline ListAlertActionsResponseBodyAlertActionsFcParam& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


  protected:
    std::shared_ptr<string> function_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> service_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
