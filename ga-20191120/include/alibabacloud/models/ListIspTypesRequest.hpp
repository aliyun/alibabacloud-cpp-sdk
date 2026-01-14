// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTISPTYPESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTISPTYPESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class ListIspTypesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIspTypesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_TO_JSON(AcceleratorType, acceleratorType_);
      DARABONBA_PTR_TO_JSON(BusinessRegionId, businessRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListIspTypesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_FROM_JSON(AcceleratorType, acceleratorType_);
      DARABONBA_PTR_FROM_JSON(BusinessRegionId, businessRegionId_);
    };
    ListIspTypesRequest() = default ;
    ListIspTypesRequest(const ListIspTypesRequest &) = default ;
    ListIspTypesRequest(ListIspTypesRequest &&) = default ;
    ListIspTypesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIspTypesRequest() = default ;
    ListIspTypesRequest& operator=(const ListIspTypesRequest &) = default ;
    ListIspTypesRequest& operator=(ListIspTypesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceleratorId_ == nullptr
        && this->acceleratorType_ == nullptr && this->businessRegionId_ == nullptr; };
    // acceleratorId Field Functions 
    bool hasAcceleratorId() const { return this->acceleratorId_ != nullptr;};
    void deleteAcceleratorId() { this->acceleratorId_ = nullptr;};
    inline string getAcceleratorId() const { DARABONBA_PTR_GET_DEFAULT(acceleratorId_, "") };
    inline ListIspTypesRequest& setAcceleratorId(string acceleratorId) { DARABONBA_PTR_SET_VALUE(acceleratorId_, acceleratorId) };


    // acceleratorType Field Functions 
    bool hasAcceleratorType() const { return this->acceleratorType_ != nullptr;};
    void deleteAcceleratorType() { this->acceleratorType_ = nullptr;};
    inline string getAcceleratorType() const { DARABONBA_PTR_GET_DEFAULT(acceleratorType_, "") };
    inline ListIspTypesRequest& setAcceleratorType(string acceleratorType) { DARABONBA_PTR_SET_VALUE(acceleratorType_, acceleratorType) };


    // businessRegionId Field Functions 
    bool hasBusinessRegionId() const { return this->businessRegionId_ != nullptr;};
    void deleteBusinessRegionId() { this->businessRegionId_ = nullptr;};
    inline string getBusinessRegionId() const { DARABONBA_PTR_GET_DEFAULT(businessRegionId_, "") };
    inline ListIspTypesRequest& setBusinessRegionId(string businessRegionId) { DARABONBA_PTR_SET_VALUE(businessRegionId_, businessRegionId) };


  protected:
    // The ID of the GA instance that you want to query.
    shared_ptr<string> acceleratorId_ {};
    // The type of the Global Accelerator (GA) instance to be queried. Valid values:
    // 
    // *   **basic**: basic GA instance
    // *   **standard**: standard GA instance
    shared_ptr<string> acceleratorType_ {};
    // The ID of the acceleration region to be queried.
    // 
    // This parameter is required.
    shared_ptr<string> businessRegionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
