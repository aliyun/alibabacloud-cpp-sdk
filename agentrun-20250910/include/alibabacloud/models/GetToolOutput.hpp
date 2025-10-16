// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTOOLOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_GETTOOLOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ToolInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class GetToolOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetToolOutput& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetToolOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetToolOutput() = default ;
    GetToolOutput(const GetToolOutput &) = default ;
    GetToolOutput(GetToolOutput &&) = default ;
    GetToolOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetToolOutput() = default ;
    GetToolOutput& operator=(const GetToolOutput &) = default ;
    GetToolOutput& operator=(GetToolOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ToolInfo & data() const { DARABONBA_PTR_GET_CONST(data_, ToolInfo) };
    inline ToolInfo data() { DARABONBA_PTR_GET(data_, ToolInfo) };
    inline GetToolOutput& setData(const ToolInfo & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetToolOutput& setData(ToolInfo && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetToolOutput& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<ToolInfo> data_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
