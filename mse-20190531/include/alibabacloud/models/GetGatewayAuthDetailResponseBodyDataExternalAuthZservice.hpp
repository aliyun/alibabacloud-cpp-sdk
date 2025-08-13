// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGATEWAYAUTHDETAILRESPONSEBODYDATAEXTERNALAUTHZSERVICE_HPP_
#define ALIBABACLOUD_MODELS_GETGATEWAYAUTHDETAILRESPONSEBODYDATAEXTERNALAUTHZSERVICE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetGatewayAuthDetailResponseBodyDataExternalAuthZService : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGatewayAuthDetailResponseBodyDataExternalAuthZService& obj) { 
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, GetGatewayAuthDetailResponseBodyDataExternalAuthZService& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
    };
    GetGatewayAuthDetailResponseBodyDataExternalAuthZService() = default ;
    GetGatewayAuthDetailResponseBodyDataExternalAuthZService(const GetGatewayAuthDetailResponseBodyDataExternalAuthZService &) = default ;
    GetGatewayAuthDetailResponseBodyDataExternalAuthZService(GetGatewayAuthDetailResponseBodyDataExternalAuthZService &&) = default ;
    GetGatewayAuthDetailResponseBodyDataExternalAuthZService(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGatewayAuthDetailResponseBodyDataExternalAuthZService() = default ;
    GetGatewayAuthDetailResponseBodyDataExternalAuthZService& operator=(const GetGatewayAuthDetailResponseBodyDataExternalAuthZService &) = default ;
    GetGatewayAuthDetailResponseBodyDataExternalAuthZService& operator=(GetGatewayAuthDetailResponseBodyDataExternalAuthZService &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groupName_ != nullptr
        && this->name_ != nullptr && this->namespace_ != nullptr && this->sourceType_ != nullptr; };
    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline GetGatewayAuthDetailResponseBodyDataExternalAuthZService& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetGatewayAuthDetailResponseBodyDataExternalAuthZService& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline GetGatewayAuthDetailResponseBodyDataExternalAuthZService& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline GetGatewayAuthDetailResponseBodyDataExternalAuthZService& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    std::shared_ptr<string> groupName_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> namespace_ = nullptr;
    std::shared_ptr<string> sourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
