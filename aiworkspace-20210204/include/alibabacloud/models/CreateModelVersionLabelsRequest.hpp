// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMODELVERSIONLABELSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMODELVERSIONLABELSREQUEST_HPP_
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
  class CreateModelVersionLabelsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateModelVersionLabelsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Labels, labels_);
    };
    friend void from_json(const Darabonba::Json& j, CreateModelVersionLabelsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
    };
    CreateModelVersionLabelsRequest() = default ;
    CreateModelVersionLabelsRequest(const CreateModelVersionLabelsRequest &) = default ;
    CreateModelVersionLabelsRequest(CreateModelVersionLabelsRequest &&) = default ;
    CreateModelVersionLabelsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateModelVersionLabelsRequest() = default ;
    CreateModelVersionLabelsRequest& operator=(const CreateModelVersionLabelsRequest &) = default ;
    CreateModelVersionLabelsRequest& operator=(CreateModelVersionLabelsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->labels_ == nullptr; };
    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<Label> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Label>) };
    inline vector<Label> labels() { DARABONBA_PTR_GET(labels_, vector<Label>) };
    inline CreateModelVersionLabelsRequest& setLabels(const vector<Label> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline CreateModelVersionLabelsRequest& setLabels(vector<Label> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


  protected:
    // The tags.
    std::shared_ptr<vector<Label>> labels_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
