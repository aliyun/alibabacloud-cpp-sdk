// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSEARCHCOMMITRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTSEARCHCOMMITRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListSearchCommitResponseBodyResultHighlightTextMap.hpp>
#include <alibabacloud/models/ListSearchCommitResponseBodyResultSource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListSearchCommitResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSearchCommitResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(docId, docId_);
      DARABONBA_PTR_TO_JSON(highlightTextMap, highlightTextMap_);
      DARABONBA_PTR_TO_JSON(source, source_);
    };
    friend void from_json(const Darabonba::Json& j, ListSearchCommitResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(docId, docId_);
      DARABONBA_PTR_FROM_JSON(highlightTextMap, highlightTextMap_);
      DARABONBA_PTR_FROM_JSON(source, source_);
    };
    ListSearchCommitResponseBodyResult() = default ;
    ListSearchCommitResponseBodyResult(const ListSearchCommitResponseBodyResult &) = default ;
    ListSearchCommitResponseBodyResult(ListSearchCommitResponseBodyResult &&) = default ;
    ListSearchCommitResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSearchCommitResponseBodyResult() = default ;
    ListSearchCommitResponseBodyResult& operator=(const ListSearchCommitResponseBodyResult &) = default ;
    ListSearchCommitResponseBodyResult& operator=(ListSearchCommitResponseBodyResult &&) = default ;
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
    inline ListSearchCommitResponseBodyResult& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


    // highlightTextMap Field Functions 
    bool hasHighlightTextMap() const { return this->highlightTextMap_ != nullptr;};
    void deleteHighlightTextMap() { this->highlightTextMap_ = nullptr;};
    inline const Models::ListSearchCommitResponseBodyResultHighlightTextMap & highlightTextMap() const { DARABONBA_PTR_GET_CONST(highlightTextMap_, Models::ListSearchCommitResponseBodyResultHighlightTextMap) };
    inline Models::ListSearchCommitResponseBodyResultHighlightTextMap highlightTextMap() { DARABONBA_PTR_GET(highlightTextMap_, Models::ListSearchCommitResponseBodyResultHighlightTextMap) };
    inline ListSearchCommitResponseBodyResult& setHighlightTextMap(const Models::ListSearchCommitResponseBodyResultHighlightTextMap & highlightTextMap) { DARABONBA_PTR_SET_VALUE(highlightTextMap_, highlightTextMap) };
    inline ListSearchCommitResponseBodyResult& setHighlightTextMap(Models::ListSearchCommitResponseBodyResultHighlightTextMap && highlightTextMap) { DARABONBA_PTR_SET_RVALUE(highlightTextMap_, highlightTextMap) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline const Models::ListSearchCommitResponseBodyResultSource & source() const { DARABONBA_PTR_GET_CONST(source_, Models::ListSearchCommitResponseBodyResultSource) };
    inline Models::ListSearchCommitResponseBodyResultSource source() { DARABONBA_PTR_GET(source_, Models::ListSearchCommitResponseBodyResultSource) };
    inline ListSearchCommitResponseBodyResult& setSource(const Models::ListSearchCommitResponseBodyResultSource & source) { DARABONBA_PTR_SET_VALUE(source_, source) };
    inline ListSearchCommitResponseBodyResult& setSource(Models::ListSearchCommitResponseBodyResultSource && source) { DARABONBA_PTR_SET_RVALUE(source_, source) };


  protected:
    std::shared_ptr<string> docId_ = nullptr;
    std::shared_ptr<Models::ListSearchCommitResponseBodyResultHighlightTextMap> highlightTextMap_ = nullptr;
    std::shared_ptr<Models::ListSearchCommitResponseBodyResultSource> source_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
