// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeCensRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCensRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ServiceMeshId, serviceMeshId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCensRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ServiceMeshId, serviceMeshId_);
    };
    DescribeCensRequest() = default ;
    DescribeCensRequest(const DescribeCensRequest &) = default ;
    DescribeCensRequest(DescribeCensRequest &&) = default ;
    DescribeCensRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCensRequest() = default ;
    DescribeCensRequest& operator=(const DescribeCensRequest &) = default ;
    DescribeCensRequest& operator=(DescribeCensRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->serviceMeshId_ == nullptr; };
    // serviceMeshId Field Functions 
    bool hasServiceMeshId() const { return this->serviceMeshId_ != nullptr;};
    void deleteServiceMeshId() { this->serviceMeshId_ = nullptr;};
    inline string serviceMeshId() const { DARABONBA_PTR_GET_DEFAULT(serviceMeshId_, "") };
    inline DescribeCensRequest& setServiceMeshId(string serviceMeshId) { DARABONBA_PTR_SET_VALUE(serviceMeshId_, serviceMeshId) };


  protected:
    // The ID of the ASM instance.
    std::shared_ptr<string> serviceMeshId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
