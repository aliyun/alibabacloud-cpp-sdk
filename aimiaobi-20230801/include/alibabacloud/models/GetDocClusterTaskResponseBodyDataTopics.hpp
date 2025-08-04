// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCCLUSTERTASKRESPONSEBODYDATATOPICS_HPP_
#define ALIBABACLOUD_MODELS_GETDOCCLUSTERTASKRESPONSEBODYDATATOPICS_HPP_
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
  class GetDocClusterTaskResponseBodyDataTopics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDocClusterTaskResponseBodyDataTopics& obj) { 
      DARABONBA_PTR_TO_JSON(DocIds, docIds_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, GetDocClusterTaskResponseBodyDataTopics& obj) { 
      DARABONBA_PTR_FROM_JSON(DocIds, docIds_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    GetDocClusterTaskResponseBodyDataTopics() = default ;
    GetDocClusterTaskResponseBodyDataTopics(const GetDocClusterTaskResponseBodyDataTopics &) = default ;
    GetDocClusterTaskResponseBodyDataTopics(GetDocClusterTaskResponseBodyDataTopics &&) = default ;
    GetDocClusterTaskResponseBodyDataTopics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDocClusterTaskResponseBodyDataTopics() = default ;
    GetDocClusterTaskResponseBodyDataTopics& operator=(const GetDocClusterTaskResponseBodyDataTopics &) = default ;
    GetDocClusterTaskResponseBodyDataTopics& operator=(GetDocClusterTaskResponseBodyDataTopics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->docIds_ != nullptr
        && this->summary_ != nullptr && this->title_ != nullptr; };
    // docIds Field Functions 
    bool hasDocIds() const { return this->docIds_ != nullptr;};
    void deleteDocIds() { this->docIds_ = nullptr;};
    inline const vector<string> & docIds() const { DARABONBA_PTR_GET_CONST(docIds_, vector<string>) };
    inline vector<string> docIds() { DARABONBA_PTR_GET(docIds_, vector<string>) };
    inline GetDocClusterTaskResponseBodyDataTopics& setDocIds(const vector<string> & docIds) { DARABONBA_PTR_SET_VALUE(docIds_, docIds) };
    inline GetDocClusterTaskResponseBodyDataTopics& setDocIds(vector<string> && docIds) { DARABONBA_PTR_SET_RVALUE(docIds_, docIds) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string summary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline GetDocClusterTaskResponseBodyDataTopics& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetDocClusterTaskResponseBodyDataTopics& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<vector<string>> docIds_ = nullptr;
    std::shared_ptr<string> summary_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
