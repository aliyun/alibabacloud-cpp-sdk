// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPAGEDOCUMENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPAGEDOCUMENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePageDocumentsResponseBodyDocs.hpp>
#include <alibabacloud/models/DescribePageDocumentsResponseBodyMore.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribePageDocumentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePageDocumentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Docs, docs_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(Module, module_);
      DARABONBA_PTR_TO_JSON(More, more_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePageDocumentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Docs, docs_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(Module, module_);
      DARABONBA_PTR_FROM_JSON(More, more_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePageDocumentsResponseBody() = default ;
    DescribePageDocumentsResponseBody(const DescribePageDocumentsResponseBody &) = default ;
    DescribePageDocumentsResponseBody(DescribePageDocumentsResponseBody &&) = default ;
    DescribePageDocumentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePageDocumentsResponseBody() = default ;
    DescribePageDocumentsResponseBody& operator=(const DescribePageDocumentsResponseBody &) = default ;
    DescribePageDocumentsResponseBody& operator=(DescribePageDocumentsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->docs_ == nullptr
        && return this->imageUrl_ == nullptr && return this->module_ == nullptr && return this->more_ == nullptr && return this->requestId_ == nullptr; };
    // docs Field Functions 
    bool hasDocs() const { return this->docs_ != nullptr;};
    void deleteDocs() { this->docs_ = nullptr;};
    inline const vector<DescribePageDocumentsResponseBodyDocs> & docs() const { DARABONBA_PTR_GET_CONST(docs_, vector<DescribePageDocumentsResponseBodyDocs>) };
    inline vector<DescribePageDocumentsResponseBodyDocs> docs() { DARABONBA_PTR_GET(docs_, vector<DescribePageDocumentsResponseBodyDocs>) };
    inline DescribePageDocumentsResponseBody& setDocs(const vector<DescribePageDocumentsResponseBodyDocs> & docs) { DARABONBA_PTR_SET_VALUE(docs_, docs) };
    inline DescribePageDocumentsResponseBody& setDocs(vector<DescribePageDocumentsResponseBodyDocs> && docs) { DARABONBA_PTR_SET_RVALUE(docs_, docs) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string imageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline DescribePageDocumentsResponseBody& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline string module() const { DARABONBA_PTR_GET_DEFAULT(module_, "") };
    inline DescribePageDocumentsResponseBody& setModule(string module) { DARABONBA_PTR_SET_VALUE(module_, module) };


    // more Field Functions 
    bool hasMore() const { return this->more_ != nullptr;};
    void deleteMore() { this->more_ = nullptr;};
    inline const DescribePageDocumentsResponseBodyMore & more() const { DARABONBA_PTR_GET_CONST(more_, DescribePageDocumentsResponseBodyMore) };
    inline DescribePageDocumentsResponseBodyMore more() { DARABONBA_PTR_GET(more_, DescribePageDocumentsResponseBodyMore) };
    inline DescribePageDocumentsResponseBody& setMore(const DescribePageDocumentsResponseBodyMore & more) { DARABONBA_PTR_SET_VALUE(more_, more) };
    inline DescribePageDocumentsResponseBody& setMore(DescribePageDocumentsResponseBodyMore && more) { DARABONBA_PTR_SET_RVALUE(more_, more) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePageDocumentsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribePageDocumentsResponseBodyDocs>> docs_ = nullptr;
    std::shared_ptr<string> imageUrl_ = nullptr;
    std::shared_ptr<string> module_ = nullptr;
    std::shared_ptr<DescribePageDocumentsResponseBodyMore> more_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
