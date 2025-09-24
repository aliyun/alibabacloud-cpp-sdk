// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERUNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERUNREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Label.hpp>
#include <alibabacloud/models/RunParam.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class UpdateRunRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRunRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Params, params_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRunRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
    };
    UpdateRunRequest() = default ;
    UpdateRunRequest(const UpdateRunRequest &) = default ;
    UpdateRunRequest(UpdateRunRequest &&) = default ;
    UpdateRunRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRunRequest() = default ;
    UpdateRunRequest& operator=(const UpdateRunRequest &) = default ;
    UpdateRunRequest& operator=(UpdateRunRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->labels_ != nullptr
        && this->name_ != nullptr && this->params_ != nullptr; };
    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<Label> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Label>) };
    inline vector<Label> labels() { DARABONBA_PTR_GET(labels_, vector<Label>) };
    inline UpdateRunRequest& setLabels(const vector<Label> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline UpdateRunRequest& setLabels(vector<Label> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateRunRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline const vector<RunParam> & params() const { DARABONBA_PTR_GET_CONST(params_, vector<RunParam>) };
    inline vector<RunParam> params() { DARABONBA_PTR_GET(params_, vector<RunParam>) };
    inline UpdateRunRequest& setParams(const vector<RunParam> & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
    inline UpdateRunRequest& setParams(vector<RunParam> && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


  protected:
    // The labels.
    std::shared_ptr<vector<Label>> labels_ = nullptr;
    // The run name. The name must meet the following requirements:
    // 
    // *   The name must start with a letter.
    // *   The name can contain letters, digits, underscores (_), and hyphens (-).
    // *   The name must be 1 to 63 characters in length.
    std::shared_ptr<string> name_ = nullptr;
    // The parameters.
    std::shared_ptr<vector<RunParam>> params_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
