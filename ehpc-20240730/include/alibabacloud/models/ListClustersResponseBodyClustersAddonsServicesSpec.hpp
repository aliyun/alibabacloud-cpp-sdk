// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERSRESPONSEBODYCLUSTERSADDONSSERVICESSPEC_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERSRESPONSEBODYCLUSTERSADDONSSERVICESSPEC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class ListClustersResponseBodyClustersAddonsServicesSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClustersResponseBodyClustersAddonsServicesSpec& obj) { 
      DARABONBA_PTR_TO_JSON(ServiceAccessType, serviceAccessType_);
      DARABONBA_PTR_TO_JSON(ServiceAccessUrl, serviceAccessUrl_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
    };
    friend void from_json(const Darabonba::Json& j, ListClustersResponseBodyClustersAddonsServicesSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(ServiceAccessType, serviceAccessType_);
      DARABONBA_PTR_FROM_JSON(ServiceAccessUrl, serviceAccessUrl_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
    };
    ListClustersResponseBodyClustersAddonsServicesSpec() = default ;
    ListClustersResponseBodyClustersAddonsServicesSpec(const ListClustersResponseBodyClustersAddonsServicesSpec &) = default ;
    ListClustersResponseBodyClustersAddonsServicesSpec(ListClustersResponseBodyClustersAddonsServicesSpec &&) = default ;
    ListClustersResponseBodyClustersAddonsServicesSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClustersResponseBodyClustersAddonsServicesSpec() = default ;
    ListClustersResponseBodyClustersAddonsServicesSpec& operator=(const ListClustersResponseBodyClustersAddonsServicesSpec &) = default ;
    ListClustersResponseBodyClustersAddonsServicesSpec& operator=(ListClustersResponseBodyClustersAddonsServicesSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->serviceAccessType_ == nullptr
        && return this->serviceAccessUrl_ == nullptr && return this->serviceName_ == nullptr; };
    // serviceAccessType Field Functions 
    bool hasServiceAccessType() const { return this->serviceAccessType_ != nullptr;};
    void deleteServiceAccessType() { this->serviceAccessType_ = nullptr;};
    inline string serviceAccessType() const { DARABONBA_PTR_GET_DEFAULT(serviceAccessType_, "") };
    inline ListClustersResponseBodyClustersAddonsServicesSpec& setServiceAccessType(string serviceAccessType) { DARABONBA_PTR_SET_VALUE(serviceAccessType_, serviceAccessType) };


    // serviceAccessUrl Field Functions 
    bool hasServiceAccessUrl() const { return this->serviceAccessUrl_ != nullptr;};
    void deleteServiceAccessUrl() { this->serviceAccessUrl_ = nullptr;};
    inline string serviceAccessUrl() const { DARABONBA_PTR_GET_DEFAULT(serviceAccessUrl_, "") };
    inline ListClustersResponseBodyClustersAddonsServicesSpec& setServiceAccessUrl(string serviceAccessUrl) { DARABONBA_PTR_SET_VALUE(serviceAccessUrl_, serviceAccessUrl) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline ListClustersResponseBodyClustersAddonsServicesSpec& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


  protected:
    // The service access type.
    std::shared_ptr<string> serviceAccessType_ = nullptr;
    // The service access URL.
    std::shared_ptr<string> serviceAccessUrl_ = nullptr;
    // The service name.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
