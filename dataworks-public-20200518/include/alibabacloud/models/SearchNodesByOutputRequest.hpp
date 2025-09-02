// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHNODESBYOUTPUTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHNODESBYOUTPUTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class SearchNodesByOutputRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchNodesByOutputRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Outputs, outputs_);
      DARABONBA_PTR_TO_JSON(ProjectEnv, projectEnv_);
    };
    friend void from_json(const Darabonba::Json& j, SearchNodesByOutputRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Outputs, outputs_);
      DARABONBA_PTR_FROM_JSON(ProjectEnv, projectEnv_);
    };
    SearchNodesByOutputRequest() = default ;
    SearchNodesByOutputRequest(const SearchNodesByOutputRequest &) = default ;
    SearchNodesByOutputRequest(SearchNodesByOutputRequest &&) = default ;
    SearchNodesByOutputRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchNodesByOutputRequest() = default ;
    SearchNodesByOutputRequest& operator=(const SearchNodesByOutputRequest &) = default ;
    SearchNodesByOutputRequest& operator=(SearchNodesByOutputRequest &&) = default ;
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
    inline SearchNodesByOutputRequest& setOutputs(string outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };


    // projectEnv Field Functions 
    bool hasProjectEnv() const { return this->projectEnv_ != nullptr;};
    void deleteProjectEnv() { this->projectEnv_ = nullptr;};
    inline string projectEnv() const { DARABONBA_PTR_GET_DEFAULT(projectEnv_, "") };
    inline SearchNodesByOutputRequest& setProjectEnv(string projectEnv) { DARABONBA_PTR_SET_VALUE(projectEnv_, projectEnv) };


  protected:
    // The output names of the node. If you specify multiple output names, separate them with commas (,).
    // 
    // This parameter is required.
    std::shared_ptr<string> outputs_ = nullptr;
    // The environment of Operation Center. Valid values: PROD and DEV.
    // 
    // This parameter is required.
    std::shared_ptr<string> projectEnv_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
