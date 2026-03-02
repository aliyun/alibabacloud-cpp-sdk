// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LIBRARYREVIEWLISTRESULT_HPP_
#define ALIBABACLOUD_MODELS_LIBRARYREVIEWLISTRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/LibraryReview.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class LibraryReviewListResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LibraryReviewListResult& obj) { 
      DARABONBA_PTR_TO_JSON(libraryReviews, libraryReviews_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, LibraryReviewListResult& obj) { 
      DARABONBA_PTR_FROM_JSON(libraryReviews, libraryReviews_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    LibraryReviewListResult() = default ;
    LibraryReviewListResult(const LibraryReviewListResult &) = default ;
    LibraryReviewListResult(LibraryReviewListResult &&) = default ;
    LibraryReviewListResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LibraryReviewListResult() = default ;
    LibraryReviewListResult& operator=(const LibraryReviewListResult &) = default ;
    LibraryReviewListResult& operator=(LibraryReviewListResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->libraryReviews_ == nullptr
        && this->requestId_ == nullptr; };
    // libraryReviews Field Functions 
    bool hasLibraryReviews() const { return this->libraryReviews_ != nullptr;};
    void deleteLibraryReviews() { this->libraryReviews_ = nullptr;};
    inline const vector<LibraryReview> & getLibraryReviews() const { DARABONBA_PTR_GET_CONST(libraryReviews_, vector<LibraryReview>) };
    inline vector<LibraryReview> getLibraryReviews() { DARABONBA_PTR_GET(libraryReviews_, vector<LibraryReview>) };
    inline LibraryReviewListResult& setLibraryReviews(const vector<LibraryReview> & libraryReviews) { DARABONBA_PTR_SET_VALUE(libraryReviews_, libraryReviews) };
    inline LibraryReviewListResult& setLibraryReviews(vector<LibraryReview> && libraryReviews) { DARABONBA_PTR_SET_RVALUE(libraryReviews_, libraryReviews) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline LibraryReviewListResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<LibraryReview>> libraryReviews_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
