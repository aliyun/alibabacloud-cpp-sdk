// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LIBRARYREVIEWCREATECMD_HPP_
#define ALIBABACLOUD_MODELS_LIBRARYREVIEWCREATECMD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class LibraryReviewCreateCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LibraryReviewCreateCmd& obj) { 
      DARABONBA_PTR_TO_JSON(libraryId, libraryId_);
      DARABONBA_PTR_TO_JSON(libraryUrl, libraryUrl_);
      DARABONBA_PTR_TO_JSON(marketId, marketId_);
      DARABONBA_PTR_TO_JSON(reviewerId, reviewerId_);
    };
    friend void from_json(const Darabonba::Json& j, LibraryReviewCreateCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(libraryId, libraryId_);
      DARABONBA_PTR_FROM_JSON(libraryUrl, libraryUrl_);
      DARABONBA_PTR_FROM_JSON(marketId, marketId_);
      DARABONBA_PTR_FROM_JSON(reviewerId, reviewerId_);
    };
    LibraryReviewCreateCmd() = default ;
    LibraryReviewCreateCmd(const LibraryReviewCreateCmd &) = default ;
    LibraryReviewCreateCmd(LibraryReviewCreateCmd &&) = default ;
    LibraryReviewCreateCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LibraryReviewCreateCmd() = default ;
    LibraryReviewCreateCmd& operator=(const LibraryReviewCreateCmd &) = default ;
    LibraryReviewCreateCmd& operator=(LibraryReviewCreateCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->libraryId_ == nullptr
        && this->libraryUrl_ == nullptr && this->marketId_ == nullptr && this->reviewerId_ == nullptr; };
    // libraryId Field Functions 
    bool hasLibraryId() const { return this->libraryId_ != nullptr;};
    void deleteLibraryId() { this->libraryId_ = nullptr;};
    inline int64_t getLibraryId() const { DARABONBA_PTR_GET_DEFAULT(libraryId_, 0L) };
    inline LibraryReviewCreateCmd& setLibraryId(int64_t libraryId) { DARABONBA_PTR_SET_VALUE(libraryId_, libraryId) };


    // libraryUrl Field Functions 
    bool hasLibraryUrl() const { return this->libraryUrl_ != nullptr;};
    void deleteLibraryUrl() { this->libraryUrl_ = nullptr;};
    inline string getLibraryUrl() const { DARABONBA_PTR_GET_DEFAULT(libraryUrl_, "") };
    inline LibraryReviewCreateCmd& setLibraryUrl(string libraryUrl) { DARABONBA_PTR_SET_VALUE(libraryUrl_, libraryUrl) };


    // marketId Field Functions 
    bool hasMarketId() const { return this->marketId_ != nullptr;};
    void deleteMarketId() { this->marketId_ = nullptr;};
    inline int64_t getMarketId() const { DARABONBA_PTR_GET_DEFAULT(marketId_, 0L) };
    inline LibraryReviewCreateCmd& setMarketId(int64_t marketId) { DARABONBA_PTR_SET_VALUE(marketId_, marketId) };


    // reviewerId Field Functions 
    bool hasReviewerId() const { return this->reviewerId_ != nullptr;};
    void deleteReviewerId() { this->reviewerId_ = nullptr;};
    inline string getReviewerId() const { DARABONBA_PTR_GET_DEFAULT(reviewerId_, "") };
    inline LibraryReviewCreateCmd& setReviewerId(string reviewerId) { DARABONBA_PTR_SET_VALUE(reviewerId_, reviewerId) };


  protected:
    shared_ptr<int64_t> libraryId_ {};
    shared_ptr<string> libraryUrl_ {};
    shared_ptr<int64_t> marketId_ {};
    shared_ptr<string> reviewerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
