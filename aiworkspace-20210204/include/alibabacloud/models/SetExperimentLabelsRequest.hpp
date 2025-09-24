// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETEXPERIMENTLABELSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETEXPERIMENTLABELSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/LabelInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class SetExperimentLabelsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetExperimentLabelsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Labels, labels_);
    };
    friend void from_json(const Darabonba::Json& j, SetExperimentLabelsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
    };
    SetExperimentLabelsRequest() = default ;
    SetExperimentLabelsRequest(const SetExperimentLabelsRequest &) = default ;
    SetExperimentLabelsRequest(SetExperimentLabelsRequest &&) = default ;
    SetExperimentLabelsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetExperimentLabelsRequest() = default ;
    SetExperimentLabelsRequest& operator=(const SetExperimentLabelsRequest &) = default ;
    SetExperimentLabelsRequest& operator=(SetExperimentLabelsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->labels_ != nullptr; };
    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<LabelInfo> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<LabelInfo>) };
    inline vector<LabelInfo> labels() { DARABONBA_PTR_GET(labels_, vector<LabelInfo>) };
    inline SetExperimentLabelsRequest& setLabels(const vector<LabelInfo> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline SetExperimentLabelsRequest& setLabels(vector<LabelInfo> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


  protected:
    // The tags.
    std::shared_ptr<vector<LabelInfo>> labels_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
