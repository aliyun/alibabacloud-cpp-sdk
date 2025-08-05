// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMMSDATASOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMMSDATASOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class CreateMmsDataSourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMmsDataSourceRequest& obj) { 
      DARABONBA_ANY_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(networklink, networklink_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMmsDataSourceRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(networklink, networklink_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    CreateMmsDataSourceRequest() = default ;
    CreateMmsDataSourceRequest(const CreateMmsDataSourceRequest &) = default ;
    CreateMmsDataSourceRequest(CreateMmsDataSourceRequest &&) = default ;
    CreateMmsDataSourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMmsDataSourceRequest() = default ;
    CreateMmsDataSourceRequest& operator=(const CreateMmsDataSourceRequest &) = default ;
    CreateMmsDataSourceRequest& operator=(CreateMmsDataSourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->config_ != nullptr
        && this->name_ != nullptr && this->networklink_ != nullptr && this->type_ != nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline     const Darabonba::Json & config() const { DARABONBA_GET(config_) };
    Darabonba::Json & config() { DARABONBA_GET(config_) };
    inline CreateMmsDataSourceRequest& setConfig(const Darabonba::Json & config) { DARABONBA_SET_VALUE(config_, config) };
    inline CreateMmsDataSourceRequest& setConfig(Darabonba::Json & config) { DARABONBA_SET_RVALUE(config_, config) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateMmsDataSourceRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // networklink Field Functions 
    bool hasNetworklink() const { return this->networklink_ != nullptr;};
    void deleteNetworklink() { this->networklink_ = nullptr;};
    inline string networklink() const { DARABONBA_PTR_GET_DEFAULT(networklink_, "") };
    inline CreateMmsDataSourceRequest& setNetworklink(string networklink) { DARABONBA_PTR_SET_VALUE(networklink_, networklink) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateMmsDataSourceRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    Darabonba::Json config_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> networklink_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
