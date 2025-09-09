// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEINSTANCELABELSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEINSTANCELABELSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateInstanceLabelsRequestLabels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class UpdateInstanceLabelsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateInstanceLabelsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Labels, labels_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateInstanceLabelsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
    };
    UpdateInstanceLabelsRequest() = default ;
    UpdateInstanceLabelsRequest(const UpdateInstanceLabelsRequest &) = default ;
    UpdateInstanceLabelsRequest(UpdateInstanceLabelsRequest &&) = default ;
    UpdateInstanceLabelsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateInstanceLabelsRequest() = default ;
    UpdateInstanceLabelsRequest& operator=(const UpdateInstanceLabelsRequest &) = default ;
    UpdateInstanceLabelsRequest& operator=(UpdateInstanceLabelsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->labels_ != nullptr; };
    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<UpdateInstanceLabelsRequestLabels> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<UpdateInstanceLabelsRequestLabels>) };
    inline vector<UpdateInstanceLabelsRequestLabels> labels() { DARABONBA_PTR_GET(labels_, vector<UpdateInstanceLabelsRequestLabels>) };
    inline UpdateInstanceLabelsRequest& setLabels(const vector<UpdateInstanceLabelsRequestLabels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline UpdateInstanceLabelsRequest& setLabels(vector<UpdateInstanceLabelsRequestLabels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


  protected:
    // The tags that you want to update.
    // 
    // This parameter is required.
    std::shared_ptr<vector<UpdateInstanceLabelsRequestLabels>> labels_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
