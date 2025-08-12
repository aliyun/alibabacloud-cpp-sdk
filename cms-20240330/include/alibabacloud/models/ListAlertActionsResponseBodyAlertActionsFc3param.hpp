// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTACTIONSRESPONSEBODYALERTACTIONSFC3PARAM_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTACTIONSRESPONSEBODYALERTACTIONSFC3PARAM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListAlertActionsResponseBodyAlertActionsFc3Param : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertActionsResponseBodyAlertActionsFc3Param& obj) { 
      DARABONBA_PTR_TO_JSON(function, function_);
      DARABONBA_PTR_TO_JSON(qualifier, qualifier_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlertActionsResponseBodyAlertActionsFc3Param& obj) { 
      DARABONBA_PTR_FROM_JSON(function, function_);
      DARABONBA_PTR_FROM_JSON(qualifier, qualifier_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
    };
    ListAlertActionsResponseBodyAlertActionsFc3Param() = default ;
    ListAlertActionsResponseBodyAlertActionsFc3Param(const ListAlertActionsResponseBodyAlertActionsFc3Param &) = default ;
    ListAlertActionsResponseBodyAlertActionsFc3Param(ListAlertActionsResponseBodyAlertActionsFc3Param &&) = default ;
    ListAlertActionsResponseBodyAlertActionsFc3Param(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertActionsResponseBodyAlertActionsFc3Param() = default ;
    ListAlertActionsResponseBodyAlertActionsFc3Param& operator=(const ListAlertActionsResponseBodyAlertActionsFc3Param &) = default ;
    ListAlertActionsResponseBodyAlertActionsFc3Param& operator=(ListAlertActionsResponseBodyAlertActionsFc3Param &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->function_ != nullptr
        && this->qualifier_ != nullptr && this->regionId_ != nullptr; };
    // function Field Functions 
    bool hasFunction() const { return this->function_ != nullptr;};
    void deleteFunction() { this->function_ = nullptr;};
    inline string function() const { DARABONBA_PTR_GET_DEFAULT(function_, "") };
    inline ListAlertActionsResponseBodyAlertActionsFc3Param& setFunction(string function) { DARABONBA_PTR_SET_VALUE(function_, function) };


    // qualifier Field Functions 
    bool hasQualifier() const { return this->qualifier_ != nullptr;};
    void deleteQualifier() { this->qualifier_ = nullptr;};
    inline string qualifier() const { DARABONBA_PTR_GET_DEFAULT(qualifier_, "") };
    inline ListAlertActionsResponseBodyAlertActionsFc3Param& setQualifier(string qualifier) { DARABONBA_PTR_SET_VALUE(qualifier_, qualifier) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListAlertActionsResponseBodyAlertActionsFc3Param& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    std::shared_ptr<string> function_ = nullptr;
    std::shared_ptr<string> qualifier_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
