// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVESHOWFROMSHOWLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REMOVESHOWFROMSHOWLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class RemoveShowFromShowListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveShowFromShowListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ShowId, showId_);
      DARABONBA_PTR_TO_JSON(failedList, failedList_);
      DARABONBA_PTR_TO_JSON(successfulShowIds, successfulShowIds_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveShowFromShowListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ShowId, showId_);
      DARABONBA_PTR_FROM_JSON(failedList, failedList_);
      DARABONBA_PTR_FROM_JSON(successfulShowIds, successfulShowIds_);
    };
    RemoveShowFromShowListResponseBody() = default ;
    RemoveShowFromShowListResponseBody(const RemoveShowFromShowListResponseBody &) = default ;
    RemoveShowFromShowListResponseBody(RemoveShowFromShowListResponseBody &&) = default ;
    RemoveShowFromShowListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveShowFromShowListResponseBody() = default ;
    RemoveShowFromShowListResponseBody& operator=(const RemoveShowFromShowListResponseBody &) = default ;
    RemoveShowFromShowListResponseBody& operator=(RemoveShowFromShowListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->showId_ == nullptr && this->failedList_ == nullptr && this->successfulShowIds_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RemoveShowFromShowListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // showId Field Functions 
    bool hasShowId() const { return this->showId_ != nullptr;};
    void deleteShowId() { this->showId_ = nullptr;};
    inline string getShowId() const { DARABONBA_PTR_GET_DEFAULT(showId_, "") };
    inline RemoveShowFromShowListResponseBody& setShowId(string showId) { DARABONBA_PTR_SET_VALUE(showId_, showId) };


    // failedList Field Functions 
    bool hasFailedList() const { return this->failedList_ != nullptr;};
    void deleteFailedList() { this->failedList_ = nullptr;};
    inline string getFailedList() const { DARABONBA_PTR_GET_DEFAULT(failedList_, "") };
    inline RemoveShowFromShowListResponseBody& setFailedList(string failedList) { DARABONBA_PTR_SET_VALUE(failedList_, failedList) };


    // successfulShowIds Field Functions 
    bool hasSuccessfulShowIds() const { return this->successfulShowIds_ != nullptr;};
    void deleteSuccessfulShowIds() { this->successfulShowIds_ = nullptr;};
    inline string getSuccessfulShowIds() const { DARABONBA_PTR_GET_DEFAULT(successfulShowIds_, "") };
    inline RemoveShowFromShowListResponseBody& setSuccessfulShowIds(string successfulShowIds) { DARABONBA_PTR_SET_VALUE(successfulShowIds_, successfulShowIds) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The ID of the episode.
    shared_ptr<string> showId_ {};
    // The IDs of episodes that failed to be removed and the relevant failure information.
    shared_ptr<string> failedList_ {};
    // The IDs of episodes that were removed.
    shared_ptr<string> successfulShowIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
