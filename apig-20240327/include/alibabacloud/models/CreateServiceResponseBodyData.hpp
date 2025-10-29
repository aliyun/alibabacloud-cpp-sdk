// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVICERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVICERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreateServiceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServiceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(serviceIds, serviceIds_);
    };
    friend void from_json(const Darabonba::Json& j, CreateServiceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(serviceIds, serviceIds_);
    };
    CreateServiceResponseBodyData() = default ;
    CreateServiceResponseBodyData(const CreateServiceResponseBodyData &) = default ;
    CreateServiceResponseBodyData(CreateServiceResponseBodyData &&) = default ;
    CreateServiceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateServiceResponseBodyData() = default ;
    CreateServiceResponseBodyData& operator=(const CreateServiceResponseBodyData &) = default ;
    CreateServiceResponseBodyData& operator=(CreateServiceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->serviceIds_ == nullptr; };
    // serviceIds Field Functions 
    bool hasServiceIds() const { return this->serviceIds_ != nullptr;};
    void deleteServiceIds() { this->serviceIds_ = nullptr;};
    inline const vector<string> & serviceIds() const { DARABONBA_PTR_GET_CONST(serviceIds_, vector<string>) };
    inline vector<string> serviceIds() { DARABONBA_PTR_GET(serviceIds_, vector<string>) };
    inline CreateServiceResponseBodyData& setServiceIds(const vector<string> & serviceIds) { DARABONBA_PTR_SET_VALUE(serviceIds_, serviceIds) };
    inline CreateServiceResponseBodyData& setServiceIds(vector<string> && serviceIds) { DARABONBA_PTR_SET_RVALUE(serviceIds_, serviceIds) };


  protected:
    // The list of service IDs.
    std::shared_ptr<vector<string>> serviceIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
