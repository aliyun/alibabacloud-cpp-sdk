// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSEARCHSOURCECODERESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTSEARCHSOURCECODERESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListSearchSourceCodeResponseBodyResultHighlightTextMap.hpp>
#include <alibabacloud/models/ListSearchSourceCodeResponseBodyResultSource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListSearchSourceCodeResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSearchSourceCodeResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(docId, docId_);
      DARABONBA_PTR_TO_JSON(highlightTextMap, highlightTextMap_);
      DARABONBA_PTR_TO_JSON(source, source_);
    };
    friend void from_json(const Darabonba::Json& j, ListSearchSourceCodeResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(docId, docId_);
      DARABONBA_PTR_FROM_JSON(highlightTextMap, highlightTextMap_);
      DARABONBA_PTR_FROM_JSON(source, source_);
    };
    ListSearchSourceCodeResponseBodyResult() = default ;
    ListSearchSourceCodeResponseBodyResult(const ListSearchSourceCodeResponseBodyResult &) = default ;
    ListSearchSourceCodeResponseBodyResult(ListSearchSourceCodeResponseBodyResult &&) = default ;
    ListSearchSourceCodeResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSearchSourceCodeResponseBodyResult() = default ;
    ListSearchSourceCodeResponseBodyResult& operator=(const ListSearchSourceCodeResponseBodyResult &) = default ;
    ListSearchSourceCodeResponseBodyResult& operator=(ListSearchSourceCodeResponseBodyResult &&) = default ;
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
    inline ListSearchSourceCodeResponseBodyResult& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


    // highlightTextMap Field Functions 
    bool hasHighlightTextMap() const { return this->highlightTextMap_ != nullptr;};
    void deleteHighlightTextMap() { this->highlightTextMap_ = nullptr;};
    inline const Models::ListSearchSourceCodeResponseBodyResultHighlightTextMap & highlightTextMap() const { DARABONBA_PTR_GET_CONST(highlightTextMap_, Models::ListSearchSourceCodeResponseBodyResultHighlightTextMap) };
    inline Models::ListSearchSourceCodeResponseBodyResultHighlightTextMap highlightTextMap() { DARABONBA_PTR_GET(highlightTextMap_, Models::ListSearchSourceCodeResponseBodyResultHighlightTextMap) };
    inline ListSearchSourceCodeResponseBodyResult& setHighlightTextMap(const Models::ListSearchSourceCodeResponseBodyResultHighlightTextMap & highlightTextMap) { DARABONBA_PTR_SET_VALUE(highlightTextMap_, highlightTextMap) };
    inline ListSearchSourceCodeResponseBodyResult& setHighlightTextMap(Models::ListSearchSourceCodeResponseBodyResultHighlightTextMap && highlightTextMap) { DARABONBA_PTR_SET_RVALUE(highlightTextMap_, highlightTextMap) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline const Models::ListSearchSourceCodeResponseBodyResultSource & source() const { DARABONBA_PTR_GET_CONST(source_, Models::ListSearchSourceCodeResponseBodyResultSource) };
    inline Models::ListSearchSourceCodeResponseBodyResultSource source() { DARABONBA_PTR_GET(source_, Models::ListSearchSourceCodeResponseBodyResultSource) };
    inline ListSearchSourceCodeResponseBodyResult& setSource(const Models::ListSearchSourceCodeResponseBodyResultSource & source) { DARABONBA_PTR_SET_VALUE(source_, source) };
    inline ListSearchSourceCodeResponseBodyResult& setSource(Models::ListSearchSourceCodeResponseBodyResultSource && source) { DARABONBA_PTR_SET_RVALUE(source_, source) };


  protected:
    std::shared_ptr<string> docId_ = nullptr;
    std::shared_ptr<Models::ListSearchSourceCodeResponseBodyResultHighlightTextMap> highlightTextMap_ = nullptr;
    std::shared_ptr<Models::ListSearchSourceCodeResponseBodyResultSource> source_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
