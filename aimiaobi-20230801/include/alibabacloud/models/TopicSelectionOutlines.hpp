// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TOPICSELECTIONOUTLINES_HPP_
#define ALIBABACLOUD_MODELS_TOPICSELECTIONOUTLINES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class TopicSelectionOutlines : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TopicSelectionOutlines& obj) { 
      DARABONBA_PTR_TO_JSON(Outline, outline_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
    };
    friend void from_json(const Darabonba::Json& j, TopicSelectionOutlines& obj) { 
      DARABONBA_PTR_FROM_JSON(Outline, outline_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
    };
    TopicSelectionOutlines() = default ;
    TopicSelectionOutlines(const TopicSelectionOutlines &) = default ;
    TopicSelectionOutlines(TopicSelectionOutlines &&) = default ;
    TopicSelectionOutlines(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TopicSelectionOutlines() = default ;
    TopicSelectionOutlines& operator=(const TopicSelectionOutlines &) = default ;
    TopicSelectionOutlines& operator=(TopicSelectionOutlines &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->outline_ != nullptr
        && this->summary_ != nullptr; };
    // outline Field Functions 
    bool hasOutline() const { return this->outline_ != nullptr;};
    void deleteOutline() { this->outline_ = nullptr;};
    inline string outline() const { DARABONBA_PTR_GET_DEFAULT(outline_, "") };
    inline TopicSelectionOutlines& setOutline(string outline) { DARABONBA_PTR_SET_VALUE(outline_, outline) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string summary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline TopicSelectionOutlines& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


  protected:
    std::shared_ptr<string> outline_ = nullptr;
    std::shared_ptr<string> summary_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
