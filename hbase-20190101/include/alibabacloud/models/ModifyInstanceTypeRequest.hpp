// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCETYPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCETYPEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class ModifyInstanceTypeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstanceTypeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(CoreInstanceType, coreInstanceType_);
      DARABONBA_PTR_TO_JSON(MasterInstanceType, masterInstanceType_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstanceTypeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(CoreInstanceType, coreInstanceType_);
      DARABONBA_PTR_FROM_JSON(MasterInstanceType, masterInstanceType_);
    };
    ModifyInstanceTypeRequest() = default ;
    ModifyInstanceTypeRequest(const ModifyInstanceTypeRequest &) = default ;
    ModifyInstanceTypeRequest(ModifyInstanceTypeRequest &&) = default ;
    ModifyInstanceTypeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstanceTypeRequest() = default ;
    ModifyInstanceTypeRequest& operator=(const ModifyInstanceTypeRequest &) = default ;
    ModifyInstanceTypeRequest& operator=(ModifyInstanceTypeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->coreInstanceType_ == nullptr && this->masterInstanceType_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ModifyInstanceTypeRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // coreInstanceType Field Functions 
    bool hasCoreInstanceType() const { return this->coreInstanceType_ != nullptr;};
    void deleteCoreInstanceType() { this->coreInstanceType_ = nullptr;};
    inline string getCoreInstanceType() const { DARABONBA_PTR_GET_DEFAULT(coreInstanceType_, "") };
    inline ModifyInstanceTypeRequest& setCoreInstanceType(string coreInstanceType) { DARABONBA_PTR_SET_VALUE(coreInstanceType_, coreInstanceType) };


    // masterInstanceType Field Functions 
    bool hasMasterInstanceType() const { return this->masterInstanceType_ != nullptr;};
    void deleteMasterInstanceType() { this->masterInstanceType_ = nullptr;};
    inline string getMasterInstanceType() const { DARABONBA_PTR_GET_DEFAULT(masterInstanceType_, "") };
    inline ModifyInstanceTypeRequest& setMasterInstanceType(string masterInstanceType) { DARABONBA_PTR_SET_VALUE(masterInstanceType_, masterInstanceType) };


  protected:
    // The ID of target instance. You can call [DescribeInstances](https://help.aliyun.com/document_detail/144595.html) to obtain target instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The new node specifications of the core node. You can invoke [DescribeInstanceType](https://help.aliyun.com/document_detail/145796.html) to obtain the available node specifications.
    // 
    // > You must specify either the MasterInstanceType parameter or the CoreInstanceType parameter.
    shared_ptr<string> coreInstanceType_ {};
    // The new node specifications of the master node. You can invoke [DescribeInstanceType](https://help.aliyun.com/document_detail/145796.html) to obtain the available node specifications.
    // 
    // > You must specify either the MasterInstanceType parameter or the CoreInstanceType parameter.
    shared_ptr<string> masterInstanceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
