// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATASETVERSIONLABELSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATASETVERSIONLABELSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Label.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class CreateDatasetVersionLabelsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDatasetVersionLabelsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Labels, labels_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDatasetVersionLabelsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
    };
    CreateDatasetVersionLabelsRequest() = default ;
    CreateDatasetVersionLabelsRequest(const CreateDatasetVersionLabelsRequest &) = default ;
    CreateDatasetVersionLabelsRequest(CreateDatasetVersionLabelsRequest &&) = default ;
    CreateDatasetVersionLabelsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDatasetVersionLabelsRequest() = default ;
    CreateDatasetVersionLabelsRequest& operator=(const CreateDatasetVersionLabelsRequest &) = default ;
    CreateDatasetVersionLabelsRequest& operator=(CreateDatasetVersionLabelsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->labels_ == nullptr; };
    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<Label> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Label>) };
    inline vector<Label> getLabels() { DARABONBA_PTR_GET(labels_, vector<Label>) };
    inline CreateDatasetVersionLabelsRequest& setLabels(const vector<Label> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline CreateDatasetVersionLabelsRequest& setLabels(vector<Label> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


  protected:
    // The tags.
    // 
    // This parameter is required.
    shared_ptr<vector<Label>> labels_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
