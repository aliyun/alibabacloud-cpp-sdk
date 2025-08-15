// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROCESSDEFINITIONWITHSCHEDULERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROCESSDEFINITIONWITHSCHEDULERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class CreateProcessDefinitionWithScheduleResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateProcessDefinitionWithScheduleResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(id, id_);
    };
    friend void from_json(const Darabonba::Json& j, CreateProcessDefinitionWithScheduleResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(id, id_);
    };
    CreateProcessDefinitionWithScheduleResponseBodyData() = default ;
    CreateProcessDefinitionWithScheduleResponseBodyData(const CreateProcessDefinitionWithScheduleResponseBodyData &) = default ;
    CreateProcessDefinitionWithScheduleResponseBodyData(CreateProcessDefinitionWithScheduleResponseBodyData &&) = default ;
    CreateProcessDefinitionWithScheduleResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateProcessDefinitionWithScheduleResponseBodyData() = default ;
    CreateProcessDefinitionWithScheduleResponseBodyData& operator=(const CreateProcessDefinitionWithScheduleResponseBodyData &) = default ;
    CreateProcessDefinitionWithScheduleResponseBodyData& operator=(CreateProcessDefinitionWithScheduleResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->id_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline CreateProcessDefinitionWithScheduleResponseBodyData& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int32_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
    inline CreateProcessDefinitionWithScheduleResponseBodyData& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // The workflow ID.
    std::shared_ptr<int64_t> code_ = nullptr;
    // The serial number of the workflow.
    std::shared_ptr<int32_t> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
