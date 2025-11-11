// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOTTOPICSRESPONSEBODYDATASTRUCTURESUMMARY_HPP_
#define ALIBABACLOUD_MODELS_LISTHOTTOPICSRESPONSEBODYDATASTRUCTURESUMMARY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListHotTopicsResponseBodyDataStructureSummaryDocList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ListHotTopicsResponseBodyDataStructureSummary : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHotTopicsResponseBodyDataStructureSummary& obj) { 
      DARABONBA_PTR_TO_JSON(DocList, docList_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, ListHotTopicsResponseBodyDataStructureSummary& obj) { 
      DARABONBA_PTR_FROM_JSON(DocList, docList_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    ListHotTopicsResponseBodyDataStructureSummary() = default ;
    ListHotTopicsResponseBodyDataStructureSummary(const ListHotTopicsResponseBodyDataStructureSummary &) = default ;
    ListHotTopicsResponseBodyDataStructureSummary(ListHotTopicsResponseBodyDataStructureSummary &&) = default ;
    ListHotTopicsResponseBodyDataStructureSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHotTopicsResponseBodyDataStructureSummary() = default ;
    ListHotTopicsResponseBodyDataStructureSummary& operator=(const ListHotTopicsResponseBodyDataStructureSummary &) = default ;
    ListHotTopicsResponseBodyDataStructureSummary& operator=(ListHotTopicsResponseBodyDataStructureSummary &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->docList_ == nullptr
        && return this->summary_ == nullptr && return this->title_ == nullptr; };
    // docList Field Functions 
    bool hasDocList() const { return this->docList_ != nullptr;};
    void deleteDocList() { this->docList_ = nullptr;};
    inline const vector<Models::ListHotTopicsResponseBodyDataStructureSummaryDocList> & docList() const { DARABONBA_PTR_GET_CONST(docList_, vector<Models::ListHotTopicsResponseBodyDataStructureSummaryDocList>) };
    inline vector<Models::ListHotTopicsResponseBodyDataStructureSummaryDocList> docList() { DARABONBA_PTR_GET(docList_, vector<Models::ListHotTopicsResponseBodyDataStructureSummaryDocList>) };
    inline ListHotTopicsResponseBodyDataStructureSummary& setDocList(const vector<Models::ListHotTopicsResponseBodyDataStructureSummaryDocList> & docList) { DARABONBA_PTR_SET_VALUE(docList_, docList) };
    inline ListHotTopicsResponseBodyDataStructureSummary& setDocList(vector<Models::ListHotTopicsResponseBodyDataStructureSummaryDocList> && docList) { DARABONBA_PTR_SET_RVALUE(docList_, docList) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string summary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline ListHotTopicsResponseBodyDataStructureSummary& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ListHotTopicsResponseBodyDataStructureSummary& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<vector<Models::ListHotTopicsResponseBodyDataStructureSummaryDocList>> docList_ = nullptr;
    std::shared_ptr<string> summary_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
