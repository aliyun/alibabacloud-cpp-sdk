// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINFRAREDDEVICEBRANDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINFRAREDDEVICEBRANDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class ListInfraredDeviceBrandsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInfraredDeviceBrandsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(ServiceProvider, serviceProvider_);
    };
    friend void from_json(const Darabonba::Json& j, ListInfraredDeviceBrandsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(ServiceProvider, serviceProvider_);
    };
    ListInfraredDeviceBrandsRequest() = default ;
    ListInfraredDeviceBrandsRequest(const ListInfraredDeviceBrandsRequest &) = default ;
    ListInfraredDeviceBrandsRequest(ListInfraredDeviceBrandsRequest &&) = default ;
    ListInfraredDeviceBrandsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInfraredDeviceBrandsRequest() = default ;
    ListInfraredDeviceBrandsRequest& operator=(const ListInfraredDeviceBrandsRequest &) = default ;
    ListInfraredDeviceBrandsRequest& operator=(ListInfraredDeviceBrandsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && this->serviceProvider_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ListInfraredDeviceBrandsRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // serviceProvider Field Functions 
    bool hasServiceProvider() const { return this->serviceProvider_ != nullptr;};
    void deleteServiceProvider() { this->serviceProvider_ = nullptr;};
    inline string getServiceProvider() const { DARABONBA_PTR_GET_DEFAULT(serviceProvider_, "") };
    inline ListInfraredDeviceBrandsRequest& setServiceProvider(string serviceProvider) { DARABONBA_PTR_SET_VALUE(serviceProvider_, serviceProvider) };


  protected:
    // This parameter is required.
    shared_ptr<string> category_ {};
    shared_ptr<string> serviceProvider_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
