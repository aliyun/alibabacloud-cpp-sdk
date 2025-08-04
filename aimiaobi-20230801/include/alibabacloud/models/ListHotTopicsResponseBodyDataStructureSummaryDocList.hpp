// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOTTOPICSRESPONSEBODYDATASTRUCTURESUMMARYDOCLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTHOTTOPICSRESPONSEBODYDATASTRUCTURESUMMARYDOCLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ListHotTopicsResponseBodyDataStructureSummaryDocList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHotTopicsResponseBodyDataStructureSummaryDocList& obj) { 
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, ListHotTopicsResponseBodyDataStructureSummaryDocList& obj) { 
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    ListHotTopicsResponseBodyDataStructureSummaryDocList() = default ;
    ListHotTopicsResponseBodyDataStructureSummaryDocList(const ListHotTopicsResponseBodyDataStructureSummaryDocList &) = default ;
    ListHotTopicsResponseBodyDataStructureSummaryDocList(ListHotTopicsResponseBodyDataStructureSummaryDocList &&) = default ;
    ListHotTopicsResponseBodyDataStructureSummaryDocList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHotTopicsResponseBodyDataStructureSummaryDocList() = default ;
    ListHotTopicsResponseBodyDataStructureSummaryDocList& operator=(const ListHotTopicsResponseBodyDataStructureSummaryDocList &) = default ;
    ListHotTopicsResponseBodyDataStructureSummaryDocList& operator=(ListHotTopicsResponseBodyDataStructureSummaryDocList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->source_ != nullptr
        && this->title_ != nullptr && this->url_ != nullptr; };
    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ListHotTopicsResponseBodyDataStructureSummaryDocList& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ListHotTopicsResponseBodyDataStructureSummaryDocList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline ListHotTopicsResponseBodyDataStructureSummaryDocList& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
