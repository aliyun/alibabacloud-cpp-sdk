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
    virtual bool empty() const override { return this->info_ == nullptr
        && this->operateType_ == nullptr && this->type_ == nullptr; };
    // info Field Functions 
    bool hasInfo() const { return this->info_ != nullptr;};
    void deleteInfo() { this->info_ = nullptr;};
    inline string getInfo() const { DARABONBA_PTR_GET_DEFAULT(info_, "") };
    inline OperateImageVulRequest& setInfo(string info) { DARABONBA_PTR_SET_VALUE(info_, info) };


    // operateType Field Functions 
    bool hasOperateType() const { return this->operateType_ != nullptr;};
    void deleteOperateType() { this->operateType_ = nullptr;};
    inline string getOperateType() const { DARABONBA_PTR_GET_DEFAULT(operateType_, "") };
    inline OperateImageVulRequest& setOperateType(string operateType) { DARABONBA_PTR_SET_VALUE(operateType_, operateType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline OperateImageVulRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The information about the vulnerability to be processed. This parameter is in JSON format and contains the following fields:
    // 
    // - namespace: the image namespace.
    // - repoName: the name of the ACR image repository.
    // - regionId: the region.
    // - instanceId: the ID of the ACR instance.
    // - repoId: the ID of the repository.
    // - tag: the original tag of the image.
    // - digest: the digest of the image.
    // - newTag: the tag of the image after the fix.
    // - uuid: the UUID of the image.
    // - ids: the list of primary key IDs of the vulnerabilities.
    shared_ptr<string> info_ {};
    // The operation type for image vulnerability fix. Set this parameter to vul_fix.
    shared_ptr<string> operateType_ {};
    // The vulnerability type. Set this parameter to cve.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
