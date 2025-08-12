// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PLAYCHOOSENSHOWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PLAYCHOOSENSHOWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class PlayChoosenShowResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PlayChoosenShowResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ShowId, showId_);
    };
    friend void from_json(const Darabonba::Json& j, PlayChoosenShowResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ShowId, showId_);
    };
    PlayChoosenShowResponseBody() = default ;
    PlayChoosenShowResponseBody(const PlayChoosenShowResponseBody &) = default ;
    PlayChoosenShowResponseBody(PlayChoosenShowResponseBody &&) = default ;
    PlayChoosenShowResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PlayChoosenShowResponseBody() = default ;
    PlayChoosenShowResponseBody& operator=(const PlayChoosenShowResponseBody &) = default ;
    PlayChoosenShowResponseBody& operator=(PlayChoosenShowResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->showId_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PlayChoosenShowResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // showId Field Functions 
    bool hasShowId() const { return this->showId_ != nullptr;};
    void deleteShowId() { this->showId_ = nullptr;};
    inline string showId() const { DARABONBA_PTR_GET_DEFAULT(showId_, "") };
    inline PlayChoosenShowResponseBody& setShowId(string showId) { DARABONBA_PTR_SET_VALUE(showId_, showId) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the episode.
    std::shared_ptr<string> showId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
