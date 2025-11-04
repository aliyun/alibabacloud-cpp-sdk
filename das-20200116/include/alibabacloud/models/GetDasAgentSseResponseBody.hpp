// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDASAGENTSSERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDASAGENTSSERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDasAgentSSEResponseBodyMetadata.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetDasAgentSSEResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDasAgentSSEResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Answer, answer_);
      DARABONBA_PTR_TO_JSON(Event, event_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Metadata, metadata_);
    };
    friend void from_json(const Darabonba::Json& j, GetDasAgentSSEResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Answer, answer_);
      DARABONBA_PTR_FROM_JSON(Event, event_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Metadata, metadata_);
    };
    GetDasAgentSSEResponseBody() = default ;
    GetDasAgentSSEResponseBody(const GetDasAgentSSEResponseBody &) = default ;
    GetDasAgentSSEResponseBody(GetDasAgentSSEResponseBody &&) = default ;
    GetDasAgentSSEResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDasAgentSSEResponseBody() = default ;
    GetDasAgentSSEResponseBody& operator=(const GetDasAgentSSEResponseBody &) = default ;
    GetDasAgentSSEResponseBody& operator=(GetDasAgentSSEResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->answer_ == nullptr
        && return this->event_ == nullptr && return this->id_ == nullptr && return this->metadata_ == nullptr; };
    // answer Field Functions 
    bool hasAnswer() const { return this->answer_ != nullptr;};
    void deleteAnswer() { this->answer_ = nullptr;};
    inline string answer() const { DARABONBA_PTR_GET_DEFAULT(answer_, "") };
    inline GetDasAgentSSEResponseBody& setAnswer(string answer) { DARABONBA_PTR_SET_VALUE(answer_, answer) };


    // event Field Functions 
    bool hasEvent() const { return this->event_ != nullptr;};
    void deleteEvent() { this->event_ = nullptr;};
    inline string event() const { DARABONBA_PTR_GET_DEFAULT(event_, "") };
    inline GetDasAgentSSEResponseBody& setEvent(string event) { DARABONBA_PTR_SET_VALUE(event_, event) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetDasAgentSSEResponseBody& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline const GetDasAgentSSEResponseBodyMetadata & metadata() const { DARABONBA_PTR_GET_CONST(metadata_, GetDasAgentSSEResponseBodyMetadata) };
    inline GetDasAgentSSEResponseBodyMetadata metadata() { DARABONBA_PTR_GET(metadata_, GetDasAgentSSEResponseBodyMetadata) };
    inline GetDasAgentSSEResponseBody& setMetadata(const GetDasAgentSSEResponseBodyMetadata & metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };
    inline GetDasAgentSSEResponseBody& setMetadata(GetDasAgentSSEResponseBodyMetadata && metadata) { DARABONBA_PTR_SET_RVALUE(metadata_, metadata) };


  protected:
    std::shared_ptr<string> answer_ = nullptr;
    std::shared_ptr<string> event_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<GetDasAgentSSEResponseBodyMetadata> metadata_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
