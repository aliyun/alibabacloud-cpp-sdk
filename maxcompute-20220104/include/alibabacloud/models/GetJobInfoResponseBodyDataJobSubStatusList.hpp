// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBINFORESPONSEBODYDATAJOBSUBSTATUSLIST_HPP_
#define ALIBABACLOUD_MODELS_GETJOBINFORESPONSEBODYDATAJOBSUBSTATUSLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetJobInfoResponseBodyDataJobSubStatusList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobInfoResponseBodyDataJobSubStatusList& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobInfoResponseBodyDataJobSubStatusList& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
    };
    GetJobInfoResponseBodyDataJobSubStatusList() = default ;
    GetJobInfoResponseBodyDataJobSubStatusList(const GetJobInfoResponseBodyDataJobSubStatusList &) = default ;
    GetJobInfoResponseBodyDataJobSubStatusList(GetJobInfoResponseBodyDataJobSubStatusList &&) = default ;
    GetJobInfoResponseBodyDataJobSubStatusList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobInfoResponseBodyDataJobSubStatusList() = default ;
    GetJobInfoResponseBodyDataJobSubStatusList& operator=(const GetJobInfoResponseBodyDataJobSubStatusList &) = default ;
    GetJobInfoResponseBodyDataJobSubStatusList& operator=(GetJobInfoResponseBodyDataJobSubStatusList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->description_ == nullptr && return this->startTime_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetJobInfoResponseBodyDataJobSubStatusList& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetJobInfoResponseBodyDataJobSubStatusList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetJobInfoResponseBodyDataJobSubStatusList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The encoding of the substatus.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The description of the substatus.
    std::shared_ptr<string> description_ = nullptr;
    // The start time of the substatus.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
