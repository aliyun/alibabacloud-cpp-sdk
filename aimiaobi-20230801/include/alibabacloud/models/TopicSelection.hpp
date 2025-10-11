// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TOPICSELECTION_HPP_
#define ALIBABACLOUD_MODELS_TOPICSELECTION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TopicSelectionOutlines.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class TopicSelection : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TopicSelection& obj) { 
      DARABONBA_PTR_TO_JSON(Outlines, outlines_);
      DARABONBA_PTR_TO_JSON(Point, point_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
    };
    friend void from_json(const Darabonba::Json& j, TopicSelection& obj) { 
      DARABONBA_PTR_FROM_JSON(Outlines, outlines_);
      DARABONBA_PTR_FROM_JSON(Point, point_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
    };
    TopicSelection() = default ;
    TopicSelection(const TopicSelection &) = default ;
    TopicSelection(TopicSelection &&) = default ;
    TopicSelection(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TopicSelection() = default ;
    TopicSelection& operator=(const TopicSelection &) = default ;
    TopicSelection& operator=(TopicSelection &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->outlines_ != nullptr
        && this->point_ != nullptr && this->summary_ != nullptr; };
    // outlines Field Functions 
    bool hasOutlines() const { return this->outlines_ != nullptr;};
    void deleteOutlines() { this->outlines_ = nullptr;};
    inline const vector<TopicSelectionOutlines> & outlines() const { DARABONBA_PTR_GET_CONST(outlines_, vector<TopicSelectionOutlines>) };
    inline vector<TopicSelectionOutlines> outlines() { DARABONBA_PTR_GET(outlines_, vector<TopicSelectionOutlines>) };
    inline TopicSelection& setOutlines(const vector<TopicSelectionOutlines> & outlines) { DARABONBA_PTR_SET_VALUE(outlines_, outlines) };
    inline TopicSelection& setOutlines(vector<TopicSelectionOutlines> && outlines) { DARABONBA_PTR_SET_RVALUE(outlines_, outlines) };


    // point Field Functions 
    bool hasPoint() const { return this->point_ != nullptr;};
    void deletePoint() { this->point_ = nullptr;};
    inline string point() const { DARABONBA_PTR_GET_DEFAULT(point_, "") };
    inline TopicSelection& setPoint(string point) { DARABONBA_PTR_SET_VALUE(point_, point) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string summary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline TopicSelection& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


  protected:
    std::shared_ptr<vector<TopicSelectionOutlines>> outlines_ = nullptr;
    std::shared_ptr<string> point_ = nullptr;
    std::shared_ptr<string> summary_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
