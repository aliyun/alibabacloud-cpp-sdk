// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNDEEPWRITINGRESPONSEBODYPAYLOADOUTPUTRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_RUNDEEPWRITINGRESPONSEBODYPAYLOADOUTPUTRESPONSE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunDeepWritingResponseBodyPayloadOutputResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunDeepWritingResponseBodyPayloadOutputResponse& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, RunDeepWritingResponseBodyPayloadOutputResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    RunDeepWritingResponseBodyPayloadOutputResponse() = default ;
    RunDeepWritingResponseBodyPayloadOutputResponse(const RunDeepWritingResponseBodyPayloadOutputResponse &) = default ;
    RunDeepWritingResponseBodyPayloadOutputResponse(RunDeepWritingResponseBodyPayloadOutputResponse &&) = default ;
    RunDeepWritingResponseBodyPayloadOutputResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunDeepWritingResponseBodyPayloadOutputResponse() = default ;
    RunDeepWritingResponseBodyPayloadOutputResponse& operator=(const RunDeepWritingResponseBodyPayloadOutputResponse &) = default ;
    RunDeepWritingResponseBodyPayloadOutputResponse& operator=(RunDeepWritingResponseBodyPayloadOutputResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->status_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline RunDeepWritingResponseBodyPayloadOutputResponse& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline RunDeepWritingResponseBodyPayloadOutputResponse& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
