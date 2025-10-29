// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDSHOWINTOSHOWLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDSHOWINTOSHOWLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class AddShowIntoShowListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddShowIntoShowListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ShowId, showId_);
      DARABONBA_PTR_TO_JSON(failedList, failedList_);
      DARABONBA_PTR_TO_JSON(successfulShowIds, successfulShowIds_);
    };
    friend void from_json(const Darabonba::Json& j, AddShowIntoShowListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ShowId, showId_);
      DARABONBA_PTR_FROM_JSON(failedList, failedList_);
      DARABONBA_PTR_FROM_JSON(successfulShowIds, successfulShowIds_);
    };
    AddShowIntoShowListResponseBody() = default ;
    AddShowIntoShowListResponseBody(const AddShowIntoShowListResponseBody &) = default ;
    AddShowIntoShowListResponseBody(AddShowIntoShowListResponseBody &&) = default ;
    AddShowIntoShowListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddShowIntoShowListResponseBody() = default ;
    AddShowIntoShowListResponseBody& operator=(const AddShowIntoShowListResponseBody &) = default ;
    AddShowIntoShowListResponseBody& operator=(AddShowIntoShowListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->showId_ == nullptr && return this->failedList_ == nullptr && return this->successfulShowIds_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddShowIntoShowListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // showId Field Functions 
    bool hasShowId() const { return this->showId_ != nullptr;};
    void deleteShowId() { this->showId_ = nullptr;};
    inline string showId() const { DARABONBA_PTR_GET_DEFAULT(showId_, "") };
    inline AddShowIntoShowListResponseBody& setShowId(string showId) { DARABONBA_PTR_SET_VALUE(showId_, showId) };


    // failedList Field Functions 
    bool hasFailedList() const { return this->failedList_ != nullptr;};
    void deleteFailedList() { this->failedList_ = nullptr;};
    inline string failedList() const { DARABONBA_PTR_GET_DEFAULT(failedList_, "") };
    inline AddShowIntoShowListResponseBody& setFailedList(string failedList) { DARABONBA_PTR_SET_VALUE(failedList_, failedList) };


    // successfulShowIds Field Functions 
    bool hasSuccessfulShowIds() const { return this->successfulShowIds_ != nullptr;};
    void deleteSuccessfulShowIds() { this->successfulShowIds_ = nullptr;};
    inline string successfulShowIds() const { DARABONBA_PTR_GET_DEFAULT(successfulShowIds_, "") };
    inline AddShowIntoShowListResponseBody& setSuccessfulShowIds(string successfulShowIds) { DARABONBA_PTR_SET_VALUE(successfulShowIds_, successfulShowIds) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the episode.
    std::shared_ptr<string> showId_ = nullptr;
    // The list of resources that failed to be added and the reason for failure.
    std::shared_ptr<string> failedList_ = nullptr;
    // The IDs of the episodes that were added.
    std::shared_ptr<string> successfulShowIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
