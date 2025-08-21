// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMPONENTINDICESRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMPONENTINDICESRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListComponentIndicesResponseBodyResultContent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListComponentIndicesResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListComponentIndicesResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(composed, composed_);
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ListComponentIndicesResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(composed, composed_);
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    ListComponentIndicesResponseBodyResult() = default ;
    ListComponentIndicesResponseBodyResult(const ListComponentIndicesResponseBodyResult &) = default ;
    ListComponentIndicesResponseBodyResult(ListComponentIndicesResponseBodyResult &&) = default ;
    ListComponentIndicesResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListComponentIndicesResponseBodyResult() = default ;
    ListComponentIndicesResponseBodyResult& operator=(const ListComponentIndicesResponseBodyResult &) = default ;
    ListComponentIndicesResponseBodyResult& operator=(ListComponentIndicesResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->composed_ != nullptr
        && this->content_ != nullptr && this->name_ != nullptr; };
    // composed Field Functions 
    bool hasComposed() const { return this->composed_ != nullptr;};
    void deleteComposed() { this->composed_ = nullptr;};
    inline const vector<string> & composed() const { DARABONBA_PTR_GET_CONST(composed_, vector<string>) };
    inline vector<string> composed() { DARABONBA_PTR_GET(composed_, vector<string>) };
    inline ListComponentIndicesResponseBodyResult& setComposed(const vector<string> & composed) { DARABONBA_PTR_SET_VALUE(composed_, composed) };
    inline ListComponentIndicesResponseBodyResult& setComposed(vector<string> && composed) { DARABONBA_PTR_SET_RVALUE(composed_, composed) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const Models::ListComponentIndicesResponseBodyResultContent & content() const { DARABONBA_PTR_GET_CONST(content_, Models::ListComponentIndicesResponseBodyResultContent) };
    inline Models::ListComponentIndicesResponseBodyResultContent content() { DARABONBA_PTR_GET(content_, Models::ListComponentIndicesResponseBodyResultContent) };
    inline ListComponentIndicesResponseBodyResult& setContent(const Models::ListComponentIndicesResponseBodyResultContent & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline ListComponentIndicesResponseBodyResult& setContent(Models::ListComponentIndicesResponseBodyResultContent && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListComponentIndicesResponseBodyResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<vector<string>> composed_ = nullptr;
    std::shared_ptr<Models::ListComponentIndicesResponseBodyResultContent> content_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
