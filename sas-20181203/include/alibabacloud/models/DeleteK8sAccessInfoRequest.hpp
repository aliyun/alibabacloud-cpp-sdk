// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEK8SACCESSINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEK8SACCESSINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DeleteK8sAccessInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteK8sAccessInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunYundunGatewayApiName, aliyunYundunGatewayApiName_);
      DARABONBA_PTR_TO_JSON(AliyunYundunGatewayPopName, aliyunYundunGatewayPopName_);
      DARABONBA_PTR_TO_JSON(AliyunYundunGatewayProjectName, aliyunYundunGatewayProjectName_);
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteK8sAccessInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunYundunGatewayApiName, aliyunYundunGatewayApiName_);
      DARABONBA_PTR_FROM_JSON(AliyunYundunGatewayPopName, aliyunYundunGatewayPopName_);
      DARABONBA_PTR_FROM_JSON(AliyunYundunGatewayProjectName, aliyunYundunGatewayProjectName_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    DeleteK8sAccessInfoRequest() = default ;
    DeleteK8sAccessInfoRequest(const DeleteK8sAccessInfoRequest &) = default ;
    DeleteK8sAccessInfoRequest(DeleteK8sAccessInfoRequest &&) = default ;
    DeleteK8sAccessInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteK8sAccessInfoRequest() = default ;
    DeleteK8sAccessInfoRequest& operator=(const DeleteK8sAccessInfoRequest &) = default ;
    DeleteK8sAccessInfoRequest& operator=(DeleteK8sAccessInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliyunYundunGatewayApiName_ != nullptr
        && this->aliyunYundunGatewayPopName_ != nullptr && this->aliyunYundunGatewayProjectName_ != nullptr && this->id_ != nullptr; };
    // aliyunYundunGatewayApiName Field Functions 
    bool hasAliyunYundunGatewayApiName() const { return this->aliyunYundunGatewayApiName_ != nullptr;};
    void deleteAliyunYundunGatewayApiName() { this->aliyunYundunGatewayApiName_ = nullptr;};
    inline string aliyunYundunGatewayApiName() const { DARABONBA_PTR_GET_DEFAULT(aliyunYundunGatewayApiName_, "") };
    inline DeleteK8sAccessInfoRequest& setAliyunYundunGatewayApiName(string aliyunYundunGatewayApiName) { DARABONBA_PTR_SET_VALUE(aliyunYundunGatewayApiName_, aliyunYundunGatewayApiName) };


    // aliyunYundunGatewayPopName Field Functions 
    bool hasAliyunYundunGatewayPopName() const { return this->aliyunYundunGatewayPopName_ != nullptr;};
    void deleteAliyunYundunGatewayPopName() { this->aliyunYundunGatewayPopName_ = nullptr;};
    inline string aliyunYundunGatewayPopName() const { DARABONBA_PTR_GET_DEFAULT(aliyunYundunGatewayPopName_, "") };
    inline DeleteK8sAccessInfoRequest& setAliyunYundunGatewayPopName(string aliyunYundunGatewayPopName) { DARABONBA_PTR_SET_VALUE(aliyunYundunGatewayPopName_, aliyunYundunGatewayPopName) };


    // aliyunYundunGatewayProjectName Field Functions 
    bool hasAliyunYundunGatewayProjectName() const { return this->aliyunYundunGatewayProjectName_ != nullptr;};
    void deleteAliyunYundunGatewayProjectName() { this->aliyunYundunGatewayProjectName_ = nullptr;};
    inline string aliyunYundunGatewayProjectName() const { DARABONBA_PTR_GET_DEFAULT(aliyunYundunGatewayProjectName_, "") };
    inline DeleteK8sAccessInfoRequest& setAliyunYundunGatewayProjectName(string aliyunYundunGatewayProjectName) { DARABONBA_PTR_SET_VALUE(aliyunYundunGatewayProjectName_, aliyunYundunGatewayProjectName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DeleteK8sAccessInfoRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // This parameter is deprecated.
    std::shared_ptr<string> aliyunYundunGatewayApiName_ = nullptr;
    // This parameter is deprecated.
    std::shared_ptr<string> aliyunYundunGatewayPopName_ = nullptr;
    // This parameter is deprecated.
    std::shared_ptr<string> aliyunYundunGatewayProjectName_ = nullptr;
    // The ID generated when Kubernetes is connected. You can call the GenerateK8sAccessInfo operation to query the ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
