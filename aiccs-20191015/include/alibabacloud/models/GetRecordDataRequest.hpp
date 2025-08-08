// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRECORDDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRECORDDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetRecordDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRecordDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Acid, acid_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRecordDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Acid, acid_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    GetRecordDataRequest() = default ;
    GetRecordDataRequest(const GetRecordDataRequest &) = default ;
    GetRecordDataRequest(GetRecordDataRequest &&) = default ;
    GetRecordDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRecordDataRequest() = default ;
    GetRecordDataRequest& operator=(const GetRecordDataRequest &) = default ;
    GetRecordDataRequest& operator=(GetRecordDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acid_ != nullptr
        && this->instanceId_ != nullptr; };
    // acid Field Functions 
    bool hasAcid() const { return this->acid_ != nullptr;};
    void deleteAcid() { this->acid_ = nullptr;};
    inline string acid() const { DARABONBA_PTR_GET_DEFAULT(acid_, "") };
    inline GetRecordDataRequest& setAcid(string acid) { DARABONBA_PTR_SET_VALUE(acid_, acid) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetRecordDataRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> acid_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
