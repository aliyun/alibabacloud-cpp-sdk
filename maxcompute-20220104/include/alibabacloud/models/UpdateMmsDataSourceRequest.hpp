// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMMSDATASOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMMSDATASOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class UpdateMmsDataSourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMmsDataSourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(action, action_);
      DARABONBA_ANY_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(test, test_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMmsDataSourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(action, action_);
      DARABONBA_ANY_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(test, test_);
    };
    UpdateMmsDataSourceRequest() = default ;
    UpdateMmsDataSourceRequest(const UpdateMmsDataSourceRequest &) = default ;
    UpdateMmsDataSourceRequest(UpdateMmsDataSourceRequest &&) = default ;
    UpdateMmsDataSourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMmsDataSourceRequest() = default ;
    UpdateMmsDataSourceRequest& operator=(const UpdateMmsDataSourceRequest &) = default ;
    UpdateMmsDataSourceRequest& operator=(UpdateMmsDataSourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && return this->config_ == nullptr && return this->name_ == nullptr && return this->test_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline UpdateMmsDataSourceRequest& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline     const Darabonba::Json & config() const { DARABONBA_GET(config_) };
    Darabonba::Json & config() { DARABONBA_GET(config_) };
    inline UpdateMmsDataSourceRequest& setConfig(const Darabonba::Json & config) { DARABONBA_SET_VALUE(config_, config) };
    inline UpdateMmsDataSourceRequest& setConfig(Darabonba::Json & config) { DARABONBA_SET_RVALUE(config_, config) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateMmsDataSourceRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // test Field Functions 
    bool hasTest() const { return this->test_ != nullptr;};
    void deleteTest() { this->test_ = nullptr;};
    inline bool test() const { DARABONBA_PTR_GET_DEFAULT(test_, false) };
    inline UpdateMmsDataSourceRequest& setTest(bool test) { DARABONBA_PTR_SET_VALUE(test_, test) };


  protected:
    std::shared_ptr<string> action_ = nullptr;
    Darabonba::Json config_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<bool> test_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
