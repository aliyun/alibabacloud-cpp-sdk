// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MICROSANDBOXCONFIG_HPP_
#define ALIBABACLOUD_MODELS_MICROSANDBOXCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class MicroSandboxConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MicroSandboxConfig& obj) { 
      DARABONBA_PTR_TO_JSON(osType, osType_);
      DARABONBA_PTR_TO_JSON(readyCommand, readyCommand_);
      DARABONBA_PTR_TO_JSON(startCommand, startCommand_);
    };
    friend void from_json(const Darabonba::Json& j, MicroSandboxConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(osType, osType_);
      DARABONBA_PTR_FROM_JSON(readyCommand, readyCommand_);
      DARABONBA_PTR_FROM_JSON(startCommand, startCommand_);
    };
    MicroSandboxConfig() = default ;
    MicroSandboxConfig(const MicroSandboxConfig &) = default ;
    MicroSandboxConfig(MicroSandboxConfig &&) = default ;
    MicroSandboxConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MicroSandboxConfig() = default ;
    MicroSandboxConfig& operator=(const MicroSandboxConfig &) = default ;
    MicroSandboxConfig& operator=(MicroSandboxConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->osType_ == nullptr
        && this->readyCommand_ == nullptr && this->startCommand_ == nullptr; };
    // osType Field Functions 
    bool hasOsType() const { return this->osType_ != nullptr;};
    void deleteOsType() { this->osType_ = nullptr;};
    inline string getOsType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
    inline MicroSandboxConfig& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


    // readyCommand Field Functions 
    bool hasReadyCommand() const { return this->readyCommand_ != nullptr;};
    void deleteReadyCommand() { this->readyCommand_ = nullptr;};
    inline string getReadyCommand() const { DARABONBA_PTR_GET_DEFAULT(readyCommand_, "") };
    inline MicroSandboxConfig& setReadyCommand(string readyCommand) { DARABONBA_PTR_SET_VALUE(readyCommand_, readyCommand) };


    // startCommand Field Functions 
    bool hasStartCommand() const { return this->startCommand_ != nullptr;};
    void deleteStartCommand() { this->startCommand_ = nullptr;};
    inline string getStartCommand() const { DARABONBA_PTR_GET_DEFAULT(startCommand_, "") };
    inline MicroSandboxConfig& setStartCommand(string startCommand) { DARABONBA_PTR_SET_VALUE(startCommand_, startCommand) };


  protected:
    shared_ptr<string> osType_ {};
    shared_ptr<string> readyCommand_ {};
    shared_ptr<string> startCommand_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
