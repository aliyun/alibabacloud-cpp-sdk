// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETRAININGJOBLABELSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETRAININGJOBLABELSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateTrainingJobLabelsRequestLabels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class UpdateTrainingJobLabelsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTrainingJobLabelsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Labels, labels_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTrainingJobLabelsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
    };
    UpdateTrainingJobLabelsRequest() = default ;
    UpdateTrainingJobLabelsRequest(const UpdateTrainingJobLabelsRequest &) = default ;
    UpdateTrainingJobLabelsRequest(UpdateTrainingJobLabelsRequest &&) = default ;
    UpdateTrainingJobLabelsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTrainingJobLabelsRequest() = default ;
    UpdateTrainingJobLabelsRequest& operator=(const UpdateTrainingJobLabelsRequest &) = default ;
    UpdateTrainingJobLabelsRequest& operator=(UpdateTrainingJobLabelsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->labels_ != nullptr; };
    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<UpdateTrainingJobLabelsRequestLabels> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<UpdateTrainingJobLabelsRequestLabels>) };
    inline vector<UpdateTrainingJobLabelsRequestLabels> labels() { DARABONBA_PTR_GET(labels_, vector<UpdateTrainingJobLabelsRequestLabels>) };
    inline UpdateTrainingJobLabelsRequest& setLabels(const vector<UpdateTrainingJobLabelsRequestLabels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline UpdateTrainingJobLabelsRequest& setLabels(vector<UpdateTrainingJobLabelsRequestLabels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


  protected:
    std::shared_ptr<vector<UpdateTrainingJobLabelsRequestLabels>> labels_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
