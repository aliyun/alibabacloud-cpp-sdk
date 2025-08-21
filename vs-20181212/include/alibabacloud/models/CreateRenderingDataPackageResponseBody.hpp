// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERENDERINGDATAPACKAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATERENDERINGDATAPACKAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class CreateRenderingDataPackageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRenderingDataPackageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataPackageId, dataPackageId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRenderingDataPackageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataPackageId, dataPackageId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateRenderingDataPackageResponseBody() = default ;
    CreateRenderingDataPackageResponseBody(const CreateRenderingDataPackageResponseBody &) = default ;
    CreateRenderingDataPackageResponseBody(CreateRenderingDataPackageResponseBody &&) = default ;
    CreateRenderingDataPackageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRenderingDataPackageResponseBody() = default ;
    CreateRenderingDataPackageResponseBody& operator=(const CreateRenderingDataPackageResponseBody &) = default ;
    CreateRenderingDataPackageResponseBody& operator=(CreateRenderingDataPackageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataPackageId_ != nullptr
        && this->requestId_ != nullptr; };
    // dataPackageId Field Functions 
    bool hasDataPackageId() const { return this->dataPackageId_ != nullptr;};
    void deleteDataPackageId() { this->dataPackageId_ = nullptr;};
    inline string dataPackageId() const { DARABONBA_PTR_GET_DEFAULT(dataPackageId_, "") };
    inline CreateRenderingDataPackageResponseBody& setDataPackageId(string dataPackageId) { DARABONBA_PTR_SET_VALUE(dataPackageId_, dataPackageId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateRenderingDataPackageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> dataPackageId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
