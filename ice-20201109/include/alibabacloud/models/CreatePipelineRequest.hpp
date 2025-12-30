// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPIPELINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPIPELINEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreatePipelineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePipelineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(Speed, speed_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePipelineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(Speed, speed_);
    };
    CreatePipelineRequest() = default ;
    CreatePipelineRequest(const CreatePipelineRequest &) = default ;
    CreatePipelineRequest(CreatePipelineRequest &&) = default ;
    CreatePipelineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePipelineRequest() = default ;
    CreatePipelineRequest& operator=(const CreatePipelineRequest &) = default ;
    CreatePipelineRequest& operator=(CreatePipelineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && this->priority_ == nullptr && this->speed_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreatePipelineRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline CreatePipelineRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // speed Field Functions 
    bool hasSpeed() const { return this->speed_ != nullptr;};
    void deleteSpeed() { this->speed_ = nullptr;};
    inline string getSpeed() const { DARABONBA_PTR_GET_DEFAULT(speed_, "") };
    inline CreatePipelineRequest& setSpeed(string speed) { DARABONBA_PTR_SET_VALUE(speed_, speed) };


  protected:
    // The name of the MPS queue.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The priority. Default value: 6. Valid values: 1 to 10. A greater value specifies a higher priority.
    shared_ptr<int32_t> priority_ {};
    // The type of the MPS queue. Valid values:
    // 
    // 1.  Standard: standard MPS queue.
    // 2.  Boost: MPS queue with transcoding speed boosted.
    // 3.  NarrowBandHDV2: MPS queue that supports Narrowband HD 2.0.
    // 
    // This parameter is required.
    shared_ptr<string> speed_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
