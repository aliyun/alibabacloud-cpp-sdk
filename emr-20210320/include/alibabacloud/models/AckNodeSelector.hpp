// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACKNODESELECTOR_HPP_
#define ALIBABACLOUD_MODELS_ACKNODESELECTOR_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AckNodeSelectorLabels.hpp>
#include <alibabacloud/models/AckNodeSelectorTaints.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class AckNodeSelector : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AckNodeSelector& obj) { 
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(Taints, taints_);
    };
    friend void from_json(const Darabonba::Json& j, AckNodeSelector& obj) { 
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(Taints, taints_);
    };
    AckNodeSelector() = default ;
    AckNodeSelector(const AckNodeSelector &) = default ;
    AckNodeSelector(AckNodeSelector &&) = default ;
    AckNodeSelector(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AckNodeSelector() = default ;
    AckNodeSelector& operator=(const AckNodeSelector &) = default ;
    AckNodeSelector& operator=(AckNodeSelector &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->labels_ != nullptr
        && this->taints_ != nullptr; };
    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<AckNodeSelectorLabels> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<AckNodeSelectorLabels>) };
    inline vector<AckNodeSelectorLabels> labels() { DARABONBA_PTR_GET(labels_, vector<AckNodeSelectorLabels>) };
    inline AckNodeSelector& setLabels(const vector<AckNodeSelectorLabels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline AckNodeSelector& setLabels(vector<AckNodeSelectorLabels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // taints Field Functions 
    bool hasTaints() const { return this->taints_ != nullptr;};
    void deleteTaints() { this->taints_ = nullptr;};
    inline const vector<AckNodeSelectorTaints> & taints() const { DARABONBA_PTR_GET_CONST(taints_, vector<AckNodeSelectorTaints>) };
    inline vector<AckNodeSelectorTaints> taints() { DARABONBA_PTR_GET(taints_, vector<AckNodeSelectorTaints>) };
    inline AckNodeSelector& setTaints(const vector<AckNodeSelectorTaints> & taints) { DARABONBA_PTR_SET_VALUE(taints_, taints) };
    inline AckNodeSelector& setTaints(vector<AckNodeSelectorTaints> && taints) { DARABONBA_PTR_SET_RVALUE(taints_, taints) };


  protected:
    // 污点列表。
    std::shared_ptr<vector<AckNodeSelectorLabels>> labels_ = nullptr;
    // 污点列表。
    std::shared_ptr<vector<AckNodeSelectorTaints>> taints_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
