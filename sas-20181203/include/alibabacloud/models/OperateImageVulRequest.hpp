// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATEIMAGEVULREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPERATEIMAGEVULREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class OperateImageVulRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperateImageVulRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Info, info_);
      DARABONBA_PTR_TO_JSON(OperateType, operateType_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, OperateImageVulRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Info, info_);
      DARABONBA_PTR_FROM_JSON(OperateType, operateType_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    OperateImageVulRequest() = default ;
    OperateImageVulRequest(const OperateImageVulRequest &) = default ;
    OperateImageVulRequest(OperateImageVulRequest &&) = default ;
    OperateImageVulRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperateImageVulRequest() = default ;
    OperateImageVulRequest& operator=(const OperateImageVulRequest &) = default ;
    OperateImageVulRequest& operator=(OperateImageVulRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->info_ != nullptr
        && this->operateType_ != nullptr && this->type_ != nullptr; };
    // info Field Functions 
    bool hasInfo() const { return this->info_ != nullptr;};
    void deleteInfo() { this->info_ = nullptr;};
    inline string info() const { DARABONBA_PTR_GET_DEFAULT(info_, "") };
    inline OperateImageVulRequest& setInfo(string info) { DARABONBA_PTR_SET_VALUE(info_, info) };


    // operateType Field Functions 
    bool hasOperateType() const { return this->operateType_ != nullptr;};
    void deleteOperateType() { this->operateType_ = nullptr;};
    inline string operateType() const { DARABONBA_PTR_GET_DEFAULT(operateType_, "") };
    inline OperateImageVulRequest& setOperateType(string operateType) { DARABONBA_PTR_SET_VALUE(operateType_, operateType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline OperateImageVulRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The information about the vulnerability. The value of this parameter is in the JSON format and contains the following fields:
    // 
    // *   namespace: the namespace of the image
    // *   repoName: the name of the Container Registry repository
    // *   regionId: the region ID
    // *   instanceId: the ID of the Container Registry instance
    // *   repoId: the name of the repository
    // *   tag: the tad added to the image
    // *   digest: the digest of the image
    // *   newTag: the tag added to the image after the vulnerability is fixed
    // *   uuid: the UUID of the image
    // *   ids: the IDs of the vulnerability primary keys
    std::shared_ptr<string> info_ = nullptr;
    // If you want to fix the vulnerability, set the value to vul_fix.
    std::shared_ptr<string> operateType_ = nullptr;
    // The type of the vulnerability. Set the value to cve.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
