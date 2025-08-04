// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINTERVENEIMPORTTASKINFORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETINTERVENEIMPORTTASKINFORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetInterveneImportTaskInfoResponseBodyDataStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetInterveneImportTaskInfoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInterveneImportTaskInfoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetInterveneImportTaskInfoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetInterveneImportTaskInfoResponseBodyData() = default ;
    GetInterveneImportTaskInfoResponseBodyData(const GetInterveneImportTaskInfoResponseBodyData &) = default ;
    GetInterveneImportTaskInfoResponseBodyData(GetInterveneImportTaskInfoResponseBodyData &&) = default ;
    GetInterveneImportTaskInfoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInterveneImportTaskInfoResponseBodyData() = default ;
    GetInterveneImportTaskInfoResponseBodyData& operator=(const GetInterveneImportTaskInfoResponseBodyData &) = default ;
    GetInterveneImportTaskInfoResponseBodyData& operator=(GetInterveneImportTaskInfoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->status_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetInterveneImportTaskInfoResponseBodyData& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline const Models::GetInterveneImportTaskInfoResponseBodyDataStatus & status() const { DARABONBA_PTR_GET_CONST(status_, Models::GetInterveneImportTaskInfoResponseBodyDataStatus) };
    inline Models::GetInterveneImportTaskInfoResponseBodyDataStatus status() { DARABONBA_PTR_GET(status_, Models::GetInterveneImportTaskInfoResponseBodyDataStatus) };
    inline GetInterveneImportTaskInfoResponseBodyData& setStatus(const Models::GetInterveneImportTaskInfoResponseBodyDataStatus & status) { DARABONBA_PTR_SET_VALUE(status_, status) };
    inline GetInterveneImportTaskInfoResponseBodyData& setStatus(Models::GetInterveneImportTaskInfoResponseBodyDataStatus && status) { DARABONBA_PTR_SET_RVALUE(status_, status) };


  protected:
    std::shared_ptr<int32_t> code_ = nullptr;
    std::shared_ptr<Models::GetInterveneImportTaskInfoResponseBodyDataStatus> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
