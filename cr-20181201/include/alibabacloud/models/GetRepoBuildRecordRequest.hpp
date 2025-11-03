// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREPOBUILDRECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETREPOBUILDRECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class GetRepoBuildRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRepoBuildRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BuildRecordId, buildRecordId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRepoBuildRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BuildRecordId, buildRecordId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    GetRepoBuildRecordRequest() = default ;
    GetRepoBuildRecordRequest(const GetRepoBuildRecordRequest &) = default ;
    GetRepoBuildRecordRequest(GetRepoBuildRecordRequest &&) = default ;
    GetRepoBuildRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRepoBuildRecordRequest() = default ;
    GetRepoBuildRecordRequest& operator=(const GetRepoBuildRecordRequest &) = default ;
    GetRepoBuildRecordRequest& operator=(GetRepoBuildRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->buildRecordId_ == nullptr
        && return this->instanceId_ == nullptr; };
    // buildRecordId Field Functions 
    bool hasBuildRecordId() const { return this->buildRecordId_ != nullptr;};
    void deleteBuildRecordId() { this->buildRecordId_ = nullptr;};
    inline string buildRecordId() const { DARABONBA_PTR_GET_DEFAULT(buildRecordId_, "") };
    inline GetRepoBuildRecordRequest& setBuildRecordId(string buildRecordId) { DARABONBA_PTR_SET_VALUE(buildRecordId_, buildRecordId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetRepoBuildRecordRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The ID of the image building record.
    // 
    // This parameter is required.
    std::shared_ptr<string> buildRecordId_ = nullptr;
    // The ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
