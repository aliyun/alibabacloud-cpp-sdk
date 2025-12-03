// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSEARCHREPOSITORYRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTSEARCHREPOSITORYRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListSearchRepositoryResponseBodyResultHighlightTextMap.hpp>
#include <alibabacloud/models/ListSearchRepositoryResponseBodyResultSource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListSearchRepositoryResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSearchRepositoryResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(docId, docId_);
      DARABONBA_PTR_TO_JSON(highlightTextMap, highlightTextMap_);
      DARABONBA_PTR_TO_JSON(source, source_);
    };
    friend void from_json(const Darabonba::Json& j, ListSearchRepositoryResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(docId, docId_);
      DARABONBA_PTR_FROM_JSON(highlightTextMap, highlightTextMap_);
      DARABONBA_PTR_FROM_JSON(source, source_);
    };
    ListSearchRepositoryResponseBodyResult() = default ;
    ListSearchRepositoryResponseBodyResult(const ListSearchRepositoryResponseBodyResult &) = default ;
    ListSearchRepositoryResponseBodyResult(ListSearchRepositoryResponseBodyResult &&) = default ;
    ListSearchRepositoryResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSearchRepositoryResponseBodyResult() = default ;
    ListSearchRepositoryResponseBodyResult& operator=(const ListSearchRepositoryResponseBodyResult &) = default ;
    ListSearchRepositoryResponseBodyResult& operator=(ListSearchRepositoryResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->docId_ == nullptr
        && return this->highlightTextMap_ == nullptr && return this->source_ == nullptr; };
    // docId Field Functions 
    bool hasDocId() const { return this->docId_ != nullptr;};
    void deleteDocId() { this->docId_ = nullptr;};
    inline string docId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
    inline ListSearchRepositoryResponseBodyResult& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


    // highlightTextMap Field Functions 
    bool hasHighlightTextMap() const { return this->highlightTextMap_ != nullptr;};
    void deleteHighlightTextMap() { this->highlightTextMap_ = nullptr;};
    inline const Models::ListSearchRepositoryResponseBodyResultHighlightTextMap & highlightTextMap() const { DARABONBA_PTR_GET_CONST(highlightTextMap_, Models::ListSearchRepositoryResponseBodyResultHighlightTextMap) };
    inline Models::ListSearchRepositoryResponseBodyResultHighlightTextMap highlightTextMap() { DARABONBA_PTR_GET(highlightTextMap_, Models::ListSearchRepositoryResponseBodyResultHighlightTextMap) };
    inline ListSearchRepositoryResponseBodyResult& setHighlightTextMap(const Models::ListSearchRepositoryResponseBodyResultHighlightTextMap & highlightTextMap) { DARABONBA_PTR_SET_VALUE(highlightTextMap_, highlightTextMap) };
    inline ListSearchRepositoryResponseBodyResult& setHighlightTextMap(Models::ListSearchRepositoryResponseBodyResultHighlightTextMap && highlightTextMap) { DARABONBA_PTR_SET_RVALUE(highlightTextMap_, highlightTextMap) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline const Models::ListSearchRepositoryResponseBodyResultSource & source() const { DARABONBA_PTR_GET_CONST(source_, Models::ListSearchRepositoryResponseBodyResultSource) };
    inline Models::ListSearchRepositoryResponseBodyResultSource source() { DARABONBA_PTR_GET(source_, Models::ListSearchRepositoryResponseBodyResultSource) };
    inline ListSearchRepositoryResponseBodyResult& setSource(const Models::ListSearchRepositoryResponseBodyResultSource & source) { DARABONBA_PTR_SET_VALUE(source_, source) };
    inline ListSearchRepositoryResponseBodyResult& setSource(Models::ListSearchRepositoryResponseBodyResultSource && source) { DARABONBA_PTR_SET_RVALUE(source_, source) };


  protected:
    std::shared_ptr<string> docId_ = nullptr;
    std::shared_ptr<Models::ListSearchRepositoryResponseBodyResultHighlightTextMap> highlightTextMap_ = nullptr;
    std::shared_ptr<Models::ListSearchRepositoryResponseBodyResultSource> source_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
