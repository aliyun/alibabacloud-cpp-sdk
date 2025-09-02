// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODESBYOUTPUTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTNODESBYOUTPUTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListNodesByOutputRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodesByOutputRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Outputs, outputs_);
      DARABONBA_PTR_TO_JSON(ProjectEnv, projectEnv_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodesByOutputRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Outputs, outputs_);
      DARABONBA_PTR_FROM_JSON(ProjectEnv, projectEnv_);
    };
    ListNodesByOutputRequest() = default ;
    ListNodesByOutputRequest(const ListNodesByOutputRequest &) = default ;
    ListNodesByOutputRequest(ListNodesByOutputRequest &&) = default ;
    ListNodesByOutputRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodesByOutputRequest() = default ;
    ListNodesByOutputRequest& operator=(const ListNodesByOutputRequest &) = default ;
    ListNodesByOutputRequest& operator=(ListNodesByOutputRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->outputs_ != nullptr
        && this->projectEnv_ != nullptr; };
    // outputs Field Functions 
    bool hasOutputs() const { return this->outputs_ != nullptr;};
    void deleteOutputs() { this->outputs_ = nullptr;};
    inline string outputs() const { DARABONBA_PTR_GET_DEFAULT(outputs_, "") };
    inline ListNodesByOutputRequest& setOutputs(string outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };


    // projectEnv Field Functions 
    bool hasProjectEnv() const { return this->projectEnv_ != nullptr;};
    void deleteProjectEnv() { this->projectEnv_ = nullptr;};
    inline string projectEnv() const { DARABONBA_PTR_GET_DEFAULT(projectEnv_, "") };
    inline ListNodesByOutputRequest& setProjectEnv(string projectEnv) { DARABONBA_PTR_SET_VALUE(projectEnv_, projectEnv) };


  protected:
    // The output name of the node. You can specify multiple output names. Separate them with commas (,).
    // 
    // This parameter is required.
    std::shared_ptr<string> outputs_ = nullptr;
    // The environment of Operation Center. Valid values: PROD and DEV. The value PROD indicates the production environment, and the value DEV indicates the development environment.
    // 
    // This parameter is required.
    std::shared_ptr<string> projectEnv_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
