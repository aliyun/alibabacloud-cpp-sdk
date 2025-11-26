// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLICATION_HPP_
#define ALIBABACLOUD_MODELS_APPLICATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class Application : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Application& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
    };
    friend void from_json(const Darabonba::Json& j, Application& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
    };
    Application() = default ;
    Application(const Application &) = default ;
    Application(Application &&) = default ;
    Application(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Application() = default ;
    Application& operator=(const Application &) = default ;
    Application& operator=(Application &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationName_ == nullptr; };
    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string applicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline Application& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


  protected:
    // 应用名称。从EMR控制台集群创建页面可查看到指定发行版的应用名称列表。
    // 
    // This parameter is required.
    std::shared_ptr<string> applicationName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
