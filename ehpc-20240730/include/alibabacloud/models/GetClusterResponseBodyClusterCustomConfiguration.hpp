// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLUSTERRESPONSEBODYCLUSTERCUSTOMCONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_GETCLUSTERRESPONSEBODYCLUSTERCUSTOMCONFIGURATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class GetClusterResponseBodyClusterCustomConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClusterResponseBodyClusterCustomConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(Args, args_);
      DARABONBA_PTR_TO_JSON(Script, script_);
    };
    friend void from_json(const Darabonba::Json& j, GetClusterResponseBodyClusterCustomConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(Args, args_);
      DARABONBA_PTR_FROM_JSON(Script, script_);
    };
    GetClusterResponseBodyClusterCustomConfiguration() = default ;
    GetClusterResponseBodyClusterCustomConfiguration(const GetClusterResponseBodyClusterCustomConfiguration &) = default ;
    GetClusterResponseBodyClusterCustomConfiguration(GetClusterResponseBodyClusterCustomConfiguration &&) = default ;
    GetClusterResponseBodyClusterCustomConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClusterResponseBodyClusterCustomConfiguration() = default ;
    GetClusterResponseBodyClusterCustomConfiguration& operator=(const GetClusterResponseBodyClusterCustomConfiguration &) = default ;
    GetClusterResponseBodyClusterCustomConfiguration& operator=(GetClusterResponseBodyClusterCustomConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->args_ == nullptr
        && return this->script_ == nullptr; };
    // args Field Functions 
    bool hasArgs() const { return this->args_ != nullptr;};
    void deleteArgs() { this->args_ = nullptr;};
    inline string args() const { DARABONBA_PTR_GET_DEFAULT(args_, "") };
    inline GetClusterResponseBodyClusterCustomConfiguration& setArgs(string args) { DARABONBA_PTR_SET_VALUE(args_, args) };


    // script Field Functions 
    bool hasScript() const { return this->script_ != nullptr;};
    void deleteScript() { this->script_ = nullptr;};
    inline string script() const { DARABONBA_PTR_GET_DEFAULT(script_, "") };
    inline GetClusterResponseBodyClusterCustomConfiguration& setScript(string script) { DARABONBA_PTR_SET_VALUE(script_, script) };


  protected:
    // The arguments that are used to run the script after the scrip is installed.
    std::shared_ptr<string> args_ = nullptr;
    // The URL that is used to download the post-processing script.
    std::shared_ptr<string> script_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
