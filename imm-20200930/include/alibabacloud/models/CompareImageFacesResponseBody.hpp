// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMPAREIMAGEFACESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_COMPAREIMAGEFACESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class CompareImageFacesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CompareImageFacesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Similarity, similarity_);
    };
    friend void from_json(const Darabonba::Json& j, CompareImageFacesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Similarity, similarity_);
    };
    CompareImageFacesResponseBody() = default ;
    CompareImageFacesResponseBody(const CompareImageFacesResponseBody &) = default ;
    CompareImageFacesResponseBody(CompareImageFacesResponseBody &&) = default ;
    CompareImageFacesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CompareImageFacesResponseBody() = default ;
    CompareImageFacesResponseBody& operator=(const CompareImageFacesResponseBody &) = default ;
    CompareImageFacesResponseBody& operator=(CompareImageFacesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->similarity_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CompareImageFacesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // similarity Field Functions 
    bool hasSimilarity() const { return this->similarity_ != nullptr;};
    void deleteSimilarity() { this->similarity_ = nullptr;};
    inline float similarity() const { DARABONBA_PTR_GET_DEFAULT(similarity_, 0.0) };
    inline CompareImageFacesResponseBody& setSimilarity(float similarity) { DARABONBA_PTR_SET_VALUE(similarity_, similarity) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The face similarity. A larger value indicates a higher face similarity. Valid values: 0 to 1.
    std::shared_ptr<float> similarity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
