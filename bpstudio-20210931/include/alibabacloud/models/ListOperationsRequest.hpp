// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPERATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTOPERATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BPStudio20210931
{
namespace Models
{
  class ListOperationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOperationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
    };
    friend void from_json(const Darabonba::Json& j, ListOperationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
    };
    ListOperationsRequest() = default ;
    ListOperationsRequest(const ListOperationsRequest &) = default ;
    ListOperationsRequest(ListOperationsRequest &&) = default ;
    ListOperationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOperationsRequest() = default ;
    ListOperationsRequest& operator=(const ListOperationsRequest &) = default ;
    ListOperationsRequest& operator=(ListOperationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->serviceType_ == nullptr; };
    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string serviceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline ListOperationsRequest& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> serviceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BPStudio20210931
#endif
