// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJAVASTARTUPCONFIGRESPONSEBODYJAVASTARTUPCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETJAVASTARTUPCONFIGRESPONSEBODYJAVASTARTUPCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class GetJavaStartUpConfigResponseBodyJavaStartUpConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJavaStartUpConfigResponseBodyJavaStartUpConfig& obj) { 
      DARABONBA_PTR_TO_JSON(OriginalConfigs, originalConfigs_);
      DARABONBA_PTR_TO_JSON(StartUpArgs, startUpArgs_);
    };
    friend void from_json(const Darabonba::Json& j, GetJavaStartUpConfigResponseBodyJavaStartUpConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(OriginalConfigs, originalConfigs_);
      DARABONBA_PTR_FROM_JSON(StartUpArgs, startUpArgs_);
    };
    GetJavaStartUpConfigResponseBodyJavaStartUpConfig() = default ;
    GetJavaStartUpConfigResponseBodyJavaStartUpConfig(const GetJavaStartUpConfigResponseBodyJavaStartUpConfig &) = default ;
    GetJavaStartUpConfigResponseBodyJavaStartUpConfig(GetJavaStartUpConfigResponseBodyJavaStartUpConfig &&) = default ;
    GetJavaStartUpConfigResponseBodyJavaStartUpConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJavaStartUpConfigResponseBodyJavaStartUpConfig() = default ;
    GetJavaStartUpConfigResponseBodyJavaStartUpConfig& operator=(const GetJavaStartUpConfigResponseBodyJavaStartUpConfig &) = default ;
    GetJavaStartUpConfigResponseBodyJavaStartUpConfig& operator=(GetJavaStartUpConfigResponseBodyJavaStartUpConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->originalConfigs_ == nullptr
        && return this->startUpArgs_ == nullptr; };
    // originalConfigs Field Functions 
    bool hasOriginalConfigs() const { return this->originalConfigs_ != nullptr;};
    void deleteOriginalConfigs() { this->originalConfigs_ = nullptr;};
    inline string originalConfigs() const { DARABONBA_PTR_GET_DEFAULT(originalConfigs_, "") };
    inline GetJavaStartUpConfigResponseBodyJavaStartUpConfig& setOriginalConfigs(string originalConfigs) { DARABONBA_PTR_SET_VALUE(originalConfigs_, originalConfigs) };


    // startUpArgs Field Functions 
    bool hasStartUpArgs() const { return this->startUpArgs_ != nullptr;};
    void deleteStartUpArgs() { this->startUpArgs_ = nullptr;};
    inline string startUpArgs() const { DARABONBA_PTR_GET_DEFAULT(startUpArgs_, "") };
    inline GetJavaStartUpConfigResponseBodyJavaStartUpConfig& setStartUpArgs(string startUpArgs) { DARABONBA_PTR_SET_VALUE(startUpArgs_, startUpArgs) };


  protected:
    // The displayed startup parameter configuration.
    std::shared_ptr<string> originalConfigs_ = nullptr;
    // The effective startup parameter configuration.
    std::shared_ptr<string> startUpArgs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
