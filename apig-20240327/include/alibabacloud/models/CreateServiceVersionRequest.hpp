// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVICEVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVICEVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateServiceVersionRequestLabels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreateServiceVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServiceVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(labels, labels_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, CreateServiceVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(labels, labels_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    CreateServiceVersionRequest() = default ;
    CreateServiceVersionRequest(const CreateServiceVersionRequest &) = default ;
    CreateServiceVersionRequest(CreateServiceVersionRequest &&) = default ;
    CreateServiceVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateServiceVersionRequest() = default ;
    CreateServiceVersionRequest& operator=(const CreateServiceVersionRequest &) = default ;
    CreateServiceVersionRequest& operator=(CreateServiceVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->labels_ == nullptr
        && return this->name_ == nullptr; };
    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<CreateServiceVersionRequestLabels> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<CreateServiceVersionRequestLabels>) };
    inline vector<CreateServiceVersionRequestLabels> labels() { DARABONBA_PTR_GET(labels_, vector<CreateServiceVersionRequestLabels>) };
    inline CreateServiceVersionRequest& setLabels(const vector<CreateServiceVersionRequestLabels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline CreateServiceVersionRequest& setLabels(vector<CreateServiceVersionRequestLabels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateServiceVersionRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<CreateServiceVersionRequestLabels>> labels_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
