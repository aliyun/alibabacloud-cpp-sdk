// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESEARCHCONDITIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESEARCHCONDITIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DeleteSearchConditionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSearchConditionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSearchConditionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DeleteSearchConditionRequest() = default ;
    DeleteSearchConditionRequest(const DeleteSearchConditionRequest &) = default ;
    DeleteSearchConditionRequest(DeleteSearchConditionRequest &&) = default ;
    DeleteSearchConditionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSearchConditionRequest() = default ;
    DeleteSearchConditionRequest& operator=(const DeleteSearchConditionRequest &) = default ;
    DeleteSearchConditionRequest& operator=(DeleteSearchConditionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->sourceIp_ == nullptr && return this->type_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DeleteSearchConditionRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DeleteSearchConditionRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DeleteSearchConditionRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The name of the frequently used search condition.
    // 
    // >  You can call the [DescribeSearchCondition](~~DescribeSearchCondition~~) operation to query frequently used search conditions.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The source IP address of the request.
    std::shared_ptr<string> sourceIp_ = nullptr;
    // The type of the asset. Default value: ecs. Valid values:
    // 
    // *   **ecs**: an Elastic Compute Service (ECS) instance.
    // *   **cloud_product**: an Alibaba Cloud service.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
