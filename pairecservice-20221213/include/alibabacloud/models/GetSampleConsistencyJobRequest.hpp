// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSAMPLECONSISTENCYJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSAMPLECONSISTENCYJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class GetSampleConsistencyJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSampleConsistencyJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSampleConsistencyJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    GetSampleConsistencyJobRequest() = default ;
    GetSampleConsistencyJobRequest(const GetSampleConsistencyJobRequest &) = default ;
    GetSampleConsistencyJobRequest(GetSampleConsistencyJobRequest &&) = default ;
    GetSampleConsistencyJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSampleConsistencyJobRequest() = default ;
    GetSampleConsistencyJobRequest& operator=(const GetSampleConsistencyJobRequest &) = default ;
    GetSampleConsistencyJobRequest& operator=(GetSampleConsistencyJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetSampleConsistencyJobRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
