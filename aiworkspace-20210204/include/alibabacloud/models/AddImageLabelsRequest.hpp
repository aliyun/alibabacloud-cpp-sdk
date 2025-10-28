// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDIMAGELABELSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDIMAGELABELSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddImageLabelsRequestLabels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class AddImageLabelsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddImageLabelsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Labels, labels_);
    };
    friend void from_json(const Darabonba::Json& j, AddImageLabelsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
    };
    AddImageLabelsRequest() = default ;
    AddImageLabelsRequest(const AddImageLabelsRequest &) = default ;
    AddImageLabelsRequest(AddImageLabelsRequest &&) = default ;
    AddImageLabelsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddImageLabelsRequest() = default ;
    AddImageLabelsRequest& operator=(const AddImageLabelsRequest &) = default ;
    AddImageLabelsRequest& operator=(AddImageLabelsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->labels_ == nullptr; };
    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<AddImageLabelsRequestLabels> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<AddImageLabelsRequestLabels>) };
    inline vector<AddImageLabelsRequestLabels> labels() { DARABONBA_PTR_GET(labels_, vector<AddImageLabelsRequestLabels>) };
    inline AddImageLabelsRequest& setLabels(const vector<AddImageLabelsRequestLabels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline AddImageLabelsRequest& setLabels(vector<AddImageLabelsRequestLabels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


  protected:
    // The list of image tags.
    // 
    // This parameter is required.
    std::shared_ptr<vector<AddImageLabelsRequestLabels>> labels_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
