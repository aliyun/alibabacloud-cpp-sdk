// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROGRAMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROGRAMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ChannelAssemblyProgram.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class UpdateProgramResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateProgramResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Program, program_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateProgramResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Program, program_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateProgramResponseBody() = default ;
    UpdateProgramResponseBody(const UpdateProgramResponseBody &) = default ;
    UpdateProgramResponseBody(UpdateProgramResponseBody &&) = default ;
    UpdateProgramResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateProgramResponseBody() = default ;
    UpdateProgramResponseBody& operator=(const UpdateProgramResponseBody &) = default ;
    UpdateProgramResponseBody& operator=(UpdateProgramResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->program_ != nullptr
        && this->requestId_ != nullptr; };
    // program Field Functions 
    bool hasProgram() const { return this->program_ != nullptr;};
    void deleteProgram() { this->program_ = nullptr;};
    inline const ChannelAssemblyProgram & program() const { DARABONBA_PTR_GET_CONST(program_, ChannelAssemblyProgram) };
    inline ChannelAssemblyProgram program() { DARABONBA_PTR_GET(program_, ChannelAssemblyProgram) };
    inline UpdateProgramResponseBody& setProgram(const ChannelAssemblyProgram & program) { DARABONBA_PTR_SET_VALUE(program_, program) };
    inline UpdateProgramResponseBody& setProgram(ChannelAssemblyProgram && program) { DARABONBA_PTR_SET_RVALUE(program_, program) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateProgramResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the program.
    std::shared_ptr<ChannelAssemblyProgram> program_ = nullptr;
    // **Request ID**
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
