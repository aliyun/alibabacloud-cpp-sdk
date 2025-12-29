// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TOPICSELECTION_HPP_
#define ALIBABACLOUD_MODELS_TOPICSELECTION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Outlines : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Outlines& obj) { 
        DARABONBA_PTR_TO_JSON(Outline, outline_);
        DARABONBA_PTR_TO_JSON(Summary, summary_);
      };
      friend void from_json(const Darabonba::Json& j, Outlines& obj) { 
        DARABONBA_PTR_FROM_JSON(Outline, outline_);
        DARABONBA_PTR_FROM_JSON(Summary, summary_);
      };
      Outlines() = default ;
      Outlines(const Outlines &) = default ;
      Outlines(Outlines &&) = default ;
      Outlines(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Outlines() = default ;
      Outlines& operator=(const Outlines &) = default ;
      Outlines& operator=(Outlines &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->outline_ == nullptr
        && this->summary_ == nullptr; };
      // outline Field Functions 
      bool hasOutline() const { return this->outline_ != nullptr;};
      void deleteOutline() { this->outline_ = nullptr;};
      inline string getOutline() const { DARABONBA_PTR_GET_DEFAULT(outline_, "") };
      inline Outlines& setOutline(string outline) { DARABONBA_PTR_SET_VALUE(outline_, outline) };


      // summary Field Functions 
      bool hasSummary() const { return this->summary_ != nullptr;};
      void deleteSummary() { this->summary_ = nullptr;};
      inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
      inline Outlines& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    protected:
      shared_ptr<string> outline_ {};
      shared_ptr<string> summary_ {};
    };

    virtual bool empty() const override { return this->outlines_ == nullptr
        && this->point_ == nullptr && this->summary_ == nullptr; };
    // outlines Field Functions 
    bool hasOutlines() const { return this->outlines_ != nullptr;};
    void deleteOutlines() { this->outlines_ = nullptr;};
    inline const vector<TopicSelection::Outlines> & getOutlines() const { DARABONBA_PTR_GET_CONST(outlines_, vector<TopicSelection::Outlines>) };
    inline vector<TopicSelection::Outlines> getOutlines() { DARABONBA_PTR_GET(outlines_, vector<TopicSelection::Outlines>) };
    inline TopicSelection& setOutlines(const vector<TopicSelection::Outlines> & outlines) { DARABONBA_PTR_SET_VALUE(outlines_, outlines) };
    inline TopicSelection& setOutlines(vector<TopicSelection::Outlines> && outlines) { DARABONBA_PTR_SET_RVALUE(outlines_, outlines) };


    // point Field Functions 
    bool hasPoint() const { return this->point_ != nullptr;};
    void deletePoint() { this->point_ = nullptr;};
    inline string getPoint() const { DARABONBA_PTR_GET_DEFAULT(point_, "") };
    inline TopicSelection& setPoint(string point) { DARABONBA_PTR_SET_VALUE(point_, point) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline TopicSelection& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


  protected:
    shared_ptr<vector<TopicSelection::Outlines>> outlines_ {};
    shared_ptr<string> point_ {};
    shared_ptr<string> summary_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
