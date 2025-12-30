// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROGRAMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPROGRAMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetProgramRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProgramRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelName, channelName_);
      DARABONBA_PTR_TO_JSON(ProgramName, programName_);
    };
    friend void from_json(const Darabonba::Json& j, GetProgramRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelName, channelName_);
      DARABONBA_PTR_FROM_JSON(ProgramName, programName_);
    };
    GetProgramRequest() = default ;
    GetProgramRequest(const GetProgramRequest &) = default ;
    GetProgramRequest(GetProgramRequest &&) = default ;
    GetProgramRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProgramRequest() = default ;
    GetProgramRequest& operator=(const GetProgramRequest &) = default ;
    GetProgramRequest& operator=(GetProgramRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channelName_ == nullptr
        && this->programName_ == nullptr; };
    // channelName Field Functions 
    bool hasChannelName() const { return this->channelName_ != nullptr;};
    void deleteChannelName() { this->channelName_ = nullptr;};
    inline string getChannelName() const { DARABONBA_PTR_GET_DEFAULT(channelName_, "") };
    inline GetProgramRequest& setChannelName(string channelName) { DARABONBA_PTR_SET_VALUE(channelName_, channelName) };


    // programName Field Functions 
    bool hasProgramName() const { return this->programName_ != nullptr;};
    void deleteProgramName() { this->programName_ = nullptr;};
    inline string getProgramName() const { DARABONBA_PTR_GET_DEFAULT(programName_, "") };
    inline GetProgramRequest& setProgramName(string programName) { DARABONBA_PTR_SET_VALUE(programName_, programName) };


  protected:
    // The name of the channel.
    // 
    // This parameter is required.
    shared_ptr<string> channelName_ {};
    // The name of the program.
    // 
    // This parameter is required.
    shared_ptr<string> programName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
